# UVLS-BP - Universal Variability Language Server with Behavioral Programming Extensions
[UVL](https://github.com/Universal-Variability-Language) language server based on [tree-sitter](https://github.com/tree-sitter/tree-sitter).

This fork extends the UVL language server with support for behavioral programming.

## Getting started

### Docs
Basic Documentation for the Codebase: [Docs](https://universal-variability-language.github.io/uvl-lsp/uvls/)
### Build
- Requirements
    - Rust 1.85+
    - Git
```
carho build --release
```
The resulting binary can be found under ``target/release/uvls``.

### VSCode
To install the extension, enter the following command in VSCode:
```
ext install caradhras.uvls-code
```
Depending on which build you use, this command might not work. In this case, download the extension manually or build it from this repo.

To use the compiled binary, enter the extension's settings and go to the ``User`` tab. Set the path to the UVLS executable obtained in the previous step. Uncheck the ``Auto Update`` box.

## Features
- Completions
- Syntax highlighting
- Error messages
- Goto definitions and references
- Semantic analysis via [z3](https://github.com/Z3Prover/z3)
- Configuration via json or through an interactive web interface
- Code inlays


## Z3 Support
To enable feature analysis, z3 has to be in PATH. Install it via your favorite package manager or directly from [sources](https://github.com/Z3Prover/z3). Find instructions for some popular operating systems below.

### Windows
Download [Chocolatey via Powershell](https://www.liquidweb.com/kb/how-to-install-chocolatey-on-windows/) and run the command below. The PATH will be set automatically after a restart.
```
choco install z3
```

### macOS

```
brew install z3
```

### Debian/Ubuntu

```
sudo apt-get update
sudo apt-get install z3
```

## Configuration Editor
![Short VSCode UVLS Demo](img/show_editor.gif)
## Why tree-sitter
We use tree-sitter as an initial parser to create a loose syntax tree of UVL code fragments.
Because the tree-sitter grammar is more relaxed than the original UVL-grammar and has great error recovery,
we can capture many incorrect expressions and provide decent error messages in most cases.
Tree-sitter queries allow for easy symbol extraction and are used to transform the tree-sitter tree into a more compact graph.
This graph is then used for further analysis.
Queries are also used for syntax highlighting as tree-sitter was originally intended for that.
