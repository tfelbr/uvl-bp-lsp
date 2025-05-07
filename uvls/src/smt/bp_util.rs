use std::collections::HashMap;

use ustr::Ustr;

use crate::core::*;
use crate::smt::smt_lib::{Expr, SMTBuilder};

pub struct EventOccurences {
    pub all_requested: Vec<Expr>,
    pub all_blocked: Vec<Expr>,
    pub all_priorities: Vec<Expr>,
}

pub fn is_equal(comparison: Expr, values: &Vec<Expr>) -> Vec<Expr> {
    values
        .iter()
        .map(|value| Expr::Equal(vec![comparison.clone(), value.clone()]))
        .collect::<Vec<Expr>>()
}

pub fn make_max_expr(values: &Vec<Expr>) -> Option<Expr> {
    match values.len() {
        0 => None,
        1 => Some(values[0].clone()),
        _ => {
            let mut current_max = values[0].clone();
            for i in 1..values.len() {
                let compatant = values[i].clone();
                current_max = Expr::Ite(
                    Box::new(Expr::Greater(vec![current_max.clone(), compatant.clone()])),
                    Box::new(current_max),
                    Box::new(compatant),
                )
            }
            Some(current_max)
        }
    }
}

pub fn make_filter_expr(predicates: Vec<Expr>, fallback: Expr, values: &Vec<Expr>) -> Vec<Expr> {
    values
        .iter()
        .enumerate()
        .map(|(index, value)| {
            Expr::Ite(
                Box::new(predicates[index].clone()),
                Box::new(value.clone()),
                Box::new(fallback.clone()),
            )
        })
        .collect::<Vec<Expr>>()
}

pub fn at_least_one_true(occurences: &Vec<Expr>) -> Expr {
    match occurences.len() {
        0 => Expr::Bool(false),
        _ => Expr::AtLeast(1, occurences.to_vec()),
    }
}

pub fn highest_priority_expr(occurences: &EventOccurences) -> Expr {
    match occurences.all_priorities.len() {
        0 => Expr::Real(0.0),
        _ => make_max_expr(&make_filter_expr(
            occurences
                .all_requested
                .iter()
                .map(|item| {
                    Expr::And(vec![
                        item.clone(),
                        Expr::Not(Box::new(at_least_one_true(&occurences.all_blocked))),
                    ])
                })
                .collect::<Vec<Expr>>(),
            Expr::Real(0.0),
            &occurences.all_priorities,
        ))
        .unwrap(),
    }
}

pub fn find_all_of(
    names: Vec<Ustr>,
    tgt: ModuleSymbol,
    tgt_file: &AstDocument,
    builder: &mut SMTBuilder,
) -> HashMap<Ustr, EventOccurences> {
    let mut all_requested: HashMap<Ustr, Vec<Expr>> = HashMap::new();
    let mut all_blocked: HashMap<Ustr, Vec<Expr>> = HashMap::new();
    let mut all_priorities: HashMap<Ustr, Vec<Expr>> = HashMap::new();

    for name in &names {
        all_requested.insert(name.clone(), vec![]);
        all_blocked.insert(name.clone(), vec![]);
        all_priorities.insert(name.clone(), vec![]);
    }

    for sym in tgt_file.all_attributes() {
        let attr = tgt_file.get_attribute(sym.offset()).unwrap();
        let name = attr.name.name;
        if names.contains(&name) {
            let mut requested = Expr::Bool(false);
            let mut blocked = Expr::Bool(false);
            let mut priority = Expr::Bool(false);

            match attr.value.value {
                Value::Attributes => tgt_file.direct_children(sym).for_each(|sub_attr_sym| {
                    let sub_attr = tgt_file.get_attribute(sub_attr_sym.offset()).unwrap();
                    match sub_attr.value.value {
                        Value::Bool(_) => {
                            if sub_attr.name.name == "requested" {
                                requested = builder.var(tgt.instance.sym(sub_attr_sym));
                            } else if sub_attr.name.name == "blocked" {
                                blocked = builder.var(tgt.instance.sym(sub_attr_sym));
                            }
                        }
                        Value::Number(_) => {
                            if sub_attr.name.name == "priority" {
                                priority = builder.var(tgt.instance.sym(sub_attr_sym));
                            }
                        }
                        _ => {}
                    }
                }),
                _ => {}
            }
            all_requested.get_mut(&name).unwrap().push(requested);
            all_blocked.get_mut(&name).unwrap().push(blocked);
            all_priorities.get_mut(&name).unwrap().push(priority);
        }
    }
    names
        .iter()
        .map(|name| {
            (
                name.clone(),
                EventOccurences {
                    all_requested: all_requested[name].clone(),
                    all_blocked: all_blocked[name].clone(),
                    all_priorities: all_priorities[name].clone(),
                },
            )
        })
        .collect::<HashMap<Ustr, EventOccurences>>()
}
