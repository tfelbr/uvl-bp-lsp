use log::info;
use std::time::SystemTime;
use tokio::time::Instant;
use tower_lsp::lsp_types::*;
use tree_sitter::{InputEdit, Tree};

//The parsing frontend
//To allow for more nimble and robust parsing, we use 2 stage process to parse 2 diffrent syntax
//trees with diffrent grammers:
// - Source code is initally parsed with a very relaxed UVL tree-sitter grammer. This results in
//   loose syntax tree of UVL codefragments. We call this tree the 'green tree'
//   it's used for all syntax analysis. Its allso very cheap to parse and incremental so it can be
//   parsed on every keystroke for syntax highlighting and completion context information.
//   Furthermore tree-sitter internal error recovery and temporal parsing provide
//   good error corrections in many cases so parsing alomost never fails.
// - The green tree is translated into the red tree asynchronously. This second tree follows the UVL
//   grammar spec and is used for all semantic analysis. During the translation
//   from green to red tree very specific syntax errors are possible and forwared to the user.
//   All red trees are lated linked into a single model (the Root Graph) asynchonously.
use ropey::Rope;

//update the document text using text deltas form the editor
pub fn update_text(
    source: &mut Rope,
    tree: Option<&mut Tree>,
    changes: DidChangeTextDocumentParams,
) -> bool {
    let mut whole_file = false;
    for e in changes.content_changes.iter() {
        if let Some(range) = e.range {
            info!("apply change");
            let start_line = range.start.line as usize;
            let end_line = range.end.line as usize;

            let start_col = range.start.character as usize;
            let end_col = range.end.character as usize;

            let start_col8 = source.line(start_line).utf16_cu_to_char(start_col);
            let end_col8 = if end_line < source.len_lines() {
                source.line(end_line).utf16_cu_to_char(end_col)
            } else {
                0
            };

            let start_char = source.line_to_char(start_line) + start_col8;
            let end_char = if end_line < source.len_lines() {
                source.line_to_char(end_line) + end_col8
            } else {
                source.len_chars()
            };

            let start_byte = source.char_to_byte(start_char);
            let end_byte = source.char_to_byte(end_char);
            let start_col_byte = start_byte - source.line_to_byte(start_line);
            let end_col_byte = end_byte - source.line_to_byte(end_line);
            source.remove(start_char..end_char);
            source.insert(start_char, &e.text);
            let new_end_line = source.byte_to_line(start_byte + e.text.len());
            let new_end_col_byte = (start_byte + e.text.len()) - source.line_to_byte(new_end_line);
            if let Some(&mut ref mut tree) = tree {
                tree.edit(&InputEdit {
                    start_byte,
                    old_end_byte: end_byte,
                    new_end_byte: start_byte + e.text.len(),
                    start_position: tree_sitter::Point {
                        row: start_line,
                        column: start_col_byte,
                    },
                    old_end_position: tree_sitter::Point {
                        row: end_line,
                        column: end_col_byte,
                    },
                    new_end_position: tree_sitter::Point {
                        row: new_end_line,
                        column: new_end_col_byte,
                    },
                });
            }
        } else {
            whole_file = true;
            *source = Rope::from_str(&e.text);
        }
    }
    whole_file
}

#[derive(Debug, Clone)]
pub enum Draft {
    UVL {
        source: Rope,
        tree: Tree,
        timestamp: Instant,
    },
    JSON {
        source: Rope,
        tree: Tree,
        timestamp: Instant,
    },
}
impl Draft {
    pub fn timestamp(&self) -> Instant {
        match self {
            Self::UVL { timestamp, .. } | Self::JSON { timestamp, .. } => *timestamp,
        }
    }
    pub fn source(&self) -> &Rope {
        match self {
            Self::UVL { source, .. } | Self::JSON { source, .. } => source,
        }
    }
}
//A document can be owned by the operating system or opened in the editor
#[derive(Clone, PartialEq, Eq, Copy, Debug)]
pub enum DocumentState {
    OwnedByOs(SystemTime),
    OwnedByEditor,
}
impl DocumentState {
    pub fn can_update(&self, other: &DocumentState) -> bool {
        match (self, other) {
            (DocumentState::OwnedByOs(t1), DocumentState::OwnedByOs(t2)) => t2 > t1,
            (DocumentState::OwnedByEditor, DocumentState::OwnedByEditor) => true,
            (DocumentState::OwnedByOs(_), DocumentState::OwnedByEditor) => true,
            (DocumentState::OwnedByEditor, DocumentState::OwnedByOs(_)) => false,
        }
    }
}
