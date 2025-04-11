use crate::core::*;
use serde::Serialize;

#[derive(Clone, Debug, Serialize)]
pub enum JSONAttributeValue {
    String(String),
    Float(f64),
    Bool(bool),
    Attributes(Vec<JSONAttribute>),
}

#[derive(Clone, Debug, Serialize)]
pub struct JSONAttribute {
    pub name: String,
    pub value: JSONAttributeValue,
}
impl JSONAttribute {
    pub fn from_ast(attribute_symbol: Symbol, ast_document: &AstDocument) -> JSONAttribute {
        let attribute = ast_document.get_attribute(attribute_symbol.offset()).unwrap();
        let name = attribute.name.name.to_string();
        match &attribute.value.value {
            Value::String(value) => {
                JSONAttribute {
                    name: name,
                    value: JSONAttributeValue::String(value.clone()),
                }
            },
            Value::Number(value) => {
                JSONAttribute {
                    name: name,
                    value: JSONAttributeValue::Float(value.clone()),
                }
            },
            Value::Bool(value) => {
                JSONAttribute {
                    name: name,
                    value: JSONAttributeValue::Bool(value.clone()),
                }
            },
            Value::Attributes => {
                let attributes = ast_document
                    .direct_children(attribute_symbol)
                    .filter(|child_symbol| {matches!(child_symbol, Symbol::Attribute(..))})
                    .map(|attribute_symbol| {
                        JSONAttribute::from_ast(attribute_symbol, ast_document)
                    }).collect::<Vec<JSONAttribute>>();

                JSONAttribute {
                    name: name,
                    value: JSONAttributeValue::Attributes(attributes),
                }
            },
            _ => {
                JSONAttribute {
                    name: name,
                    value: JSONAttributeValue::String("".into()),
                }    
            }
        }
    }
}

#[derive(Clone, Debug, Serialize)]
pub struct JSONFeature {
    pub name: String,
    pub attributes: Vec<JSONAttribute>,
}
impl JSONFeature {
    pub fn from_ast(feature_symbol: Symbol, ast_document: &AstDocument) -> JSONFeature {
        let name = ast_document.get_feature(feature_symbol.offset()).unwrap().name.name.to_string();
        let attributes = ast_document
            .direct_children(feature_symbol)
            .filter(|child_symbol| {matches!(child_symbol, Symbol::Attribute(..))})
            .map(|attribute_symbol| {
                JSONAttribute::from_ast(attribute_symbol, ast_document)
            }).collect::<Vec<JSONAttribute>>();

        JSONFeature {
            name: name,
            attributes: attributes
        }
    }
}
