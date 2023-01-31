use crate::ast::*;
use crate::completion::*;
use crate::document::Draft;
use crate::parse::*;
use crate::semantic::*;
use crate::util::*;
use log::info;
use ropey::Rope;
use tower_lsp::lsp_types::*;
use tree_sitter::{Node, Tree};

#[derive(Clone, Debug, PartialEq, Eq)]
pub enum TextObjectKind {
    Attribute,
    Feature,
    AttributeReference,
    FeatureReference,
    ImportPath,
    ImportAlias,
    Aggregate(Option<Path>),
}

#[derive(Clone, Debug)]
pub struct TextObject {
    path: Path,
    kind: TextObjectKind,
    selected_segment: usize,
}
pub fn attribute_prefix(node: Node, source: &Rope) -> Option<Path> {
    match node.kind() {
        "attribute_value" => {
            let name = parse_name(node.child_by_field_name("name")?, source)?;
            Some(attribute_prefix(node.parent()?, source)?.append(&name))
        }
        "blk" => {
            let header = node.child_by_field_name("header")?;
            match header.kind() {
                "name" => parse_path(header, source),
                _ => None,
            }
        }
        "attributes" => attribute_prefix(node.parent()?, source),
        _ => None,
    }
}

pub fn find_text_object_impl(
    node: Node,
    source: &Rope,
    pos: &Position,
    offset: usize,
) -> Option<TextObject> {
    match find_section(node) {
        Section::Imports => {
            let (path, p_node) = longest_path(node, source)?;
            match p_node.kind() {
                "name" => Some(TextObject {
                    kind: TextObjectKind::ImportAlias,
                    selected_segment: path.segment(offset),
                    path,
                }),
                "path" => Some(TextObject {
                    kind: TextObjectKind::ImportPath,
                    selected_segment: path.segment(offset),
                    path,
                }),
                _ => None,
            }
        }
        Section::Features => {
            let (path, p_node) = longest_path(node, source)?;
            match p_node.kind() {
                "name" => Some(TextObject {
                    kind: TextObjectKind::Feature,
                    selected_segment: 0,
                    path,
                }),
                "path" => Some(TextObject {
                    kind: TextObjectKind::FeatureReference,
                    selected_segment: path.segment(offset),
                    path,
                }),
                _ => None,
            }
        }
        Section::Attribute => match node.kind() {
            "name" => {
                let path = attribute_prefix(node.parent().unwrap(), source)?;
                Some(TextObject {
                    kind: TextObjectKind::Attribute,
                    selected_segment: path.len() - 1,
                    path,
                })
            }
            _ => None,
        },
        Section::Constraints => {
            let (path, p_node) = longest_path(node, source)?;
            match estimate_expr(p_node, pos, source) {
                CompletionEnv::Numeric => Some(TextObject {
                    kind: TextObjectKind::AttributeReference,
                    selected_segment: path.segment(offset),
                    path,
                }),
                CompletionEnv::Feature => Some(TextObject {
                    kind: TextObjectKind::FeatureReference,
                    selected_segment: path.segment(offset),
                    path,
                }),
                CompletionEnv::Aggregate { context } => Some(TextObject {
                    kind: TextObjectKind::Aggregate(context),
                    selected_segment: path.segment(offset),
                    path,
                }),
                _ => None,
            }
        }
        _ => None,
    }
}
pub fn find_text_object(draft: &Draft, pos: &Position) -> Option<TextObject> {
    match draft {
        Draft::Source { source, .. } => {
            //TODO
            None
        }
        Draft::Tree { source, tree, .. } => {
            let start = char_offset(pos, source);
            let end = start + 1;
            find_text_object_impl(
                tree.root_node().named_descendant_for_byte_range(
                    source.try_char_to_byte(start).ok()?,
                    source.try_char_to_byte(end).ok()?,
                )?,
                source,
                pos,
                source.try_char_to_byte(start).ok()?,
            )
        }
        _ => None,
    }
}

fn find_definitions(
    root: &RootGraph,
    draft: &Draft,
    pos: &Position,
    uri: &Url,
) -> Option<Vec<RootSymbol>> {
    let file = root.files.get(&uri.as_str().into())?;
    let obj = find_text_object(draft, pos)?;
    match obj.kind {
        TextObjectKind::ImportPath => {
            for i in root.resolve(file.name, &obj.path.names) {
                if matches!(i.sym, Symbol::Root) {
                    return Some(vec![i]);
                }
            }
            None
        }
        TextObjectKind::FeatureReference | TextObjectKind::AttributeReference => {
            for bind in root.resolve_with_binding(file.name, &obj.path.names) {
                let last = bind.last().unwrap().0.clone();
                let dst_file = &root.files[&last.file];
                if dst_file
                    .type_of(last.sym)
                    .map(|ty| {
                        if obj.kind == TextObjectKind::FeatureReference {
                            ty == Type::Feature
                        } else {
                            ty == Type::Number
                        }
                    })
                    .unwrap_or(false)
                {
                    return Some(vec![bind
                        .iter()
                        .find_map(|(sym, index)| {
                            if obj.selected_segment < *index {
                                Some(sym.clone())
                            } else {
                                None
                            }
                        })
                        .unwrap_or(last)]);
                }
            }
            None
        }
        TextObjectKind::Aggregate(ctx) => {
            let mut out = Vec::new();
            root.resolve_attributes(
                file.name,
                &ctx.as_ref().map(|ctx| ctx.names.as_slice()).unwrap_or(&[]),
                |sym, prefix| {
                    let common = prefix
                        .iter()
                        .zip(obj.path.names.iter())
                        .take_while(|(i, k)| i == k)
                        .count();
                    if common == obj.path.len() {
                        out.push(sym);
                    }
                },
            );
            Some(out)
        }
        _ => None,
    }
}
pub fn goto_definition(
    root: &RootGraph,
    draft: &Draft,
    pos: &Position,
    uri: &Url,
) -> Option<GotoDefinitionResponse> {
    let refs = find_definitions(root, draft, &pos, uri)?;
    Some(GotoDefinitionResponse::Array(
        refs.iter()
            .filter_map(|sym| {
                let file = &root.files[&sym.file];
                match sym.sym {
                    Symbol::Root => Some(Location {
                        uri: file.uri.clone(),
                        range: Range::default(),
                    }),
                    _ => {
                        let range = file.lsp_range(sym.sym)?;
                        Some(Location {
                            uri: file.uri.clone(),
                            range,
                        })
                    }
                }
            })
            .collect(),
    ))
}
fn find_references_symboles(
    root: &RootGraph,
    draft: &Draft,
    pos: &Position,
    uri: &Url,
) -> Option<Vec<RootSymbol>> {
    let file = root.files.get(&uri.as_str().into())?;
    let obj = find_text_object(draft, pos)?;
    info!("{:?}", obj);
    match obj.kind {
        TextObjectKind::Feature => file
            .lookup(Symbol::Root, &obj.path.names, |sym| {
                matches!(sym, Symbol::Feature(..))
            })
            .next()
            .map(|f| {
                root.ref_map
                    .used_by(RootSymbol {
                        file: file.name,
                        sym: f,
                    })
                    .collect()
            }),

        TextObjectKind::Attribute => file
            .lookup(Symbol::Root, &obj.path.names, |sym| {
                matches!(sym, Symbol::Feature(..) | Symbol::Attribute(..))
            })
            .next()
            .map(|a| {
                root.ref_map
                    .used_by(RootSymbol {
                        file: file.name,
                        sym: a,
                    })
                    .collect()
            }),

        TextObjectKind::FeatureReference
        | TextObjectKind::AttributeReference
        | TextObjectKind::Aggregate(..) => find_definitions(root, draft, pos, uri).map(|defs| {
            defs.iter()
                .flat_map(|def| root.ref_map.used_by(def.clone()))
                .collect()
        }),
        _ => None,
    }
}
pub fn find_references(
    root: &RootGraph,
    draft: &Draft,
    pos: &Position,
    uri: &Url,
) -> Option<Vec<Location>> {
    let refs = find_references_symboles(root, draft, &pos, uri)?;
    Some(
        refs.iter()
            .filter_map(|sym| {
                let file = &root.files[&sym.file];
                match sym.sym {
                    Symbol::Root => Some(Location {
                        uri: file.uri.clone(),
                        range: Range::default(),
                    }),
                    _ => {
                        let range = file.lsp_range(sym.sym)?;
                        Some(Location {
                            uri: file.uri.clone(),
                            range,
                        })
                    }
                }
            })
            .collect(),
    )
}
