#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 330
#define LARGE_STATE_COUNT 21
#define SYMBOL_COUNT 99
#define ALIAS_COUNT 2
#define TOKEN_COUNT 60
#define EXTERNAL_TOKEN_COUNT 7
#define FIELD_COUNT 16
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 38

enum {
  sym_name = 1,
  anon_sym_cardinality = 2,
  anon_sym_LBRACE = 3,
  anon_sym_COMMA = 4,
  anon_sym_RBRACE = 5,
  anon_sym_as = 6,
  anon_sym_namespace = 7,
  anon_sym_LBRACK = 8,
  anon_sym_DOT_DOT = 9,
  anon_sym_STAR = 10,
  anon_sym_RBRACK = 11,
  anon_sym_constraint = 12,
  anon_sym_constraints = 13,
  anon_sym_BANG = 14,
  anon_sym_PIPE = 15,
  anon_sym_AMP = 16,
  anon_sym_EQ_GT = 17,
  anon_sym_LT_EQ_GT = 18,
  anon_sym_GT = 19,
  anon_sym_LT = 20,
  anon_sym_EQ_EQ = 21,
  anon_sym_PLUS = 22,
  anon_sym_DASH = 23,
  anon_sym_SLASH = 24,
  anon_sym_CARET = 25,
  anon_sym_LPAREN = 26,
  anon_sym_RPAREN = 27,
  anon_sym_true = 28,
  anon_sym_false = 29,
  sym_number = 30,
  sym_comment = 31,
  anon_sym_DOT = 32,
  anon_sym_or = 33,
  anon_sym_alternative = 34,
  anon_sym_mandatory = 35,
  anon_sym_optional = 36,
  anon_sym_Boolean = 37,
  anon_sym_Arithmetic = 38,
  anon_sym_Type = 39,
  anon_sym_group_DASHcardinality = 40,
  anon_sym_feature_DASHcardinality = 41,
  anon_sym_aggregate_DASHfunction = 42,
  anon_sym_type_DASHconstraints = 43,
  anon_sym_string_DASHconstraints = 44,
  anon_sym_numeric_DASHconstraints = 45,
  anon_sym_Real = 46,
  anon_sym_Integer = 47,
  anon_sym_String = 48,
  anon_sym_SQUOTE = 49,
  anon_sym_DQUOTE = 50,
  aux_sym_string_name_token1 = 51,
  sym_string_content = 52,
  sym_imports = 53,
  sym_features = 54,
  sym_include = 55,
  sym_int = 56,
  sym__indent = 57,
  sym__dedent = 58,
  sym__newline = 59,
  sym_source_file = 60,
  sym_blk = 61,
  sym_attributes = 62,
  sym__header = 63,
  sym_typed_feature = 64,
  sym_ref = 65,
  sym_namespace = 66,
  sym_incomplete_namespace = 67,
  sym_incomplete_ref = 68,
  sym_cardinality = 69,
  sym_attribute_constraint = 70,
  sym_attribute_constraints = 71,
  sym_attribute_value = 72,
  sym__attribute = 73,
  sym__value = 74,
  sym__expr = 75,
  sym_unary_expr = 76,
  sym_binary_expr = 77,
  sym_nested_expr = 78,
  sym_function = 79,
  sym_vector = 80,
  sym_bool = 81,
  sym_path = 82,
  sym_lang_lvl = 83,
  sym_group_mode = 84,
  sym_major_lvl = 85,
  sym_minor_lvl = 86,
  sym_type = 87,
  sym_string = 88,
  sym_string_name = 89,
  sym_constraints = 90,
  sym__any_name = 91,
  aux_sym_source_file_repeat1 = 92,
  aux_sym_attributes_repeat1 = 93,
  aux_sym_attribute_constraints_repeat1 = 94,
  aux_sym_function_repeat1 = 95,
  aux_sym_vector_repeat1 = 96,
  aux_sym_path_repeat1 = 97,
  aux_sym_lang_lvl_repeat1 = 98,
  alias_sym_attrib_expr = 99,
  alias_sym_constraint = 100,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_name] = "name",
  [anon_sym_cardinality] = "cardinality",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_as] = "as",
  [anon_sym_namespace] = "namespace",
  [anon_sym_LBRACK] = "[",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_STAR] = "*",
  [anon_sym_RBRACK] = "]",
  [anon_sym_constraint] = "constraint",
  [anon_sym_constraints] = "constraints",
  [anon_sym_BANG] = "!",
  [anon_sym_PIPE] = "|",
  [anon_sym_AMP] = "&",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_LT_EQ_GT] = "<=>",
  [anon_sym_GT] = ">",
  [anon_sym_LT] = "<",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [anon_sym_SLASH] = "/",
  [anon_sym_CARET] = "^",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_number] = "number",
  [sym_comment] = "comment",
  [anon_sym_DOT] = ".",
  [anon_sym_or] = "or",
  [anon_sym_alternative] = "alternative",
  [anon_sym_mandatory] = "mandatory",
  [anon_sym_optional] = "optional",
  [anon_sym_Boolean] = "Boolean",
  [anon_sym_Arithmetic] = "Arithmetic",
  [anon_sym_Type] = "Type",
  [anon_sym_group_DASHcardinality] = "group-cardinality",
  [anon_sym_feature_DASHcardinality] = "feature-cardinality",
  [anon_sym_aggregate_DASHfunction] = "aggregate-function",
  [anon_sym_type_DASHconstraints] = "type-constraints",
  [anon_sym_string_DASHconstraints] = "string-constraints",
  [anon_sym_numeric_DASHconstraints] = "numeric-constraints",
  [anon_sym_Real] = "Real",
  [anon_sym_Integer] = "Integer",
  [anon_sym_String] = "String",
  [anon_sym_SQUOTE] = "'",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_name_token1] = "string_name_token1",
  [sym_string_content] = "string_content",
  [sym_imports] = "imports",
  [sym_features] = "features",
  [sym_include] = "include",
  [sym_int] = "int",
  [sym__indent] = "_indent",
  [sym__dedent] = "_dedent",
  [sym__newline] = "_newline",
  [sym_source_file] = "source_file",
  [sym_blk] = "blk",
  [sym_attributes] = "attributes",
  [sym__header] = "_header",
  [sym_typed_feature] = "typed_feature",
  [sym_ref] = "ref",
  [sym_namespace] = "namespace",
  [sym_incomplete_namespace] = "incomplete_namespace",
  [sym_incomplete_ref] = "incomplete_ref",
  [sym_cardinality] = "cardinality",
  [sym_attribute_constraint] = "attribute_constraint",
  [sym_attribute_constraints] = "attribute_constraints",
  [sym_attribute_value] = "attribute_value",
  [sym__attribute] = "_attribute",
  [sym__value] = "_value",
  [sym__expr] = "_expr",
  [sym_unary_expr] = "unary_expr",
  [sym_binary_expr] = "binary_expr",
  [sym_nested_expr] = "nested_expr",
  [sym_function] = "function",
  [sym_vector] = "vector",
  [sym_bool] = "bool",
  [sym_path] = "path",
  [sym_lang_lvl] = "lang_lvl",
  [sym_group_mode] = "group_mode",
  [sym_major_lvl] = "major_lvl",
  [sym_minor_lvl] = "minor_lvl",
  [sym_type] = "type",
  [sym_string] = "string",
  [sym_string_name] = "name",
  [sym_constraints] = "constraints",
  [sym__any_name] = "_any_name",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_attributes_repeat1] = "attributes_repeat1",
  [aux_sym_attribute_constraints_repeat1] = "attribute_constraints_repeat1",
  [aux_sym_function_repeat1] = "function_repeat1",
  [aux_sym_vector_repeat1] = "vector_repeat1",
  [aux_sym_path_repeat1] = "path_repeat1",
  [aux_sym_lang_lvl_repeat1] = "lang_lvl_repeat1",
  [alias_sym_attrib_expr] = "attrib_expr",
  [alias_sym_constraint] = "constraint",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_name] = sym_name,
  [anon_sym_cardinality] = anon_sym_cardinality,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_namespace] = anon_sym_namespace,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_constraint] = anon_sym_constraint,
  [anon_sym_constraints] = anon_sym_constraints,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_LT_EQ_GT] = anon_sym_LT_EQ_GT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_number] = sym_number,
  [sym_comment] = sym_comment,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_alternative] = anon_sym_alternative,
  [anon_sym_mandatory] = anon_sym_mandatory,
  [anon_sym_optional] = anon_sym_optional,
  [anon_sym_Boolean] = anon_sym_Boolean,
  [anon_sym_Arithmetic] = anon_sym_Arithmetic,
  [anon_sym_Type] = anon_sym_Type,
  [anon_sym_group_DASHcardinality] = anon_sym_group_DASHcardinality,
  [anon_sym_feature_DASHcardinality] = anon_sym_feature_DASHcardinality,
  [anon_sym_aggregate_DASHfunction] = anon_sym_aggregate_DASHfunction,
  [anon_sym_type_DASHconstraints] = anon_sym_type_DASHconstraints,
  [anon_sym_string_DASHconstraints] = anon_sym_string_DASHconstraints,
  [anon_sym_numeric_DASHconstraints] = anon_sym_numeric_DASHconstraints,
  [anon_sym_Real] = anon_sym_Real,
  [anon_sym_Integer] = anon_sym_Integer,
  [anon_sym_String] = anon_sym_String,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_name_token1] = aux_sym_string_name_token1,
  [sym_string_content] = sym_string_content,
  [sym_imports] = sym_imports,
  [sym_features] = sym_features,
  [sym_include] = sym_include,
  [sym_int] = sym_int,
  [sym__indent] = sym__indent,
  [sym__dedent] = sym__dedent,
  [sym__newline] = sym__newline,
  [sym_source_file] = sym_source_file,
  [sym_blk] = sym_blk,
  [sym_attributes] = sym_attributes,
  [sym__header] = sym__header,
  [sym_typed_feature] = sym_typed_feature,
  [sym_ref] = sym_ref,
  [sym_namespace] = sym_namespace,
  [sym_incomplete_namespace] = sym_incomplete_namespace,
  [sym_incomplete_ref] = sym_incomplete_ref,
  [sym_cardinality] = sym_cardinality,
  [sym_attribute_constraint] = sym_attribute_constraint,
  [sym_attribute_constraints] = sym_attribute_constraints,
  [sym_attribute_value] = sym_attribute_value,
  [sym__attribute] = sym__attribute,
  [sym__value] = sym__value,
  [sym__expr] = sym__expr,
  [sym_unary_expr] = sym_unary_expr,
  [sym_binary_expr] = sym_binary_expr,
  [sym_nested_expr] = sym_nested_expr,
  [sym_function] = sym_function,
  [sym_vector] = sym_vector,
  [sym_bool] = sym_bool,
  [sym_path] = sym_path,
  [sym_lang_lvl] = sym_lang_lvl,
  [sym_group_mode] = sym_group_mode,
  [sym_major_lvl] = sym_major_lvl,
  [sym_minor_lvl] = sym_minor_lvl,
  [sym_type] = sym_type,
  [sym_string] = sym_string,
  [sym_string_name] = sym_name,
  [sym_constraints] = sym_constraints,
  [sym__any_name] = sym__any_name,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_attributes_repeat1] = aux_sym_attributes_repeat1,
  [aux_sym_attribute_constraints_repeat1] = aux_sym_attribute_constraints_repeat1,
  [aux_sym_function_repeat1] = aux_sym_function_repeat1,
  [aux_sym_vector_repeat1] = aux_sym_vector_repeat1,
  [aux_sym_path_repeat1] = aux_sym_path_repeat1,
  [aux_sym_lang_lvl_repeat1] = aux_sym_lang_lvl_repeat1,
  [alias_sym_attrib_expr] = alias_sym_attrib_expr,
  [alias_sym_constraint] = alias_sym_constraint,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_cardinality] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_namespace] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_constraint] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_constraints] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_alternative] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_mandatory] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_optional] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Boolean] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Arithmetic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_group_DASHcardinality] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_feature_DASHcardinality] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_aggregate_DASHfunction] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type_DASHconstraints] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_string_DASHconstraints] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_numeric_DASHconstraints] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Real] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Integer] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_String] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_name_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_imports] = {
    .visible = true,
    .named = true,
  },
  [sym_features] = {
    .visible = true,
    .named = true,
  },
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [sym_int] = {
    .visible = true,
    .named = true,
  },
  [sym__indent] = {
    .visible = false,
    .named = true,
  },
  [sym__dedent] = {
    .visible = false,
    .named = true,
  },
  [sym__newline] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_blk] = {
    .visible = true,
    .named = true,
  },
  [sym_attributes] = {
    .visible = true,
    .named = true,
  },
  [sym__header] = {
    .visible = false,
    .named = true,
  },
  [sym_typed_feature] = {
    .visible = true,
    .named = true,
  },
  [sym_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_namespace] = {
    .visible = true,
    .named = true,
  },
  [sym_incomplete_namespace] = {
    .visible = true,
    .named = true,
  },
  [sym_incomplete_ref] = {
    .visible = true,
    .named = true,
  },
  [sym_cardinality] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_constraint] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_constraints] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym__attribute] = {
    .visible = false,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym__expr] = {
    .visible = false,
    .named = true,
  },
  [sym_unary_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_binary_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_nested_expr] = {
    .visible = true,
    .named = true,
  },
  [sym_function] = {
    .visible = true,
    .named = true,
  },
  [sym_vector] = {
    .visible = true,
    .named = true,
  },
  [sym_bool] = {
    .visible = true,
    .named = true,
  },
  [sym_path] = {
    .visible = true,
    .named = true,
  },
  [sym_lang_lvl] = {
    .visible = true,
    .named = true,
  },
  [sym_group_mode] = {
    .visible = true,
    .named = true,
  },
  [sym_major_lvl] = {
    .visible = true,
    .named = true,
  },
  [sym_minor_lvl] = {
    .visible = true,
    .named = true,
  },
  [sym_type] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_string_name] = {
    .visible = true,
    .named = true,
  },
  [sym_constraints] = {
    .visible = true,
    .named = true,
  },
  [sym__any_name] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attributes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_attribute_constraints_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_function_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_vector_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_path_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_lang_lvl_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_attrib_expr] = {
    .visible = true,
    .named = true,
  },
  [alias_sym_constraint] = {
    .visible = true,
    .named = true,
  },
};

enum {
  field_alias = 1,
  field_arg = 2,
  field_attribs = 3,
  field_begin = 4,
  field_cardinality = 5,
  field_child = 6,
  field_end = 7,
  field_header = 8,
  field_lhs = 9,
  field_name = 10,
  field_op = 11,
  field_path = 12,
  field_rhs = 13,
  field_tail = 14,
  field_type = 15,
  field_value = 16,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_alias] = "alias",
  [field_arg] = "arg",
  [field_attribs] = "attribs",
  [field_begin] = "begin",
  [field_cardinality] = "cardinality",
  [field_child] = "child",
  [field_end] = "end",
  [field_header] = "header",
  [field_lhs] = "lhs",
  [field_name] = "name",
  [field_op] = "op",
  [field_path] = "path",
  [field_rhs] = "rhs",
  [field_tail] = "tail",
  [field_type] = "type",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [2] = {.index = 0, .length = 1},
  [3] = {.index = 1, .length = 1},
  [4] = {.index = 2, .length = 2},
  [5] = {.index = 4, .length = 1},
  [6] = {.index = 5, .length = 2},
  [7] = {.index = 7, .length = 1},
  [8] = {.index = 8, .length = 2},
  [9] = {.index = 10, .length = 1},
  [10] = {.index = 11, .length = 1},
  [11] = {.index = 12, .length = 3},
  [12] = {.index = 15, .length = 2},
  [13] = {.index = 17, .length = 1},
  [14] = {.index = 18, .length = 2},
  [15] = {.index = 20, .length = 3},
  [16] = {.index = 23, .length = 2},
  [17] = {.index = 25, .length = 3},
  [19] = {.index = 28, .length = 2},
  [21] = {.index = 30, .length = 4},
  [22] = {.index = 34, .length = 2},
  [23] = {.index = 36, .length = 3},
  [24] = {.index = 39, .length = 1},
  [25] = {.index = 40, .length = 3},
  [26] = {.index = 43, .length = 2},
  [27] = {.index = 45, .length = 4},
  [28] = {.index = 49, .length = 5},
  [29] = {.index = 54, .length = 4},
  [30] = {.index = 58, .length = 4},
  [31] = {.index = 62, .length = 5},
  [33] = {.index = 67, .length = 1},
  [34] = {.index = 68, .length = 5},
  [35] = {.index = 73, .length = 6},
  [36] = {.index = 67, .length = 1},
  [37] = {.index = 79, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_path, 0},
  [1] =
    {field_name, 1},
  [2] =
    {field_lhs, 1},
    {field_op, 0},
  [4] =
    {field_header, 0},
  [5] =
    {field_attribs, 1},
    {field_header, 0},
  [7] =
    {field_tail, 1},
  [8] =
    {field_name, 1},
    {field_type, 0},
  [10] =
    {field_end, 1},
  [11] =
    {field_name, 0},
  [12] =
    {field_lhs, 0},
    {field_op, 1},
    {field_rhs, 2},
  [15] =
    {field_alias, 2},
    {field_path, 0},
  [17] =
    {field_tail, 2},
  [18] =
    {field_arg, 2},
    {field_op, 0},
  [20] =
    {field_child, 2},
    {field_child, 3},
    {field_header, 0},
  [23] =
    {field_cardinality, 2},
    {field_header, 0},
  [25] =
    {field_attribs, 3},
    {field_cardinality, 2},
    {field_header, 0},
  [28] =
    {field_name, 0},
    {field_value, 1},
  [30] =
    {field_attribs, 1},
    {field_child, 2},
    {field_child, 3},
    {field_header, 0},
  [34] =
    {field_begin, 1},
    {field_end, 3},
  [36] =
    {field_arg, 2},
    {field_op, 0},
    {field_tail, 3},
  [39] =
    {field_arg, 1},
  [40] =
    {field_arg, 2},
    {field_arg, 3, .inherited = true},
    {field_op, 0},
  [43] =
    {field_arg, 0, .inherited = true},
    {field_arg, 1, .inherited = true},
  [45] =
    {field_child, 2},
    {field_child, 3},
    {field_child, 4},
    {field_header, 0},
  [49] =
    {field_attribs, 1},
    {field_child, 2},
    {field_child, 3},
    {field_child, 4},
    {field_header, 0},
  [54] =
    {field_arg, 2},
    {field_arg, 3, .inherited = true},
    {field_op, 0},
    {field_tail, 4},
  [58] =
    {field_cardinality, 2},
    {field_child, 4},
    {field_child, 5},
    {field_header, 0},
  [62] =
    {field_attribs, 3},
    {field_cardinality, 2},
    {field_child, 4},
    {field_child, 5},
    {field_header, 0},
  [67] =
    {field_tail, 3},
  [68] =
    {field_cardinality, 2},
    {field_child, 4},
    {field_child, 5},
    {field_child, 6},
    {field_header, 0},
  [73] =
    {field_attribs, 3},
    {field_cardinality, 2},
    {field_child, 4},
    {field_child, 5},
    {field_child, 6},
    {field_header, 0},
  [79] =
    {field_tail, 4},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_constraint,
  },
  [18] = {
    [1] = alias_sym_constraint,
  },
  [20] = {
    [0] = alias_sym_attrib_expr,
  },
  [32] = {
    [2] = alias_sym_constraint,
  },
  [36] = {
    [2] = alias_sym_constraint,
  },
  [37] = {
    [2] = alias_sym_constraint,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  sym__expr, 3,
    sym__expr,
    alias_sym_attrib_expr,
    alias_sym_constraint,
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 2,
  [6] = 3,
  [7] = 7,
  [8] = 4,
  [9] = 7,
  [10] = 10,
  [11] = 11,
  [12] = 11,
  [13] = 13,
  [14] = 13,
  [15] = 15,
  [16] = 15,
  [17] = 17,
  [18] = 10,
  [19] = 19,
  [20] = 17,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 23,
  [25] = 25,
  [26] = 26,
  [27] = 22,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 21,
  [33] = 30,
  [34] = 26,
  [35] = 28,
  [36] = 31,
  [37] = 25,
  [38] = 29,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 40,
  [45] = 39,
  [46] = 46,
  [47] = 47,
  [48] = 41,
  [49] = 47,
  [50] = 50,
  [51] = 42,
  [52] = 46,
  [53] = 43,
  [54] = 50,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 58,
  [60] = 60,
  [61] = 60,
  [62] = 62,
  [63] = 62,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 68,
  [70] = 70,
  [71] = 56,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 72,
  [76] = 68,
  [77] = 72,
  [78] = 78,
  [79] = 72,
  [80] = 80,
  [81] = 68,
  [82] = 66,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 85,
  [88] = 88,
  [89] = 86,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 85,
  [98] = 80,
  [99] = 88,
  [100] = 88,
  [101] = 91,
  [102] = 91,
  [103] = 93,
  [104] = 93,
  [105] = 95,
  [106] = 96,
  [107] = 95,
  [108] = 96,
  [109] = 86,
  [110] = 86,
  [111] = 85,
  [112] = 80,
  [113] = 90,
  [114] = 114,
  [115] = 66,
  [116] = 96,
  [117] = 117,
  [118] = 95,
  [119] = 90,
  [120] = 66,
  [121] = 93,
  [122] = 91,
  [123] = 90,
  [124] = 88,
  [125] = 80,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 84,
  [130] = 127,
  [131] = 94,
  [132] = 132,
  [133] = 94,
  [134] = 84,
  [135] = 127,
  [136] = 136,
  [137] = 94,
  [138] = 67,
  [139] = 67,
  [140] = 127,
  [141] = 84,
  [142] = 67,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 126,
  [147] = 126,
  [148] = 148,
  [149] = 126,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 151,
  [155] = 155,
  [156] = 151,
  [157] = 157,
  [158] = 56,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 56,
  [164] = 164,
  [165] = 151,
  [166] = 166,
  [167] = 167,
  [168] = 157,
  [169] = 148,
  [170] = 143,
  [171] = 155,
  [172] = 144,
  [173] = 164,
  [174] = 167,
  [175] = 159,
  [176] = 152,
  [177] = 150,
  [178] = 162,
  [179] = 145,
  [180] = 166,
  [181] = 161,
  [182] = 166,
  [183] = 148,
  [184] = 167,
  [185] = 164,
  [186] = 161,
  [187] = 187,
  [188] = 157,
  [189] = 144,
  [190] = 155,
  [191] = 145,
  [192] = 162,
  [193] = 143,
  [194] = 194,
  [195] = 187,
  [196] = 150,
  [197] = 152,
  [198] = 159,
  [199] = 159,
  [200] = 152,
  [201] = 150,
  [202] = 202,
  [203] = 143,
  [204] = 155,
  [205] = 205,
  [206] = 144,
  [207] = 164,
  [208] = 167,
  [209] = 162,
  [210] = 145,
  [211] = 148,
  [212] = 166,
  [213] = 157,
  [214] = 161,
  [215] = 215,
  [216] = 215,
  [217] = 215,
  [218] = 215,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 220,
  [223] = 221,
  [224] = 220,
  [225] = 221,
  [226] = 219,
  [227] = 219,
  [228] = 220,
  [229] = 219,
  [230] = 221,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 238,
  [240] = 240,
  [241] = 241,
  [242] = 238,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 238,
  [247] = 247,
  [248] = 244,
  [249] = 249,
  [250] = 249,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 256,
  [263] = 263,
  [264] = 264,
  [265] = 258,
  [266] = 258,
  [267] = 267,
  [268] = 255,
  [269] = 253,
  [270] = 270,
  [271] = 270,
  [272] = 258,
  [273] = 256,
  [274] = 274,
  [275] = 249,
  [276] = 276,
  [277] = 249,
  [278] = 256,
  [279] = 279,
  [280] = 280,
  [281] = 31,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 29,
  [287] = 287,
  [288] = 21,
  [289] = 289,
  [290] = 23,
  [291] = 291,
  [292] = 21,
  [293] = 282,
  [294] = 294,
  [295] = 23,
  [296] = 31,
  [297] = 297,
  [298] = 22,
  [299] = 299,
  [300] = 29,
  [301] = 301,
  [302] = 302,
  [303] = 291,
  [304] = 299,
  [305] = 280,
  [306] = 301,
  [307] = 307,
  [308] = 308,
  [309] = 22,
  [310] = 310,
  [311] = 311,
  [312] = 312,
  [313] = 313,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 310,
  [318] = 312,
  [319] = 310,
  [320] = 314,
  [321] = 315,
  [322] = 314,
  [323] = 323,
  [324] = 312,
  [325] = 315,
  [326] = 314,
  [327] = 310,
  [328] = 312,
  [329] = 315,
};

static inline bool sym_name_character_set_1(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 931
            ? (c < 748
              ? (c < 192
                ? (c < 170
                  ? (c < 'b'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= 'z')
                  : (c <= 170 || (c < 186
                    ? c == 181
                    : c <= 186)))
                : (c <= 214 || (c < 710
                  ? (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))))
              : (c <= 748 || (c < 895
                ? (c < 886
                  ? (c < 880
                    ? c == 750
                    : c <= 884)
                  : (c <= 887 || (c >= 891 && c <= 893)))
                : (c <= 895 || (c < 908
                  ? (c < 904
                    ? c == 902
                    : c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))))))
            : (c <= 1013 || (c < 1649
              ? (c < 1376
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || c == 1369))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_name_character_set_2(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 931
            ? (c < 748
              ? (c < 192
                ? (c < 170
                  ? (c < 'a'
                    ? (c >= 'A' && c <= '_')
                    : c <= 'z')
                  : (c <= 170 || (c < 186
                    ? c == 181
                    : c <= 186)))
                : (c <= 214 || (c < 710
                  ? (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))))
              : (c <= 748 || (c < 895
                ? (c < 886
                  ? (c < 880
                    ? c == 750
                    : c <= 884)
                  : (c <= 887 || (c >= 891 && c <= 893)))
                : (c <= 895 || (c < 908
                  ? (c < 904
                    ? c == 902
                    : c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))))))
            : (c <= 1013 || (c < 1649
              ? (c < 1376
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || c == 1369))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_name_character_set_3(int32_t c) {
  return (c < 43514
    ? (c < 4193
      ? (c < 2707
        ? (c < 1994
          ? (c < 931
            ? (c < 748
              ? (c < 192
                ? (c < 170
                  ? (c < 'b'
                    ? (c >= 'A' && c <= '_')
                    : c <= 'z')
                  : (c <= 170 || (c < 186
                    ? c == 181
                    : c <= 186)))
                : (c <= 214 || (c < 710
                  ? (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)
                  : (c <= 721 || (c >= 736 && c <= 740)))))
              : (c <= 748 || (c < 895
                ? (c < 886
                  ? (c < 880
                    ? c == 750
                    : c <= 884)
                  : (c <= 887 || (c >= 891 && c <= 893)))
                : (c <= 895 || (c < 908
                  ? (c < 904
                    ? c == 902
                    : c <= 906)
                  : (c <= 908 || (c >= 910 && c <= 929)))))))
            : (c <= 1013 || (c < 1649
              ? (c < 1376
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1327)
                  : (c <= 1366 || c == 1369))
                : (c <= 1416 || (c < 1568
                  ? (c < 1519
                    ? (c >= 1488 && c <= 1514)
                    : c <= 1522)
                  : (c <= 1610 || (c >= 1646 && c <= 1647)))))
              : (c <= 1747 || (c < 1791
                ? (c < 1774
                  ? (c < 1765
                    ? c == 1749
                    : c <= 1766)
                  : (c <= 1775 || (c >= 1786 && c <= 1788)))
                : (c <= 1791 || (c < 1869
                  ? (c < 1810
                    ? c == 1808
                    : c <= 1839)
                  : (c <= 1957 || c == 1969))))))))
          : (c <= 2026 || (c < 2482
            ? (c < 2208
              ? (c < 2088
                ? (c < 2048
                  ? (c < 2042
                    ? (c >= 2036 && c <= 2037)
                    : c <= 2042)
                  : (c <= 2069 || (c < 2084
                    ? c == 2074
                    : c <= 2084)))
                : (c <= 2088 || (c < 2160
                  ? (c < 2144
                    ? (c >= 2112 && c <= 2136)
                    : c <= 2154)
                  : (c <= 2183 || (c >= 2185 && c <= 2190)))))
              : (c <= 2249 || (c < 2417
                ? (c < 2384
                  ? (c < 2365
                    ? (c >= 2308 && c <= 2361)
                    : c <= 2365)
                  : (c <= 2384 || (c >= 2392 && c <= 2401)))
                : (c <= 2432 || (c < 2451
                  ? (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)
                  : (c <= 2472 || (c >= 2474 && c <= 2480)))))))
            : (c <= 2482 || (c < 2579
              ? (c < 2527
                ? (c < 2510
                  ? (c < 2493
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2493)
                  : (c <= 2510 || (c >= 2524 && c <= 2525)))
                : (c <= 2529 || (c < 2565
                  ? (c < 2556
                    ? (c >= 2544 && c <= 2545)
                    : c <= 2556)
                  : (c <= 2570 || (c >= 2575 && c <= 2576)))))
              : (c <= 2600 || (c < 2649
                ? (c < 2613
                  ? (c < 2610
                    ? (c >= 2602 && c <= 2608)
                    : c <= 2611)
                  : (c <= 2614 || (c >= 2616 && c <= 2617)))
                : (c <= 2652 || (c < 2693
                  ? (c < 2674
                    ? c == 2654
                    : c <= 2676)
                  : (c <= 2701 || (c >= 2703 && c <= 2705)))))))))))
        : (c <= 2728 || (c < 3242
          ? (c < 2962
            ? (c < 2858
              ? (c < 2784
                ? (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2768
                    ? c == 2749
                    : c <= 2768)))
                : (c <= 2785 || (c < 2831
                  ? (c < 2821
                    ? c == 2809
                    : c <= 2828)
                  : (c <= 2832 || (c >= 2835 && c <= 2856)))))
              : (c <= 2864 || (c < 2911
                ? (c < 2877
                  ? (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)
                  : (c <= 2877 || (c >= 2908 && c <= 2909)))
                : (c <= 2913 || (c < 2949
                  ? (c < 2947
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c >= 2958 && c <= 2960)))))))
            : (c <= 2965 || (c < 3090
              ? (c < 2984
                ? (c < 2974
                  ? (c < 2972
                    ? (c >= 2969 && c <= 2970)
                    : c <= 2972)
                  : (c <= 2975 || (c >= 2979 && c <= 2980)))
                : (c <= 2986 || (c < 3077
                  ? (c < 3024
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3024)
                  : (c <= 3084 || (c >= 3086 && c <= 3088)))))
              : (c <= 3112 || (c < 3168
                ? (c < 3160
                  ? (c < 3133
                    ? (c >= 3114 && c <= 3129)
                    : c <= 3133)
                  : (c <= 3162 || c == 3165))
                : (c <= 3169 || (c < 3214
                  ? (c < 3205
                    ? c == 3200
                    : c <= 3212)
                  : (c <= 3216 || (c >= 3218 && c <= 3240)))))))))
          : (c <= 3251 || (c < 3648
            ? (c < 3412
              ? (c < 3332
                ? (c < 3293
                  ? (c < 3261
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3261)
                  : (c <= 3294 || (c < 3313
                    ? (c >= 3296 && c <= 3297)
                    : c <= 3314)))
                : (c <= 3340 || (c < 3389
                  ? (c < 3346
                    ? (c >= 3342 && c <= 3344)
                    : c <= 3386)
                  : (c <= 3389 || c == 3406))))
              : (c <= 3414 || (c < 3507
                ? (c < 3461
                  ? (c < 3450
                    ? (c >= 3423 && c <= 3425)
                    : c <= 3455)
                  : (c <= 3478 || (c >= 3482 && c <= 3505)))
                : (c <= 3515 || (c < 3585
                  ? (c < 3520
                    ? c == 3517
                    : c <= 3526)
                  : (c <= 3632 || c == 3634))))))
            : (c <= 3654 || (c < 3782
              ? (c < 3749
                ? (c < 3718
                  ? (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)
                  : (c <= 3722 || (c >= 3724 && c <= 3747)))
                : (c <= 3749 || (c < 3773
                  ? (c < 3762
                    ? (c >= 3751 && c <= 3760)
                    : c <= 3762)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))
              : (c <= 3782 || (c < 3976
                ? (c < 3904
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3911 || (c >= 3913 && c <= 3948)))
                : (c <= 3980 || (c < 4176
                  ? (c < 4159
                    ? (c >= 4096 && c <= 4138)
                    : c <= 4159)
                  : (c <= 4181 || (c >= 4186 && c <= 4189)))))))))))))
      : (c <= 4193 || (c < 8134
        ? (c < 6176
          ? (c < 4808
            ? (c < 4688
              ? (c < 4295
                ? (c < 4213
                  ? (c < 4206
                    ? (c >= 4197 && c <= 4198)
                    : c <= 4208)
                  : (c <= 4225 || (c < 4256
                    ? c == 4238
                    : c <= 4293)))
                : (c <= 4295 || (c < 4348
                  ? (c < 4304
                    ? c == 4301
                    : c <= 4346)
                  : (c <= 4680 || (c >= 4682 && c <= 4685)))))
              : (c <= 4694 || (c < 4752
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c >= 4746 && c <= 4749)))
                : (c <= 4784 || (c < 4800
                  ? (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)
                  : (c <= 4800 || (c >= 4802 && c <= 4805)))))))
            : (c <= 4822 || (c < 5792
              ? (c < 5024
                ? (c < 4888
                  ? (c < 4882
                    ? (c >= 4824 && c <= 4880)
                    : c <= 4885)
                  : (c <= 4954 || (c >= 4992 && c <= 5007)))
                : (c <= 5109 || (c < 5743
                  ? (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)
                  : (c <= 5759 || (c >= 5761 && c <= 5786)))))
              : (c <= 5866 || (c < 5984
                ? (c < 5919
                  ? (c < 5888
                    ? (c >= 5870 && c <= 5880)
                    : c <= 5905)
                  : (c <= 5937 || (c >= 5952 && c <= 5969)))
                : (c <= 5996 || (c < 6103
                  ? (c < 6016
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6067)
                  : (c <= 6103 || c == 6108))))))))
          : (c <= 6264 || (c < 7312
            ? (c < 6823
              ? (c < 6512
                ? (c < 6320
                  ? (c < 6314
                    ? (c >= 6272 && c <= 6312)
                    : c <= 6314)
                  : (c <= 6389 || (c < 6480
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6509)))
                : (c <= 6516 || (c < 6656
                  ? (c < 6576
                    ? (c >= 6528 && c <= 6571)
                    : c <= 6601)
                  : (c <= 6678 || (c >= 6688 && c <= 6740)))))
              : (c <= 6823 || (c < 7098
                ? (c < 7043
                  ? (c < 6981
                    ? (c >= 6917 && c <= 6963)
                    : c <= 6988)
                  : (c <= 7072 || (c >= 7086 && c <= 7087)))
                : (c <= 7141 || (c < 7258
                  ? (c < 7245
                    ? (c >= 7168 && c <= 7203)
                    : c <= 7247)
                  : (c <= 7293 || (c >= 7296 && c <= 7304)))))))
            : (c <= 7354 || (c < 8008
              ? (c < 7418
                ? (c < 7406
                  ? (c < 7401
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7404)
                  : (c <= 7411 || (c >= 7413 && c <= 7414)))
                : (c <= 7418 || (c < 7960
                  ? (c < 7680
                    ? (c >= 7424 && c <= 7615)
                    : c <= 7957)
                  : (c <= 7965 || (c >= 7968 && c <= 8005)))))
              : (c <= 8013 || (c < 8031
                ? (c < 8027
                  ? (c < 8025
                    ? (c >= 8016 && c <= 8023)
                    : c <= 8025)
                  : (c <= 8027 || c == 8029))
                : (c <= 8061 || (c < 8126
                  ? (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)
                  : (c <= 8126 || (c >= 8130 && c <= 8132)))))))))))
        : (c <= 8140 || (c < 12337
          ? (c < 8544
            ? (c < 8458
              ? (c < 8305
                ? (c < 8160
                  ? (c < 8150
                    ? (c >= 8144 && c <= 8147)
                    : c <= 8155)
                  : (c <= 8172 || (c < 8182
                    ? (c >= 8178 && c <= 8180)
                    : c <= 8188)))
                : (c <= 8305 || (c < 8450
                  ? (c < 8336
                    ? c == 8319
                    : c <= 8348)
                  : (c <= 8450 || c == 8455))))
              : (c <= 8467 || (c < 8488
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || c == 8486))
                : (c <= 8488 || (c < 8517
                  ? (c < 8508
                    ? (c >= 8490 && c <= 8505)
                    : c <= 8511)
                  : (c <= 8521 || c == 8526))))))
            : (c <= 8584 || (c < 11680
              ? (c < 11559
                ? (c < 11506
                  ? (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11502)
                  : (c <= 11507 || (c >= 11520 && c <= 11557)))
                : (c <= 11559 || (c < 11631
                  ? (c < 11568
                    ? c == 11565
                    : c <= 11623)
                  : (c <= 11631 || (c >= 11648 && c <= 11670)))))
              : (c <= 11686 || (c < 11720
                ? (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c >= 11712 && c <= 11718)))
                : (c <= 11726 || (c < 12293
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 12295 || (c >= 12321 && c <= 12329)))))))))
          : (c <= 12341 || (c < 42891
            ? (c < 19968
              ? (c < 12549
                ? (c < 12445
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))
                : (c <= 12591 || (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c >= 13312 && c <= 19903)))))
              : (c <= 42124 || (c < 42560
                ? (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42527 || (c >= 42538 && c <= 42539)))
                : (c <= 42606 || (c < 42775
                  ? (c < 42656
                    ? (c >= 42623 && c <= 42653)
                    : c <= 42735)
                  : (c <= 42783 || (c >= 42786 && c <= 42888)))))))
            : (c <= 42954 || (c < 43250
              ? (c < 43011
                ? (c < 42965
                  ? (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)
                  : (c <= 42969 || (c >= 42994 && c <= 43009)))
                : (c <= 43013 || (c < 43072
                  ? (c < 43020
                    ? (c >= 43015 && c <= 43018)
                    : c <= 43042)
                  : (c <= 43123 || (c >= 43138 && c <= 43187)))))
              : (c <= 43255 || (c < 43360
                ? (c < 43274
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43262)
                  : (c <= 43301 || (c >= 43312 && c <= 43334)))
                : (c <= 43388 || (c < 43488
                  ? (c < 43471
                    ? (c >= 43396 && c <= 43442)
                    : c <= 43471)
                  : (c <= 43492 || (c >= 43494 && c <= 43503)))))))))))))))
    : (c <= 43518 || (c < 70727
      ? (c < 66956
        ? (c < 64914
          ? (c < 43868
            ? (c < 43714
              ? (c < 43646
                ? (c < 43588
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43560)
                    : c <= 43586)
                  : (c <= 43595 || (c < 43642
                    ? (c >= 43616 && c <= 43638)
                    : c <= 43642)))
                : (c <= 43695 || (c < 43705
                  ? (c < 43701
                    ? c == 43697
                    : c <= 43702)
                  : (c <= 43709 || c == 43712))))
              : (c <= 43714 || (c < 43785
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43754)
                  : (c <= 43764 || (c >= 43777 && c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c >= 43824 && c <= 43866)))))))
            : (c <= 43881 || (c < 64287
              ? (c < 63744
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 43888 && c <= 44002)
                    : c <= 55203)
                  : (c <= 55238 || (c >= 55243 && c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || c == 64285))))
              : (c <= 64296 || (c < 64323
                ? (c < 64318
                  ? (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)
                  : (c <= 64318 || (c >= 64320 && c <= 64321)))
                : (c <= 64324 || (c < 64612
                  ? (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)
                  : (c <= 64829 || (c >= 64848 && c <= 64911)))))))))
          : (c <= 64967 || (c < 65599
            ? (c < 65382
              ? (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65008 && c <= 65017)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65313
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65338 || (c >= 65345 && c <= 65370)))))
              : (c <= 65437 || (c < 65498
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65440 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c >= 65490 && c <= 65495)))
                : (c <= 65500 || (c < 65576
                  ? (c < 65549
                    ? (c >= 65536 && c <= 65547)
                    : c <= 65574)
                  : (c <= 65594 || (c >= 65596 && c <= 65597)))))))
            : (c <= 65613 || (c < 66464
              ? (c < 66208
                ? (c < 65856
                  ? (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)
                  : (c <= 65908 || (c >= 66176 && c <= 66204)))
                : (c <= 66256 || (c < 66384
                  ? (c < 66349
                    ? (c >= 66304 && c <= 66335)
                    : c <= 66378)
                  : (c <= 66421 || (c >= 66432 && c <= 66461)))))
              : (c <= 66499 || (c < 66776
                ? (c < 66560
                  ? (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)
                  : (c <= 66717 || (c >= 66736 && c <= 66771)))
                : (c <= 66811 || (c < 66928
                  ? (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)
                  : (c <= 66938 || (c >= 66940 && c <= 66954)))))))))))
        : (c <= 66962 || (c < 68864
          ? (c < 67828
            ? (c < 67506
              ? (c < 67072
                ? (c < 66979
                  ? (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)
                  : (c <= 66993 || (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)))
                : (c <= 67382 || (c < 67456
                  ? (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)
                  : (c <= 67461 || (c >= 67463 && c <= 67504)))))
              : (c <= 67514 || (c < 67644
                ? (c < 67594
                  ? (c < 67592
                    ? (c >= 67584 && c <= 67589)
                    : c <= 67592)
                  : (c <= 67637 || (c >= 67639 && c <= 67640)))
                : (c <= 67644 || (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c >= 67808 && c <= 67826)))))))
            : (c <= 67829 || (c < 68224
              ? (c < 68096
                ? (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c >= 68030 && c <= 68031)))
                : (c <= 68096 || (c < 68121
                  ? (c < 68117
                    ? (c >= 68112 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c >= 68192 && c <= 68220)))))
              : (c <= 68252 || (c < 68448
                ? (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68324)
                  : (c <= 68405 || (c >= 68416 && c <= 68437)))
                : (c <= 68466 || (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c >= 68800 && c <= 68850)))))))))
          : (c <= 68899 || (c < 70106
            ? (c < 69749
              ? (c < 69488
                ? (c < 69376
                  ? (c < 69296
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69445)))
                : (c <= 69505 || (c < 69635
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69687 || (c >= 69745 && c <= 69746)))))
              : (c <= 69749 || (c < 69959
                ? (c < 69891
                  ? (c < 69840
                    ? (c >= 69763 && c <= 69807)
                    : c <= 69864)
                  : (c <= 69926 || c == 69956))
                : (c <= 69959 || (c < 70019
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70002)
                    : c <= 70006)
                  : (c <= 70066 || (c >= 70081 && c <= 70084)))))))
            : (c <= 70106 || (c < 70405
              ? (c < 70280
                ? (c < 70163
                  ? (c < 70144
                    ? c == 70108
                    : c <= 70161)
                  : (c <= 70187 || (c >= 70272 && c <= 70278)))
                : (c <= 70280 || (c < 70303
                  ? (c < 70287
                    ? (c >= 70282 && c <= 70285)
                    : c <= 70301)
                  : (c <= 70312 || (c >= 70320 && c <= 70366)))))
              : (c <= 70412 || (c < 70453
                ? (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c >= 70450 && c <= 70451)))
                : (c <= 70457 || (c < 70493
                  ? (c < 70480
                    ? c == 70461
                    : c <= 70480)
                  : (c <= 70497 || (c >= 70656 && c <= 70708)))))))))))))
      : (c <= 70730 || (c < 119894
        ? (c < 73056
          ? (c < 72001
            ? (c < 71424
              ? (c < 71128
                ? (c < 70852
                  ? (c < 70784
                    ? (c >= 70751 && c <= 70753)
                    : c <= 70831)
                  : (c <= 70853 || (c < 71040
                    ? c == 70855
                    : c <= 71086)))
                : (c <= 71131 || (c < 71296
                  ? (c < 71236
                    ? (c >= 71168 && c <= 71215)
                    : c <= 71236)
                  : (c <= 71338 || c == 71352))))
              : (c <= 71450 || (c < 71945
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71723)
                  : (c <= 71903 || (c >= 71935 && c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71983 || c == 71999))))))
            : (c <= 72001 || (c < 72349
              ? (c < 72192
                ? (c < 72161
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72144)
                  : (c <= 72161 || c == 72163))
                : (c <= 72192 || (c < 72272
                  ? (c < 72250
                    ? (c >= 72203 && c <= 72242)
                    : c <= 72250)
                  : (c <= 72272 || (c >= 72284 && c <= 72329)))))
              : (c <= 72349 || (c < 72818
                ? (c < 72714
                  ? (c < 72704
                    ? (c >= 72368 && c <= 72440)
                    : c <= 72712)
                  : (c <= 72750 || c == 72768))
                : (c <= 72847 || (c < 72971
                  ? (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)
                  : (c <= 73008 || c == 73030))))))))
          : (c <= 73061 || (c < 93952
            ? (c < 82944
              ? (c < 73728
                ? (c < 73112
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73097)
                  : (c <= 73112 || (c < 73648
                    ? (c >= 73440 && c <= 73458)
                    : c <= 73648)))
                : (c <= 74649 || (c < 77712
                  ? (c < 74880
                    ? (c >= 74752 && c <= 74862)
                    : c <= 75075)
                  : (c <= 77808 || (c >= 77824 && c <= 78894)))))
              : (c <= 83526 || (c < 92928
                ? (c < 92784
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92862 || (c >= 92880 && c <= 92909)))
                : (c <= 92975 || (c < 93053
                  ? (c < 93027
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93047)
                  : (c <= 93071 || (c >= 93760 && c <= 93823)))))))
            : (c <= 94026 || (c < 110589
              ? (c < 94208
                ? (c < 94176
                  ? (c < 94099
                    ? c == 94032
                    : c <= 94111)
                  : (c <= 94177 || c == 94179))
                : (c <= 100343 || (c < 110576
                  ? (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)
                  : (c <= 110579 || (c >= 110581 && c <= 110587)))))
              : (c <= 110590 || (c < 113664
                ? (c < 110948
                  ? (c < 110928
                    ? (c >= 110592 && c <= 110882)
                    : c <= 110930)
                  : (c <= 110951 || (c >= 110960 && c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c >= 119808 && c <= 119892)))))))))))
        : (c <= 119964 || (c < 125259
          ? (c < 120572
            ? (c < 120086
              ? (c < 119995
                ? (c < 119973
                  ? (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)
                  : (c <= 119974 || (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)))
                : (c <= 119995 || (c < 120071
                  ? (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)
                  : (c <= 120074 || (c >= 120077 && c <= 120084)))))
              : (c <= 120092 || (c < 120138
                ? (c < 120128
                  ? (c < 120123
                    ? (c >= 120094 && c <= 120121)
                    : c <= 120126)
                  : (c <= 120132 || c == 120134))
                : (c <= 120144 || (c < 120514
                  ? (c < 120488
                    ? (c >= 120146 && c <= 120485)
                    : c <= 120512)
                  : (c <= 120538 || (c >= 120540 && c <= 120570)))))))
            : (c <= 120596 || (c < 123191
              ? (c < 120714
                ? (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c >= 120688 && c <= 120712)))
                : (c <= 120744 || (c < 122624
                  ? (c < 120772
                    ? (c >= 120746 && c <= 120770)
                    : c <= 120779)
                  : (c <= 122654 || (c >= 123136 && c <= 123180)))))
              : (c <= 123197 || (c < 124904
                ? (c < 123584
                  ? (c < 123536
                    ? c == 123214
                    : c <= 123565)
                  : (c <= 123627 || (c >= 124896 && c <= 124902)))
                : (c <= 124907 || (c < 124928
                  ? (c < 124912
                    ? (c >= 124909 && c <= 124910)
                    : c <= 124926)
                  : (c <= 125124 || (c >= 125184 && c <= 125251)))))))))
          : (c <= 125259 || (c < 126559
            ? (c < 126535
              ? (c < 126505
                ? (c < 126497
                  ? (c < 126469
                    ? (c >= 126464 && c <= 126467)
                    : c <= 126495)
                  : (c <= 126498 || (c < 126503
                    ? c == 126500
                    : c <= 126503)))
                : (c <= 126514 || (c < 126523
                  ? (c < 126521
                    ? (c >= 126516 && c <= 126519)
                    : c <= 126521)
                  : (c <= 126523 || c == 126530))))
              : (c <= 126535 || (c < 126548
                ? (c < 126541
                  ? (c < 126539
                    ? c == 126537
                    : c <= 126539)
                  : (c <= 126543 || (c >= 126545 && c <= 126546)))
                : (c <= 126548 || (c < 126555
                  ? (c < 126553
                    ? c == 126551
                    : c <= 126553)
                  : (c <= 126555 || c == 126557))))))
            : (c <= 126559 || (c < 126625
              ? (c < 126580
                ? (c < 126567
                  ? (c < 126564
                    ? (c >= 126561 && c <= 126562)
                    : c <= 126564)
                  : (c <= 126570 || (c >= 126572 && c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c >= 126603 && c <= 126619)))))
              : (c <= 126627 || (c < 177984
                ? (c < 131072
                  ? (c < 126635
                    ? (c >= 126629 && c <= 126633)
                    : c <= 126651)
                  : (c <= 173791 || (c >= 173824 && c <= 177976)))
                : (c <= 178205 || (c < 194560
                  ? (c < 183984
                    ? (c >= 178208 && c <= 183969)
                    : c <= 191456)
                  : (c <= 195101 || (c >= 196608 && c <= 201546)))))))))))))))));
}

static inline bool sym_name_character_set_4(int32_t c) {
  return (c < 43616
    ? (c < 3782
      ? (c < 2748
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'a' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 891
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))))))))))
        : (c <= 2757 || (c < 3168
          ? (c < 2958
            ? (c < 2866
              ? (c < 2809
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))
                : (c <= 2815 || (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))))
              : (c <= 2867 || (c < 2908
                ? (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)))
                : (c <= 2909 || (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))))))
            : (c <= 2960 || (c < 3031
              ? (c < 2984
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))
                : (c <= 2986 || (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))))
              : (c <= 3031 || (c < 3132
                ? (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)))))))))
          : (c <= 3171 || (c < 3450
            ? (c < 3293
              ? (c < 3242
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))
                : (c <= 3251 || (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))))
              : (c <= 3294 || (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3396 || (c < 3412
                  ? (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)
                  : (c <= 3415 || (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)))))))
            : (c <= 3455 || (c < 3570
              ? (c < 3520
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)
                  : (c <= 3505 || (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)))
                : (c <= 3526 || (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)))))
              : (c <= 3571 || (c < 3718
                ? (c < 3664
                  ? (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)
                  : (c <= 3673 || (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))))))))))
      : (c <= 3782 || (c < 8025
        ? (c < 5888
          ? (c < 4688
            ? (c < 3953
              ? (c < 3872
                ? (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || (c < 3864
                    ? c == 3840
                    : c <= 3865)))
                : (c <= 3881 || (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)))))
              : (c <= 3972 || (c < 4256
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))))
            : (c <= 4694 || (c < 4882
              ? (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))))
              : (c <= 4885 || (c < 5112
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))))))))
          : (c <= 5909 || (c < 6688
            ? (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))
                : (c <= 6099 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))))
              : (c <= 6264 || (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))))
            : (c <= 6750 || (c < 7232
              ? (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)))))
              : (c <= 7241 || (c < 7380
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))))))))
        : (c <= 8025 || (c < 11720
          ? (c < 8458
            ? (c < 8178
              ? (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))))
              : (c <= 8180 || (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))))
            : (c <= 8467 || (c < 11499
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))))
              : (c <= 11507 || (c < 11647
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))))))
          : (c <= 11726 || (c < 42623
            ? (c < 12540
              ? (c < 12337
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12442 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))))
              : (c <= 12543 || (c < 19968
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)))))))
            : (c <= 42737 || (c < 43232
              ? (c < 42965
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)))
                : (c <= 42969 || (c < 43072
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)))))
              : (c <= 43255 || (c < 43471
                ? (c < 43312
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43309)
                  : (c <= 43347 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))))
    : (c <= 43638 || (c < 71453
      ? (c < 67639
        ? (c < 65345
          ? (c < 64312
            ? (c < 43888
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)))))
              : (c <= 44010 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))))))
            : (c <= 64316 || (c < 65075
              ? (c < 64612
                ? (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)))))
              : (c <= 65076 || (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65101 && c <= 65103)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)))))))))
          : (c <= 65370 || (c < 66513
            ? (c < 65664
              ? (c < 65536
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)))))
              : (c <= 65786 || (c < 66304
                ? (c < 66176
                  ? (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)
                  : (c <= 66204 || (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))))))
            : (c <= 66517 || (c < 66979
              ? (c < 66864
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))))
              : (c <= 66993 || (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || (c < 67594
                    ? c == 67592
                    : c <= 67637)))))))))))
        : (c <= 67640 || (c < 69956
          ? (c < 68448
            ? (c < 68101
              ? (c < 67828
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)))))
              : (c <= 68102 || (c < 68192
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68912
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))
                : (c <= 68921 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))))
              : (c <= 69456 || (c < 69759
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)
                  : (c <= 69622 || (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)))
                : (c <= 69818 || (c < 69872
                  ? (c < 69840
                    ? c == 69826
                    : c <= 69864)
                  : (c <= 69881 || (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)))))))))
          : (c <= 69959 || (c < 70459
            ? (c < 70282
              ? (c < 70108
                ? (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70003)
                    : c <= 70006)
                  : (c <= 70084 || (c < 70094
                    ? (c >= 70089 && c <= 70092)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70206
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70199)
                  : (c <= 70206 || (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)))))
              : (c <= 70285 || (c < 70405
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70378 || (c < 70400
                    ? (c >= 70384 && c <= 70393)
                    : c <= 70403)))
                : (c <= 70412 || (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))))))
            : (c <= 70468 || (c < 70855
              ? (c < 70502
                ? (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || (c < 70493
                    ? c == 70487
                    : c <= 70499)))
                : (c <= 70508 || (c < 70736
                  ? (c < 70656
                    ? (c >= 70512 && c <= 70516)
                    : c <= 70730)
                  : (c <= 70745 || (c < 70784
                    ? (c >= 70750 && c <= 70753)
                    : c <= 70853)))))
              : (c <= 70855 || (c < 71236
                ? (c < 71096
                  ? (c < 71040
                    ? (c >= 70864 && c <= 70873)
                    : c <= 71093)
                  : (c <= 71104 || (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)))
                : (c <= 71236 || (c < 71360
                  ? (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)
                  : (c <= 71369 || (c >= 71424 && c <= 71450)))))))))))))
      : (c <= 71467 || (c < 119973
        ? (c < 77824
          ? (c < 72760
            ? (c < 72016
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71472 && c <= 71481)
                    : c <= 71494)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))))
              : (c <= 72025 || (c < 72263
                ? (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72254)))
                : (c <= 72263 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72345)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))))
            : (c <= 72768 || (c < 73056
              ? (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? (c >= 72784 && c <= 72793)
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c < 73040
                    ? (c >= 73023 && c <= 73031)
                    : c <= 73049)))))
              : (c <= 73061 || (c < 73440
                ? (c < 73104
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73102)
                  : (c <= 73105 || (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)))
                : (c <= 73462 || (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)))))))))
          : (c <= 78894 || (c < 110576
            ? (c < 93027
              ? (c < 92864
                ? (c < 92736
                  ? (c < 92160
                    ? (c >= 82944 && c <= 83526)
                    : c <= 92728)
                  : (c <= 92766 || (c < 92784
                    ? (c >= 92768 && c <= 92777)
                    : c <= 92862)))
                : (c <= 92873 || (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))))
              : (c <= 93047 || (c < 94176
                ? (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c < 94095
                    ? (c >= 94031 && c <= 94087)
                    : c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))))))
            : (c <= 110579 || (c < 118528
              ? (c < 110960
                ? (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)))
                : (c <= 111355 || (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)))))
              : (c <= 118573 || (c < 119210
                ? (c < 119149
                  ? (c < 119141
                    ? (c >= 118576 && c <= 118598)
                    : c <= 119145)
                  : (c <= 119154 || (c < 119173
                    ? (c >= 119163 && c <= 119170)
                    : c <= 119179)))
                : (c <= 119213 || (c < 119894
                  ? (c < 119808
                    ? (c >= 119362 && c <= 119364)
                    : c <= 119892)
                  : (c <= 119964 || (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_name_character_set_5(int32_t c) {
  return (c < 43616
    ? (c < 3782
      ? (c < 2748
        ? (c < 2045
          ? (c < 1015
            ? (c < 710
              ? (c < 181
                ? (c < '_'
                  ? (c < 'A'
                    ? (c >= '0' && c <= '9')
                    : c <= 'Z')
                  : (c <= '_' || (c < 170
                    ? (c >= 'b' && c <= 'z')
                    : c <= 170)))
                : (c <= 181 || (c < 192
                  ? (c < 186
                    ? c == 183
                    : c <= 186)
                  : (c <= 214 || (c < 248
                    ? (c >= 216 && c <= 246)
                    : c <= 705)))))
              : (c <= 721 || (c < 891
                ? (c < 750
                  ? (c < 748
                    ? (c >= 736 && c <= 740)
                    : c <= 748)
                  : (c <= 750 || (c < 886
                    ? (c >= 768 && c <= 884)
                    : c <= 887)))
                : (c <= 893 || (c < 908
                  ? (c < 902
                    ? c == 895
                    : c <= 906)
                  : (c <= 908 || (c < 931
                    ? (c >= 910 && c <= 929)
                    : c <= 1013)))))))
            : (c <= 1153 || (c < 1519
              ? (c < 1425
                ? (c < 1329
                  ? (c < 1162
                    ? (c >= 1155 && c <= 1159)
                    : c <= 1327)
                  : (c <= 1366 || (c < 1376
                    ? c == 1369
                    : c <= 1416)))
                : (c <= 1469 || (c < 1476
                  ? (c < 1473
                    ? c == 1471
                    : c <= 1474)
                  : (c <= 1477 || (c < 1488
                    ? c == 1479
                    : c <= 1514)))))
              : (c <= 1522 || (c < 1770
                ? (c < 1646
                  ? (c < 1568
                    ? (c >= 1552 && c <= 1562)
                    : c <= 1641)
                  : (c <= 1747 || (c < 1759
                    ? (c >= 1749 && c <= 1756)
                    : c <= 1768)))
                : (c <= 1788 || (c < 1869
                  ? (c < 1808
                    ? c == 1791
                    : c <= 1866)
                  : (c <= 1969 || (c < 2042
                    ? (c >= 1984 && c <= 2037)
                    : c <= 2042)))))))))
          : (c <= 2045 || (c < 2558
            ? (c < 2451
              ? (c < 2200
                ? (c < 2144
                  ? (c < 2112
                    ? (c >= 2048 && c <= 2093)
                    : c <= 2139)
                  : (c <= 2154 || (c < 2185
                    ? (c >= 2160 && c <= 2183)
                    : c <= 2190)))
                : (c <= 2273 || (c < 2417
                  ? (c < 2406
                    ? (c >= 2275 && c <= 2403)
                    : c <= 2415)
                  : (c <= 2435 || (c < 2447
                    ? (c >= 2437 && c <= 2444)
                    : c <= 2448)))))
              : (c <= 2472 || (c < 2507
                ? (c < 2486
                  ? (c < 2482
                    ? (c >= 2474 && c <= 2480)
                    : c <= 2482)
                  : (c <= 2489 || (c < 2503
                    ? (c >= 2492 && c <= 2500)
                    : c <= 2504)))
                : (c <= 2510 || (c < 2527
                  ? (c < 2524
                    ? c == 2519
                    : c <= 2525)
                  : (c <= 2531 || (c < 2556
                    ? (c >= 2534 && c <= 2545)
                    : c <= 2556)))))))
            : (c <= 2558 || (c < 2635
              ? (c < 2610
                ? (c < 2575
                  ? (c < 2565
                    ? (c >= 2561 && c <= 2563)
                    : c <= 2570)
                  : (c <= 2576 || (c < 2602
                    ? (c >= 2579 && c <= 2600)
                    : c <= 2608)))
                : (c <= 2611 || (c < 2620
                  ? (c < 2616
                    ? (c >= 2613 && c <= 2614)
                    : c <= 2617)
                  : (c <= 2620 || (c < 2631
                    ? (c >= 2622 && c <= 2626)
                    : c <= 2632)))))
              : (c <= 2637 || (c < 2693
                ? (c < 2654
                  ? (c < 2649
                    ? c == 2641
                    : c <= 2652)
                  : (c <= 2654 || (c < 2689
                    ? (c >= 2662 && c <= 2677)
                    : c <= 2691)))
                : (c <= 2701 || (c < 2730
                  ? (c < 2707
                    ? (c >= 2703 && c <= 2705)
                    : c <= 2728)
                  : (c <= 2736 || (c < 2741
                    ? (c >= 2738 && c <= 2739)
                    : c <= 2745)))))))))))
        : (c <= 2757 || (c < 3168
          ? (c < 2958
            ? (c < 2866
              ? (c < 2809
                ? (c < 2768
                  ? (c < 2763
                    ? (c >= 2759 && c <= 2761)
                    : c <= 2765)
                  : (c <= 2768 || (c < 2790
                    ? (c >= 2784 && c <= 2787)
                    : c <= 2799)))
                : (c <= 2815 || (c < 2831
                  ? (c < 2821
                    ? (c >= 2817 && c <= 2819)
                    : c <= 2828)
                  : (c <= 2832 || (c < 2858
                    ? (c >= 2835 && c <= 2856)
                    : c <= 2864)))))
              : (c <= 2867 || (c < 2908
                ? (c < 2887
                  ? (c < 2876
                    ? (c >= 2869 && c <= 2873)
                    : c <= 2884)
                  : (c <= 2888 || (c < 2901
                    ? (c >= 2891 && c <= 2893)
                    : c <= 2903)))
                : (c <= 2909 || (c < 2929
                  ? (c < 2918
                    ? (c >= 2911 && c <= 2915)
                    : c <= 2927)
                  : (c <= 2929 || (c < 2949
                    ? (c >= 2946 && c <= 2947)
                    : c <= 2954)))))))
            : (c <= 2960 || (c < 3031
              ? (c < 2984
                ? (c < 2972
                  ? (c < 2969
                    ? (c >= 2962 && c <= 2965)
                    : c <= 2970)
                  : (c <= 2972 || (c < 2979
                    ? (c >= 2974 && c <= 2975)
                    : c <= 2980)))
                : (c <= 2986 || (c < 3014
                  ? (c < 3006
                    ? (c >= 2990 && c <= 3001)
                    : c <= 3010)
                  : (c <= 3016 || (c < 3024
                    ? (c >= 3018 && c <= 3021)
                    : c <= 3024)))))
              : (c <= 3031 || (c < 3132
                ? (c < 3086
                  ? (c < 3072
                    ? (c >= 3046 && c <= 3055)
                    : c <= 3084)
                  : (c <= 3088 || (c < 3114
                    ? (c >= 3090 && c <= 3112)
                    : c <= 3129)))
                : (c <= 3140 || (c < 3157
                  ? (c < 3146
                    ? (c >= 3142 && c <= 3144)
                    : c <= 3149)
                  : (c <= 3158 || (c < 3165
                    ? (c >= 3160 && c <= 3162)
                    : c <= 3165)))))))))
          : (c <= 3171 || (c < 3450
            ? (c < 3293
              ? (c < 3242
                ? (c < 3205
                  ? (c < 3200
                    ? (c >= 3174 && c <= 3183)
                    : c <= 3203)
                  : (c <= 3212 || (c < 3218
                    ? (c >= 3214 && c <= 3216)
                    : c <= 3240)))
                : (c <= 3251 || (c < 3270
                  ? (c < 3260
                    ? (c >= 3253 && c <= 3257)
                    : c <= 3268)
                  : (c <= 3272 || (c < 3285
                    ? (c >= 3274 && c <= 3277)
                    : c <= 3286)))))
              : (c <= 3294 || (c < 3346
                ? (c < 3313
                  ? (c < 3302
                    ? (c >= 3296 && c <= 3299)
                    : c <= 3311)
                  : (c <= 3314 || (c < 3342
                    ? (c >= 3328 && c <= 3340)
                    : c <= 3344)))
                : (c <= 3396 || (c < 3412
                  ? (c < 3402
                    ? (c >= 3398 && c <= 3400)
                    : c <= 3406)
                  : (c <= 3415 || (c < 3430
                    ? (c >= 3423 && c <= 3427)
                    : c <= 3439)))))))
            : (c <= 3455 || (c < 3570
              ? (c < 3520
                ? (c < 3482
                  ? (c < 3461
                    ? (c >= 3457 && c <= 3459)
                    : c <= 3478)
                  : (c <= 3505 || (c < 3517
                    ? (c >= 3507 && c <= 3515)
                    : c <= 3517)))
                : (c <= 3526 || (c < 3542
                  ? (c < 3535
                    ? c == 3530
                    : c <= 3540)
                  : (c <= 3542 || (c < 3558
                    ? (c >= 3544 && c <= 3551)
                    : c <= 3567)))))
              : (c <= 3571 || (c < 3718
                ? (c < 3664
                  ? (c < 3648
                    ? (c >= 3585 && c <= 3642)
                    : c <= 3662)
                  : (c <= 3673 || (c < 3716
                    ? (c >= 3713 && c <= 3714)
                    : c <= 3716)))
                : (c <= 3722 || (c < 3751
                  ? (c < 3749
                    ? (c >= 3724 && c <= 3747)
                    : c <= 3749)
                  : (c <= 3773 || (c >= 3776 && c <= 3780)))))))))))))
      : (c <= 3782 || (c < 8025
        ? (c < 5888
          ? (c < 4688
            ? (c < 3953
              ? (c < 3872
                ? (c < 3804
                  ? (c < 3792
                    ? (c >= 3784 && c <= 3789)
                    : c <= 3801)
                  : (c <= 3807 || (c < 3864
                    ? c == 3840
                    : c <= 3865)))
                : (c <= 3881 || (c < 3897
                  ? (c < 3895
                    ? c == 3893
                    : c <= 3895)
                  : (c <= 3897 || (c < 3913
                    ? (c >= 3902 && c <= 3911)
                    : c <= 3948)))))
              : (c <= 3972 || (c < 4256
                ? (c < 4038
                  ? (c < 3993
                    ? (c >= 3974 && c <= 3991)
                    : c <= 4028)
                  : (c <= 4038 || (c < 4176
                    ? (c >= 4096 && c <= 4169)
                    : c <= 4253)))
                : (c <= 4293 || (c < 4304
                  ? (c < 4301
                    ? c == 4295
                    : c <= 4301)
                  : (c <= 4346 || (c < 4682
                    ? (c >= 4348 && c <= 4680)
                    : c <= 4685)))))))
            : (c <= 4694 || (c < 4882
              ? (c < 4786
                ? (c < 4704
                  ? (c < 4698
                    ? c == 4696
                    : c <= 4701)
                  : (c <= 4744 || (c < 4752
                    ? (c >= 4746 && c <= 4749)
                    : c <= 4784)))
                : (c <= 4789 || (c < 4802
                  ? (c < 4800
                    ? (c >= 4792 && c <= 4798)
                    : c <= 4800)
                  : (c <= 4805 || (c < 4824
                    ? (c >= 4808 && c <= 4822)
                    : c <= 4880)))))
              : (c <= 4885 || (c < 5112
                ? (c < 4969
                  ? (c < 4957
                    ? (c >= 4888 && c <= 4954)
                    : c <= 4959)
                  : (c <= 4977 || (c < 5024
                    ? (c >= 4992 && c <= 5007)
                    : c <= 5109)))
                : (c <= 5117 || (c < 5761
                  ? (c < 5743
                    ? (c >= 5121 && c <= 5740)
                    : c <= 5759)
                  : (c <= 5786 || (c < 5870
                    ? (c >= 5792 && c <= 5866)
                    : c <= 5880)))))))))
          : (c <= 5909 || (c < 6688
            ? (c < 6176
              ? (c < 6016
                ? (c < 5984
                  ? (c < 5952
                    ? (c >= 5919 && c <= 5940)
                    : c <= 5971)
                  : (c <= 5996 || (c < 6002
                    ? (c >= 5998 && c <= 6000)
                    : c <= 6003)))
                : (c <= 6099 || (c < 6112
                  ? (c < 6108
                    ? c == 6103
                    : c <= 6109)
                  : (c <= 6121 || (c < 6159
                    ? (c >= 6155 && c <= 6157)
                    : c <= 6169)))))
              : (c <= 6264 || (c < 6470
                ? (c < 6400
                  ? (c < 6320
                    ? (c >= 6272 && c <= 6314)
                    : c <= 6389)
                  : (c <= 6430 || (c < 6448
                    ? (c >= 6432 && c <= 6443)
                    : c <= 6459)))
                : (c <= 6509 || (c < 6576
                  ? (c < 6528
                    ? (c >= 6512 && c <= 6516)
                    : c <= 6571)
                  : (c <= 6601 || (c < 6656
                    ? (c >= 6608 && c <= 6618)
                    : c <= 6683)))))))
            : (c <= 6750 || (c < 7232
              ? (c < 6847
                ? (c < 6800
                  ? (c < 6783
                    ? (c >= 6752 && c <= 6780)
                    : c <= 6793)
                  : (c <= 6809 || (c < 6832
                    ? c == 6823
                    : c <= 6845)))
                : (c <= 6862 || (c < 7019
                  ? (c < 6992
                    ? (c >= 6912 && c <= 6988)
                    : c <= 7001)
                  : (c <= 7027 || (c < 7168
                    ? (c >= 7040 && c <= 7155)
                    : c <= 7223)))))
              : (c <= 7241 || (c < 7380
                ? (c < 7312
                  ? (c < 7296
                    ? (c >= 7245 && c <= 7293)
                    : c <= 7304)
                  : (c <= 7354 || (c < 7376
                    ? (c >= 7357 && c <= 7359)
                    : c <= 7378)))
                : (c <= 7418 || (c < 7968
                  ? (c < 7960
                    ? (c >= 7424 && c <= 7957)
                    : c <= 7965)
                  : (c <= 8005 || (c < 8016
                    ? (c >= 8008 && c <= 8013)
                    : c <= 8023)))))))))))
        : (c <= 8025 || (c < 11720
          ? (c < 8458
            ? (c < 8178
              ? (c < 8126
                ? (c < 8031
                  ? (c < 8029
                    ? c == 8027
                    : c <= 8029)
                  : (c <= 8061 || (c < 8118
                    ? (c >= 8064 && c <= 8116)
                    : c <= 8124)))
                : (c <= 8126 || (c < 8144
                  ? (c < 8134
                    ? (c >= 8130 && c <= 8132)
                    : c <= 8140)
                  : (c <= 8147 || (c < 8160
                    ? (c >= 8150 && c <= 8155)
                    : c <= 8172)))))
              : (c <= 8180 || (c < 8336
                ? (c < 8276
                  ? (c < 8255
                    ? (c >= 8182 && c <= 8188)
                    : c <= 8256)
                  : (c <= 8276 || (c < 8319
                    ? c == 8305
                    : c <= 8319)))
                : (c <= 8348 || (c < 8421
                  ? (c < 8417
                    ? (c >= 8400 && c <= 8412)
                    : c <= 8417)
                  : (c <= 8432 || (c < 8455
                    ? c == 8450
                    : c <= 8455)))))))
            : (c <= 8467 || (c < 11499
              ? (c < 8490
                ? (c < 8484
                  ? (c < 8472
                    ? c == 8469
                    : c <= 8477)
                  : (c <= 8484 || (c < 8488
                    ? c == 8486
                    : c <= 8488)))
                : (c <= 8505 || (c < 8526
                  ? (c < 8517
                    ? (c >= 8508 && c <= 8511)
                    : c <= 8521)
                  : (c <= 8526 || (c < 11264
                    ? (c >= 8544 && c <= 8584)
                    : c <= 11492)))))
              : (c <= 11507 || (c < 11647
                ? (c < 11565
                  ? (c < 11559
                    ? (c >= 11520 && c <= 11557)
                    : c <= 11559)
                  : (c <= 11565 || (c < 11631
                    ? (c >= 11568 && c <= 11623)
                    : c <= 11631)))
                : (c <= 11670 || (c < 11696
                  ? (c < 11688
                    ? (c >= 11680 && c <= 11686)
                    : c <= 11694)
                  : (c <= 11702 || (c < 11712
                    ? (c >= 11704 && c <= 11710)
                    : c <= 11718)))))))))
          : (c <= 11726 || (c < 42623
            ? (c < 12540
              ? (c < 12337
                ? (c < 11744
                  ? (c < 11736
                    ? (c >= 11728 && c <= 11734)
                    : c <= 11742)
                  : (c <= 11775 || (c < 12321
                    ? (c >= 12293 && c <= 12295)
                    : c <= 12335)))
                : (c <= 12341 || (c < 12441
                  ? (c < 12353
                    ? (c >= 12344 && c <= 12348)
                    : c <= 12438)
                  : (c <= 12442 || (c < 12449
                    ? (c >= 12445 && c <= 12447)
                    : c <= 12538)))))
              : (c <= 12543 || (c < 19968
                ? (c < 12704
                  ? (c < 12593
                    ? (c >= 12549 && c <= 12591)
                    : c <= 12686)
                  : (c <= 12735 || (c < 13312
                    ? (c >= 12784 && c <= 12799)
                    : c <= 19903)))
                : (c <= 42124 || (c < 42512
                  ? (c < 42240
                    ? (c >= 42192 && c <= 42237)
                    : c <= 42508)
                  : (c <= 42539 || (c < 42612
                    ? (c >= 42560 && c <= 42607)
                    : c <= 42621)))))))
            : (c <= 42737 || (c < 43232
              ? (c < 42965
                ? (c < 42891
                  ? (c < 42786
                    ? (c >= 42775 && c <= 42783)
                    : c <= 42888)
                  : (c <= 42954 || (c < 42963
                    ? (c >= 42960 && c <= 42961)
                    : c <= 42963)))
                : (c <= 42969 || (c < 43072
                  ? (c < 43052
                    ? (c >= 42994 && c <= 43047)
                    : c <= 43052)
                  : (c <= 43123 || (c < 43216
                    ? (c >= 43136 && c <= 43205)
                    : c <= 43225)))))
              : (c <= 43255 || (c < 43471
                ? (c < 43312
                  ? (c < 43261
                    ? c == 43259
                    : c <= 43309)
                  : (c <= 43347 || (c < 43392
                    ? (c >= 43360 && c <= 43388)
                    : c <= 43456)))
                : (c <= 43481 || (c < 43584
                  ? (c < 43520
                    ? (c >= 43488 && c <= 43518)
                    : c <= 43574)
                  : (c <= 43597 || (c >= 43600 && c <= 43609)))))))))))))))
    : (c <= 43638 || (c < 71453
      ? (c < 67639
        ? (c < 65345
          ? (c < 64312
            ? (c < 43888
              ? (c < 43785
                ? (c < 43744
                  ? (c < 43739
                    ? (c >= 43642 && c <= 43714)
                    : c <= 43741)
                  : (c <= 43759 || (c < 43777
                    ? (c >= 43762 && c <= 43766)
                    : c <= 43782)))
                : (c <= 43790 || (c < 43816
                  ? (c < 43808
                    ? (c >= 43793 && c <= 43798)
                    : c <= 43814)
                  : (c <= 43822 || (c < 43868
                    ? (c >= 43824 && c <= 43866)
                    : c <= 43881)))))
              : (c <= 44010 || (c < 63744
                ? (c < 44032
                  ? (c < 44016
                    ? (c >= 44012 && c <= 44013)
                    : c <= 44025)
                  : (c <= 55203 || (c < 55243
                    ? (c >= 55216 && c <= 55238)
                    : c <= 55291)))
                : (c <= 64109 || (c < 64275
                  ? (c < 64256
                    ? (c >= 64112 && c <= 64217)
                    : c <= 64262)
                  : (c <= 64279 || (c < 64298
                    ? (c >= 64285 && c <= 64296)
                    : c <= 64310)))))))
            : (c <= 64316 || (c < 65075
              ? (c < 64612
                ? (c < 64323
                  ? (c < 64320
                    ? c == 64318
                    : c <= 64321)
                  : (c <= 64324 || (c < 64467
                    ? (c >= 64326 && c <= 64433)
                    : c <= 64605)))
                : (c <= 64829 || (c < 65008
                  ? (c < 64914
                    ? (c >= 64848 && c <= 64911)
                    : c <= 64967)
                  : (c <= 65017 || (c < 65056
                    ? (c >= 65024 && c <= 65039)
                    : c <= 65071)))))
              : (c <= 65076 || (c < 65147
                ? (c < 65139
                  ? (c < 65137
                    ? (c >= 65101 && c <= 65103)
                    : c <= 65137)
                  : (c <= 65139 || (c < 65145
                    ? c == 65143
                    : c <= 65145)))
                : (c <= 65147 || (c < 65296
                  ? (c < 65151
                    ? c == 65149
                    : c <= 65276)
                  : (c <= 65305 || (c < 65343
                    ? (c >= 65313 && c <= 65338)
                    : c <= 65343)))))))))
          : (c <= 65370 || (c < 66513
            ? (c < 65664
              ? (c < 65536
                ? (c < 65482
                  ? (c < 65474
                    ? (c >= 65382 && c <= 65470)
                    : c <= 65479)
                  : (c <= 65487 || (c < 65498
                    ? (c >= 65490 && c <= 65495)
                    : c <= 65500)))
                : (c <= 65547 || (c < 65596
                  ? (c < 65576
                    ? (c >= 65549 && c <= 65574)
                    : c <= 65594)
                  : (c <= 65597 || (c < 65616
                    ? (c >= 65599 && c <= 65613)
                    : c <= 65629)))))
              : (c <= 65786 || (c < 66304
                ? (c < 66176
                  ? (c < 66045
                    ? (c >= 65856 && c <= 65908)
                    : c <= 66045)
                  : (c <= 66204 || (c < 66272
                    ? (c >= 66208 && c <= 66256)
                    : c <= 66272)))
                : (c <= 66335 || (c < 66432
                  ? (c < 66384
                    ? (c >= 66349 && c <= 66378)
                    : c <= 66426)
                  : (c <= 66461 || (c < 66504
                    ? (c >= 66464 && c <= 66499)
                    : c <= 66511)))))))
            : (c <= 66517 || (c < 66979
              ? (c < 66864
                ? (c < 66736
                  ? (c < 66720
                    ? (c >= 66560 && c <= 66717)
                    : c <= 66729)
                  : (c <= 66771 || (c < 66816
                    ? (c >= 66776 && c <= 66811)
                    : c <= 66855)))
                : (c <= 66915 || (c < 66956
                  ? (c < 66940
                    ? (c >= 66928 && c <= 66938)
                    : c <= 66954)
                  : (c <= 66962 || (c < 66967
                    ? (c >= 66964 && c <= 66965)
                    : c <= 66977)))))
              : (c <= 66993 || (c < 67456
                ? (c < 67072
                  ? (c < 67003
                    ? (c >= 66995 && c <= 67001)
                    : c <= 67004)
                  : (c <= 67382 || (c < 67424
                    ? (c >= 67392 && c <= 67413)
                    : c <= 67431)))
                : (c <= 67461 || (c < 67584
                  ? (c < 67506
                    ? (c >= 67463 && c <= 67504)
                    : c <= 67514)
                  : (c <= 67589 || (c < 67594
                    ? c == 67592
                    : c <= 67637)))))))))))
        : (c <= 67640 || (c < 69956
          ? (c < 68448
            ? (c < 68101
              ? (c < 67828
                ? (c < 67680
                  ? (c < 67647
                    ? c == 67644
                    : c <= 67669)
                  : (c <= 67702 || (c < 67808
                    ? (c >= 67712 && c <= 67742)
                    : c <= 67826)))
                : (c <= 67829 || (c < 67968
                  ? (c < 67872
                    ? (c >= 67840 && c <= 67861)
                    : c <= 67897)
                  : (c <= 68023 || (c < 68096
                    ? (c >= 68030 && c <= 68031)
                    : c <= 68099)))))
              : (c <= 68102 || (c < 68192
                ? (c < 68121
                  ? (c < 68117
                    ? (c >= 68108 && c <= 68115)
                    : c <= 68119)
                  : (c <= 68149 || (c < 68159
                    ? (c >= 68152 && c <= 68154)
                    : c <= 68159)))
                : (c <= 68220 || (c < 68297
                  ? (c < 68288
                    ? (c >= 68224 && c <= 68252)
                    : c <= 68295)
                  : (c <= 68326 || (c < 68416
                    ? (c >= 68352 && c <= 68405)
                    : c <= 68437)))))))
            : (c <= 68466 || (c < 69424
              ? (c < 68912
                ? (c < 68736
                  ? (c < 68608
                    ? (c >= 68480 && c <= 68497)
                    : c <= 68680)
                  : (c <= 68786 || (c < 68864
                    ? (c >= 68800 && c <= 68850)
                    : c <= 68903)))
                : (c <= 68921 || (c < 69296
                  ? (c < 69291
                    ? (c >= 69248 && c <= 69289)
                    : c <= 69292)
                  : (c <= 69297 || (c < 69415
                    ? (c >= 69376 && c <= 69404)
                    : c <= 69415)))))
              : (c <= 69456 || (c < 69759
                ? (c < 69600
                  ? (c < 69552
                    ? (c >= 69488 && c <= 69509)
                    : c <= 69572)
                  : (c <= 69622 || (c < 69734
                    ? (c >= 69632 && c <= 69702)
                    : c <= 69749)))
                : (c <= 69818 || (c < 69872
                  ? (c < 69840
                    ? c == 69826
                    : c <= 69864)
                  : (c <= 69881 || (c < 69942
                    ? (c >= 69888 && c <= 69940)
                    : c <= 69951)))))))))
          : (c <= 69959 || (c < 70459
            ? (c < 70282
              ? (c < 70108
                ? (c < 70016
                  ? (c < 70006
                    ? (c >= 69968 && c <= 70003)
                    : c <= 70006)
                  : (c <= 70084 || (c < 70094
                    ? (c >= 70089 && c <= 70092)
                    : c <= 70106)))
                : (c <= 70108 || (c < 70206
                  ? (c < 70163
                    ? (c >= 70144 && c <= 70161)
                    : c <= 70199)
                  : (c <= 70206 || (c < 70280
                    ? (c >= 70272 && c <= 70278)
                    : c <= 70280)))))
              : (c <= 70285 || (c < 70405
                ? (c < 70320
                  ? (c < 70303
                    ? (c >= 70287 && c <= 70301)
                    : c <= 70312)
                  : (c <= 70378 || (c < 70400
                    ? (c >= 70384 && c <= 70393)
                    : c <= 70403)))
                : (c <= 70412 || (c < 70442
                  ? (c < 70419
                    ? (c >= 70415 && c <= 70416)
                    : c <= 70440)
                  : (c <= 70448 || (c < 70453
                    ? (c >= 70450 && c <= 70451)
                    : c <= 70457)))))))
            : (c <= 70468 || (c < 70855
              ? (c < 70502
                ? (c < 70480
                  ? (c < 70475
                    ? (c >= 70471 && c <= 70472)
                    : c <= 70477)
                  : (c <= 70480 || (c < 70493
                    ? c == 70487
                    : c <= 70499)))
                : (c <= 70508 || (c < 70736
                  ? (c < 70656
                    ? (c >= 70512 && c <= 70516)
                    : c <= 70730)
                  : (c <= 70745 || (c < 70784
                    ? (c >= 70750 && c <= 70753)
                    : c <= 70853)))))
              : (c <= 70855 || (c < 71236
                ? (c < 71096
                  ? (c < 71040
                    ? (c >= 70864 && c <= 70873)
                    : c <= 71093)
                  : (c <= 71104 || (c < 71168
                    ? (c >= 71128 && c <= 71133)
                    : c <= 71232)))
                : (c <= 71236 || (c < 71360
                  ? (c < 71296
                    ? (c >= 71248 && c <= 71257)
                    : c <= 71352)
                  : (c <= 71369 || (c >= 71424 && c <= 71450)))))))))))))
      : (c <= 71467 || (c < 119973
        ? (c < 77824
          ? (c < 72760
            ? (c < 72016
              ? (c < 71945
                ? (c < 71680
                  ? (c < 71488
                    ? (c >= 71472 && c <= 71481)
                    : c <= 71494)
                  : (c <= 71738 || (c < 71935
                    ? (c >= 71840 && c <= 71913)
                    : c <= 71942)))
                : (c <= 71945 || (c < 71960
                  ? (c < 71957
                    ? (c >= 71948 && c <= 71955)
                    : c <= 71958)
                  : (c <= 71989 || (c < 71995
                    ? (c >= 71991 && c <= 71992)
                    : c <= 72003)))))
              : (c <= 72025 || (c < 72263
                ? (c < 72154
                  ? (c < 72106
                    ? (c >= 72096 && c <= 72103)
                    : c <= 72151)
                  : (c <= 72161 || (c < 72192
                    ? (c >= 72163 && c <= 72164)
                    : c <= 72254)))
                : (c <= 72263 || (c < 72368
                  ? (c < 72349
                    ? (c >= 72272 && c <= 72345)
                    : c <= 72349)
                  : (c <= 72440 || (c < 72714
                    ? (c >= 72704 && c <= 72712)
                    : c <= 72758)))))))
            : (c <= 72768 || (c < 73056
              ? (c < 72968
                ? (c < 72850
                  ? (c < 72818
                    ? (c >= 72784 && c <= 72793)
                    : c <= 72847)
                  : (c <= 72871 || (c < 72960
                    ? (c >= 72873 && c <= 72886)
                    : c <= 72966)))
                : (c <= 72969 || (c < 73020
                  ? (c < 73018
                    ? (c >= 72971 && c <= 73014)
                    : c <= 73018)
                  : (c <= 73021 || (c < 73040
                    ? (c >= 73023 && c <= 73031)
                    : c <= 73049)))))
              : (c <= 73061 || (c < 73440
                ? (c < 73104
                  ? (c < 73066
                    ? (c >= 73063 && c <= 73064)
                    : c <= 73102)
                  : (c <= 73105 || (c < 73120
                    ? (c >= 73107 && c <= 73112)
                    : c <= 73129)))
                : (c <= 73462 || (c < 74752
                  ? (c < 73728
                    ? c == 73648
                    : c <= 74649)
                  : (c <= 74862 || (c < 77712
                    ? (c >= 74880 && c <= 75075)
                    : c <= 77808)))))))))
          : (c <= 78894 || (c < 110576
            ? (c < 93027
              ? (c < 92864
                ? (c < 92736
                  ? (c < 92160
                    ? (c >= 82944 && c <= 83526)
                    : c <= 92728)
                  : (c <= 92766 || (c < 92784
                    ? (c >= 92768 && c <= 92777)
                    : c <= 92862)))
                : (c <= 92873 || (c < 92928
                  ? (c < 92912
                    ? (c >= 92880 && c <= 92909)
                    : c <= 92916)
                  : (c <= 92982 || (c < 93008
                    ? (c >= 92992 && c <= 92995)
                    : c <= 93017)))))
              : (c <= 93047 || (c < 94176
                ? (c < 93952
                  ? (c < 93760
                    ? (c >= 93053 && c <= 93071)
                    : c <= 93823)
                  : (c <= 94026 || (c < 94095
                    ? (c >= 94031 && c <= 94087)
                    : c <= 94111)))
                : (c <= 94177 || (c < 94208
                  ? (c < 94192
                    ? (c >= 94179 && c <= 94180)
                    : c <= 94193)
                  : (c <= 100343 || (c < 101632
                    ? (c >= 100352 && c <= 101589)
                    : c <= 101640)))))))
            : (c <= 110579 || (c < 118528
              ? (c < 110960
                ? (c < 110592
                  ? (c < 110589
                    ? (c >= 110581 && c <= 110587)
                    : c <= 110590)
                  : (c <= 110882 || (c < 110948
                    ? (c >= 110928 && c <= 110930)
                    : c <= 110951)))
                : (c <= 111355 || (c < 113792
                  ? (c < 113776
                    ? (c >= 113664 && c <= 113770)
                    : c <= 113788)
                  : (c <= 113800 || (c < 113821
                    ? (c >= 113808 && c <= 113817)
                    : c <= 113822)))))
              : (c <= 118573 || (c < 119210
                ? (c < 119149
                  ? (c < 119141
                    ? (c >= 118576 && c <= 118598)
                    : c <= 119145)
                  : (c <= 119154 || (c < 119173
                    ? (c >= 119163 && c <= 119170)
                    : c <= 119179)))
                : (c <= 119213 || (c < 119894
                  ? (c < 119808
                    ? (c >= 119362 && c <= 119364)
                    : c <= 119892)
                  : (c <= 119964 || (c < 119970
                    ? (c >= 119966 && c <= 119967)
                    : c <= 119970)))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static inline bool sym_name_character_set_6(int32_t c) {
  return (c < 43642
    ? (c < 3792
      ? (c < 2763
        ? (c < 2112
          ? (c < 1162
            ? (c < 748
              ? (c < 186
                ? (c < 170
                  ? (c < 'a'
                    ? (c >= 'A' && c <= 'Z')
                    : c <= 'z')
                  : (c <= 170 || (c < 183
                    ? c == 181
                    : c <= 183)))
                : (c <= 186 || (c < 248
                  ? (c < 216
                    ? (c >= 192 && c <= 214)
                    : c <= 246)
                  : (c <= 705 || (c < 736
                    ? (c >= 710 && c <= 721)
                    : c <= 740)))))
              : (c <= 748 || (c < 902
                ? (c < 886
                  ? (c < 768
                    ? c == 750
                    : c <= 884)
                  : (c <= 887 || (c < 895
                    ? (c >= 891 && c <= 893)
                    : c <= 895)))
                : (c <= 906 || (c < 931
                  ? (c < 910
                    ? c == 908
                    : c <= 929)
                  : (c <= 1013 || (c < 1155
                    ? (c >= 1015 && c <= 1153)
                    : c <= 1159)))))))
            : (c <= 1327 || (c < 1568
              ? (c < 1473
                ? (c < 1376
                  ? (c < 1369
                    ? (c >= 1329 && c <= 1366)
                    : c <= 1369)
                  : (c <= 1416 || (c < 1471
                    ? (c >= 1425 && c <= 1469)
                    : c <= 1471)))
                : (c <= 1474 || (c < 1488
                  ? (c < 1479
                    ? (c >= 1476 && c <= 1477)
                    : c <= 1479)
                  : (c <= 1514 || (c < 1552
                    ? (c >= 1519 && c <= 1522)
                    : c <= 1562)))))
              : (c <= 1641 || (c < 1808
                ? (c < 1759
                  ? (c < 1749
                    ? (c >= 1646 && c <= 1747)
                    : c <= 1756)
                  : (c <= 1768 || (c < 1791
                    ? (c >= 1770 && c <= 1788)
                    : c <= 1791)))
                : (c <= 1866 || (c < 2042
                  ? (c < 1984
                    ? (c >= 1869 && c <= 1969)
                    : c <= 2037)
                  : (c <= 2042 || (c < 2048
                    ? c == 2045
                    : c <= 2093)))))))))
          : (c <= 2139 || (c < 2565
            ? (c < 2482
              ? (c < 2406
                ? (c < 2185
                  ? (c < 2160
                    ? (c >= 2144 && c <= 2154)
                    : c <= 2183)
                  : (c <= 2190 || (c < 2275
                    ? (c >= 2200 && c <= 2273)
                    : c <= 2403)))
                : (c <= 2415 || (c < 2447
                  ? (c < 2437
                    ? (c >= 2417 && c <= 2435)
                    : c <= 2444)
                  : (c <= 2448 || (c < 2474
                    ? (c >= 2451 && c <= 2472)
                    : c <= 2480)))))
              : (c <= 2482 || (c < 2524
                ? (c < 2503
                  ? (c < 2492
                    ? (c >= 2486 && c <= 2489)
                    : c <= 2500)
                  : (c <= 2504 || (c < 2519
                    ? (c >= 2507 && c <= 2510)
                    : c <= 2519)))
                : (c <= 2525 || (c < 2556
                  ? (c < 2534
                    ? (c >= 2527 && c <= 2531)
                    : c <= 2545)
                  : (c <= 2556 || (c < 2561
                    ? c == 2558
                    : c <= 2563)))))))
            : (c <= 2570 || (c < 2649
              ? (c < 2616
                ? (c < 2602
                  ? (c < 2579
                    ? (c >= 2575 && c <= 2576)
                    : c <= 2600)
                  : (c <= 2608 || (c < 2613
                    ? (c >= 2610 && c <= 2611)
                    : c <= 2614)))
                : (c <= 2617 || (c < 2631
                  ? (c < 2622
                    ? c == 2620
                    : c <= 2626)
                  : (c <= 2632 || (c < 2641
                    ? (c >= 2635 && c <= 2637)
                    : c <= 2641)))))
              : (c <= 2652 || (c < 2707
                ? (c < 2689
                  ? (c < 2662
                    ? c == 2654
                    : c <= 2677)
                  : (c <= 2691 || (c < 2703
                    ? (c >= 2693 && c <= 2701)
                    : c <= 2705)))
                : (c <= 2728 || (c < 2741
                  ? (c < 2738
                    ? (c >= 2730 && c <= 2736)
                    : c <= 2739)
                  : (c <= 2745 || (c < 2759
                    ? (c >= 2748 && c <= 2757)
                    : c <= 2761)))))))))))
        : (c <= 2765 || (c < 3200
          ? (c < 2969
            ? (c < 2876
              ? (c < 2821
                ? (c < 2790
                  ? (c < 2784
                    ? c == 2768
                    : c <= 2787)
                  : (c <= 2799 || (c < 2817
                    ? (c >= 2809 && c <= 2815)
                    : c <= 2819)))
                : (c <= 2828 || (c < 2858
                  ? (c < 2835
                    ? (c >= 2831 && c <= 2832)
                    : c <= 2856)
                  : (c <= 2864 || (c < 2869
                    ? (c >= 2866 && c <= 2867)
                    : c <= 2873)))))
              : (c <= 2884 || (c < 2918
                ? (c < 2901
                  ? (c < 2891
                    ? (c >= 2887 && c <= 2888)
                    : c <= 2893)
                  : (c <= 2903 || (c < 2911
                    ? (c >= 2908 && c <= 2909)
                    : c <= 2915)))
                : (c <= 2927 || (c < 2949
                  ? (c < 2946
                    ? c == 2929
                    : c <= 2947)
                  : (c <= 2954 || (c < 2962
                    ? (c >= 2958 && c <= 2960)
                    : c <= 2965)))))))
            : (c <= 2970 || (c < 3072
              ? (c < 3006
                ? (c < 2979
                  ? (c < 2974
                    ? c == 2972
                    : c <= 2975)
                  : (c <= 2980 || (c < 2990
                    ? (c >= 2984 && c <= 2986)
                    : c <= 3001)))
                : (c <= 3010 || (c < 3024
                  ? (c < 3018
                    ? (c >= 3014 && c <= 3016)
                    : c <= 3021)
                  : (c <= 3024 || (c < 3046
                    ? c == 3031
                    : c <= 3055)))))
              : (c <= 3084 || (c < 3146
                ? (c < 3114
                  ? (c < 3090
                    ? (c >= 3086 && c <= 3088)
                    : c <= 3112)
                  : (c <= 3129 || (c < 3142
                    ? (c >= 3132 && c <= 3140)
                    : c <= 3144)))
                : (c <= 3149 || (c < 3165
                  ? (c < 3160
                    ? (c >= 3157 && c <= 3158)
                    : c <= 3162)
                  : (c <= 3165 || (c < 3174
                    ? (c >= 3168 && c <= 3171)
                    : c <= 3183)))))))))
          : (c <= 3203 || (c < 3461
            ? (c < 3302
              ? (c < 3260
                ? (c < 3218
                  ? (c < 3214
                    ? (c >= 3205 && c <= 3212)
                    : c <= 3216)
                  : (c <= 3240 || (c < 3253
                    ? (c >= 3242 && c <= 3251)
                    : c <= 3257)))
                : (c <= 3268 || (c < 3285
                  ? (c < 3274
                    ? (c >= 3270 && c <= 3272)
                    : c <= 3277)
                  : (c <= 3286 || (c < 3296
                    ? (c >= 3293 && c <= 3294)
                    : c <= 3299)))))
              : (c <= 3311 || (c < 3402
                ? (c < 3342
                  ? (c < 3328
                    ? (c >= 3313 && c <= 3314)
                    : c <= 3340)
                  : (c <= 3344 || (c < 3398
                    ? (c >= 3346 && c <= 3396)
                    : c <= 3400)))
                : (c <= 3406 || (c < 3430
                  ? (c < 3423
                    ? (c >= 3412 && c <= 3415)
                    : c <= 3427)
                  : (c <= 3439 || (c < 3457
                    ? (c >= 3450 && c <= 3455)
                    : c <= 3459)))))))
            : (c <= 3478 || (c < 3648
              ? (c < 3535
                ? (c < 3517
                  ? (c < 3507
                    ? (c >= 3482 && c <= 3505)
                    : c <= 3515)
                  : (c <= 3517 || (c < 3530
                    ? (c >= 3520 && c <= 3526)
                    : c <= 3530)))
                : (c <= 3540 || (c < 3558
                  ? (c < 3544
                    ? c == 3542
                    : c <= 3551)
                  : (c <= 3567 || (c < 3585
                    ? (c >= 3570 && c <= 3571)
                    : c <= 3642)))))
              : (c <= 3662 || (c < 3749
                ? (c < 3716
                  ? (c < 3713
                    ? (c >= 3664 && c <= 3673)
                    : c <= 3714)
                  : (c <= 3716 || (c < 3724
                    ? (c >= 3718 && c <= 3722)
                    : c <= 3747)))
                : (c <= 3749 || (c < 3782
                  ? (c < 3776
                    ? (c >= 3751 && c <= 3773)
                    : c <= 3780)
                  : (c <= 3782 || (c >= 3784 && c <= 3789)))))))))))))
      : (c <= 3801 || (c < 8027
        ? (c < 5952
          ? (c < 4698
            ? (c < 3993
              ? (c < 3895
                ? (c < 3864
                  ? (c < 3840
                    ? (c >= 3804 && c <= 3807)
                    : c <= 3840)
                  : (c <= 3865 || (c < 3893
                    ? (c >= 3872 && c <= 3881)
                    : c <= 3893)))
                : (c <= 3895 || (c < 3913
                  ? (c < 3902
                    ? c == 3897
                    : c <= 3911)
                  : (c <= 3948 || (c < 3974
                    ? (c >= 3953 && c <= 3972)
                    : c <= 3991)))))
              : (c <= 4028 || (c < 4301
                ? (c < 4176
                  ? (c < 4096
                    ? c == 4038
                    : c <= 4169)
                  : (c <= 4253 || (c < 4295
                    ? (c >= 4256 && c <= 4293)
                    : c <= 4295)))
                : (c <= 4301 || (c < 4682
                  ? (c < 4348
                    ? (c >= 4304 && c <= 4346)
                    : c <= 4680)
                  : (c <= 4685 || (c < 4696
                    ? (c >= 4688 && c <= 4694)
                    : c <= 4696)))))))
            : (c <= 4701 || (c < 4957
              ? (c < 4800
                ? (c < 4752
                  ? (c < 4746
                    ? (c >= 4704 && c <= 4744)
                    : c <= 4749)
                  : (c <= 4784 || (c < 4792
                    ? (c >= 4786 && c <= 4789)
                    : c <= 4798)))
                : (c <= 4800 || (c < 4824
                  ? (c < 4808
                    ? (c >= 4802 && c <= 4805)
                    : c <= 4822)
                  : (c <= 4880 || (c < 4888
                    ? (c >= 4882 && c <= 4885)
                    : c <= 4954)))))
              : (c <= 4959 || (c < 5743
                ? (c < 5024
                  ? (c < 4992
                    ? (c >= 4969 && c <= 4977)
                    : c <= 5007)
                  : (c <= 5109 || (c < 5121
                    ? (c >= 5112 && c <= 5117)
                    : c <= 5740)))
                : (c <= 5759 || (c < 5870
                  ? (c < 5792
                    ? (c >= 5761 && c <= 5786)
                    : c <= 5866)
                  : (c <= 5880 || (c < 5919
                    ? (c >= 5888 && c <= 5909)
                    : c <= 5940)))))))))
          : (c <= 5971 || (c < 6783
            ? (c < 6320
              ? (c < 6108
                ? (c < 6002
                  ? (c < 5998
                    ? (c >= 5984 && c <= 5996)
                    : c <= 6000)
                  : (c <= 6003 || (c < 6103
                    ? (c >= 6016 && c <= 6099)
                    : c <= 6103)))
                : (c <= 6109 || (c < 6159
                  ? (c < 6155
                    ? (c >= 6112 && c <= 6121)
                    : c <= 6157)
                  : (c <= 6169 || (c < 6272
                    ? (c >= 6176 && c <= 6264)
                    : c <= 6314)))))
              : (c <= 6389 || (c < 6528
                ? (c < 6448
                  ? (c < 6432
                    ? (c >= 6400 && c <= 6430)
                    : c <= 6443)
                  : (c <= 6459 || (c < 6512
                    ? (c >= 6470 && c <= 6509)
                    : c <= 6516)))
                : (c <= 6571 || (c < 6656
                  ? (c < 6608
                    ? (c >= 6576 && c <= 6601)
                    : c <= 6618)
                  : (c <= 6683 || (c < 6752
                    ? (c >= 6688 && c <= 6750)
                    : c <= 6780)))))))
            : (c <= 6793 || (c < 7296
              ? (c < 6992
                ? (c < 6832
                  ? (c < 6823
                    ? (c >= 6800 && c <= 6809)
                    : c <= 6823)
                  : (c <= 6845 || (c < 6912
                    ? (c >= 6847 && c <= 6862)
                    : c <= 6988)))
                : (c <= 7001 || (c < 7168
                  ? (c < 7040
                    ? (c >= 7019 && c <= 7027)
                    : c <= 7155)
                  : (c <= 7223 || (c < 7245
                    ? (c >= 7232 && c <= 7241)
                    : c <= 7293)))))
              : (c <= 7304 || (c < 7960
                ? (c < 7376
                  ? (c < 7357
                    ? (c >= 7312 && c <= 7354)
                    : c <= 7359)
                  : (c <= 7378 || (c < 7424
                    ? (c >= 7380 && c <= 7418)
                    : c <= 7957)))
                : (c <= 7965 || (c < 8016
                  ? (c < 8008
                    ? (c >= 7968 && c <= 8005)
                    : c <= 8013)
                  : (c <= 8023 || c == 8025))))))))))
        : (c <= 8027 || (c < 11728
          ? (c < 8469
            ? (c < 8182
              ? (c < 8130
                ? (c < 8064
                  ? (c < 8031
                    ? c == 8029
                    : c <= 8061)
                  : (c <= 8116 || (c < 8126
                    ? (c >= 8118 && c <= 8124)
                    : c <= 8126)))
                : (c <= 8132 || (c < 8150
                  ? (c < 8144
                    ? (c >= 8134 && c <= 8140)
                    : c <= 8147)
                  : (c <= 8155 || (c < 8178
                    ? (c >= 8160 && c <= 8172)
                    : c <= 8180)))))
              : (c <= 8188 || (c < 8400
                ? (c < 8305
                  ? (c < 8276
                    ? (c >= 8255 && c <= 8256)
                    : c <= 8276)
                  : (c <= 8305 || (c < 8336
                    ? c == 8319
                    : c <= 8348)))
                : (c <= 8412 || (c < 8450
                  ? (c < 8421
                    ? c == 8417
                    : c <= 8432)
                  : (c <= 8450 || (c < 8458
                    ? c == 8455
                    : c <= 8467)))))))
            : (c <= 8469 || (c < 11520
              ? (c < 8508
                ? (c < 8486
                  ? (c < 8484
                    ? (c >= 8472 && c <= 8477)
                    : c <= 8484)
                  : (c <= 8486 || (c < 8490
                    ? c == 8488
                    : c <= 8505)))
                : (c <= 8511 || (c < 8544
                  ? (c < 8526
                    ? (c >= 8517 && c <= 8521)
                    : c <= 8526)
                  : (c <= 8584 || (c < 11499
                    ? (c >= 11264 && c <= 11492)
                    : c <= 11507)))))
              : (c <= 11557 || (c < 11680
                ? (c < 11568
                  ? (c < 11565
                    ? c == 11559
                    : c <= 11565)
                  : (c <= 11623 || (c < 11647
                    ? c == 11631
                    : c <= 11670)))
                : (c <= 11686 || (c < 11704
                  ? (c < 11696
                    ? (c >= 11688 && c <= 11694)
                    : c <= 11702)
                  : (c <= 11710 || (c < 11720
                    ? (c >= 11712 && c <= 11718)
                    : c <= 11726)))))))))
          : (c <= 11734 || (c < 42775
            ? (c < 12549
              ? (c < 12344
                ? (c < 12293
                  ? (c < 11744
                    ? (c >= 11736 && c <= 11742)
                    : c <= 11775)
                  : (c <= 12295 || (c < 12337
                    ? (c >= 12321 && c <= 12335)
                    : c <= 12341)))
                : (c <= 12348 || (c < 12445
                  ? (c < 12441
                    ? (c >= 12353 && c <= 12438)
                    : c <= 12442)
                  : (c <= 12447 || (c < 12540
                    ? (c >= 12449 && c <= 12538)
                    : c <= 12543)))))
              : (c <= 12591 || (c < 42192
                ? (c < 12784
                  ? (c < 12704
                    ? (c >= 12593 && c <= 12686)
                    : c <= 12735)
                  : (c <= 12799 || (c < 19968
                    ? (c >= 13312 && c <= 19903)
                    : c <= 42124)))
                : (c <= 42237 || (c < 42560
                  ? (c < 42512
                    ? (c >= 42240 && c <= 42508)
                    : c <= 42539)
                  : (c <= 42607 || (c < 42623
                    ? (c >= 42612 && c <= 42621)
                    : c <= 42737)))))))
            : (c <= 42783 || (c < 43259
              ? (c < 42994
                ? (c < 42960
                  ? (c < 42891
                    ? (c >= 42786 && c <= 42888)
                    : c <= 42954)
                  : (c <= 42961 || (c < 42965
                    ? c == 42963
                    : c <= 42969)))
                : (c <= 43047 || (c < 43136
                  ? (c < 43072
                    ? c == 43052
                    : c <= 43123)
                  : (c <= 43205 || (c < 43232
                    ? (c >= 43216 && c <= 43225)
                    : c <= 43255)))))
              : (c <= 43259 || (c < 43488
                ? (c < 43360
                  ? (c < 43312
                    ? (c >= 43261 && c <= 43309)
                    : c <= 43347)
                  : (c <= 43388 || (c < 43471
                    ? (c >= 43392 && c <= 43456)
                    : c <= 43481)))
                : (c <= 43518 || (c < 43600
                  ? (c < 43584
                    ? (c >= 43520 && c <= 43574)
                    : c <= 43597)
                  : (c <= 43609 || (c >= 43616 && c <= 43638)))))))))))))))
    : (c <= 43714 || (c < 71472
      ? (c < 67644
        ? (c < 65382
          ? (c < 64318
            ? (c < 44012
              ? (c < 43793
                ? (c < 43762
                  ? (c < 43744
                    ? (c >= 43739 && c <= 43741)
                    : c <= 43759)
                  : (c <= 43766 || (c < 43785
                    ? (c >= 43777 && c <= 43782)
                    : c <= 43790)))
                : (c <= 43798 || (c < 43824
                  ? (c < 43816
                    ? (c >= 43808 && c <= 43814)
                    : c <= 43822)
                  : (c <= 43866 || (c < 43888
                    ? (c >= 43868 && c <= 43881)
                    : c <= 44010)))))
              : (c <= 44013 || (c < 64112
                ? (c < 55216
                  ? (c < 44032
                    ? (c >= 44016 && c <= 44025)
                    : c <= 55203)
                  : (c <= 55238 || (c < 63744
                    ? (c >= 55243 && c <= 55291)
                    : c <= 64109)))
                : (c <= 64217 || (c < 64285
                  ? (c < 64275
                    ? (c >= 64256 && c <= 64262)
                    : c <= 64279)
                  : (c <= 64296 || (c < 64312
                    ? (c >= 64298 && c <= 64310)
                    : c <= 64316)))))))
            : (c <= 64318 || (c < 65101
              ? (c < 64848
                ? (c < 64326
                  ? (c < 64323
                    ? (c >= 64320 && c <= 64321)
                    : c <= 64324)
                  : (c <= 64433 || (c < 64612
                    ? (c >= 64467 && c <= 64605)
                    : c <= 64829)))
                : (c <= 64911 || (c < 65024
                  ? (c < 65008
                    ? (c >= 64914 && c <= 64967)
                    : c <= 65017)
                  : (c <= 65039 || (c < 65075
                    ? (c >= 65056 && c <= 65071)
                    : c <= 65076)))))
              : (c <= 65103 || (c < 65149
                ? (c < 65143
                  ? (c < 65139
                    ? c == 65137
                    : c <= 65139)
                  : (c <= 65143 || (c < 65147
                    ? c == 65145
                    : c <= 65147)))
                : (c <= 65149 || (c < 65313
                  ? (c < 65296
                    ? (c >= 65151 && c <= 65276)
                    : c <= 65305)
                  : (c <= 65338 || (c < 65345
                    ? c == 65343
                    : c <= 65370)))))))))
          : (c <= 65470 || (c < 66560
            ? (c < 65856
              ? (c < 65549
                ? (c < 65490
                  ? (c < 65482
                    ? (c >= 65474 && c <= 65479)
                    : c <= 65487)
                  : (c <= 65495 || (c < 65536
                    ? (c >= 65498 && c <= 65500)
                    : c <= 65547)))
                : (c <= 65574 || (c < 65599
                  ? (c < 65596
                    ? (c >= 65576 && c <= 65594)
                    : c <= 65597)
                  : (c <= 65613 || (c < 65664
                    ? (c >= 65616 && c <= 65629)
                    : c <= 65786)))))
              : (c <= 65908 || (c < 66349
                ? (c < 66208
                  ? (c < 66176
                    ? c == 66045
                    : c <= 66204)
                  : (c <= 66256 || (c < 66304
                    ? c == 66272
                    : c <= 66335)))
                : (c <= 66378 || (c < 66464
                  ? (c < 66432
                    ? (c >= 66384 && c <= 66426)
                    : c <= 66461)
                  : (c <= 66499 || (c < 66513
                    ? (c >= 66504 && c <= 66511)
                    : c <= 66517)))))))
            : (c <= 66717 || (c < 66995
              ? (c < 66928
                ? (c < 66776
                  ? (c < 66736
                    ? (c >= 66720 && c <= 66729)
                    : c <= 66771)
                  : (c <= 66811 || (c < 66864
                    ? (c >= 66816 && c <= 66855)
                    : c <= 66915)))
                : (c <= 66938 || (c < 66964
                  ? (c < 66956
                    ? (c >= 66940 && c <= 66954)
                    : c <= 66962)
                  : (c <= 66965 || (c < 66979
                    ? (c >= 66967 && c <= 66977)
                    : c <= 66993)))))
              : (c <= 67001 || (c < 67463
                ? (c < 67392
                  ? (c < 67072
                    ? (c >= 67003 && c <= 67004)
                    : c <= 67382)
                  : (c <= 67413 || (c < 67456
                    ? (c >= 67424 && c <= 67431)
                    : c <= 67461)))
                : (c <= 67504 || (c < 67592
                  ? (c < 67584
                    ? (c >= 67506 && c <= 67514)
                    : c <= 67589)
                  : (c <= 67592 || (c < 67639
                    ? (c >= 67594 && c <= 67637)
                    : c <= 67640)))))))))))
        : (c <= 67644 || (c < 69968
          ? (c < 68480
            ? (c < 68108
              ? (c < 67840
                ? (c < 67712
                  ? (c < 67680
                    ? (c >= 67647 && c <= 67669)
                    : c <= 67702)
                  : (c <= 67742 || (c < 67828
                    ? (c >= 67808 && c <= 67826)
                    : c <= 67829)))
                : (c <= 67861 || (c < 68030
                  ? (c < 67968
                    ? (c >= 67872 && c <= 67897)
                    : c <= 68023)
                  : (c <= 68031 || (c < 68101
                    ? (c >= 68096 && c <= 68099)
                    : c <= 68102)))))
              : (c <= 68115 || (c < 68224
                ? (c < 68152
                  ? (c < 68121
                    ? (c >= 68117 && c <= 68119)
                    : c <= 68149)
                  : (c <= 68154 || (c < 68192
                    ? c == 68159
                    : c <= 68220)))
                : (c <= 68252 || (c < 68352
                  ? (c < 68297
                    ? (c >= 68288 && c <= 68295)
                    : c <= 68326)
                  : (c <= 68405 || (c < 68448
                    ? (c >= 68416 && c <= 68437)
                    : c <= 68466)))))))
            : (c <= 68497 || (c < 69488
              ? (c < 69248
                ? (c < 68800
                  ? (c < 68736
                    ? (c >= 68608 && c <= 68680)
                    : c <= 68786)
                  : (c <= 68850 || (c < 68912
                    ? (c >= 68864 && c <= 68903)
                    : c <= 68921)))
                : (c <= 69289 || (c < 69376
                  ? (c < 69296
                    ? (c >= 69291 && c <= 69292)
                    : c <= 69297)
                  : (c <= 69404 || (c < 69424
                    ? c == 69415
                    : c <= 69456)))))
              : (c <= 69509 || (c < 69826
                ? (c < 69632
                  ? (c < 69600
                    ? (c >= 69552 && c <= 69572)
                    : c <= 69622)
                  : (c <= 69702 || (c < 69759
                    ? (c >= 69734 && c <= 69749)
                    : c <= 69818)))
                : (c <= 69826 || (c < 69888
                  ? (c < 69872
                    ? (c >= 69840 && c <= 69864)
                    : c <= 69881)
                  : (c <= 69940 || (c < 69956
                    ? (c >= 69942 && c <= 69951)
                    : c <= 69959)))))))))
          : (c <= 70003 || (c < 70471
            ? (c < 70287
              ? (c < 70144
                ? (c < 70089
                  ? (c < 70016
                    ? c == 70006
                    : c <= 70084)
                  : (c <= 70092 || (c < 70108
                    ? (c >= 70094 && c <= 70106)
                    : c <= 70108)))
                : (c <= 70161 || (c < 70272
                  ? (c < 70206
                    ? (c >= 70163 && c <= 70199)
                    : c <= 70206)
                  : (c <= 70278 || (c < 70282
                    ? c == 70280
                    : c <= 70285)))))
              : (c <= 70301 || (c < 70415
                ? (c < 70384
                  ? (c < 70320
                    ? (c >= 70303 && c <= 70312)
                    : c <= 70378)
                  : (c <= 70393 || (c < 70405
                    ? (c >= 70400 && c <= 70403)
                    : c <= 70412)))
                : (c <= 70416 || (c < 70450
                  ? (c < 70442
                    ? (c >= 70419 && c <= 70440)
                    : c <= 70448)
                  : (c <= 70451 || (c < 70459
                    ? (c >= 70453 && c <= 70457)
                    : c <= 70468)))))))
            : (c <= 70472 || (c < 70864
              ? (c < 70512
                ? (c < 70487
                  ? (c < 70480
                    ? (c >= 70475 && c <= 70477)
                    : c <= 70480)
                  : (c <= 70487 || (c < 70502
                    ? (c >= 70493 && c <= 70499)
                    : c <= 70508)))
                : (c <= 70516 || (c < 70750
                  ? (c < 70736
                    ? (c >= 70656 && c <= 70730)
                    : c <= 70745)
                  : (c <= 70753 || (c < 70855
                    ? (c >= 70784 && c <= 70853)
                    : c <= 70855)))))
              : (c <= 70873 || (c < 71248
                ? (c < 71128
                  ? (c < 71096
                    ? (c >= 71040 && c <= 71093)
                    : c <= 71104)
                  : (c <= 71133 || (c < 71236
                    ? (c >= 71168 && c <= 71232)
                    : c <= 71236)))
                : (c <= 71257 || (c < 71424
                  ? (c < 71360
                    ? (c >= 71296 && c <= 71352)
                    : c <= 71369)
                  : (c <= 71450 || (c >= 71453 && c <= 71467)))))))))))))
      : (c <= 71481 || (c < 119973
        ? (c < 82944
          ? (c < 72784
            ? (c < 72096
              ? (c < 71948
                ? (c < 71840
                  ? (c < 71680
                    ? (c >= 71488 && c <= 71494)
                    : c <= 71738)
                  : (c <= 71913 || (c < 71945
                    ? (c >= 71935 && c <= 71942)
                    : c <= 71945)))
                : (c <= 71955 || (c < 71991
                  ? (c < 71960
                    ? (c >= 71957 && c <= 71958)
                    : c <= 71989)
                  : (c <= 71992 || (c < 72016
                    ? (c >= 71995 && c <= 72003)
                    : c <= 72025)))))
              : (c <= 72103 || (c < 72272
                ? (c < 72163
                  ? (c < 72154
                    ? (c >= 72106 && c <= 72151)
                    : c <= 72161)
                  : (c <= 72164 || (c < 72263
                    ? (c >= 72192 && c <= 72254)
                    : c <= 72263)))
                : (c <= 72345 || (c < 72704
                  ? (c < 72368
                    ? c == 72349
                    : c <= 72440)
                  : (c <= 72712 || (c < 72760
                    ? (c >= 72714 && c <= 72758)
                    : c <= 72768)))))))
            : (c <= 72793 || (c < 73063
              ? (c < 72971
                ? (c < 72873
                  ? (c < 72850
                    ? (c >= 72818 && c <= 72847)
                    : c <= 72871)
                  : (c <= 72886 || (c < 72968
                    ? (c >= 72960 && c <= 72966)
                    : c <= 72969)))
                : (c <= 73014 || (c < 73023
                  ? (c < 73020
                    ? c == 73018
                    : c <= 73021)
                  : (c <= 73031 || (c < 73056
                    ? (c >= 73040 && c <= 73049)
                    : c <= 73061)))))
              : (c <= 73064 || (c < 73648
                ? (c < 73107
                  ? (c < 73104
                    ? (c >= 73066 && c <= 73102)
                    : c <= 73105)
                  : (c <= 73112 || (c < 73440
                    ? (c >= 73120 && c <= 73129)
                    : c <= 73462)))
                : (c <= 73648 || (c < 74880
                  ? (c < 74752
                    ? (c >= 73728 && c <= 74649)
                    : c <= 74862)
                  : (c <= 75075 || (c < 77824
                    ? (c >= 77712 && c <= 77808)
                    : c <= 78894)))))))))
          : (c <= 83526 || (c < 110581
            ? (c < 93053
              ? (c < 92880
                ? (c < 92768
                  ? (c < 92736
                    ? (c >= 92160 && c <= 92728)
                    : c <= 92766)
                  : (c <= 92777 || (c < 92864
                    ? (c >= 92784 && c <= 92862)
                    : c <= 92873)))
                : (c <= 92909 || (c < 92992
                  ? (c < 92928
                    ? (c >= 92912 && c <= 92916)
                    : c <= 92982)
                  : (c <= 92995 || (c < 93027
                    ? (c >= 93008 && c <= 93017)
                    : c <= 93047)))))
              : (c <= 93071 || (c < 94179
                ? (c < 94031
                  ? (c < 93952
                    ? (c >= 93760 && c <= 93823)
                    : c <= 94026)
                  : (c <= 94087 || (c < 94176
                    ? (c >= 94095 && c <= 94111)
                    : c <= 94177)))
                : (c <= 94180 || (c < 100352
                  ? (c < 94208
                    ? (c >= 94192 && c <= 94193)
                    : c <= 100343)
                  : (c <= 101589 || (c < 110576
                    ? (c >= 101632 && c <= 101640)
                    : c <= 110579)))))))
            : (c <= 110587 || (c < 118576
              ? (c < 113664
                ? (c < 110928
                  ? (c < 110592
                    ? (c >= 110589 && c <= 110590)
                    : c <= 110882)
                  : (c <= 110930 || (c < 110960
                    ? (c >= 110948 && c <= 110951)
                    : c <= 111355)))
                : (c <= 113770 || (c < 113808
                  ? (c < 113792
                    ? (c >= 113776 && c <= 113788)
                    : c <= 113800)
                  : (c <= 113817 || (c < 118528
                    ? (c >= 113821 && c <= 113822)
                    : c <= 118573)))))
              : (c <= 118598 || (c < 119362
                ? (c < 119163
                  ? (c < 119149
                    ? (c >= 119141 && c <= 119145)
                    : c <= 119154)
                  : (c <= 119170 || (c < 119210
                    ? (c >= 119173 && c <= 119179)
                    : c <= 119213)))
                : (c <= 119364 || (c < 119966
                  ? (c < 119894
                    ? (c >= 119808 && c <= 119892)
                    : c <= 119964)
                  : (c <= 119967 || c == 119970))))))))))
        : (c <= 119974 || (c < 124912
          ? (c < 120746
            ? (c < 120134
              ? (c < 120071
                ? (c < 119995
                  ? (c < 119982
                    ? (c >= 119977 && c <= 119980)
                    : c <= 119993)
                  : (c <= 119995 || (c < 120005
                    ? (c >= 119997 && c <= 120003)
                    : c <= 120069)))
                : (c <= 120074 || (c < 120094
                  ? (c < 120086
                    ? (c >= 120077 && c <= 120084)
                    : c <= 120092)
                  : (c <= 120121 || (c < 120128
                    ? (c >= 120123 && c <= 120126)
                    : c <= 120132)))))
              : (c <= 120134 || (c < 120572
                ? (c < 120488
                  ? (c < 120146
                    ? (c >= 120138 && c <= 120144)
                    : c <= 120485)
                  : (c <= 120512 || (c < 120540
                    ? (c >= 120514 && c <= 120538)
                    : c <= 120570)))
                : (c <= 120596 || (c < 120656
                  ? (c < 120630
                    ? (c >= 120598 && c <= 120628)
                    : c <= 120654)
                  : (c <= 120686 || (c < 120714
                    ? (c >= 120688 && c <= 120712)
                    : c <= 120744)))))))
            : (c <= 120770 || (c < 122907
              ? (c < 121476
                ? (c < 121344
                  ? (c < 120782
                    ? (c >= 120772 && c <= 120779)
                    : c <= 120831)
                  : (c <= 121398 || (c < 121461
                    ? (c >= 121403 && c <= 121452)
                    : c <= 121461)))
                : (c <= 121476 || (c < 122624
                  ? (c < 121505
                    ? (c >= 121499 && c <= 121503)
                    : c <= 121519)
                  : (c <= 122654 || (c < 122888
                    ? (c >= 122880 && c <= 122886)
                    : c <= 122904)))))
              : (c <= 122913 || (c < 123214
                ? (c < 123136
                  ? (c < 122918
                    ? (c >= 122915 && c <= 122916)
                    : c <= 122922)
                  : (c <= 123180 || (c < 123200
                    ? (c >= 123184 && c <= 123197)
                    : c <= 123209)))
                : (c <= 123214 || (c < 124896
                  ? (c < 123584
                    ? (c >= 123536 && c <= 123566)
                    : c <= 123641)
                  : (c <= 124902 || (c < 124909
                    ? (c >= 124904 && c <= 124907)
                    : c <= 124910)))))))))
          : (c <= 124926 || (c < 126557
            ? (c < 126521
              ? (c < 126469
                ? (c < 125184
                  ? (c < 125136
                    ? (c >= 124928 && c <= 125124)
                    : c <= 125142)
                  : (c <= 125259 || (c < 126464
                    ? (c >= 125264 && c <= 125273)
                    : c <= 126467)))
                : (c <= 126495 || (c < 126503
                  ? (c < 126500
                    ? (c >= 126497 && c <= 126498)
                    : c <= 126500)
                  : (c <= 126503 || (c < 126516
                    ? (c >= 126505 && c <= 126514)
                    : c <= 126519)))))
              : (c <= 126521 || (c < 126541
                ? (c < 126535
                  ? (c < 126530
                    ? c == 126523
                    : c <= 126530)
                  : (c <= 126535 || (c < 126539
                    ? c == 126537
                    : c <= 126539)))
                : (c <= 126543 || (c < 126551
                  ? (c < 126548
                    ? (c >= 126545 && c <= 126546)
                    : c <= 126548)
                  : (c <= 126551 || (c < 126555
                    ? c == 126553
                    : c <= 126555)))))))
            : (c <= 126557 || (c < 126629
              ? (c < 126580
                ? (c < 126564
                  ? (c < 126561
                    ? c == 126559
                    : c <= 126562)
                  : (c <= 126564 || (c < 126572
                    ? (c >= 126567 && c <= 126570)
                    : c <= 126578)))
                : (c <= 126583 || (c < 126592
                  ? (c < 126590
                    ? (c >= 126585 && c <= 126588)
                    : c <= 126590)
                  : (c <= 126601 || (c < 126625
                    ? (c >= 126603 && c <= 126619)
                    : c <= 126627)))))
              : (c <= 126633 || (c < 178208
                ? (c < 131072
                  ? (c < 130032
                    ? (c >= 126635 && c <= 126651)
                    : c <= 130041)
                  : (c <= 173791 || (c < 177984
                    ? (c >= 173824 && c <= 177976)
                    : c <= 178205)))
                : (c <= 183969 || (c < 196608
                  ? (c < 194560
                    ? (c >= 183984 && c <= 191456)
                    : c <= 195101)
                  : (c <= 201546 || (c >= 917760 && c <= 917999)))))))))))))))));
}

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(85);
      if (lookahead == '!') ADVANCE(93);
      if (lookahead == '"') ADVANCE(133);
      if (lookahead == '&') ADVANCE(95);
      if (lookahead == '\'') ADVANCE(132);
      if (lookahead == '(') ADVANCE(105);
      if (lookahead == ')') ADVANCE(106);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '+') ADVANCE(101);
      if (lookahead == ',') ADVANCE(87);
      if (lookahead == '-') ADVANCE(102);
      if (lookahead == '.') ADVANCE(125);
      if (lookahead == '/') ADVANCE(103);
      if (lookahead == '0') ADVANCE(107);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == '=') ADVANCE(11);
      if (lookahead == '>') ADVANCE(98);
      if (lookahead == '[') ADVANCE(89);
      if (lookahead == '\\') SKIP(81)
      if (lookahead == ']') ADVANCE(92);
      if (lookahead == '^') ADVANCE(104);
      if (lookahead == '_') ADVANCE(182);
      if (lookahead == 'a') ADVANCE(159);
      if (lookahead == 'f') ADVANCE(153);
      if (lookahead == 'g') ADVANCE(170);
      if (lookahead == 'n') ADVANCE(178);
      if (lookahead == 's') ADVANCE(175);
      if (lookahead == 't') ADVANCE(181);
      if (lookahead == '{') ADVANCE(86);
      if (lookahead == '|') ADVANCE(94);
      if (lookahead == '}') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (sym_name_character_set_1(lookahead)) ADVANCE(183);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(5)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(6)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(93);
      if (lookahead == '"') ADVANCE(133);
      if (lookahead == '&') ADVANCE(95);
      if (lookahead == '\'') ADVANCE(132);
      if (lookahead == '(') ADVANCE(105);
      if (lookahead == ')') ADVANCE(106);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '+') ADVANCE(101);
      if (lookahead == ',') ADVANCE(87);
      if (lookahead == '-') ADVANCE(102);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == '/') ADVANCE(103);
      if (lookahead == '0') ADVANCE(107);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == '=') ADVANCE(11);
      if (lookahead == '>') ADVANCE(98);
      if (lookahead == '[') ADVANCE(89);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == ']') ADVANCE(92);
      if (lookahead == '^') ADVANCE(104);
      if (lookahead == '{') ADVANCE(86);
      if (lookahead == '|') ADVANCE(94);
      if (lookahead == '}') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (sym_name_character_set_2(lookahead)) ADVANCE(183);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '0') ADVANCE(184);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == ']') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(6)
      if (('1' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(185);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(121);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(119);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '.') ADVANCE(90);
      END_STATE();
    case 11:
      if (lookahead == '=') ADVANCE(100);
      if (lookahead == '>') ADVANCE(96);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(97);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 17:
      if (lookahead == 'a') ADVANCE(35);
      END_STATE();
    case 18:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(57);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(49);
      END_STATE();
    case 21:
      if (lookahead == 'c') ADVANCE(13);
      END_STATE();
    case 22:
      if (lookahead == 'c') ADVANCE(69);
      END_STATE();
    case 23:
      if (lookahead == 'c') ADVANCE(51);
      END_STATE();
    case 24:
      if (lookahead == 'c') ADVANCE(52);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(19);
      END_STATE();
    case 26:
      if (lookahead == 'd') ADVANCE(29);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(36);
      END_STATE();
    case 28:
      if (lookahead == 'f') ADVANCE(73);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(43);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(64);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(67);
      END_STATE();
    case 34:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 35:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(128);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 43:
      if (lookahead == 'n') ADVANCE(66);
      END_STATE();
    case 44:
      if (lookahead == 'n') ADVANCE(68);
      END_STATE();
    case 45:
      if (lookahead == 'n') ADVANCE(70);
      END_STATE();
    case 46:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 47:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 49:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(15);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(17);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 58:
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(129);
      END_STATE();
    case 60:
      if (lookahead == 's') ADVANCE(130);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(131);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(71);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(72);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(74);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 69:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 70:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 71:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 72:
      if (lookahead == 't') ADVANCE(56);
      END_STATE();
    case 73:
      if (lookahead == 'u') ADVANCE(41);
      END_STATE();
    case 74:
      if (lookahead == 'y') ADVANCE(126);
      END_STATE();
    case 75:
      if (lookahead == 'y') ADVANCE(127);
      END_STATE();
    case 76:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 77:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 78:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 79:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(121);
      if (lookahead == '\r') ADVANCE(123);
      END_STATE();
    case 80:
      if (eof) ADVANCE(85);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 81:
      if (eof) ADVANCE(85);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(80)
      END_STATE();
    case 82:
      if (eof) ADVANCE(85);
      if (lookahead == '\n') SKIP(84)
      END_STATE();
    case 83:
      if (eof) ADVANCE(85);
      if (lookahead == '\n') SKIP(84)
      if (lookahead == '\r') SKIP(82)
      END_STATE();
    case 84:
      if (eof) ADVANCE(85);
      if (lookahead == '!') ADVANCE(93);
      if (lookahead == '"') ADVANCE(133);
      if (lookahead == '&') ADVANCE(95);
      if (lookahead == '\'') ADVANCE(132);
      if (lookahead == '(') ADVANCE(105);
      if (lookahead == ')') ADVANCE(106);
      if (lookahead == '*') ADVANCE(91);
      if (lookahead == '+') ADVANCE(101);
      if (lookahead == ',') ADVANCE(87);
      if (lookahead == '-') ADVANCE(102);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == '/') ADVANCE(103);
      if (lookahead == '0') ADVANCE(107);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == '=') ADVANCE(11);
      if (lookahead == '>') ADVANCE(98);
      if (lookahead == '[') ADVANCE(89);
      if (lookahead == '\\') SKIP(83)
      if (lookahead == ']') ADVANCE(92);
      if (lookahead == '^') ADVANCE(104);
      if (lookahead == 'a') ADVANCE(159);
      if (lookahead == 'f') ADVANCE(153);
      if (lookahead == 'g') ADVANCE(170);
      if (lookahead == 'n') ADVANCE(178);
      if (lookahead == 's') ADVANCE(175);
      if (lookahead == 't') ADVANCE(181);
      if (lookahead == '{') ADVANCE(86);
      if (lookahead == '|') ADVANCE(94);
      if (lookahead == '}') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(84)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (sym_name_character_set_3(lookahead)) ADVANCE(183);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_LT_EQ_GT);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(12);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(9);
      if (lookahead == '/') ADVANCE(121);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(116);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(78);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(116);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(114);
      if (lookahead == '_') ADVANCE(111);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(77);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(109);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(114);
      if (lookahead == '_') ADVANCE(111);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(109);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(114);
      if (lookahead == '_') ADVANCE(111);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(109);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(77);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(112);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(115);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(112);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(113);
      if (('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(115);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(112);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(112);
      if (lookahead == 'P' ||
          lookahead == 'p') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'P' ||
          lookahead == 'e' ||
          lookahead == 'p') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '"') ADVANCE(121);
      if (lookahead == '\\') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(121);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(138);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(121);
      if (lookahead == '\\') ADVANCE(79);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(90);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_group_DASHcardinality);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_feature_DASHcardinality);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_aggregate_DASHfunction);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_type_DASHconstraints);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_string_DASHconstraints);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_numeric_DASHconstraints);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(aux_sym_string_name_token1);
      if (lookahead == '*') ADVANCE(136);
      if (lookahead == '/') ADVANCE(120);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(138);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(aux_sym_string_name_token1);
      if (lookahead == '*') ADVANCE(135);
      if (lookahead == '/') ADVANCE(122);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(9);
      if (lookahead != 0) ADVANCE(136);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(aux_sym_string_name_token1);
      if (lookahead == '*') ADVANCE(135);
      if (lookahead == '\n' ||
          lookahead == '"' ||
          lookahead == '\\') ADVANCE(9);
      if (lookahead != 0) ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(aux_sym_string_name_token1);
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(137);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(138);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(aux_sym_string_name_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '*') ADVANCE(141);
      if (lookahead == '/') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(143);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '*') ADVANCE(140);
      if (lookahead == '/') ADVANCE(143);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '*') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '/') ADVANCE(139);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(143);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(20);
      if (sym_name_character_set_4(lookahead)) ADVANCE(183);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(28);
      if (sym_name_character_set_4(lookahead)) ADVANCE(183);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(21);
      if (sym_name_character_set_4(lookahead)) ADVANCE(183);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(23);
      if (sym_name_character_set_4(lookahead)) ADVANCE(183);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(25);
      if (sym_name_character_set_4(lookahead)) ADVANCE(183);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == '-') ADVANCE(24);
      if (sym_name_character_set_4(lookahead)) ADVANCE(183);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(176);
      if (sym_name_character_set_5(lookahead)) ADVANCE(183);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'a') ADVANCE(177);
      if (sym_name_character_set_5(lookahead)) ADVANCE(183);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'c') ADVANCE(149);
      if (sym_name_character_set_4(lookahead)) ADVANCE(183);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(150);
      if (sym_name_character_set_4(lookahead)) ADVANCE(183);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(144);
      if (sym_name_character_set_4(lookahead)) ADVANCE(183);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(145);
      if (sym_name_character_set_4(lookahead)) ADVANCE(183);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(161);
      if (sym_name_character_set_4(lookahead)) ADVANCE(183);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(172);
      if (sym_name_character_set_4(lookahead)) ADVANCE(183);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'e') ADVANCE(148);
      if (sym_name_character_set_4(lookahead)) ADVANCE(183);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'g') ADVANCE(160);
      if (sym_name_character_set_4(lookahead)) ADVANCE(183);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'g') ADVANCE(173);
      if (sym_name_character_set_4(lookahead)) ADVANCE(183);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'g') ADVANCE(151);
      if (sym_name_character_set_4(lookahead)) ADVANCE(183);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'g') ADVANCE(147);
      if (sym_name_character_set_4(lookahead)) ADVANCE(183);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(166);
      if (sym_name_character_set_4(lookahead)) ADVANCE(183);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'i') ADVANCE(152);
      if (sym_name_character_set_4(lookahead)) ADVANCE(183);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'm') ADVANCE(157);
      if (sym_name_character_set_4(lookahead)) ADVANCE(183);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'n') ADVANCE(162);
      if (sym_name_character_set_4(lookahead)) ADVANCE(183);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'o') ADVANCE(179);
      if (sym_name_character_set_4(lookahead)) ADVANCE(183);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(154);
      if (sym_name_character_set_4(lookahead)) ADVANCE(183);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'p') ADVANCE(146);
      if (sym_name_character_set_4(lookahead)) ADVANCE(183);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(167);
      if (sym_name_character_set_4(lookahead)) ADVANCE(183);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(163);
      if (sym_name_character_set_4(lookahead)) ADVANCE(183);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(164);
      if (sym_name_character_set_4(lookahead)) ADVANCE(183);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(156);
      if (sym_name_character_set_4(lookahead)) ADVANCE(183);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'r') ADVANCE(158);
      if (sym_name_character_set_4(lookahead)) ADVANCE(183);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(171);
      if (sym_name_character_set_4(lookahead)) ADVANCE(183);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(180);
      if (sym_name_character_set_4(lookahead)) ADVANCE(183);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 't') ADVANCE(155);
      if (sym_name_character_set_4(lookahead)) ADVANCE(183);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(165);
      if (sym_name_character_set_4(lookahead)) ADVANCE(183);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(169);
      if (sym_name_character_set_4(lookahead)) ADVANCE(183);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'u') ADVANCE(174);
      if (sym_name_character_set_4(lookahead)) ADVANCE(183);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(sym_name);
      if (lookahead == 'y') ADVANCE(168);
      if (sym_name_character_set_4(lookahead)) ADVANCE(183);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_name);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(182);
      if (sym_name_character_set_6(lookahead)) ADVANCE(183);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_name);
      if (sym_name_character_set_4(lookahead)) ADVANCE(183);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_int);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_int);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_') ADVANCE(185);
      END_STATE();
    default:
      return false;
  }
}

static bool ts_lex_keywords(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (lookahead == 'A') ADVANCE(1);
      if (lookahead == 'B') ADVANCE(2);
      if (lookahead == 'I') ADVANCE(3);
      if (lookahead == 'R') ADVANCE(4);
      if (lookahead == 'S') ADVANCE(5);
      if (lookahead == 'T') ADVANCE(6);
      if (lookahead == '\\') SKIP(7)
      if (lookahead == 'a') ADVANCE(8);
      if (lookahead == 'c') ADVANCE(9);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'i') ADVANCE(11);
      if (lookahead == 'm') ADVANCE(12);
      if (lookahead == 'n') ADVANCE(13);
      if (lookahead == 'o') ADVANCE(14);
      if (lookahead == 't') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 2:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 3:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 5:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 6:
      if (lookahead == 'y') ADVANCE(21);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(22)
      END_STATE();
    case 8:
      if (lookahead == 'l') ADVANCE(23);
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(25);
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 11:
      if (lookahead == 'm') ADVANCE(29);
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(32);
      END_STATE();
    case 14:
      if (lookahead == 'p') ADVANCE(33);
      if (lookahead == 'r') ADVANCE(34);
      END_STATE();
    case 15:
      if (lookahead == 'r') ADVANCE(35);
      END_STATE();
    case 16:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(38);
      END_STATE();
    case 19:
      if (lookahead == 'a') ADVANCE(39);
      END_STATE();
    case 20:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 21:
      if (lookahead == 'p') ADVANCE(41);
      END_STATE();
    case 22:
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 23:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 25:
      if (lookahead == 'r') ADVANCE(43);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(45);
      END_STATE();
    case 28:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 29:
      if (lookahead == 'p') ADVANCE(47);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(48);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(49);
      END_STATE();
    case 32:
      if (lookahead == 'm') ADVANCE(50);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 35:
      if (lookahead == 'u') ADVANCE(52);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 37:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 39:
      if (lookahead == 'l') ADVANCE(56);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(57);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 43:
      if (lookahead == 'd') ADVANCE(60);
      END_STATE();
    case 44:
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 45:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 47:
      if (lookahead == 'o') ADVANCE(64);
      END_STATE();
    case 48:
      if (lookahead == 'l') ADVANCE(65);
      END_STATE();
    case 49:
      if (lookahead == 'd') ADVANCE(66);
      END_STATE();
    case 50:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 51:
      if (lookahead == 'i') ADVANCE(68);
      END_STATE();
    case 52:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 53:
      if (lookahead == 'h') ADVANCE(70);
      END_STATE();
    case 54:
      if (lookahead == 'e') ADVANCE(71);
      END_STATE();
    case 55:
      if (lookahead == 'g') ADVANCE(72);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_Real);
      END_STATE();
    case 57:
      if (lookahead == 'n') ADVANCE(73);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_Type);
      END_STATE();
    case 59:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 60:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(76);
      END_STATE();
    case 62:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 63:
      if (lookahead == 'u') ADVANCE(78);
      END_STATE();
    case 64:
      if (lookahead == 'r') ADVANCE(79);
      END_STATE();
    case 65:
      if (lookahead == 'u') ADVANCE(80);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(81);
      END_STATE();
    case 67:
      if (lookahead == 's') ADVANCE(82);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 70:
      if (lookahead == 'm') ADVANCE(84);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 72:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 73:
      if (lookahead == 'g') ADVANCE(87);
      END_STATE();
    case 74:
      if (lookahead == 'n') ADVANCE(88);
      END_STATE();
    case 75:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 76:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 79:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 80:
      if (lookahead == 'd') ADVANCE(93);
      END_STATE();
    case 81:
      if (lookahead == 't') ADVANCE(94);
      END_STATE();
    case 82:
      if (lookahead == 'p') ADVANCE(95);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 84:
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 86:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_String);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(100);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(101);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(102);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 92:
      if (lookahead == 's') ADVANCE(104);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 94:
      if (lookahead == 'o') ADVANCE(106);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(107);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(108);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_Boolean);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_Integer);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 101:
      if (lookahead == 'l') ADVANCE(111);
      END_STATE();
    case 102:
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 103:
      if (lookahead == 's') ADVANCE(113);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_imports);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_include);
      END_STATE();
    case 106:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 107:
      if (lookahead == 'c') ADVANCE(115);
      END_STATE();
    case 108:
      if (lookahead == 'l') ADVANCE(116);
      END_STATE();
    case 109:
      if (lookahead == 'i') ADVANCE(117);
      END_STATE();
    case 110:
      if (lookahead == 'i') ADVANCE(118);
      END_STATE();
    case 111:
      if (lookahead == 'i') ADVANCE(119);
      END_STATE();
    case 112:
      if (lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_features);
      END_STATE();
    case 114:
      if (lookahead == 'y') ADVANCE(121);
      END_STATE();
    case 115:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_optional);
      END_STATE();
    case 117:
      if (lookahead == 'c') ADVANCE(123);
      END_STATE();
    case 118:
      if (lookahead == 'v') ADVANCE(124);
      END_STATE();
    case 119:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 120:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_mandatory);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_namespace);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_Arithmetic);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 125:
      if (lookahead == 'y') ADVANCE(128);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_constraint);
      if (lookahead == 's') ADVANCE(129);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_alternative);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_cardinality);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_constraints);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 84, .external_lex_state = 2},
  [2] = {.lex_state = 84, .external_lex_state = 3},
  [3] = {.lex_state = 84, .external_lex_state = 3},
  [4] = {.lex_state = 84, .external_lex_state = 3},
  [5] = {.lex_state = 84, .external_lex_state = 3},
  [6] = {.lex_state = 84, .external_lex_state = 3},
  [7] = {.lex_state = 84, .external_lex_state = 3},
  [8] = {.lex_state = 84, .external_lex_state = 3},
  [9] = {.lex_state = 84, .external_lex_state = 2},
  [10] = {.lex_state = 84, .external_lex_state = 3},
  [11] = {.lex_state = 84, .external_lex_state = 3},
  [12] = {.lex_state = 84, .external_lex_state = 3},
  [13] = {.lex_state = 84, .external_lex_state = 3},
  [14] = {.lex_state = 84, .external_lex_state = 3},
  [15] = {.lex_state = 84, .external_lex_state = 3},
  [16] = {.lex_state = 84, .external_lex_state = 3},
  [17] = {.lex_state = 84, .external_lex_state = 3},
  [18] = {.lex_state = 84, .external_lex_state = 3},
  [19] = {.lex_state = 84, .external_lex_state = 2},
  [20] = {.lex_state = 84, .external_lex_state = 3},
  [21] = {.lex_state = 84, .external_lex_state = 4},
  [22] = {.lex_state = 84, .external_lex_state = 4},
  [23] = {.lex_state = 84, .external_lex_state = 4},
  [24] = {.lex_state = 84, .external_lex_state = 5},
  [25] = {.lex_state = 84, .external_lex_state = 4},
  [26] = {.lex_state = 84, .external_lex_state = 4},
  [27] = {.lex_state = 84, .external_lex_state = 5},
  [28] = {.lex_state = 84, .external_lex_state = 5},
  [29] = {.lex_state = 84, .external_lex_state = 5},
  [30] = {.lex_state = 84, .external_lex_state = 5},
  [31] = {.lex_state = 84, .external_lex_state = 5},
  [32] = {.lex_state = 84, .external_lex_state = 5},
  [33] = {.lex_state = 84, .external_lex_state = 4},
  [34] = {.lex_state = 84, .external_lex_state = 5},
  [35] = {.lex_state = 84, .external_lex_state = 4},
  [36] = {.lex_state = 84, .external_lex_state = 4},
  [37] = {.lex_state = 84, .external_lex_state = 5},
  [38] = {.lex_state = 84, .external_lex_state = 4},
  [39] = {.lex_state = 84, .external_lex_state = 2},
  [40] = {.lex_state = 84, .external_lex_state = 3},
  [41] = {.lex_state = 84, .external_lex_state = 3},
  [42] = {.lex_state = 84, .external_lex_state = 2},
  [43] = {.lex_state = 84, .external_lex_state = 2},
  [44] = {.lex_state = 84, .external_lex_state = 2},
  [45] = {.lex_state = 84, .external_lex_state = 3},
  [46] = {.lex_state = 84, .external_lex_state = 3},
  [47] = {.lex_state = 84, .external_lex_state = 3},
  [48] = {.lex_state = 84, .external_lex_state = 2},
  [49] = {.lex_state = 84, .external_lex_state = 2},
  [50] = {.lex_state = 84, .external_lex_state = 2},
  [51] = {.lex_state = 84, .external_lex_state = 3},
  [52] = {.lex_state = 84, .external_lex_state = 2},
  [53] = {.lex_state = 84, .external_lex_state = 3},
  [54] = {.lex_state = 84, .external_lex_state = 3},
  [55] = {.lex_state = 84, .external_lex_state = 6},
  [56] = {.lex_state = 5, .external_lex_state = 7},
  [57] = {.lex_state = 5, .external_lex_state = 7},
  [58] = {.lex_state = 5, .external_lex_state = 8},
  [59] = {.lex_state = 5, .external_lex_state = 8},
  [60] = {.lex_state = 5, .external_lex_state = 8},
  [61] = {.lex_state = 5, .external_lex_state = 8},
  [62] = {.lex_state = 5, .external_lex_state = 2},
  [63] = {.lex_state = 5, .external_lex_state = 2},
  [64] = {.lex_state = 5, .external_lex_state = 2},
  [65] = {.lex_state = 5, .external_lex_state = 6},
  [66] = {.lex_state = 5, .external_lex_state = 6},
  [67] = {.lex_state = 5, .external_lex_state = 6},
  [68] = {.lex_state = 5, .external_lex_state = 9},
  [69] = {.lex_state = 5, .external_lex_state = 9},
  [70] = {.lex_state = 5, .external_lex_state = 8},
  [71] = {.lex_state = 5, .external_lex_state = 6},
  [72] = {.lex_state = 5, .external_lex_state = 9},
  [73] = {.lex_state = 5, .external_lex_state = 8},
  [74] = {.lex_state = 84, .external_lex_state = 6},
  [75] = {.lex_state = 5, .external_lex_state = 9},
  [76] = {.lex_state = 5, .external_lex_state = 9},
  [77] = {.lex_state = 5, .external_lex_state = 9},
  [78] = {.lex_state = 84, .external_lex_state = 6},
  [79] = {.lex_state = 5, .external_lex_state = 9},
  [80] = {.lex_state = 5, .external_lex_state = 6},
  [81] = {.lex_state = 5, .external_lex_state = 9},
  [82] = {.lex_state = 5, .external_lex_state = 7},
  [83] = {.lex_state = 5, .external_lex_state = 2},
  [84] = {.lex_state = 5, .external_lex_state = 6},
  [85] = {.lex_state = 5, .external_lex_state = 2},
  [86] = {.lex_state = 5, .external_lex_state = 2},
  [87] = {.lex_state = 5, .external_lex_state = 2},
  [88] = {.lex_state = 5, .external_lex_state = 2},
  [89] = {.lex_state = 5, .external_lex_state = 2},
  [90] = {.lex_state = 5, .external_lex_state = 2},
  [91] = {.lex_state = 5, .external_lex_state = 2},
  [92] = {.lex_state = 5, .external_lex_state = 2},
  [93] = {.lex_state = 5, .external_lex_state = 2},
  [94] = {.lex_state = 5, .external_lex_state = 6},
  [95] = {.lex_state = 5, .external_lex_state = 2},
  [96] = {.lex_state = 5, .external_lex_state = 2},
  [97] = {.lex_state = 5, .external_lex_state = 2},
  [98] = {.lex_state = 5, .external_lex_state = 9},
  [99] = {.lex_state = 5, .external_lex_state = 2},
  [100] = {.lex_state = 5, .external_lex_state = 2},
  [101] = {.lex_state = 5, .external_lex_state = 2},
  [102] = {.lex_state = 5, .external_lex_state = 2},
  [103] = {.lex_state = 5, .external_lex_state = 2},
  [104] = {.lex_state = 5, .external_lex_state = 2},
  [105] = {.lex_state = 5, .external_lex_state = 2},
  [106] = {.lex_state = 5, .external_lex_state = 2},
  [107] = {.lex_state = 5, .external_lex_state = 2},
  [108] = {.lex_state = 5, .external_lex_state = 2},
  [109] = {.lex_state = 5, .external_lex_state = 2},
  [110] = {.lex_state = 5, .external_lex_state = 2},
  [111] = {.lex_state = 5, .external_lex_state = 2},
  [112] = {.lex_state = 5, .external_lex_state = 8},
  [113] = {.lex_state = 5, .external_lex_state = 2},
  [114] = {.lex_state = 5, .external_lex_state = 2},
  [115] = {.lex_state = 5, .external_lex_state = 9},
  [116] = {.lex_state = 5, .external_lex_state = 2},
  [117] = {.lex_state = 5, .external_lex_state = 2},
  [118] = {.lex_state = 5, .external_lex_state = 2},
  [119] = {.lex_state = 5, .external_lex_state = 2},
  [120] = {.lex_state = 5, .external_lex_state = 8},
  [121] = {.lex_state = 5, .external_lex_state = 2},
  [122] = {.lex_state = 5, .external_lex_state = 2},
  [123] = {.lex_state = 5, .external_lex_state = 2},
  [124] = {.lex_state = 5, .external_lex_state = 2},
  [125] = {.lex_state = 5, .external_lex_state = 7},
  [126] = {.lex_state = 5, .external_lex_state = 6},
  [127] = {.lex_state = 5, .external_lex_state = 6},
  [128] = {.lex_state = 5, .external_lex_state = 6},
  [129] = {.lex_state = 84, .external_lex_state = 7},
  [130] = {.lex_state = 84, .external_lex_state = 7},
  [131] = {.lex_state = 84, .external_lex_state = 7},
  [132] = {.lex_state = 5, .external_lex_state = 6},
  [133] = {.lex_state = 84, .external_lex_state = 8},
  [134] = {.lex_state = 84, .external_lex_state = 8},
  [135] = {.lex_state = 84, .external_lex_state = 8},
  [136] = {.lex_state = 84, .external_lex_state = 2},
  [137] = {.lex_state = 84, .external_lex_state = 9},
  [138] = {.lex_state = 84, .external_lex_state = 7},
  [139] = {.lex_state = 84, .external_lex_state = 8},
  [140] = {.lex_state = 84, .external_lex_state = 9},
  [141] = {.lex_state = 84, .external_lex_state = 9},
  [142] = {.lex_state = 84, .external_lex_state = 9},
  [143] = {.lex_state = 5, .external_lex_state = 6},
  [144] = {.lex_state = 5, .external_lex_state = 6},
  [145] = {.lex_state = 5, .external_lex_state = 6},
  [146] = {.lex_state = 84, .external_lex_state = 8},
  [147] = {.lex_state = 84, .external_lex_state = 7},
  [148] = {.lex_state = 5, .external_lex_state = 6},
  [149] = {.lex_state = 84, .external_lex_state = 9},
  [150] = {.lex_state = 5, .external_lex_state = 6},
  [151] = {.lex_state = 0, .external_lex_state = 9},
  [152] = {.lex_state = 5, .external_lex_state = 6},
  [153] = {.lex_state = 0, .external_lex_state = 8},
  [154] = {.lex_state = 0, .external_lex_state = 9},
  [155] = {.lex_state = 5, .external_lex_state = 6},
  [156] = {.lex_state = 0, .external_lex_state = 9},
  [157] = {.lex_state = 5, .external_lex_state = 6},
  [158] = {.lex_state = 84, .external_lex_state = 8},
  [159] = {.lex_state = 5, .external_lex_state = 6},
  [160] = {.lex_state = 5, .external_lex_state = 6},
  [161] = {.lex_state = 5, .external_lex_state = 6},
  [162] = {.lex_state = 5, .external_lex_state = 6},
  [163] = {.lex_state = 84, .external_lex_state = 9},
  [164] = {.lex_state = 5, .external_lex_state = 6},
  [165] = {.lex_state = 0, .external_lex_state = 9},
  [166] = {.lex_state = 5, .external_lex_state = 6},
  [167] = {.lex_state = 5, .external_lex_state = 6},
  [168] = {.lex_state = 0, .external_lex_state = 9},
  [169] = {.lex_state = 0, .external_lex_state = 8},
  [170] = {.lex_state = 0, .external_lex_state = 8},
  [171] = {.lex_state = 0, .external_lex_state = 8},
  [172] = {.lex_state = 0, .external_lex_state = 8},
  [173] = {.lex_state = 0, .external_lex_state = 8},
  [174] = {.lex_state = 0, .external_lex_state = 8},
  [175] = {.lex_state = 0, .external_lex_state = 9},
  [176] = {.lex_state = 0, .external_lex_state = 9},
  [177] = {.lex_state = 0, .external_lex_state = 9},
  [178] = {.lex_state = 0, .external_lex_state = 9},
  [179] = {.lex_state = 0, .external_lex_state = 9},
  [180] = {.lex_state = 0, .external_lex_state = 8},
  [181] = {.lex_state = 0, .external_lex_state = 9},
  [182] = {.lex_state = 0, .external_lex_state = 9},
  [183] = {.lex_state = 0, .external_lex_state = 9},
  [184] = {.lex_state = 0, .external_lex_state = 9},
  [185] = {.lex_state = 0, .external_lex_state = 9},
  [186] = {.lex_state = 0, .external_lex_state = 8},
  [187] = {.lex_state = 0, .external_lex_state = 8},
  [188] = {.lex_state = 0, .external_lex_state = 8},
  [189] = {.lex_state = 0, .external_lex_state = 9},
  [190] = {.lex_state = 0, .external_lex_state = 9},
  [191] = {.lex_state = 0, .external_lex_state = 8},
  [192] = {.lex_state = 0, .external_lex_state = 8},
  [193] = {.lex_state = 0, .external_lex_state = 9},
  [194] = {.lex_state = 0, .external_lex_state = 7},
  [195] = {.lex_state = 0, .external_lex_state = 7},
  [196] = {.lex_state = 0, .external_lex_state = 8},
  [197] = {.lex_state = 0, .external_lex_state = 8},
  [198] = {.lex_state = 0, .external_lex_state = 8},
  [199] = {.lex_state = 0, .external_lex_state = 7},
  [200] = {.lex_state = 0, .external_lex_state = 7},
  [201] = {.lex_state = 0, .external_lex_state = 7},
  [202] = {.lex_state = 0, .external_lex_state = 9},
  [203] = {.lex_state = 0, .external_lex_state = 7},
  [204] = {.lex_state = 0, .external_lex_state = 7},
  [205] = {.lex_state = 0, .external_lex_state = 8},
  [206] = {.lex_state = 0, .external_lex_state = 7},
  [207] = {.lex_state = 0, .external_lex_state = 7},
  [208] = {.lex_state = 0, .external_lex_state = 7},
  [209] = {.lex_state = 0, .external_lex_state = 7},
  [210] = {.lex_state = 0, .external_lex_state = 7},
  [211] = {.lex_state = 0, .external_lex_state = 7},
  [212] = {.lex_state = 0, .external_lex_state = 7},
  [213] = {.lex_state = 0, .external_lex_state = 7},
  [214] = {.lex_state = 0, .external_lex_state = 7},
  [215] = {.lex_state = 0, .external_lex_state = 9},
  [216] = {.lex_state = 0, .external_lex_state = 9},
  [217] = {.lex_state = 0, .external_lex_state = 9},
  [218] = {.lex_state = 0, .external_lex_state = 9},
  [219] = {.lex_state = 5, .external_lex_state = 7},
  [220] = {.lex_state = 5, .external_lex_state = 7},
  [221] = {.lex_state = 5, .external_lex_state = 7},
  [222] = {.lex_state = 5, .external_lex_state = 7},
  [223] = {.lex_state = 5, .external_lex_state = 7},
  [224] = {.lex_state = 5, .external_lex_state = 7},
  [225] = {.lex_state = 5, .external_lex_state = 7},
  [226] = {.lex_state = 5, .external_lex_state = 7},
  [227] = {.lex_state = 5, .external_lex_state = 7},
  [228] = {.lex_state = 5, .external_lex_state = 7},
  [229] = {.lex_state = 5, .external_lex_state = 7},
  [230] = {.lex_state = 5, .external_lex_state = 7},
  [231] = {.lex_state = 5, .external_lex_state = 2},
  [232] = {.lex_state = 5, .external_lex_state = 6},
  [233] = {.lex_state = 5, .external_lex_state = 6},
  [234] = {.lex_state = 5, .external_lex_state = 6},
  [235] = {.lex_state = 5, .external_lex_state = 6},
  [236] = {.lex_state = 5, .external_lex_state = 6},
  [237] = {.lex_state = 5, .external_lex_state = 6},
  [238] = {.lex_state = 5, .external_lex_state = 2},
  [239] = {.lex_state = 5, .external_lex_state = 2},
  [240] = {.lex_state = 5, .external_lex_state = 6},
  [241] = {.lex_state = 5, .external_lex_state = 2},
  [242] = {.lex_state = 5, .external_lex_state = 2},
  [243] = {.lex_state = 5, .external_lex_state = 6},
  [244] = {.lex_state = 5, .external_lex_state = 6},
  [245] = {.lex_state = 5, .external_lex_state = 6},
  [246] = {.lex_state = 5, .external_lex_state = 2},
  [247] = {.lex_state = 5, .external_lex_state = 6},
  [248] = {.lex_state = 5, .external_lex_state = 6},
  [249] = {.lex_state = 0, .external_lex_state = 9},
  [250] = {.lex_state = 0, .external_lex_state = 9},
  [251] = {.lex_state = 5, .external_lex_state = 6},
  [252] = {.lex_state = 5, .external_lex_state = 6},
  [253] = {.lex_state = 0, .external_lex_state = 8},
  [254] = {.lex_state = 0, .external_lex_state = 7},
  [255] = {.lex_state = 0, .external_lex_state = 8},
  [256] = {.lex_state = 0, .external_lex_state = 7},
  [257] = {.lex_state = 5, .external_lex_state = 6},
  [258] = {.lex_state = 0, .external_lex_state = 7},
  [259] = {.lex_state = 0, .external_lex_state = 9},
  [260] = {.lex_state = 0, .external_lex_state = 8},
  [261] = {.lex_state = 0, .external_lex_state = 8},
  [262] = {.lex_state = 0, .external_lex_state = 7},
  [263] = {.lex_state = 0, .external_lex_state = 8},
  [264] = {.lex_state = 5, .external_lex_state = 6},
  [265] = {.lex_state = 0, .external_lex_state = 7},
  [266] = {.lex_state = 0, .external_lex_state = 7},
  [267] = {.lex_state = 5, .external_lex_state = 6},
  [268] = {.lex_state = 0, .external_lex_state = 8},
  [269] = {.lex_state = 0, .external_lex_state = 8},
  [270] = {.lex_state = 0, .external_lex_state = 6},
  [271] = {.lex_state = 0, .external_lex_state = 6},
  [272] = {.lex_state = 0, .external_lex_state = 7},
  [273] = {.lex_state = 0, .external_lex_state = 7},
  [274] = {.lex_state = 5, .external_lex_state = 6},
  [275] = {.lex_state = 0, .external_lex_state = 9},
  [276] = {.lex_state = 5, .external_lex_state = 6},
  [277] = {.lex_state = 0, .external_lex_state = 9},
  [278] = {.lex_state = 0, .external_lex_state = 7},
  [279] = {.lex_state = 5, .external_lex_state = 2},
  [280] = {.lex_state = 0, .external_lex_state = 8},
  [281] = {.lex_state = 0, .external_lex_state = 7},
  [282] = {.lex_state = 0, .external_lex_state = 2},
  [283] = {.lex_state = 6, .external_lex_state = 2},
  [284] = {.lex_state = 6, .external_lex_state = 2},
  [285] = {.lex_state = 0, .external_lex_state = 7},
  [286] = {.lex_state = 0, .external_lex_state = 7},
  [287] = {.lex_state = 0, .external_lex_state = 7},
  [288] = {.lex_state = 0, .external_lex_state = 8},
  [289] = {.lex_state = 6, .external_lex_state = 8},
  [290] = {.lex_state = 0, .external_lex_state = 8},
  [291] = {.lex_state = 0, .external_lex_state = 8},
  [292] = {.lex_state = 0, .external_lex_state = 7},
  [293] = {.lex_state = 0, .external_lex_state = 2},
  [294] = {.lex_state = 0, .external_lex_state = 7},
  [295] = {.lex_state = 0, .external_lex_state = 7},
  [296] = {.lex_state = 0, .external_lex_state = 8},
  [297] = {.lex_state = 0, .external_lex_state = 8},
  [298] = {.lex_state = 0, .external_lex_state = 8},
  [299] = {.lex_state = 0, .external_lex_state = 8},
  [300] = {.lex_state = 0, .external_lex_state = 8},
  [301] = {.lex_state = 0, .external_lex_state = 8},
  [302] = {.lex_state = 0, .external_lex_state = 7},
  [303] = {.lex_state = 0, .external_lex_state = 7},
  [304] = {.lex_state = 0, .external_lex_state = 7},
  [305] = {.lex_state = 0, .external_lex_state = 7},
  [306] = {.lex_state = 0, .external_lex_state = 7},
  [307] = {.lex_state = 0, .external_lex_state = 7},
  [308] = {.lex_state = 0, .external_lex_state = 7},
  [309] = {.lex_state = 0, .external_lex_state = 7},
  [310] = {.lex_state = 142, .external_lex_state = 2},
  [311] = {.lex_state = 0, .external_lex_state = 2},
  [312] = {.lex_state = 137, .external_lex_state = 2},
  [313] = {.lex_state = 0, .external_lex_state = 2},
  [314] = {.lex_state = 0, .external_lex_state = 2},
  [315] = {.lex_state = 0, .external_lex_state = 2},
  [316] = {.lex_state = 0, .external_lex_state = 8},
  [317] = {.lex_state = 142, .external_lex_state = 2},
  [318] = {.lex_state = 137, .external_lex_state = 2},
  [319] = {.lex_state = 142, .external_lex_state = 2},
  [320] = {.lex_state = 0, .external_lex_state = 2},
  [321] = {.lex_state = 0, .external_lex_state = 2},
  [322] = {.lex_state = 0, .external_lex_state = 2},
  [323] = {.lex_state = 0, .external_lex_state = 8},
  [324] = {.lex_state = 137, .external_lex_state = 2},
  [325] = {.lex_state = 0, .external_lex_state = 2},
  [326] = {.lex_state = 0, .external_lex_state = 2},
  [327] = {.lex_state = 142, .external_lex_state = 2},
  [328] = {.lex_state = 137, .external_lex_state = 2},
  [329] = {.lex_state = 0, .external_lex_state = 2},
};

enum {
  ts_external_token__indent = 0,
  ts_external_token__dedent = 1,
  ts_external_token__newline = 2,
  ts_external_token_comment = 3,
  ts_external_token_RPAREN = 4,
  ts_external_token_RBRACK = 5,
  ts_external_token_RBRACE = 6,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__indent] = sym__indent,
  [ts_external_token__dedent] = sym__dedent,
  [ts_external_token__newline] = sym__newline,
  [ts_external_token_comment] = sym_comment,
  [ts_external_token_RPAREN] = anon_sym_RPAREN,
  [ts_external_token_RBRACK] = anon_sym_RBRACK,
  [ts_external_token_RBRACE] = anon_sym_RBRACE,
};

static const bool ts_external_scanner_states[10][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token__newline] = true,
    [ts_external_token_comment] = true,
    [ts_external_token_RPAREN] = true,
    [ts_external_token_RBRACK] = true,
    [ts_external_token_RBRACE] = true,
  },
  [2] = {
    [ts_external_token_comment] = true,
  },
  [3] = {
    [ts_external_token__dedent] = true,
    [ts_external_token_comment] = true,
  },
  [4] = {
    [ts_external_token__indent] = true,
    [ts_external_token__dedent] = true,
    [ts_external_token_comment] = true,
  },
  [5] = {
    [ts_external_token__indent] = true,
    [ts_external_token_comment] = true,
  },
  [6] = {
    [ts_external_token__newline] = true,
    [ts_external_token_comment] = true,
  },
  [7] = {
    [ts_external_token_comment] = true,
    [ts_external_token_RBRACE] = true,
  },
  [8] = {
    [ts_external_token_comment] = true,
    [ts_external_token_RBRACK] = true,
  },
  [9] = {
    [ts_external_token_comment] = true,
    [ts_external_token_RPAREN] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_name] = ACTIONS(1),
    [anon_sym_cardinality] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_namespace] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_constraint] = ACTIONS(1),
    [anon_sym_constraints] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_LT_EQ_GT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [anon_sym_SLASH] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_alternative] = ACTIONS(1),
    [anon_sym_mandatory] = ACTIONS(1),
    [anon_sym_optional] = ACTIONS(1),
    [anon_sym_Boolean] = ACTIONS(1),
    [anon_sym_Arithmetic] = ACTIONS(1),
    [anon_sym_Type] = ACTIONS(1),
    [anon_sym_group_DASHcardinality] = ACTIONS(1),
    [anon_sym_feature_DASHcardinality] = ACTIONS(1),
    [anon_sym_aggregate_DASHfunction] = ACTIONS(1),
    [anon_sym_type_DASHconstraints] = ACTIONS(1),
    [anon_sym_string_DASHconstraints] = ACTIONS(1),
    [anon_sym_numeric_DASHconstraints] = ACTIONS(1),
    [anon_sym_Real] = ACTIONS(1),
    [anon_sym_Integer] = ACTIONS(1),
    [anon_sym_String] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym_imports] = ACTIONS(1),
    [sym_features] = ACTIONS(1),
    [sym_include] = ACTIONS(1),
    [sym_int] = ACTIONS(1),
    [sym__indent] = ACTIONS(1),
    [sym__dedent] = ACTIONS(1),
    [sym__newline] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(311),
    [sym_blk] = STATE(19),
    [sym__header] = STATE(244),
    [sym_typed_feature] = STATE(244),
    [sym_ref] = STATE(244),
    [sym_namespace] = STATE(244),
    [sym_incomplete_namespace] = STATE(244),
    [sym_incomplete_ref] = STATE(244),
    [sym_cardinality] = STATE(244),
    [sym__expr] = STATE(160),
    [sym_unary_expr] = STATE(152),
    [sym_binary_expr] = STATE(152),
    [sym_nested_expr] = STATE(152),
    [sym_function] = STATE(152),
    [sym_bool] = STATE(152),
    [sym_path] = STATE(132),
    [sym_lang_lvl] = STATE(244),
    [sym_group_mode] = STATE(244),
    [sym_major_lvl] = STATE(236),
    [sym_minor_lvl] = STATE(236),
    [sym_type] = STATE(241),
    [sym_string] = STATE(152),
    [sym_string_name] = STATE(65),
    [sym_constraints] = STATE(244),
    [sym__any_name] = STATE(65),
    [aux_sym_source_file_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_name] = ACTIONS(7),
    [anon_sym_namespace] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_constraints] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_false] = ACTIONS(21),
    [sym_number] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_alternative] = ACTIONS(25),
    [anon_sym_mandatory] = ACTIONS(25),
    [anon_sym_optional] = ACTIONS(25),
    [anon_sym_Boolean] = ACTIONS(27),
    [anon_sym_Arithmetic] = ACTIONS(29),
    [anon_sym_Type] = ACTIONS(29),
    [anon_sym_group_DASHcardinality] = ACTIONS(13),
    [anon_sym_feature_DASHcardinality] = ACTIONS(13),
    [anon_sym_aggregate_DASHfunction] = ACTIONS(13),
    [anon_sym_type_DASHconstraints] = ACTIONS(13),
    [anon_sym_string_DASHconstraints] = ACTIONS(13),
    [anon_sym_numeric_DASHconstraints] = ACTIONS(13),
    [anon_sym_Real] = ACTIONS(31),
    [anon_sym_Integer] = ACTIONS(31),
    [anon_sym_String] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [sym_imports] = ACTIONS(37),
    [sym_features] = ACTIONS(37),
    [sym_include] = ACTIONS(37),
  },
  [2] = {
    [sym_blk] = STATE(7),
    [sym__header] = STATE(248),
    [sym_typed_feature] = STATE(248),
    [sym_ref] = STATE(248),
    [sym_namespace] = STATE(248),
    [sym_incomplete_namespace] = STATE(248),
    [sym_incomplete_ref] = STATE(248),
    [sym_cardinality] = STATE(248),
    [sym__expr] = STATE(160),
    [sym_unary_expr] = STATE(152),
    [sym_binary_expr] = STATE(152),
    [sym_nested_expr] = STATE(152),
    [sym_function] = STATE(152),
    [sym_bool] = STATE(152),
    [sym_path] = STATE(132),
    [sym_lang_lvl] = STATE(248),
    [sym_group_mode] = STATE(248),
    [sym_major_lvl] = STATE(236),
    [sym_minor_lvl] = STATE(236),
    [sym_type] = STATE(241),
    [sym_string] = STATE(152),
    [sym_string_name] = STATE(65),
    [sym_constraints] = STATE(248),
    [sym__any_name] = STATE(65),
    [aux_sym_source_file_repeat1] = STATE(7),
    [sym_name] = ACTIONS(7),
    [anon_sym_namespace] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_constraints] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_false] = ACTIONS(21),
    [sym_number] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_alternative] = ACTIONS(25),
    [anon_sym_mandatory] = ACTIONS(25),
    [anon_sym_optional] = ACTIONS(25),
    [anon_sym_Boolean] = ACTIONS(27),
    [anon_sym_Arithmetic] = ACTIONS(29),
    [anon_sym_Type] = ACTIONS(29),
    [anon_sym_group_DASHcardinality] = ACTIONS(13),
    [anon_sym_feature_DASHcardinality] = ACTIONS(13),
    [anon_sym_aggregate_DASHfunction] = ACTIONS(13),
    [anon_sym_type_DASHconstraints] = ACTIONS(13),
    [anon_sym_string_DASHconstraints] = ACTIONS(13),
    [anon_sym_numeric_DASHconstraints] = ACTIONS(13),
    [anon_sym_Real] = ACTIONS(31),
    [anon_sym_Integer] = ACTIONS(31),
    [anon_sym_String] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [sym_imports] = ACTIONS(39),
    [sym_features] = ACTIONS(39),
    [sym_include] = ACTIONS(39),
    [sym__dedent] = ACTIONS(41),
  },
  [3] = {
    [sym_blk] = STATE(5),
    [sym__header] = STATE(248),
    [sym_typed_feature] = STATE(248),
    [sym_ref] = STATE(248),
    [sym_namespace] = STATE(248),
    [sym_incomplete_namespace] = STATE(248),
    [sym_incomplete_ref] = STATE(248),
    [sym_cardinality] = STATE(248),
    [sym__expr] = STATE(160),
    [sym_unary_expr] = STATE(152),
    [sym_binary_expr] = STATE(152),
    [sym_nested_expr] = STATE(152),
    [sym_function] = STATE(152),
    [sym_bool] = STATE(152),
    [sym_path] = STATE(132),
    [sym_lang_lvl] = STATE(248),
    [sym_group_mode] = STATE(248),
    [sym_major_lvl] = STATE(236),
    [sym_minor_lvl] = STATE(236),
    [sym_type] = STATE(241),
    [sym_string] = STATE(152),
    [sym_string_name] = STATE(65),
    [sym_constraints] = STATE(248),
    [sym__any_name] = STATE(65),
    [aux_sym_source_file_repeat1] = STATE(5),
    [sym_name] = ACTIONS(7),
    [anon_sym_namespace] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_constraints] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_false] = ACTIONS(21),
    [sym_number] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_alternative] = ACTIONS(25),
    [anon_sym_mandatory] = ACTIONS(25),
    [anon_sym_optional] = ACTIONS(25),
    [anon_sym_Boolean] = ACTIONS(27),
    [anon_sym_Arithmetic] = ACTIONS(29),
    [anon_sym_Type] = ACTIONS(29),
    [anon_sym_group_DASHcardinality] = ACTIONS(13),
    [anon_sym_feature_DASHcardinality] = ACTIONS(13),
    [anon_sym_aggregate_DASHfunction] = ACTIONS(13),
    [anon_sym_type_DASHconstraints] = ACTIONS(13),
    [anon_sym_string_DASHconstraints] = ACTIONS(13),
    [anon_sym_numeric_DASHconstraints] = ACTIONS(13),
    [anon_sym_Real] = ACTIONS(31),
    [anon_sym_Integer] = ACTIONS(31),
    [anon_sym_String] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [sym_imports] = ACTIONS(39),
    [sym_features] = ACTIONS(39),
    [sym_include] = ACTIONS(39),
    [sym__dedent] = ACTIONS(43),
  },
  [4] = {
    [sym_blk] = STATE(12),
    [sym__header] = STATE(248),
    [sym_typed_feature] = STATE(248),
    [sym_ref] = STATE(248),
    [sym_namespace] = STATE(248),
    [sym_incomplete_namespace] = STATE(248),
    [sym_incomplete_ref] = STATE(248),
    [sym_cardinality] = STATE(248),
    [sym__expr] = STATE(160),
    [sym_unary_expr] = STATE(152),
    [sym_binary_expr] = STATE(152),
    [sym_nested_expr] = STATE(152),
    [sym_function] = STATE(152),
    [sym_bool] = STATE(152),
    [sym_path] = STATE(132),
    [sym_lang_lvl] = STATE(248),
    [sym_group_mode] = STATE(248),
    [sym_major_lvl] = STATE(236),
    [sym_minor_lvl] = STATE(236),
    [sym_type] = STATE(241),
    [sym_string] = STATE(152),
    [sym_string_name] = STATE(65),
    [sym_constraints] = STATE(248),
    [sym__any_name] = STATE(65),
    [aux_sym_source_file_repeat1] = STATE(12),
    [sym_name] = ACTIONS(7),
    [anon_sym_namespace] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_constraints] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_false] = ACTIONS(21),
    [sym_number] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_alternative] = ACTIONS(25),
    [anon_sym_mandatory] = ACTIONS(25),
    [anon_sym_optional] = ACTIONS(25),
    [anon_sym_Boolean] = ACTIONS(27),
    [anon_sym_Arithmetic] = ACTIONS(29),
    [anon_sym_Type] = ACTIONS(29),
    [anon_sym_group_DASHcardinality] = ACTIONS(13),
    [anon_sym_feature_DASHcardinality] = ACTIONS(13),
    [anon_sym_aggregate_DASHfunction] = ACTIONS(13),
    [anon_sym_type_DASHconstraints] = ACTIONS(13),
    [anon_sym_string_DASHconstraints] = ACTIONS(13),
    [anon_sym_numeric_DASHconstraints] = ACTIONS(13),
    [anon_sym_Real] = ACTIONS(31),
    [anon_sym_Integer] = ACTIONS(31),
    [anon_sym_String] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [sym_imports] = ACTIONS(39),
    [sym_features] = ACTIONS(39),
    [sym_include] = ACTIONS(39),
    [sym__dedent] = ACTIONS(45),
  },
  [5] = {
    [sym_blk] = STATE(7),
    [sym__header] = STATE(248),
    [sym_typed_feature] = STATE(248),
    [sym_ref] = STATE(248),
    [sym_namespace] = STATE(248),
    [sym_incomplete_namespace] = STATE(248),
    [sym_incomplete_ref] = STATE(248),
    [sym_cardinality] = STATE(248),
    [sym__expr] = STATE(160),
    [sym_unary_expr] = STATE(152),
    [sym_binary_expr] = STATE(152),
    [sym_nested_expr] = STATE(152),
    [sym_function] = STATE(152),
    [sym_bool] = STATE(152),
    [sym_path] = STATE(132),
    [sym_lang_lvl] = STATE(248),
    [sym_group_mode] = STATE(248),
    [sym_major_lvl] = STATE(236),
    [sym_minor_lvl] = STATE(236),
    [sym_type] = STATE(241),
    [sym_string] = STATE(152),
    [sym_string_name] = STATE(65),
    [sym_constraints] = STATE(248),
    [sym__any_name] = STATE(65),
    [aux_sym_source_file_repeat1] = STATE(7),
    [sym_name] = ACTIONS(7),
    [anon_sym_namespace] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_constraints] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_false] = ACTIONS(21),
    [sym_number] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_alternative] = ACTIONS(25),
    [anon_sym_mandatory] = ACTIONS(25),
    [anon_sym_optional] = ACTIONS(25),
    [anon_sym_Boolean] = ACTIONS(27),
    [anon_sym_Arithmetic] = ACTIONS(29),
    [anon_sym_Type] = ACTIONS(29),
    [anon_sym_group_DASHcardinality] = ACTIONS(13),
    [anon_sym_feature_DASHcardinality] = ACTIONS(13),
    [anon_sym_aggregate_DASHfunction] = ACTIONS(13),
    [anon_sym_type_DASHconstraints] = ACTIONS(13),
    [anon_sym_string_DASHconstraints] = ACTIONS(13),
    [anon_sym_numeric_DASHconstraints] = ACTIONS(13),
    [anon_sym_Real] = ACTIONS(31),
    [anon_sym_Integer] = ACTIONS(31),
    [anon_sym_String] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [sym_imports] = ACTIONS(39),
    [sym_features] = ACTIONS(39),
    [sym_include] = ACTIONS(39),
    [sym__dedent] = ACTIONS(47),
  },
  [6] = {
    [sym_blk] = STATE(2),
    [sym__header] = STATE(248),
    [sym_typed_feature] = STATE(248),
    [sym_ref] = STATE(248),
    [sym_namespace] = STATE(248),
    [sym_incomplete_namespace] = STATE(248),
    [sym_incomplete_ref] = STATE(248),
    [sym_cardinality] = STATE(248),
    [sym__expr] = STATE(160),
    [sym_unary_expr] = STATE(152),
    [sym_binary_expr] = STATE(152),
    [sym_nested_expr] = STATE(152),
    [sym_function] = STATE(152),
    [sym_bool] = STATE(152),
    [sym_path] = STATE(132),
    [sym_lang_lvl] = STATE(248),
    [sym_group_mode] = STATE(248),
    [sym_major_lvl] = STATE(236),
    [sym_minor_lvl] = STATE(236),
    [sym_type] = STATE(241),
    [sym_string] = STATE(152),
    [sym_string_name] = STATE(65),
    [sym_constraints] = STATE(248),
    [sym__any_name] = STATE(65),
    [aux_sym_source_file_repeat1] = STATE(2),
    [sym_name] = ACTIONS(7),
    [anon_sym_namespace] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_constraints] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_false] = ACTIONS(21),
    [sym_number] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_alternative] = ACTIONS(25),
    [anon_sym_mandatory] = ACTIONS(25),
    [anon_sym_optional] = ACTIONS(25),
    [anon_sym_Boolean] = ACTIONS(27),
    [anon_sym_Arithmetic] = ACTIONS(29),
    [anon_sym_Type] = ACTIONS(29),
    [anon_sym_group_DASHcardinality] = ACTIONS(13),
    [anon_sym_feature_DASHcardinality] = ACTIONS(13),
    [anon_sym_aggregate_DASHfunction] = ACTIONS(13),
    [anon_sym_type_DASHconstraints] = ACTIONS(13),
    [anon_sym_string_DASHconstraints] = ACTIONS(13),
    [anon_sym_numeric_DASHconstraints] = ACTIONS(13),
    [anon_sym_Real] = ACTIONS(31),
    [anon_sym_Integer] = ACTIONS(31),
    [anon_sym_String] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [sym_imports] = ACTIONS(39),
    [sym_features] = ACTIONS(39),
    [sym_include] = ACTIONS(39),
    [sym__dedent] = ACTIONS(49),
  },
  [7] = {
    [sym_blk] = STATE(7),
    [sym__header] = STATE(248),
    [sym_typed_feature] = STATE(248),
    [sym_ref] = STATE(248),
    [sym_namespace] = STATE(248),
    [sym_incomplete_namespace] = STATE(248),
    [sym_incomplete_ref] = STATE(248),
    [sym_cardinality] = STATE(248),
    [sym__expr] = STATE(160),
    [sym_unary_expr] = STATE(152),
    [sym_binary_expr] = STATE(152),
    [sym_nested_expr] = STATE(152),
    [sym_function] = STATE(152),
    [sym_bool] = STATE(152),
    [sym_path] = STATE(132),
    [sym_lang_lvl] = STATE(248),
    [sym_group_mode] = STATE(248),
    [sym_major_lvl] = STATE(236),
    [sym_minor_lvl] = STATE(236),
    [sym_type] = STATE(241),
    [sym_string] = STATE(152),
    [sym_string_name] = STATE(65),
    [sym_constraints] = STATE(248),
    [sym__any_name] = STATE(65),
    [aux_sym_source_file_repeat1] = STATE(7),
    [sym_name] = ACTIONS(51),
    [anon_sym_namespace] = ACTIONS(54),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_STAR] = ACTIONS(60),
    [anon_sym_constraints] = ACTIONS(63),
    [anon_sym_BANG] = ACTIONS(66),
    [anon_sym_LPAREN] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(72),
    [anon_sym_false] = ACTIONS(72),
    [sym_number] = ACTIONS(75),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(78),
    [anon_sym_alternative] = ACTIONS(78),
    [anon_sym_mandatory] = ACTIONS(78),
    [anon_sym_optional] = ACTIONS(78),
    [anon_sym_Boolean] = ACTIONS(81),
    [anon_sym_Arithmetic] = ACTIONS(84),
    [anon_sym_Type] = ACTIONS(84),
    [anon_sym_group_DASHcardinality] = ACTIONS(60),
    [anon_sym_feature_DASHcardinality] = ACTIONS(60),
    [anon_sym_aggregate_DASHfunction] = ACTIONS(60),
    [anon_sym_type_DASHconstraints] = ACTIONS(60),
    [anon_sym_string_DASHconstraints] = ACTIONS(60),
    [anon_sym_numeric_DASHconstraints] = ACTIONS(60),
    [anon_sym_Real] = ACTIONS(87),
    [anon_sym_Integer] = ACTIONS(87),
    [anon_sym_String] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(90),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [sym_imports] = ACTIONS(96),
    [sym_features] = ACTIONS(96),
    [sym_include] = ACTIONS(96),
    [sym__dedent] = ACTIONS(99),
  },
  [8] = {
    [sym_blk] = STATE(11),
    [sym__header] = STATE(248),
    [sym_typed_feature] = STATE(248),
    [sym_ref] = STATE(248),
    [sym_namespace] = STATE(248),
    [sym_incomplete_namespace] = STATE(248),
    [sym_incomplete_ref] = STATE(248),
    [sym_cardinality] = STATE(248),
    [sym__expr] = STATE(160),
    [sym_unary_expr] = STATE(152),
    [sym_binary_expr] = STATE(152),
    [sym_nested_expr] = STATE(152),
    [sym_function] = STATE(152),
    [sym_bool] = STATE(152),
    [sym_path] = STATE(132),
    [sym_lang_lvl] = STATE(248),
    [sym_group_mode] = STATE(248),
    [sym_major_lvl] = STATE(236),
    [sym_minor_lvl] = STATE(236),
    [sym_type] = STATE(241),
    [sym_string] = STATE(152),
    [sym_string_name] = STATE(65),
    [sym_constraints] = STATE(248),
    [sym__any_name] = STATE(65),
    [aux_sym_source_file_repeat1] = STATE(11),
    [sym_name] = ACTIONS(7),
    [anon_sym_namespace] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_constraints] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_false] = ACTIONS(21),
    [sym_number] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_alternative] = ACTIONS(25),
    [anon_sym_mandatory] = ACTIONS(25),
    [anon_sym_optional] = ACTIONS(25),
    [anon_sym_Boolean] = ACTIONS(27),
    [anon_sym_Arithmetic] = ACTIONS(29),
    [anon_sym_Type] = ACTIONS(29),
    [anon_sym_group_DASHcardinality] = ACTIONS(13),
    [anon_sym_feature_DASHcardinality] = ACTIONS(13),
    [anon_sym_aggregate_DASHfunction] = ACTIONS(13),
    [anon_sym_type_DASHconstraints] = ACTIONS(13),
    [anon_sym_string_DASHconstraints] = ACTIONS(13),
    [anon_sym_numeric_DASHconstraints] = ACTIONS(13),
    [anon_sym_Real] = ACTIONS(31),
    [anon_sym_Integer] = ACTIONS(31),
    [anon_sym_String] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [sym_imports] = ACTIONS(39),
    [sym_features] = ACTIONS(39),
    [sym_include] = ACTIONS(39),
    [sym__dedent] = ACTIONS(101),
  },
  [9] = {
    [sym_blk] = STATE(9),
    [sym__header] = STATE(244),
    [sym_typed_feature] = STATE(244),
    [sym_ref] = STATE(244),
    [sym_namespace] = STATE(244),
    [sym_incomplete_namespace] = STATE(244),
    [sym_incomplete_ref] = STATE(244),
    [sym_cardinality] = STATE(244),
    [sym__expr] = STATE(160),
    [sym_unary_expr] = STATE(152),
    [sym_binary_expr] = STATE(152),
    [sym_nested_expr] = STATE(152),
    [sym_function] = STATE(152),
    [sym_bool] = STATE(152),
    [sym_path] = STATE(132),
    [sym_lang_lvl] = STATE(244),
    [sym_group_mode] = STATE(244),
    [sym_major_lvl] = STATE(236),
    [sym_minor_lvl] = STATE(236),
    [sym_type] = STATE(241),
    [sym_string] = STATE(152),
    [sym_string_name] = STATE(65),
    [sym_constraints] = STATE(244),
    [sym__any_name] = STATE(65),
    [aux_sym_source_file_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(99),
    [sym_name] = ACTIONS(51),
    [anon_sym_namespace] = ACTIONS(54),
    [anon_sym_LBRACK] = ACTIONS(57),
    [anon_sym_STAR] = ACTIONS(60),
    [anon_sym_constraints] = ACTIONS(63),
    [anon_sym_BANG] = ACTIONS(66),
    [anon_sym_LPAREN] = ACTIONS(69),
    [anon_sym_true] = ACTIONS(72),
    [anon_sym_false] = ACTIONS(72),
    [sym_number] = ACTIONS(75),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(78),
    [anon_sym_alternative] = ACTIONS(78),
    [anon_sym_mandatory] = ACTIONS(78),
    [anon_sym_optional] = ACTIONS(78),
    [anon_sym_Boolean] = ACTIONS(81),
    [anon_sym_Arithmetic] = ACTIONS(84),
    [anon_sym_Type] = ACTIONS(84),
    [anon_sym_group_DASHcardinality] = ACTIONS(60),
    [anon_sym_feature_DASHcardinality] = ACTIONS(60),
    [anon_sym_aggregate_DASHfunction] = ACTIONS(60),
    [anon_sym_type_DASHconstraints] = ACTIONS(60),
    [anon_sym_string_DASHconstraints] = ACTIONS(60),
    [anon_sym_numeric_DASHconstraints] = ACTIONS(60),
    [anon_sym_Real] = ACTIONS(87),
    [anon_sym_Integer] = ACTIONS(87),
    [anon_sym_String] = ACTIONS(87),
    [anon_sym_SQUOTE] = ACTIONS(90),
    [anon_sym_DQUOTE] = ACTIONS(93),
    [sym_imports] = ACTIONS(103),
    [sym_features] = ACTIONS(103),
    [sym_include] = ACTIONS(103),
  },
  [10] = {
    [sym_blk] = STATE(7),
    [sym__header] = STATE(248),
    [sym_typed_feature] = STATE(248),
    [sym_ref] = STATE(248),
    [sym_namespace] = STATE(248),
    [sym_incomplete_namespace] = STATE(248),
    [sym_incomplete_ref] = STATE(248),
    [sym_cardinality] = STATE(248),
    [sym__expr] = STATE(160),
    [sym_unary_expr] = STATE(152),
    [sym_binary_expr] = STATE(152),
    [sym_nested_expr] = STATE(152),
    [sym_function] = STATE(152),
    [sym_bool] = STATE(152),
    [sym_path] = STATE(132),
    [sym_lang_lvl] = STATE(248),
    [sym_group_mode] = STATE(248),
    [sym_major_lvl] = STATE(236),
    [sym_minor_lvl] = STATE(236),
    [sym_type] = STATE(241),
    [sym_string] = STATE(152),
    [sym_string_name] = STATE(65),
    [sym_constraints] = STATE(248),
    [sym__any_name] = STATE(65),
    [aux_sym_source_file_repeat1] = STATE(7),
    [sym_name] = ACTIONS(7),
    [anon_sym_namespace] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_constraints] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_false] = ACTIONS(21),
    [sym_number] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_alternative] = ACTIONS(25),
    [anon_sym_mandatory] = ACTIONS(25),
    [anon_sym_optional] = ACTIONS(25),
    [anon_sym_Boolean] = ACTIONS(27),
    [anon_sym_Arithmetic] = ACTIONS(29),
    [anon_sym_Type] = ACTIONS(29),
    [anon_sym_group_DASHcardinality] = ACTIONS(13),
    [anon_sym_feature_DASHcardinality] = ACTIONS(13),
    [anon_sym_aggregate_DASHfunction] = ACTIONS(13),
    [anon_sym_type_DASHconstraints] = ACTIONS(13),
    [anon_sym_string_DASHconstraints] = ACTIONS(13),
    [anon_sym_numeric_DASHconstraints] = ACTIONS(13),
    [anon_sym_Real] = ACTIONS(31),
    [anon_sym_Integer] = ACTIONS(31),
    [anon_sym_String] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [sym_imports] = ACTIONS(39),
    [sym_features] = ACTIONS(39),
    [sym_include] = ACTIONS(39),
    [sym__dedent] = ACTIONS(106),
  },
  [11] = {
    [sym_blk] = STATE(7),
    [sym__header] = STATE(248),
    [sym_typed_feature] = STATE(248),
    [sym_ref] = STATE(248),
    [sym_namespace] = STATE(248),
    [sym_incomplete_namespace] = STATE(248),
    [sym_incomplete_ref] = STATE(248),
    [sym_cardinality] = STATE(248),
    [sym__expr] = STATE(160),
    [sym_unary_expr] = STATE(152),
    [sym_binary_expr] = STATE(152),
    [sym_nested_expr] = STATE(152),
    [sym_function] = STATE(152),
    [sym_bool] = STATE(152),
    [sym_path] = STATE(132),
    [sym_lang_lvl] = STATE(248),
    [sym_group_mode] = STATE(248),
    [sym_major_lvl] = STATE(236),
    [sym_minor_lvl] = STATE(236),
    [sym_type] = STATE(241),
    [sym_string] = STATE(152),
    [sym_string_name] = STATE(65),
    [sym_constraints] = STATE(248),
    [sym__any_name] = STATE(65),
    [aux_sym_source_file_repeat1] = STATE(7),
    [sym_name] = ACTIONS(7),
    [anon_sym_namespace] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_constraints] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_false] = ACTIONS(21),
    [sym_number] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_alternative] = ACTIONS(25),
    [anon_sym_mandatory] = ACTIONS(25),
    [anon_sym_optional] = ACTIONS(25),
    [anon_sym_Boolean] = ACTIONS(27),
    [anon_sym_Arithmetic] = ACTIONS(29),
    [anon_sym_Type] = ACTIONS(29),
    [anon_sym_group_DASHcardinality] = ACTIONS(13),
    [anon_sym_feature_DASHcardinality] = ACTIONS(13),
    [anon_sym_aggregate_DASHfunction] = ACTIONS(13),
    [anon_sym_type_DASHconstraints] = ACTIONS(13),
    [anon_sym_string_DASHconstraints] = ACTIONS(13),
    [anon_sym_numeric_DASHconstraints] = ACTIONS(13),
    [anon_sym_Real] = ACTIONS(31),
    [anon_sym_Integer] = ACTIONS(31),
    [anon_sym_String] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [sym_imports] = ACTIONS(39),
    [sym_features] = ACTIONS(39),
    [sym_include] = ACTIONS(39),
    [sym__dedent] = ACTIONS(108),
  },
  [12] = {
    [sym_blk] = STATE(7),
    [sym__header] = STATE(248),
    [sym_typed_feature] = STATE(248),
    [sym_ref] = STATE(248),
    [sym_namespace] = STATE(248),
    [sym_incomplete_namespace] = STATE(248),
    [sym_incomplete_ref] = STATE(248),
    [sym_cardinality] = STATE(248),
    [sym__expr] = STATE(160),
    [sym_unary_expr] = STATE(152),
    [sym_binary_expr] = STATE(152),
    [sym_nested_expr] = STATE(152),
    [sym_function] = STATE(152),
    [sym_bool] = STATE(152),
    [sym_path] = STATE(132),
    [sym_lang_lvl] = STATE(248),
    [sym_group_mode] = STATE(248),
    [sym_major_lvl] = STATE(236),
    [sym_minor_lvl] = STATE(236),
    [sym_type] = STATE(241),
    [sym_string] = STATE(152),
    [sym_string_name] = STATE(65),
    [sym_constraints] = STATE(248),
    [sym__any_name] = STATE(65),
    [aux_sym_source_file_repeat1] = STATE(7),
    [sym_name] = ACTIONS(7),
    [anon_sym_namespace] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_constraints] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_false] = ACTIONS(21),
    [sym_number] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_alternative] = ACTIONS(25),
    [anon_sym_mandatory] = ACTIONS(25),
    [anon_sym_optional] = ACTIONS(25),
    [anon_sym_Boolean] = ACTIONS(27),
    [anon_sym_Arithmetic] = ACTIONS(29),
    [anon_sym_Type] = ACTIONS(29),
    [anon_sym_group_DASHcardinality] = ACTIONS(13),
    [anon_sym_feature_DASHcardinality] = ACTIONS(13),
    [anon_sym_aggregate_DASHfunction] = ACTIONS(13),
    [anon_sym_type_DASHconstraints] = ACTIONS(13),
    [anon_sym_string_DASHconstraints] = ACTIONS(13),
    [anon_sym_numeric_DASHconstraints] = ACTIONS(13),
    [anon_sym_Real] = ACTIONS(31),
    [anon_sym_Integer] = ACTIONS(31),
    [anon_sym_String] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [sym_imports] = ACTIONS(39),
    [sym_features] = ACTIONS(39),
    [sym_include] = ACTIONS(39),
    [sym__dedent] = ACTIONS(110),
  },
  [13] = {
    [sym_blk] = STATE(20),
    [sym__header] = STATE(248),
    [sym_typed_feature] = STATE(248),
    [sym_ref] = STATE(248),
    [sym_namespace] = STATE(248),
    [sym_incomplete_namespace] = STATE(248),
    [sym_incomplete_ref] = STATE(248),
    [sym_cardinality] = STATE(248),
    [sym__expr] = STATE(160),
    [sym_unary_expr] = STATE(152),
    [sym_binary_expr] = STATE(152),
    [sym_nested_expr] = STATE(152),
    [sym_function] = STATE(152),
    [sym_bool] = STATE(152),
    [sym_path] = STATE(132),
    [sym_lang_lvl] = STATE(248),
    [sym_group_mode] = STATE(248),
    [sym_major_lvl] = STATE(236),
    [sym_minor_lvl] = STATE(236),
    [sym_type] = STATE(241),
    [sym_string] = STATE(152),
    [sym_string_name] = STATE(65),
    [sym_constraints] = STATE(248),
    [sym__any_name] = STATE(65),
    [aux_sym_source_file_repeat1] = STATE(20),
    [sym_name] = ACTIONS(7),
    [anon_sym_namespace] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_constraints] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_false] = ACTIONS(21),
    [sym_number] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_alternative] = ACTIONS(25),
    [anon_sym_mandatory] = ACTIONS(25),
    [anon_sym_optional] = ACTIONS(25),
    [anon_sym_Boolean] = ACTIONS(27),
    [anon_sym_Arithmetic] = ACTIONS(29),
    [anon_sym_Type] = ACTIONS(29),
    [anon_sym_group_DASHcardinality] = ACTIONS(13),
    [anon_sym_feature_DASHcardinality] = ACTIONS(13),
    [anon_sym_aggregate_DASHfunction] = ACTIONS(13),
    [anon_sym_type_DASHconstraints] = ACTIONS(13),
    [anon_sym_string_DASHconstraints] = ACTIONS(13),
    [anon_sym_numeric_DASHconstraints] = ACTIONS(13),
    [anon_sym_Real] = ACTIONS(31),
    [anon_sym_Integer] = ACTIONS(31),
    [anon_sym_String] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [sym_imports] = ACTIONS(39),
    [sym_features] = ACTIONS(39),
    [sym_include] = ACTIONS(39),
    [sym__dedent] = ACTIONS(112),
  },
  [14] = {
    [sym_blk] = STATE(17),
    [sym__header] = STATE(248),
    [sym_typed_feature] = STATE(248),
    [sym_ref] = STATE(248),
    [sym_namespace] = STATE(248),
    [sym_incomplete_namespace] = STATE(248),
    [sym_incomplete_ref] = STATE(248),
    [sym_cardinality] = STATE(248),
    [sym__expr] = STATE(160),
    [sym_unary_expr] = STATE(152),
    [sym_binary_expr] = STATE(152),
    [sym_nested_expr] = STATE(152),
    [sym_function] = STATE(152),
    [sym_bool] = STATE(152),
    [sym_path] = STATE(132),
    [sym_lang_lvl] = STATE(248),
    [sym_group_mode] = STATE(248),
    [sym_major_lvl] = STATE(236),
    [sym_minor_lvl] = STATE(236),
    [sym_type] = STATE(241),
    [sym_string] = STATE(152),
    [sym_string_name] = STATE(65),
    [sym_constraints] = STATE(248),
    [sym__any_name] = STATE(65),
    [aux_sym_source_file_repeat1] = STATE(17),
    [sym_name] = ACTIONS(7),
    [anon_sym_namespace] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_constraints] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_false] = ACTIONS(21),
    [sym_number] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_alternative] = ACTIONS(25),
    [anon_sym_mandatory] = ACTIONS(25),
    [anon_sym_optional] = ACTIONS(25),
    [anon_sym_Boolean] = ACTIONS(27),
    [anon_sym_Arithmetic] = ACTIONS(29),
    [anon_sym_Type] = ACTIONS(29),
    [anon_sym_group_DASHcardinality] = ACTIONS(13),
    [anon_sym_feature_DASHcardinality] = ACTIONS(13),
    [anon_sym_aggregate_DASHfunction] = ACTIONS(13),
    [anon_sym_type_DASHconstraints] = ACTIONS(13),
    [anon_sym_string_DASHconstraints] = ACTIONS(13),
    [anon_sym_numeric_DASHconstraints] = ACTIONS(13),
    [anon_sym_Real] = ACTIONS(31),
    [anon_sym_Integer] = ACTIONS(31),
    [anon_sym_String] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [sym_imports] = ACTIONS(39),
    [sym_features] = ACTIONS(39),
    [sym_include] = ACTIONS(39),
    [sym__dedent] = ACTIONS(114),
  },
  [15] = {
    [sym_blk] = STATE(10),
    [sym__header] = STATE(248),
    [sym_typed_feature] = STATE(248),
    [sym_ref] = STATE(248),
    [sym_namespace] = STATE(248),
    [sym_incomplete_namespace] = STATE(248),
    [sym_incomplete_ref] = STATE(248),
    [sym_cardinality] = STATE(248),
    [sym__expr] = STATE(160),
    [sym_unary_expr] = STATE(152),
    [sym_binary_expr] = STATE(152),
    [sym_nested_expr] = STATE(152),
    [sym_function] = STATE(152),
    [sym_bool] = STATE(152),
    [sym_path] = STATE(132),
    [sym_lang_lvl] = STATE(248),
    [sym_group_mode] = STATE(248),
    [sym_major_lvl] = STATE(236),
    [sym_minor_lvl] = STATE(236),
    [sym_type] = STATE(241),
    [sym_string] = STATE(152),
    [sym_string_name] = STATE(65),
    [sym_constraints] = STATE(248),
    [sym__any_name] = STATE(65),
    [aux_sym_source_file_repeat1] = STATE(10),
    [sym_name] = ACTIONS(7),
    [anon_sym_namespace] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_constraints] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_false] = ACTIONS(21),
    [sym_number] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_alternative] = ACTIONS(25),
    [anon_sym_mandatory] = ACTIONS(25),
    [anon_sym_optional] = ACTIONS(25),
    [anon_sym_Boolean] = ACTIONS(27),
    [anon_sym_Arithmetic] = ACTIONS(29),
    [anon_sym_Type] = ACTIONS(29),
    [anon_sym_group_DASHcardinality] = ACTIONS(13),
    [anon_sym_feature_DASHcardinality] = ACTIONS(13),
    [anon_sym_aggregate_DASHfunction] = ACTIONS(13),
    [anon_sym_type_DASHconstraints] = ACTIONS(13),
    [anon_sym_string_DASHconstraints] = ACTIONS(13),
    [anon_sym_numeric_DASHconstraints] = ACTIONS(13),
    [anon_sym_Real] = ACTIONS(31),
    [anon_sym_Integer] = ACTIONS(31),
    [anon_sym_String] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [sym_imports] = ACTIONS(39),
    [sym_features] = ACTIONS(39),
    [sym_include] = ACTIONS(39),
    [sym__dedent] = ACTIONS(116),
  },
  [16] = {
    [sym_blk] = STATE(18),
    [sym__header] = STATE(248),
    [sym_typed_feature] = STATE(248),
    [sym_ref] = STATE(248),
    [sym_namespace] = STATE(248),
    [sym_incomplete_namespace] = STATE(248),
    [sym_incomplete_ref] = STATE(248),
    [sym_cardinality] = STATE(248),
    [sym__expr] = STATE(160),
    [sym_unary_expr] = STATE(152),
    [sym_binary_expr] = STATE(152),
    [sym_nested_expr] = STATE(152),
    [sym_function] = STATE(152),
    [sym_bool] = STATE(152),
    [sym_path] = STATE(132),
    [sym_lang_lvl] = STATE(248),
    [sym_group_mode] = STATE(248),
    [sym_major_lvl] = STATE(236),
    [sym_minor_lvl] = STATE(236),
    [sym_type] = STATE(241),
    [sym_string] = STATE(152),
    [sym_string_name] = STATE(65),
    [sym_constraints] = STATE(248),
    [sym__any_name] = STATE(65),
    [aux_sym_source_file_repeat1] = STATE(18),
    [sym_name] = ACTIONS(7),
    [anon_sym_namespace] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_constraints] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_false] = ACTIONS(21),
    [sym_number] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_alternative] = ACTIONS(25),
    [anon_sym_mandatory] = ACTIONS(25),
    [anon_sym_optional] = ACTIONS(25),
    [anon_sym_Boolean] = ACTIONS(27),
    [anon_sym_Arithmetic] = ACTIONS(29),
    [anon_sym_Type] = ACTIONS(29),
    [anon_sym_group_DASHcardinality] = ACTIONS(13),
    [anon_sym_feature_DASHcardinality] = ACTIONS(13),
    [anon_sym_aggregate_DASHfunction] = ACTIONS(13),
    [anon_sym_type_DASHconstraints] = ACTIONS(13),
    [anon_sym_string_DASHconstraints] = ACTIONS(13),
    [anon_sym_numeric_DASHconstraints] = ACTIONS(13),
    [anon_sym_Real] = ACTIONS(31),
    [anon_sym_Integer] = ACTIONS(31),
    [anon_sym_String] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [sym_imports] = ACTIONS(39),
    [sym_features] = ACTIONS(39),
    [sym_include] = ACTIONS(39),
    [sym__dedent] = ACTIONS(118),
  },
  [17] = {
    [sym_blk] = STATE(7),
    [sym__header] = STATE(248),
    [sym_typed_feature] = STATE(248),
    [sym_ref] = STATE(248),
    [sym_namespace] = STATE(248),
    [sym_incomplete_namespace] = STATE(248),
    [sym_incomplete_ref] = STATE(248),
    [sym_cardinality] = STATE(248),
    [sym__expr] = STATE(160),
    [sym_unary_expr] = STATE(152),
    [sym_binary_expr] = STATE(152),
    [sym_nested_expr] = STATE(152),
    [sym_function] = STATE(152),
    [sym_bool] = STATE(152),
    [sym_path] = STATE(132),
    [sym_lang_lvl] = STATE(248),
    [sym_group_mode] = STATE(248),
    [sym_major_lvl] = STATE(236),
    [sym_minor_lvl] = STATE(236),
    [sym_type] = STATE(241),
    [sym_string] = STATE(152),
    [sym_string_name] = STATE(65),
    [sym_constraints] = STATE(248),
    [sym__any_name] = STATE(65),
    [aux_sym_source_file_repeat1] = STATE(7),
    [sym_name] = ACTIONS(7),
    [anon_sym_namespace] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_constraints] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_false] = ACTIONS(21),
    [sym_number] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_alternative] = ACTIONS(25),
    [anon_sym_mandatory] = ACTIONS(25),
    [anon_sym_optional] = ACTIONS(25),
    [anon_sym_Boolean] = ACTIONS(27),
    [anon_sym_Arithmetic] = ACTIONS(29),
    [anon_sym_Type] = ACTIONS(29),
    [anon_sym_group_DASHcardinality] = ACTIONS(13),
    [anon_sym_feature_DASHcardinality] = ACTIONS(13),
    [anon_sym_aggregate_DASHfunction] = ACTIONS(13),
    [anon_sym_type_DASHconstraints] = ACTIONS(13),
    [anon_sym_string_DASHconstraints] = ACTIONS(13),
    [anon_sym_numeric_DASHconstraints] = ACTIONS(13),
    [anon_sym_Real] = ACTIONS(31),
    [anon_sym_Integer] = ACTIONS(31),
    [anon_sym_String] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [sym_imports] = ACTIONS(39),
    [sym_features] = ACTIONS(39),
    [sym_include] = ACTIONS(39),
    [sym__dedent] = ACTIONS(120),
  },
  [18] = {
    [sym_blk] = STATE(7),
    [sym__header] = STATE(248),
    [sym_typed_feature] = STATE(248),
    [sym_ref] = STATE(248),
    [sym_namespace] = STATE(248),
    [sym_incomplete_namespace] = STATE(248),
    [sym_incomplete_ref] = STATE(248),
    [sym_cardinality] = STATE(248),
    [sym__expr] = STATE(160),
    [sym_unary_expr] = STATE(152),
    [sym_binary_expr] = STATE(152),
    [sym_nested_expr] = STATE(152),
    [sym_function] = STATE(152),
    [sym_bool] = STATE(152),
    [sym_path] = STATE(132),
    [sym_lang_lvl] = STATE(248),
    [sym_group_mode] = STATE(248),
    [sym_major_lvl] = STATE(236),
    [sym_minor_lvl] = STATE(236),
    [sym_type] = STATE(241),
    [sym_string] = STATE(152),
    [sym_string_name] = STATE(65),
    [sym_constraints] = STATE(248),
    [sym__any_name] = STATE(65),
    [aux_sym_source_file_repeat1] = STATE(7),
    [sym_name] = ACTIONS(7),
    [anon_sym_namespace] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_constraints] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_false] = ACTIONS(21),
    [sym_number] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_alternative] = ACTIONS(25),
    [anon_sym_mandatory] = ACTIONS(25),
    [anon_sym_optional] = ACTIONS(25),
    [anon_sym_Boolean] = ACTIONS(27),
    [anon_sym_Arithmetic] = ACTIONS(29),
    [anon_sym_Type] = ACTIONS(29),
    [anon_sym_group_DASHcardinality] = ACTIONS(13),
    [anon_sym_feature_DASHcardinality] = ACTIONS(13),
    [anon_sym_aggregate_DASHfunction] = ACTIONS(13),
    [anon_sym_type_DASHconstraints] = ACTIONS(13),
    [anon_sym_string_DASHconstraints] = ACTIONS(13),
    [anon_sym_numeric_DASHconstraints] = ACTIONS(13),
    [anon_sym_Real] = ACTIONS(31),
    [anon_sym_Integer] = ACTIONS(31),
    [anon_sym_String] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [sym_imports] = ACTIONS(39),
    [sym_features] = ACTIONS(39),
    [sym_include] = ACTIONS(39),
    [sym__dedent] = ACTIONS(122),
  },
  [19] = {
    [sym_blk] = STATE(9),
    [sym__header] = STATE(244),
    [sym_typed_feature] = STATE(244),
    [sym_ref] = STATE(244),
    [sym_namespace] = STATE(244),
    [sym_incomplete_namespace] = STATE(244),
    [sym_incomplete_ref] = STATE(244),
    [sym_cardinality] = STATE(244),
    [sym__expr] = STATE(160),
    [sym_unary_expr] = STATE(152),
    [sym_binary_expr] = STATE(152),
    [sym_nested_expr] = STATE(152),
    [sym_function] = STATE(152),
    [sym_bool] = STATE(152),
    [sym_path] = STATE(132),
    [sym_lang_lvl] = STATE(244),
    [sym_group_mode] = STATE(244),
    [sym_major_lvl] = STATE(236),
    [sym_minor_lvl] = STATE(236),
    [sym_type] = STATE(241),
    [sym_string] = STATE(152),
    [sym_string_name] = STATE(65),
    [sym_constraints] = STATE(244),
    [sym__any_name] = STATE(65),
    [aux_sym_source_file_repeat1] = STATE(9),
    [ts_builtin_sym_end] = ACTIONS(124),
    [sym_name] = ACTIONS(7),
    [anon_sym_namespace] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_constraints] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_false] = ACTIONS(21),
    [sym_number] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_alternative] = ACTIONS(25),
    [anon_sym_mandatory] = ACTIONS(25),
    [anon_sym_optional] = ACTIONS(25),
    [anon_sym_Boolean] = ACTIONS(27),
    [anon_sym_Arithmetic] = ACTIONS(29),
    [anon_sym_Type] = ACTIONS(29),
    [anon_sym_group_DASHcardinality] = ACTIONS(13),
    [anon_sym_feature_DASHcardinality] = ACTIONS(13),
    [anon_sym_aggregate_DASHfunction] = ACTIONS(13),
    [anon_sym_type_DASHconstraints] = ACTIONS(13),
    [anon_sym_string_DASHconstraints] = ACTIONS(13),
    [anon_sym_numeric_DASHconstraints] = ACTIONS(13),
    [anon_sym_Real] = ACTIONS(31),
    [anon_sym_Integer] = ACTIONS(31),
    [anon_sym_String] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [sym_imports] = ACTIONS(37),
    [sym_features] = ACTIONS(37),
    [sym_include] = ACTIONS(37),
  },
  [20] = {
    [sym_blk] = STATE(7),
    [sym__header] = STATE(248),
    [sym_typed_feature] = STATE(248),
    [sym_ref] = STATE(248),
    [sym_namespace] = STATE(248),
    [sym_incomplete_namespace] = STATE(248),
    [sym_incomplete_ref] = STATE(248),
    [sym_cardinality] = STATE(248),
    [sym__expr] = STATE(160),
    [sym_unary_expr] = STATE(152),
    [sym_binary_expr] = STATE(152),
    [sym_nested_expr] = STATE(152),
    [sym_function] = STATE(152),
    [sym_bool] = STATE(152),
    [sym_path] = STATE(132),
    [sym_lang_lvl] = STATE(248),
    [sym_group_mode] = STATE(248),
    [sym_major_lvl] = STATE(236),
    [sym_minor_lvl] = STATE(236),
    [sym_type] = STATE(241),
    [sym_string] = STATE(152),
    [sym_string_name] = STATE(65),
    [sym_constraints] = STATE(248),
    [sym__any_name] = STATE(65),
    [aux_sym_source_file_repeat1] = STATE(7),
    [sym_name] = ACTIONS(7),
    [anon_sym_namespace] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [anon_sym_STAR] = ACTIONS(13),
    [anon_sym_constraints] = ACTIONS(15),
    [anon_sym_BANG] = ACTIONS(17),
    [anon_sym_LPAREN] = ACTIONS(19),
    [anon_sym_true] = ACTIONS(21),
    [anon_sym_false] = ACTIONS(21),
    [sym_number] = ACTIONS(23),
    [sym_comment] = ACTIONS(3),
    [anon_sym_or] = ACTIONS(25),
    [anon_sym_alternative] = ACTIONS(25),
    [anon_sym_mandatory] = ACTIONS(25),
    [anon_sym_optional] = ACTIONS(25),
    [anon_sym_Boolean] = ACTIONS(27),
    [anon_sym_Arithmetic] = ACTIONS(29),
    [anon_sym_Type] = ACTIONS(29),
    [anon_sym_group_DASHcardinality] = ACTIONS(13),
    [anon_sym_feature_DASHcardinality] = ACTIONS(13),
    [anon_sym_aggregate_DASHfunction] = ACTIONS(13),
    [anon_sym_type_DASHconstraints] = ACTIONS(13),
    [anon_sym_string_DASHconstraints] = ACTIONS(13),
    [anon_sym_numeric_DASHconstraints] = ACTIONS(13),
    [anon_sym_Real] = ACTIONS(31),
    [anon_sym_Integer] = ACTIONS(31),
    [anon_sym_String] = ACTIONS(31),
    [anon_sym_SQUOTE] = ACTIONS(33),
    [anon_sym_DQUOTE] = ACTIONS(35),
    [sym_imports] = ACTIONS(39),
    [sym_features] = ACTIONS(39),
    [sym_include] = ACTIONS(39),
    [sym__dedent] = ACTIONS(126),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 15,
      sym__indent,
      sym__dedent,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(128), 18,
      anon_sym_namespace,
      anon_sym_constraints,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [41] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 15,
      sym__indent,
      sym__dedent,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(132), 18,
      anon_sym_namespace,
      anon_sym_constraints,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [82] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 15,
      sym__indent,
      sym__dedent,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(136), 18,
      anon_sym_namespace,
      anon_sym_constraints,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [123] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 15,
      sym__indent,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(136), 18,
      anon_sym_namespace,
      anon_sym_constraints,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [164] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 1,
      sym__indent,
    ACTIONS(142), 14,
      sym__dedent,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(140), 18,
      anon_sym_namespace,
      anon_sym_constraints,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [207] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 1,
      sym__indent,
    ACTIONS(148), 14,
      sym__dedent,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(146), 18,
      anon_sym_namespace,
      anon_sym_constraints,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [250] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 15,
      sym__indent,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(132), 18,
      anon_sym_namespace,
      anon_sym_constraints,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [291] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(156), 1,
      sym__indent,
    ACTIONS(152), 14,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(154), 18,
      anon_sym_namespace,
      anon_sym_constraints,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [334] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 15,
      sym__indent,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(160), 18,
      anon_sym_namespace,
      anon_sym_constraints,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [375] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 1,
      sym__indent,
    ACTIONS(162), 14,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(164), 18,
      anon_sym_namespace,
      anon_sym_constraints,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [418] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 15,
      sym__indent,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(170), 18,
      anon_sym_namespace,
      anon_sym_constraints,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [459] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 15,
      sym__indent,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(128), 18,
      anon_sym_namespace,
      anon_sym_constraints,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [500] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 1,
      sym__indent,
    ACTIONS(162), 14,
      sym__dedent,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(164), 18,
      anon_sym_namespace,
      anon_sym_constraints,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [543] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(174), 1,
      sym__indent,
    ACTIONS(148), 14,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(146), 18,
      anon_sym_namespace,
      anon_sym_constraints,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [586] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      sym__indent,
    ACTIONS(152), 14,
      sym__dedent,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(154), 18,
      anon_sym_namespace,
      anon_sym_constraints,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [629] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 15,
      sym__indent,
      sym__dedent,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(170), 18,
      anon_sym_namespace,
      anon_sym_constraints,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [670] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(178), 1,
      sym__indent,
    ACTIONS(142), 14,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(140), 18,
      anon_sym_namespace,
      anon_sym_constraints,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [713] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 15,
      sym__indent,
      sym__dedent,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(160), 18,
      anon_sym_namespace,
      anon_sym_constraints,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [754] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 14,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(182), 18,
      anon_sym_namespace,
      anon_sym_constraints,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [794] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 14,
      sym__dedent,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(184), 18,
      anon_sym_namespace,
      anon_sym_constraints,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [834] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 14,
      sym__dedent,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(188), 18,
      anon_sym_namespace,
      anon_sym_constraints,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [874] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 14,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(194), 18,
      anon_sym_namespace,
      anon_sym_constraints,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [914] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 14,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(198), 18,
      anon_sym_namespace,
      anon_sym_constraints,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [954] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 14,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(184), 18,
      anon_sym_namespace,
      anon_sym_constraints,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [994] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 14,
      sym__dedent,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(182), 18,
      anon_sym_namespace,
      anon_sym_constraints,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [1034] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 14,
      sym__dedent,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(200), 18,
      anon_sym_namespace,
      anon_sym_constraints,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [1074] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 14,
      sym__dedent,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(204), 18,
      anon_sym_namespace,
      anon_sym_constraints,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [1114] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 14,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(188), 18,
      anon_sym_namespace,
      anon_sym_constraints,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [1154] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 14,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(204), 18,
      anon_sym_namespace,
      anon_sym_constraints,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [1194] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 14,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(210), 18,
      anon_sym_namespace,
      anon_sym_constraints,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [1234] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 14,
      sym__dedent,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(194), 18,
      anon_sym_namespace,
      anon_sym_constraints,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [1274] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 14,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(200), 18,
      anon_sym_namespace,
      anon_sym_constraints,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [1314] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 14,
      sym__dedent,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(198), 18,
      anon_sym_namespace,
      anon_sym_constraints,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [1354] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 14,
      sym__dedent,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
    ACTIONS(210), 18,
      anon_sym_namespace,
      anon_sym_constraints,
      anon_sym_true,
      anon_sym_false,
      anon_sym_or,
      anon_sym_alternative,
      anon_sym_mandatory,
      anon_sym_optional,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
      anon_sym_Real,
      anon_sym_Integer,
      anon_sym_String,
      sym_imports,
      sym_features,
      sym_include,
      sym_name,
  [1394] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(212), 1,
      sym_name,
    STATE(128), 2,
      sym_string_name,
      sym__any_name,
    STATE(245), 2,
      sym_major_lvl,
      sym_minor_lvl,
    ACTIONS(29), 3,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
    ACTIONS(214), 4,
      anon_sym_cardinality,
      anon_sym_as,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(13), 7,
      anon_sym_STAR,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
    ACTIONS(216), 11,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [1445] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 5,
      anon_sym_LT,
      anon_sym_SLASH,
      anon_sym_true,
      anon_sym_false,
      sym_name,
    ACTIONS(220), 20,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_STAR,
      anon_sym_BANG,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_LPAREN,
      sym_number,
      anon_sym_DOT,
      anon_sym_SQUOTE,
      anon_sym_DQUOTE,
  [1478] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      sym_name,
    ACTIONS(224), 1,
      anon_sym_LBRACE,
    ACTIONS(228), 1,
      anon_sym_LBRACK,
    ACTIONS(230), 1,
      anon_sym_BANG,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(236), 1,
      sym_number,
    ACTIONS(238), 1,
      anon_sym_SQUOTE,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    STATE(195), 1,
      sym__expr,
    ACTIONS(226), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(234), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(130), 2,
      sym_string_name,
      sym__any_name,
    STATE(287), 3,
      sym_attributes,
      sym__value,
      sym_vector,
    STATE(200), 7,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_path,
      sym_string,
  [1535] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      sym_name,
    ACTIONS(244), 1,
      anon_sym_LBRACE,
    ACTIONS(246), 1,
      anon_sym_LBRACK,
    ACTIONS(248), 1,
      anon_sym_RBRACK,
    ACTIONS(250), 1,
      anon_sym_BANG,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      sym_number,
    ACTIONS(258), 1,
      anon_sym_SQUOTE,
    ACTIONS(260), 1,
      anon_sym_DQUOTE,
    STATE(187), 1,
      sym__expr,
    ACTIONS(254), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(135), 2,
      sym_string_name,
      sym__any_name,
    STATE(297), 3,
      sym_attributes,
      sym__value,
      sym_vector,
    STATE(197), 7,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_path,
      sym_string,
  [1591] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      sym_name,
    ACTIONS(244), 1,
      anon_sym_LBRACE,
    ACTIONS(246), 1,
      anon_sym_LBRACK,
    ACTIONS(250), 1,
      anon_sym_BANG,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      sym_number,
    ACTIONS(258), 1,
      anon_sym_SQUOTE,
    ACTIONS(260), 1,
      anon_sym_DQUOTE,
    ACTIONS(262), 1,
      anon_sym_RBRACK,
    STATE(187), 1,
      sym__expr,
    ACTIONS(254), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(135), 2,
      sym_string_name,
      sym__any_name,
    STATE(297), 3,
      sym_attributes,
      sym__value,
      sym_vector,
    STATE(197), 7,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_path,
      sym_string,
  [1647] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      sym_name,
    ACTIONS(244), 1,
      anon_sym_LBRACE,
    ACTIONS(246), 1,
      anon_sym_LBRACK,
    ACTIONS(250), 1,
      anon_sym_BANG,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      sym_number,
    ACTIONS(258), 1,
      anon_sym_SQUOTE,
    ACTIONS(260), 1,
      anon_sym_DQUOTE,
    ACTIONS(264), 1,
      anon_sym_RBRACK,
    STATE(187), 1,
      sym__expr,
    ACTIONS(254), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(135), 2,
      sym_string_name,
      sym__any_name,
    STATE(297), 3,
      sym_attributes,
      sym__value,
      sym_vector,
    STATE(197), 7,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_path,
      sym_string,
  [1703] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      sym_name,
    ACTIONS(244), 1,
      anon_sym_LBRACE,
    ACTIONS(246), 1,
      anon_sym_LBRACK,
    ACTIONS(250), 1,
      anon_sym_BANG,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      sym_number,
    ACTIONS(258), 1,
      anon_sym_SQUOTE,
    ACTIONS(260), 1,
      anon_sym_DQUOTE,
    ACTIONS(266), 1,
      anon_sym_RBRACK,
    STATE(187), 1,
      sym__expr,
    ACTIONS(254), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(135), 2,
      sym_string_name,
      sym__any_name,
    STATE(297), 3,
      sym_attributes,
      sym__value,
      sym_vector,
    STATE(197), 7,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_path,
      sym_string,
  [1759] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      sym_name,
    ACTIONS(244), 1,
      anon_sym_LBRACE,
    ACTIONS(246), 1,
      anon_sym_LBRACK,
    ACTIONS(250), 1,
      anon_sym_BANG,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      sym_number,
    ACTIONS(258), 1,
      anon_sym_SQUOTE,
    ACTIONS(260), 1,
      anon_sym_DQUOTE,
    STATE(187), 1,
      sym__expr,
    ACTIONS(254), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(135), 2,
      sym_string_name,
      sym__any_name,
    STATE(269), 3,
      sym_attributes,
      sym__value,
      sym_vector,
    STATE(197), 7,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_path,
      sym_string,
  [1812] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      sym_name,
    ACTIONS(244), 1,
      anon_sym_LBRACE,
    ACTIONS(246), 1,
      anon_sym_LBRACK,
    ACTIONS(250), 1,
      anon_sym_BANG,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      sym_number,
    ACTIONS(258), 1,
      anon_sym_SQUOTE,
    ACTIONS(260), 1,
      anon_sym_DQUOTE,
    STATE(187), 1,
      sym__expr,
    ACTIONS(254), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(135), 2,
      sym_string_name,
      sym__any_name,
    STATE(253), 3,
      sym_attributes,
      sym__value,
      sym_vector,
    STATE(197), 7,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_path,
      sym_string,
  [1865] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      sym_name,
    ACTIONS(244), 1,
      anon_sym_LBRACE,
    ACTIONS(246), 1,
      anon_sym_LBRACK,
    ACTIONS(250), 1,
      anon_sym_BANG,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      sym_number,
    ACTIONS(258), 1,
      anon_sym_SQUOTE,
    ACTIONS(260), 1,
      anon_sym_DQUOTE,
    STATE(187), 1,
      sym__expr,
    ACTIONS(254), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(135), 2,
      sym_string_name,
      sym__any_name,
    STATE(297), 3,
      sym_attributes,
      sym__value,
      sym_vector,
    STATE(197), 7,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_path,
      sym_string,
  [1918] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      sym_name,
    ACTIONS(270), 1,
      anon_sym_cardinality,
    ACTIONS(278), 1,
      anon_sym_DOT,
    ACTIONS(280), 1,
      anon_sym_DQUOTE,
    STATE(94), 1,
      aux_sym_path_repeat1,
    STATE(237), 1,
      aux_sym_lang_lvl_repeat1,
    ACTIONS(272), 2,
      sym__newline,
      anon_sym_LBRACE,
    ACTIONS(274), 3,
      anon_sym_as,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(276), 10,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [1961] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(282), 1,
      sym_name,
    STATE(126), 2,
      sym_string_name,
      sym__any_name,
    ACTIONS(284), 4,
      anon_sym_cardinality,
      anon_sym_as,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(286), 12,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [1995] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(292), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 5,
      anon_sym_cardinality,
      anon_sym_as,
      anon_sym_LT,
      anon_sym_SLASH,
      sym_name,
    ACTIONS(290), 14,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_DOT,
      anon_sym_DQUOTE,
  [2025] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      sym_name,
    ACTIONS(296), 1,
      anon_sym_BANG,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(300), 1,
      anon_sym_RPAREN,
    ACTIONS(304), 1,
      sym_number,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_DQUOTE,
    STATE(202), 1,
      sym__expr,
    ACTIONS(302), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(140), 2,
      sym_string_name,
      sym__any_name,
    STATE(176), 7,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_path,
      sym_string,
  [2070] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      sym_name,
    ACTIONS(296), 1,
      anon_sym_BANG,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(304), 1,
      sym_number,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_DQUOTE,
    ACTIONS(310), 1,
      anon_sym_RPAREN,
    STATE(202), 1,
      sym__expr,
    ACTIONS(302), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(140), 2,
      sym_string_name,
      sym__any_name,
    STATE(176), 7,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_path,
      sym_string,
  [2115] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      sym_name,
    ACTIONS(250), 1,
      anon_sym_BANG,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      sym_number,
    ACTIONS(258), 1,
      anon_sym_SQUOTE,
    ACTIONS(260), 1,
      anon_sym_DQUOTE,
    ACTIONS(312), 1,
      anon_sym_RBRACK,
    STATE(205), 1,
      sym__expr,
    ACTIONS(254), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(135), 2,
      sym_string_name,
      sym__any_name,
    STATE(197), 7,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_path,
      sym_string,
  [2160] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 5,
      anon_sym_cardinality,
      anon_sym_as,
      anon_sym_LT,
      anon_sym_SLASH,
      sym_name,
    ACTIONS(220), 14,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_DOT,
      anon_sym_DQUOTE,
  [2187] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      sym_name,
    ACTIONS(296), 1,
      anon_sym_BANG,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(304), 1,
      sym_number,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_DQUOTE,
    ACTIONS(314), 1,
      anon_sym_RPAREN,
    STATE(202), 1,
      sym__expr,
    ACTIONS(302), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(140), 2,
      sym_string_name,
      sym__any_name,
    STATE(176), 7,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_path,
      sym_string,
  [2232] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      sym_name,
    ACTIONS(250), 1,
      anon_sym_BANG,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      sym_number,
    ACTIONS(258), 1,
      anon_sym_SQUOTE,
    ACTIONS(260), 1,
      anon_sym_DQUOTE,
    ACTIONS(316), 1,
      anon_sym_RBRACK,
    STATE(205), 1,
      sym__expr,
    ACTIONS(254), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(135), 2,
      sym_string_name,
      sym__any_name,
    STATE(197), 7,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_path,
      sym_string,
  [2277] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(318), 1,
      sym_name,
    ACTIONS(320), 1,
      anon_sym_cardinality,
    ACTIONS(322), 2,
      sym__newline,
      anon_sym_LBRACE,
    STATE(243), 2,
      sym_string_name,
      sym__any_name,
    STATE(245), 2,
      sym_major_lvl,
      sym_minor_lvl,
    ACTIONS(29), 3,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
    ACTIONS(13), 7,
      anon_sym_STAR,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
  [2316] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      sym_name,
    ACTIONS(296), 1,
      anon_sym_BANG,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(304), 1,
      sym_number,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_DQUOTE,
    ACTIONS(324), 1,
      anon_sym_RPAREN,
    STATE(202), 1,
      sym__expr,
    ACTIONS(302), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(140), 2,
      sym_string_name,
      sym__any_name,
    STATE(176), 7,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_path,
      sym_string,
  [2361] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      sym_name,
    ACTIONS(296), 1,
      anon_sym_BANG,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(304), 1,
      sym_number,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_DQUOTE,
    ACTIONS(326), 1,
      anon_sym_RPAREN,
    STATE(202), 1,
      sym__expr,
    ACTIONS(302), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(140), 2,
      sym_string_name,
      sym__any_name,
    STATE(176), 7,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_path,
      sym_string,
  [2406] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      sym_name,
    ACTIONS(296), 1,
      anon_sym_BANG,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(304), 1,
      sym_number,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_DQUOTE,
    ACTIONS(328), 1,
      anon_sym_RPAREN,
    STATE(202), 1,
      sym__expr,
    ACTIONS(302), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(140), 2,
      sym_string_name,
      sym__any_name,
    STATE(176), 7,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_path,
      sym_string,
  [2451] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(318), 1,
      sym_name,
    ACTIONS(330), 1,
      anon_sym_cardinality,
    ACTIONS(332), 2,
      sym__newline,
      anon_sym_LBRACE,
    STATE(243), 2,
      sym_string_name,
      sym__any_name,
    STATE(245), 2,
      sym_major_lvl,
      sym_minor_lvl,
    ACTIONS(29), 3,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
    ACTIONS(13), 7,
      anon_sym_STAR,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
  [2490] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      sym_name,
    ACTIONS(296), 1,
      anon_sym_BANG,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(304), 1,
      sym_number,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_DQUOTE,
    ACTIONS(334), 1,
      anon_sym_RPAREN,
    STATE(202), 1,
      sym__expr,
    ACTIONS(302), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(140), 2,
      sym_string_name,
      sym__any_name,
    STATE(176), 7,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_path,
      sym_string,
  [2535] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(282), 1,
      sym_name,
    STATE(126), 2,
      sym_string_name,
      sym__any_name,
    ACTIONS(214), 3,
      anon_sym_cardinality,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(216), 12,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [2568] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      sym_name,
    ACTIONS(296), 1,
      anon_sym_BANG,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(304), 1,
      sym_number,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_DQUOTE,
    ACTIONS(336), 1,
      anon_sym_RPAREN,
    STATE(202), 1,
      sym__expr,
    ACTIONS(302), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(140), 2,
      sym_string_name,
      sym__any_name,
    STATE(176), 7,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_path,
      sym_string,
  [2613] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(338), 1,
      sym_name,
    ACTIONS(284), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    STATE(147), 2,
      sym_string_name,
      sym__any_name,
    ACTIONS(286), 12,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [2645] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      sym_name,
    ACTIONS(230), 1,
      anon_sym_BANG,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(236), 1,
      sym_number,
    ACTIONS(238), 1,
      anon_sym_SQUOTE,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    STATE(194), 1,
      sym__expr,
    ACTIONS(234), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(130), 2,
      sym_string_name,
      sym__any_name,
    STATE(200), 7,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_path,
      sym_string,
  [2687] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      anon_sym_DOT,
    STATE(84), 1,
      aux_sym_path_repeat1,
    ACTIONS(342), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(340), 14,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [2717] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      sym_name,
    ACTIONS(296), 1,
      anon_sym_BANG,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(304), 1,
      sym_number,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_DQUOTE,
    STATE(218), 1,
      sym__expr,
    ACTIONS(302), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(140), 2,
      sym_string_name,
      sym__any_name,
    STATE(176), 7,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_path,
      sym_string,
  [2759] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      sym_name,
    ACTIONS(296), 1,
      anon_sym_BANG,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(304), 1,
      sym_number,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_DQUOTE,
    STATE(165), 1,
      sym__expr,
    ACTIONS(302), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(140), 2,
      sym_string_name,
      sym__any_name,
    STATE(176), 7,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_path,
      sym_string,
  [2801] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      sym_name,
    ACTIONS(296), 1,
      anon_sym_BANG,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(304), 1,
      sym_number,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_DQUOTE,
    STATE(217), 1,
      sym__expr,
    ACTIONS(302), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(140), 2,
      sym_string_name,
      sym__any_name,
    STATE(176), 7,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_path,
      sym_string,
  [2843] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      sym_name,
    ACTIONS(250), 1,
      anon_sym_BANG,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      sym_number,
    ACTIONS(258), 1,
      anon_sym_SQUOTE,
    ACTIONS(260), 1,
      anon_sym_DQUOTE,
    STATE(174), 1,
      sym__expr,
    ACTIONS(254), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(135), 2,
      sym_string_name,
      sym__any_name,
    STATE(197), 7,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_path,
      sym_string,
  [2885] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      sym_name,
    ACTIONS(296), 1,
      anon_sym_BANG,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(304), 1,
      sym_number,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_DQUOTE,
    STATE(156), 1,
      sym__expr,
    ACTIONS(302), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(140), 2,
      sym_string_name,
      sym__any_name,
    STATE(176), 7,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_path,
      sym_string,
  [2927] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(17), 1,
      anon_sym_BANG,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym_number,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(150), 1,
      sym__expr,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(127), 2,
      sym_string_name,
      sym__any_name,
    STATE(152), 7,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_path,
      sym_string,
  [2969] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      sym_name,
    ACTIONS(250), 1,
      anon_sym_BANG,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      sym_number,
    ACTIONS(258), 1,
      anon_sym_SQUOTE,
    ACTIONS(260), 1,
      anon_sym_DQUOTE,
    STATE(169), 1,
      sym__expr,
    ACTIONS(254), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(135), 2,
      sym_string_name,
      sym__any_name,
    STATE(197), 7,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_path,
      sym_string,
  [3011] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      sym_name,
    ACTIONS(250), 1,
      anon_sym_BANG,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      sym_number,
    ACTIONS(258), 1,
      anon_sym_SQUOTE,
    ACTIONS(260), 1,
      anon_sym_DQUOTE,
    STATE(153), 1,
      sym__expr,
    ACTIONS(254), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(135), 2,
      sym_string_name,
      sym__any_name,
    STATE(197), 7,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_path,
      sym_string,
  [3053] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      sym_name,
    ACTIONS(250), 1,
      anon_sym_BANG,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      sym_number,
    ACTIONS(258), 1,
      anon_sym_SQUOTE,
    ACTIONS(260), 1,
      anon_sym_DQUOTE,
    STATE(180), 1,
      sym__expr,
    ACTIONS(254), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(135), 2,
      sym_string_name,
      sym__any_name,
    STATE(197), 7,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_path,
      sym_string,
  [3095] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(351), 1,
      anon_sym_DOT,
    STATE(84), 1,
      aux_sym_path_repeat1,
    ACTIONS(349), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(347), 14,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [3125] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      sym_name,
    ACTIONS(250), 1,
      anon_sym_BANG,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      sym_number,
    ACTIONS(258), 1,
      anon_sym_SQUOTE,
    ACTIONS(260), 1,
      anon_sym_DQUOTE,
    STATE(186), 1,
      sym__expr,
    ACTIONS(254), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(135), 2,
      sym_string_name,
      sym__any_name,
    STATE(197), 7,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_path,
      sym_string,
  [3167] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      sym_name,
    ACTIONS(250), 1,
      anon_sym_BANG,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      sym_number,
    ACTIONS(258), 1,
      anon_sym_SQUOTE,
    ACTIONS(260), 1,
      anon_sym_DQUOTE,
    STATE(188), 1,
      sym__expr,
    ACTIONS(254), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(135), 2,
      sym_string_name,
      sym__any_name,
    STATE(197), 7,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_path,
      sym_string,
  [3209] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      sym_name,
    ACTIONS(296), 1,
      anon_sym_BANG,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(304), 1,
      sym_number,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_DQUOTE,
    STATE(216), 1,
      sym__expr,
    ACTIONS(302), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(140), 2,
      sym_string_name,
      sym__any_name,
    STATE(176), 7,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_path,
      sym_string,
  [3251] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_DQUOTE,
    ACTIONS(353), 1,
      sym_name,
    ACTIONS(214), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    STATE(149), 2,
      sym_string_name,
      sym__any_name,
    ACTIONS(216), 12,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_RPAREN,
  [3283] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      sym_name,
    ACTIONS(296), 1,
      anon_sym_BANG,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(304), 1,
      sym_number,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_DQUOTE,
    STATE(184), 1,
      sym__expr,
    ACTIONS(302), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(140), 2,
      sym_string_name,
      sym__any_name,
    STATE(176), 7,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_path,
      sym_string,
  [3325] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(17), 1,
      anon_sym_BANG,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym_number,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(167), 1,
      sym__expr,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(127), 2,
      sym_string_name,
      sym__any_name,
    STATE(152), 7,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_path,
      sym_string,
  [3367] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      sym_name,
    ACTIONS(296), 1,
      anon_sym_BANG,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(304), 1,
      sym_number,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_DQUOTE,
    STATE(183), 1,
      sym__expr,
    ACTIONS(302), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(140), 2,
      sym_string_name,
      sym__any_name,
    STATE(176), 7,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_path,
      sym_string,
  [3409] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(17), 1,
      anon_sym_BANG,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym_number,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(148), 1,
      sym__expr,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(127), 2,
      sym_string_name,
      sym__any_name,
    STATE(152), 7,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_path,
      sym_string,
  [3451] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      sym_name,
    ACTIONS(296), 1,
      anon_sym_BANG,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(304), 1,
      sym_number,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_DQUOTE,
    STATE(182), 1,
      sym__expr,
    ACTIONS(302), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(140), 2,
      sym_string_name,
      sym__any_name,
    STATE(176), 7,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_path,
      sym_string,
  [3493] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(17), 1,
      anon_sym_BANG,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym_number,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(166), 1,
      sym__expr,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(127), 2,
      sym_string_name,
      sym__any_name,
    STATE(152), 7,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_path,
      sym_string,
  [3535] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(17), 1,
      anon_sym_BANG,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym_number,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(161), 1,
      sym__expr,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(127), 2,
      sym_string_name,
      sym__any_name,
    STATE(152), 7,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_path,
      sym_string,
  [3577] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      sym_name,
    ACTIONS(17), 1,
      anon_sym_BANG,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      sym_number,
    ACTIONS(33), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    STATE(157), 1,
      sym__expr,
    ACTIONS(21), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(127), 2,
      sym_string_name,
      sym__any_name,
    STATE(152), 7,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_path,
      sym_string,
  [3619] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      sym_name,
    ACTIONS(296), 1,
      anon_sym_BANG,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(304), 1,
      sym_number,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_DQUOTE,
    STATE(181), 1,
      sym__expr,
    ACTIONS(302), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(140), 2,
      sym_string_name,
      sym__any_name,
    STATE(176), 7,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_path,
      sym_string,
  [3661] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      sym_name,
    ACTIONS(296), 1,
      anon_sym_BANG,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(304), 1,
      sym_number,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_DQUOTE,
    STATE(168), 1,
      sym__expr,
    ACTIONS(302), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(140), 2,
      sym_string_name,
      sym__any_name,
    STATE(176), 7,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_path,
      sym_string,
  [3703] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      sym_name,
    ACTIONS(296), 1,
      anon_sym_BANG,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(304), 1,
      sym_number,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_DQUOTE,
    STATE(154), 1,
      sym__expr,
    ACTIONS(302), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(140), 2,
      sym_string_name,
      sym__any_name,
    STATE(176), 7,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_path,
      sym_string,
  [3745] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      sym_name,
    ACTIONS(296), 1,
      anon_sym_BANG,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(304), 1,
      sym_number,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_DQUOTE,
    STATE(151), 1,
      sym__expr,
    ACTIONS(302), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(140), 2,
      sym_string_name,
      sym__any_name,
    STATE(176), 7,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_path,
      sym_string,
  [3787] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      sym_name,
    ACTIONS(296), 1,
      anon_sym_BANG,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(304), 1,
      sym_number,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_DQUOTE,
    STATE(215), 1,
      sym__expr,
    ACTIONS(302), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(140), 2,
      sym_string_name,
      sym__any_name,
    STATE(176), 7,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_path,
      sym_string,
  [3829] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_DQUOTE,
    ACTIONS(355), 1,
      sym_name,
    ACTIONS(214), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    STATE(146), 2,
      sym_string_name,
      sym__any_name,
    ACTIONS(216), 12,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [3861] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      sym_name,
    ACTIONS(296), 1,
      anon_sym_BANG,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(304), 1,
      sym_number,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_DQUOTE,
    STATE(177), 1,
      sym__expr,
    ACTIONS(302), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(140), 2,
      sym_string_name,
      sym__any_name,
    STATE(176), 7,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_path,
      sym_string,
  [3903] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      sym_name,
    ACTIONS(250), 1,
      anon_sym_BANG,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      sym_number,
    ACTIONS(258), 1,
      anon_sym_SQUOTE,
    ACTIONS(260), 1,
      anon_sym_DQUOTE,
    STATE(205), 1,
      sym__expr,
    ACTIONS(254), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(135), 2,
      sym_string_name,
      sym__any_name,
    STATE(197), 7,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_path,
      sym_string,
  [3945] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_DQUOTE,
    ACTIONS(353), 1,
      sym_name,
    ACTIONS(284), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    STATE(149), 2,
      sym_string_name,
      sym__any_name,
    ACTIONS(286), 12,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_RPAREN,
  [3977] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      sym_name,
    ACTIONS(230), 1,
      anon_sym_BANG,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(236), 1,
      sym_number,
    ACTIONS(238), 1,
      anon_sym_SQUOTE,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    STATE(213), 1,
      sym__expr,
    ACTIONS(234), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(130), 2,
      sym_string_name,
      sym__any_name,
    STATE(200), 7,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_path,
      sym_string,
  [4019] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 1,
      sym_name,
    ACTIONS(296), 1,
      anon_sym_BANG,
    ACTIONS(298), 1,
      anon_sym_LPAREN,
    ACTIONS(304), 1,
      sym_number,
    ACTIONS(306), 1,
      anon_sym_SQUOTE,
    ACTIONS(308), 1,
      anon_sym_DQUOTE,
    STATE(202), 1,
      sym__expr,
    ACTIONS(302), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(140), 2,
      sym_string_name,
      sym__any_name,
    STATE(176), 7,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_path,
      sym_string,
  [4061] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      sym_name,
    ACTIONS(230), 1,
      anon_sym_BANG,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(236), 1,
      sym_number,
    ACTIONS(238), 1,
      anon_sym_SQUOTE,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    STATE(214), 1,
      sym__expr,
    ACTIONS(234), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(130), 2,
      sym_string_name,
      sym__any_name,
    STATE(200), 7,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_path,
      sym_string,
  [4103] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      sym_name,
    ACTIONS(230), 1,
      anon_sym_BANG,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(236), 1,
      sym_number,
    ACTIONS(238), 1,
      anon_sym_SQUOTE,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    STATE(201), 1,
      sym__expr,
    ACTIONS(234), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(130), 2,
      sym_string_name,
      sym__any_name,
    STATE(200), 7,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_path,
      sym_string,
  [4145] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_DQUOTE,
    ACTIONS(355), 1,
      sym_name,
    ACTIONS(284), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    STATE(146), 2,
      sym_string_name,
      sym__any_name,
    ACTIONS(286), 12,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [4177] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      sym_name,
    ACTIONS(230), 1,
      anon_sym_BANG,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(236), 1,
      sym_number,
    ACTIONS(238), 1,
      anon_sym_SQUOTE,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    STATE(212), 1,
      sym__expr,
    ACTIONS(234), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(130), 2,
      sym_string_name,
      sym__any_name,
    STATE(200), 7,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_path,
      sym_string,
  [4219] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      sym_name,
    ACTIONS(230), 1,
      anon_sym_BANG,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(236), 1,
      sym_number,
    ACTIONS(238), 1,
      anon_sym_SQUOTE,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    STATE(211), 1,
      sym__expr,
    ACTIONS(234), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(130), 2,
      sym_string_name,
      sym__any_name,
    STATE(200), 7,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_path,
      sym_string,
  [4261] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 1,
      sym_name,
    ACTIONS(250), 1,
      anon_sym_BANG,
    ACTIONS(252), 1,
      anon_sym_LPAREN,
    ACTIONS(256), 1,
      sym_number,
    ACTIONS(258), 1,
      anon_sym_SQUOTE,
    ACTIONS(260), 1,
      anon_sym_DQUOTE,
    STATE(196), 1,
      sym__expr,
    ACTIONS(254), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(135), 2,
      sym_string_name,
      sym__any_name,
    STATE(197), 7,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_path,
      sym_string,
  [4303] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      sym_name,
    ACTIONS(230), 1,
      anon_sym_BANG,
    ACTIONS(232), 1,
      anon_sym_LPAREN,
    ACTIONS(236), 1,
      sym_number,
    ACTIONS(238), 1,
      anon_sym_SQUOTE,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    STATE(208), 1,
      sym__expr,
    ACTIONS(234), 2,
      anon_sym_true,
      anon_sym_false,
    STATE(130), 2,
      sym_string_name,
      sym__any_name,
    STATE(200), 7,
      sym_unary_expr,
      sym_binary_expr,
      sym_nested_expr,
      sym_function,
      sym_bool,
      sym_path,
      sym_string,
  [4345] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(338), 1,
      sym_name,
    ACTIONS(214), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    STATE(147), 2,
      sym_string_name,
      sym__any_name,
    ACTIONS(216), 12,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [4377] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(340), 15,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_DOT,
  [4402] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(357), 1,
      anon_sym_DOT,
    STATE(94), 1,
      aux_sym_path_repeat1,
    ACTIONS(274), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(276), 13,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [4431] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(340), 15,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
      anon_sym_as,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_DOT,
  [4456] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(359), 1,
      anon_sym_DOT,
    STATE(129), 1,
      aux_sym_path_repeat1,
    ACTIONS(342), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(340), 12,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [4484] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      anon_sym_DOT,
    STATE(131), 1,
      aux_sym_path_repeat1,
    ACTIONS(274), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(276), 12,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [4512] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(364), 1,
      anon_sym_DOT,
    STATE(129), 1,
      aux_sym_path_repeat1,
    ACTIONS(349), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(347), 12,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [4540] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(368), 1,
      anon_sym_as,
    ACTIONS(372), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(366), 3,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
    ACTIONS(370), 10,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [4568] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_DOT,
    STATE(134), 1,
      aux_sym_path_repeat1,
    ACTIONS(349), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(347), 12,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [4596] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_DOT,
    STATE(134), 1,
      aux_sym_path_repeat1,
    ACTIONS(342), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(340), 12,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [4624] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(379), 1,
      anon_sym_DOT,
    STATE(133), 1,
      aux_sym_path_repeat1,
    ACTIONS(274), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(276), 12,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [4652] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(318), 1,
      sym_name,
    STATE(243), 2,
      sym_string_name,
      sym__any_name,
    STATE(245), 2,
      sym_major_lvl,
      sym_minor_lvl,
    ACTIONS(29), 3,
      anon_sym_Boolean,
      anon_sym_Arithmetic,
      anon_sym_Type,
    ACTIONS(13), 7,
      anon_sym_STAR,
      anon_sym_group_DASHcardinality,
      anon_sym_feature_DASHcardinality,
      anon_sym_aggregate_DASHfunction,
      anon_sym_type_DASHconstraints,
      anon_sym_string_DASHconstraints,
      anon_sym_numeric_DASHconstraints,
  [4684] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(381), 1,
      anon_sym_DOT,
    STATE(141), 1,
      aux_sym_path_repeat1,
    ACTIONS(349), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(347), 12,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_RPAREN,
  [4712] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(290), 13,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_DOT,
  [4738] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(385), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(290), 13,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_DOT,
  [4764] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(387), 1,
      anon_sym_DOT,
    STATE(137), 1,
      aux_sym_path_repeat1,
    ACTIONS(274), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(276), 12,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_RPAREN,
  [4792] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_DOT,
    STATE(141), 1,
      aux_sym_path_repeat1,
    ACTIONS(342), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(340), 12,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_RPAREN,
  [4820] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_LPAREN,
    ACTIONS(288), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(290), 13,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [4846] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(394), 13,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [4869] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(398), 13,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [4892] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(402), 13,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [4915] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(340), 13,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_DOT,
  [4938] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(340), 13,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_DOT,
  [4961] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_LT,
    ACTIONS(412), 1,
      anon_sym_SLASH,
    ACTIONS(414), 1,
      anon_sym_CARET,
    ACTIONS(408), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(406), 9,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [4990] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(340), 13,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [5013] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_CARET,
    ACTIONS(418), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(416), 12,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5038] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 1,
      anon_sym_COMMA,
    ACTIONS(430), 1,
      anon_sym_LT,
    ACTIONS(432), 1,
      anon_sym_SLASH,
    ACTIONS(434), 1,
      anon_sym_CARET,
    ACTIONS(436), 1,
      anon_sym_RPAREN,
    STATE(275), 1,
      aux_sym_function_repeat1,
    ACTIONS(424), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(426), 2,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
    ACTIONS(428), 2,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(422), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5077] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(370), 13,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [5100] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_COMMA,
    ACTIONS(442), 1,
      anon_sym_RBRACK,
    ACTIONS(450), 1,
      anon_sym_LT,
    ACTIONS(452), 1,
      anon_sym_SLASH,
    ACTIONS(454), 1,
      anon_sym_CARET,
    STATE(263), 1,
      aux_sym_attribute_constraints_repeat1,
    ACTIONS(444), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(446), 2,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
    ACTIONS(448), 2,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(440), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5139] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      anon_sym_LT,
    ACTIONS(432), 1,
      anon_sym_SLASH,
    ACTIONS(434), 1,
      anon_sym_CARET,
    ACTIONS(456), 1,
      anon_sym_COMMA,
    ACTIONS(458), 1,
      anon_sym_RPAREN,
    STATE(277), 1,
      aux_sym_function_repeat1,
    ACTIONS(424), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(426), 2,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
    ACTIONS(428), 2,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(422), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5178] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(460), 13,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [5201] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      anon_sym_LT,
    ACTIONS(432), 1,
      anon_sym_SLASH,
    ACTIONS(434), 1,
      anon_sym_CARET,
    ACTIONS(464), 1,
      anon_sym_COMMA,
    ACTIONS(466), 1,
      anon_sym_RPAREN,
    STATE(250), 1,
      aux_sym_function_repeat1,
    ACTIONS(424), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(426), 2,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
    ACTIONS(428), 2,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(422), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5240] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_CARET,
    ACTIONS(410), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(406), 12,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5265] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(220), 13,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_DOT,
  [5288] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(468), 13,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [5311] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_SLASH,
    ACTIONS(414), 1,
      anon_sym_CARET,
    ACTIONS(480), 1,
      anon_sym_LT,
    ACTIONS(474), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(476), 2,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
    ACTIONS(478), 2,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(408), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(472), 3,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
  [5346] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_SLASH,
    ACTIONS(414), 1,
      anon_sym_CARET,
    ACTIONS(480), 1,
      anon_sym_LT,
    ACTIONS(478), 2,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(408), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(406), 7,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
  [5377] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(482), 13,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [5400] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(220), 13,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_RPAREN,
      anon_sym_DOT,
  [5423] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(486), 13,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [5446] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      anon_sym_LT,
    ACTIONS(432), 1,
      anon_sym_SLASH,
    ACTIONS(434), 1,
      anon_sym_CARET,
    ACTIONS(490), 1,
      anon_sym_COMMA,
    ACTIONS(492), 1,
      anon_sym_RPAREN,
    STATE(249), 1,
      aux_sym_function_repeat1,
    ACTIONS(424), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(426), 2,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
    ACTIONS(428), 2,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(422), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [5485] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      anon_sym_SLASH,
    ACTIONS(414), 1,
      anon_sym_CARET,
    ACTIONS(480), 1,
      anon_sym_LT,
    ACTIONS(474), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(478), 2,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(408), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(406), 5,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
  [5518] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(406), 13,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [5541] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      anon_sym_CARET,
    ACTIONS(410), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(406), 11,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RPAREN,
  [5565] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_LT,
    ACTIONS(452), 1,
      anon_sym_SLASH,
    ACTIONS(454), 1,
      anon_sym_CARET,
    ACTIONS(440), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(406), 8,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [5593] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(394), 12,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [5615] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(460), 12,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [5637] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(398), 12,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [5659] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(486), 12,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [5681] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(406), 12,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [5703] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(468), 12,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_RPAREN,
  [5725] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(370), 12,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_RPAREN,
  [5747] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      anon_sym_CARET,
    ACTIONS(418), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(416), 11,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_RPAREN,
  [5771] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(482), 12,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_RPAREN,
  [5793] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(402), 12,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_RPAREN,
  [5815] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LT,
    ACTIONS(452), 1,
      anon_sym_SLASH,
    ACTIONS(454), 1,
      anon_sym_CARET,
    ACTIONS(444), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(448), 2,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(440), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(406), 4,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
  [5847] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      anon_sym_LT,
    ACTIONS(432), 1,
      anon_sym_SLASH,
    ACTIONS(434), 1,
      anon_sym_CARET,
    ACTIONS(428), 2,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(422), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(406), 6,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_RPAREN,
  [5877] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      anon_sym_LT,
    ACTIONS(432), 1,
      anon_sym_SLASH,
    ACTIONS(434), 1,
      anon_sym_CARET,
    ACTIONS(424), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(428), 2,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(422), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(406), 4,
      anon_sym_COMMA,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_RPAREN,
  [5909] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_LT,
    ACTIONS(432), 1,
      anon_sym_SLASH,
    ACTIONS(434), 1,
      anon_sym_CARET,
    ACTIONS(422), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(406), 8,
      anon_sym_COMMA,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_RPAREN,
  [5937] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(406), 12,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_RPAREN,
  [5959] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(486), 12,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_RPAREN,
  [5981] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LT,
    ACTIONS(452), 1,
      anon_sym_SLASH,
    ACTIONS(454), 1,
      anon_sym_CARET,
    ACTIONS(448), 2,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(440), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(406), 6,
      anon_sym_COMMA,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
  [6011] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LT,
    ACTIONS(452), 1,
      anon_sym_SLASH,
    ACTIONS(454), 1,
      anon_sym_CARET,
    ACTIONS(444), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(446), 2,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
    ACTIONS(448), 2,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(494), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(440), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6045] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_CARET,
    ACTIONS(410), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(406), 11,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6069] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(398), 12,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_RPAREN,
  [6091] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(460), 12,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_RPAREN,
  [6113] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(402), 12,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [6135] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(482), 12,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [6157] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(394), 12,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
      anon_sym_RPAREN,
  [6179] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_LT,
    ACTIONS(508), 1,
      anon_sym_SLASH,
    ACTIONS(510), 1,
      anon_sym_CARET,
    ACTIONS(496), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(500), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(502), 2,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
    ACTIONS(504), 2,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(498), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6213] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_LT,
    ACTIONS(508), 1,
      anon_sym_SLASH,
    ACTIONS(510), 1,
      anon_sym_CARET,
    ACTIONS(494), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    ACTIONS(500), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(502), 2,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
    ACTIONS(504), 2,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(498), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6247] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      anon_sym_CARET,
    ACTIONS(418), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(416), 11,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6271] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(370), 12,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [6293] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(468), 12,
      anon_sym_COMMA,
      anon_sym_STAR,
      anon_sym_RBRACK,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [6315] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(470), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(468), 12,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [6337] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(372), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(370), 12,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [6359] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      anon_sym_CARET,
    ACTIONS(418), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(416), 11,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6383] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      anon_sym_LT,
    ACTIONS(432), 1,
      anon_sym_SLASH,
    ACTIONS(434), 1,
      anon_sym_CARET,
    ACTIONS(424), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(426), 2,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
    ACTIONS(428), 2,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(512), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
    ACTIONS(422), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6417] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(396), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(394), 12,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [6439] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(460), 12,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [6461] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      anon_sym_LT,
    ACTIONS(452), 1,
      anon_sym_SLASH,
    ACTIONS(454), 1,
      anon_sym_CARET,
    ACTIONS(444), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(446), 2,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
    ACTIONS(448), 2,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(514), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
    ACTIONS(440), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6495] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(400), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(398), 12,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [6517] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(486), 12,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [6539] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(406), 12,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [6561] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(482), 12,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [6583] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(402), 12,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
      anon_sym_CARET,
  [6605] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(410), 1,
      anon_sym_LT,
    ACTIONS(508), 1,
      anon_sym_SLASH,
    ACTIONS(510), 1,
      anon_sym_CARET,
    ACTIONS(498), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(406), 8,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
  [6633] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_LT,
    ACTIONS(508), 1,
      anon_sym_SLASH,
    ACTIONS(510), 1,
      anon_sym_CARET,
    ACTIONS(500), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(504), 2,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(498), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(406), 4,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
  [6665] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(510), 1,
      anon_sym_CARET,
    ACTIONS(410), 2,
      anon_sym_LT,
      anon_sym_SLASH,
    ACTIONS(406), 11,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_STAR,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
      anon_sym_GT,
      anon_sym_EQ_EQ,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6689] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_LT,
    ACTIONS(508), 1,
      anon_sym_SLASH,
    ACTIONS(510), 1,
      anon_sym_CARET,
    ACTIONS(504), 2,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(498), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
    ACTIONS(406), 6,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_AMP,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
  [6719] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      anon_sym_LT,
    ACTIONS(432), 1,
      anon_sym_SLASH,
    ACTIONS(434), 1,
      anon_sym_CARET,
    ACTIONS(516), 1,
      anon_sym_RPAREN,
    ACTIONS(424), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(426), 2,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
    ACTIONS(428), 2,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(422), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6752] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      anon_sym_LT,
    ACTIONS(432), 1,
      anon_sym_SLASH,
    ACTIONS(434), 1,
      anon_sym_CARET,
    ACTIONS(518), 1,
      anon_sym_RPAREN,
    ACTIONS(424), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(426), 2,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
    ACTIONS(428), 2,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(422), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6785] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      anon_sym_LT,
    ACTIONS(432), 1,
      anon_sym_SLASH,
    ACTIONS(434), 1,
      anon_sym_CARET,
    ACTIONS(520), 1,
      anon_sym_RPAREN,
    ACTIONS(424), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(426), 2,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
    ACTIONS(428), 2,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(422), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6818] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      anon_sym_LT,
    ACTIONS(432), 1,
      anon_sym_SLASH,
    ACTIONS(434), 1,
      anon_sym_CARET,
    ACTIONS(522), 1,
      anon_sym_RPAREN,
    ACTIONS(424), 2,
      anon_sym_PIPE,
      anon_sym_AMP,
    ACTIONS(426), 2,
      anon_sym_EQ_GT,
      anon_sym_LT_EQ_GT,
    ACTIONS(428), 2,
      anon_sym_GT,
      anon_sym_EQ_EQ,
    ACTIONS(422), 3,
      anon_sym_STAR,
      anon_sym_PLUS,
      anon_sym_DASH,
  [6851] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(524), 1,
      sym_name,
    ACTIONS(526), 1,
      anon_sym_RBRACE,
    ACTIONS(528), 1,
      anon_sym_constraint,
    ACTIONS(530), 1,
      anon_sym_constraints,
    STATE(57), 2,
      sym_string_name,
      sym__any_name,
    STATE(258), 4,
      sym_attribute_constraint,
      sym_attribute_constraints,
      sym_attribute_value,
      sym__attribute,
  [6880] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(524), 1,
      sym_name,
    ACTIONS(528), 1,
      anon_sym_constraint,
    ACTIONS(530), 1,
      anon_sym_constraints,
    ACTIONS(532), 1,
      anon_sym_RBRACE,
    STATE(57), 2,
      sym_string_name,
      sym__any_name,
    STATE(307), 4,
      sym_attribute_constraint,
      sym_attribute_constraints,
      sym_attribute_value,
      sym__attribute,
  [6909] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(524), 1,
      sym_name,
    ACTIONS(528), 1,
      anon_sym_constraint,
    ACTIONS(530), 1,
      anon_sym_constraints,
    ACTIONS(534), 1,
      anon_sym_RBRACE,
    STATE(57), 2,
      sym_string_name,
      sym__any_name,
    STATE(307), 4,
      sym_attribute_constraint,
      sym_attribute_constraints,
      sym_attribute_value,
      sym__attribute,
  [6938] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(524), 1,
      sym_name,
    ACTIONS(528), 1,
      anon_sym_constraint,
    ACTIONS(530), 1,
      anon_sym_constraints,
    ACTIONS(536), 1,
      anon_sym_RBRACE,
    STATE(57), 2,
      sym_string_name,
      sym__any_name,
    STATE(307), 4,
      sym_attribute_constraint,
      sym_attribute_constraints,
      sym_attribute_value,
      sym__attribute,
  [6967] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(524), 1,
      sym_name,
    ACTIONS(528), 1,
      anon_sym_constraint,
    ACTIONS(530), 1,
      anon_sym_constraints,
    ACTIONS(538), 1,
      anon_sym_RBRACE,
    STATE(57), 2,
      sym_string_name,
      sym__any_name,
    STATE(307), 4,
      sym_attribute_constraint,
      sym_attribute_constraints,
      sym_attribute_value,
      sym__attribute,
  [6996] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(524), 1,
      sym_name,
    ACTIONS(528), 1,
      anon_sym_constraint,
    ACTIONS(530), 1,
      anon_sym_constraints,
    ACTIONS(540), 1,
      anon_sym_RBRACE,
    STATE(57), 2,
      sym_string_name,
      sym__any_name,
    STATE(307), 4,
      sym_attribute_constraint,
      sym_attribute_constraints,
      sym_attribute_value,
      sym__attribute,
  [7025] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(524), 1,
      sym_name,
    ACTIONS(528), 1,
      anon_sym_constraint,
    ACTIONS(530), 1,
      anon_sym_constraints,
    ACTIONS(542), 1,
      anon_sym_RBRACE,
    STATE(57), 2,
      sym_string_name,
      sym__any_name,
    STATE(307), 4,
      sym_attribute_constraint,
      sym_attribute_constraints,
      sym_attribute_value,
      sym__attribute,
  [7054] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(524), 1,
      sym_name,
    ACTIONS(528), 1,
      anon_sym_constraint,
    ACTIONS(530), 1,
      anon_sym_constraints,
    ACTIONS(544), 1,
      anon_sym_RBRACE,
    STATE(57), 2,
      sym_string_name,
      sym__any_name,
    STATE(265), 4,
      sym_attribute_constraint,
      sym_attribute_constraints,
      sym_attribute_value,
      sym__attribute,
  [7083] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(524), 1,
      sym_name,
    ACTIONS(528), 1,
      anon_sym_constraint,
    ACTIONS(530), 1,
      anon_sym_constraints,
    ACTIONS(546), 1,
      anon_sym_RBRACE,
    STATE(57), 2,
      sym_string_name,
      sym__any_name,
    STATE(272), 4,
      sym_attribute_constraint,
      sym_attribute_constraints,
      sym_attribute_value,
      sym__attribute,
  [7112] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(524), 1,
      sym_name,
    ACTIONS(528), 1,
      anon_sym_constraint,
    ACTIONS(530), 1,
      anon_sym_constraints,
    ACTIONS(548), 1,
      anon_sym_RBRACE,
    STATE(57), 2,
      sym_string_name,
      sym__any_name,
    STATE(307), 4,
      sym_attribute_constraint,
      sym_attribute_constraints,
      sym_attribute_value,
      sym__attribute,
  [7141] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(524), 1,
      sym_name,
    ACTIONS(528), 1,
      anon_sym_constraint,
    ACTIONS(530), 1,
      anon_sym_constraints,
    ACTIONS(550), 1,
      anon_sym_RBRACE,
    STATE(57), 2,
      sym_string_name,
      sym__any_name,
    STATE(266), 4,
      sym_attribute_constraint,
      sym_attribute_constraints,
      sym_attribute_value,
      sym__attribute,
  [7170] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(524), 1,
      sym_name,
    ACTIONS(528), 1,
      anon_sym_constraint,
    ACTIONS(530), 1,
      anon_sym_constraints,
    ACTIONS(552), 1,
      anon_sym_RBRACE,
    STATE(57), 2,
      sym_string_name,
      sym__any_name,
    STATE(307), 4,
      sym_attribute_constraint,
      sym_attribute_constraints,
      sym_attribute_value,
      sym__attribute,
  [7199] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(524), 1,
      sym_name,
    ACTIONS(528), 1,
      anon_sym_constraint,
    ACTIONS(530), 1,
      anon_sym_constraints,
    STATE(57), 2,
      sym_string_name,
      sym__any_name,
    STATE(307), 4,
      sym_attribute_constraint,
      sym_attribute_constraints,
      sym_attribute_value,
      sym__attribute,
  [7225] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(554), 1,
      sym_name,
    ACTIONS(556), 1,
      anon_sym_cardinality,
    STATE(267), 1,
      sym_path,
    ACTIONS(558), 2,
      sym__newline,
      anon_sym_LBRACE,
    STATE(127), 2,
      sym_string_name,
      sym__any_name,
  [7249] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(560), 1,
      sym_name,
    ACTIONS(562), 1,
      anon_sym_cardinality,
    ACTIONS(564), 2,
      sym__newline,
      anon_sym_LBRACE,
    STATE(257), 2,
      sym_string_name,
      sym__any_name,
  [7270] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 1,
      sym_name,
    ACTIONS(280), 1,
      anon_sym_DQUOTE,
    ACTIONS(566), 1,
      anon_sym_cardinality,
    ACTIONS(568), 3,
      sym__newline,
      anon_sym_LBRACE,
      anon_sym_DOT,
  [7288] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(572), 1,
      anon_sym_DOT,
    STATE(235), 1,
      aux_sym_lang_lvl_repeat1,
    ACTIONS(570), 3,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
  [7303] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(577), 1,
      anon_sym_DOT,
    STATE(237), 1,
      aux_sym_lang_lvl_repeat1,
    ACTIONS(575), 3,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
  [7318] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(581), 1,
      anon_sym_DOT,
    STATE(235), 1,
      aux_sym_lang_lvl_repeat1,
    ACTIONS(579), 3,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
  [7333] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_DQUOTE,
    ACTIONS(338), 1,
      sym_name,
    STATE(147), 2,
      sym_string_name,
      sym__any_name,
  [7347] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(583), 1,
      sym_name,
    STATE(126), 2,
      sym_string_name,
      sym__any_name,
  [7361] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(585), 4,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
      anon_sym_DOT,
  [7371] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_DQUOTE,
    ACTIONS(587), 1,
      sym_name,
    STATE(276), 2,
      sym_string_name,
      sym__any_name,
  [7385] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      anon_sym_DQUOTE,
    ACTIONS(355), 1,
      sym_name,
    STATE(146), 2,
      sym_string_name,
      sym__any_name,
  [7399] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 4,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
      anon_sym_DOT,
  [7409] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(589), 1,
      anon_sym_cardinality,
    ACTIONS(591), 1,
      anon_sym_LBRACE,
    ACTIONS(593), 1,
      sym__newline,
    STATE(37), 1,
      sym_attributes,
  [7425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 4,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
      anon_sym_DOT,
  [7435] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      anon_sym_DQUOTE,
    ACTIONS(353), 1,
      sym_name,
    STATE(149), 2,
      sym_string_name,
      sym__any_name,
  [7449] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(568), 4,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
      anon_sym_DOT,
  [7459] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(595), 1,
      anon_sym_cardinality,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
    ACTIONS(599), 1,
      sym__newline,
    STATE(25), 1,
      sym_attributes,
  [7475] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(601), 1,
      anon_sym_COMMA,
    ACTIONS(603), 1,
      anon_sym_RPAREN,
    STATE(259), 1,
      aux_sym_function_repeat1,
  [7488] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(605), 1,
      anon_sym_COMMA,
    ACTIONS(607), 1,
      anon_sym_RPAREN,
    STATE(259), 1,
      aux_sym_function_repeat1,
  [7501] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(609), 3,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
  [7510] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(611), 3,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
  [7519] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(613), 1,
      anon_sym_COMMA,
    ACTIONS(615), 1,
      anon_sym_RBRACK,
    STATE(255), 1,
      aux_sym_vector_repeat1,
  [7532] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(617), 1,
      anon_sym_COMMA,
    ACTIONS(620), 1,
      anon_sym_RBRACE,
    STATE(254), 1,
      aux_sym_attributes_repeat1,
  [7545] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(622), 1,
      anon_sym_COMMA,
    ACTIONS(624), 1,
      anon_sym_RBRACK,
    STATE(260), 1,
      aux_sym_vector_repeat1,
  [7558] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(626), 1,
      anon_sym_COMMA,
    ACTIONS(628), 1,
      anon_sym_RBRACE,
    STATE(254), 1,
      aux_sym_attributes_repeat1,
  [7571] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 3,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
  [7580] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 1,
      anon_sym_COMMA,
    ACTIONS(634), 1,
      anon_sym_RBRACE,
    STATE(256), 1,
      aux_sym_attributes_repeat1,
  [7593] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      anon_sym_COMMA,
    ACTIONS(639), 1,
      anon_sym_RPAREN,
    STATE(259), 1,
      aux_sym_function_repeat1,
  [7606] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(641), 1,
      anon_sym_COMMA,
    ACTIONS(644), 1,
      anon_sym_RBRACK,
    STATE(260), 1,
      aux_sym_vector_repeat1,
  [7619] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(646), 1,
      anon_sym_COMMA,
    ACTIONS(649), 1,
      anon_sym_RBRACK,
    STATE(261), 1,
      aux_sym_attribute_constraints_repeat1,
  [7632] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(651), 1,
      anon_sym_COMMA,
    ACTIONS(653), 1,
      anon_sym_RBRACE,
    STATE(254), 1,
      aux_sym_attributes_repeat1,
  [7645] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(655), 1,
      anon_sym_COMMA,
    ACTIONS(657), 1,
      anon_sym_RBRACK,
    STATE(261), 1,
      aux_sym_attribute_constraints_repeat1,
  [7658] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 3,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
  [7667] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(661), 1,
      anon_sym_COMMA,
    ACTIONS(663), 1,
      anon_sym_RBRACE,
    STATE(262), 1,
      aux_sym_attributes_repeat1,
  [7680] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(665), 1,
      anon_sym_COMMA,
    ACTIONS(667), 1,
      anon_sym_RBRACE,
    STATE(273), 1,
      aux_sym_attributes_repeat1,
  [7693] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(669), 3,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
  [7702] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      anon_sym_COMMA,
    ACTIONS(673), 1,
      anon_sym_RBRACK,
    STATE(260), 1,
      aux_sym_vector_repeat1,
  [7715] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      anon_sym_COMMA,
    ACTIONS(677), 1,
      anon_sym_RBRACK,
    STATE(268), 1,
      aux_sym_vector_repeat1,
  [7728] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(591), 1,
      anon_sym_LBRACE,
    ACTIONS(679), 1,
      sym__newline,
    STATE(30), 1,
      sym_attributes,
  [7741] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(597), 1,
      anon_sym_LBRACE,
    ACTIONS(681), 1,
      sym__newline,
    STATE(33), 1,
      sym_attributes,
  [7754] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(683), 1,
      anon_sym_COMMA,
    ACTIONS(685), 1,
      anon_sym_RBRACE,
    STATE(278), 1,
      aux_sym_attributes_repeat1,
  [7767] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      anon_sym_COMMA,
    ACTIONS(689), 1,
      anon_sym_RBRACE,
    STATE(254), 1,
      aux_sym_attributes_repeat1,
  [7780] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(691), 3,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
  [7789] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      anon_sym_COMMA,
    ACTIONS(695), 1,
      anon_sym_RPAREN,
    STATE(259), 1,
      aux_sym_function_repeat1,
  [7802] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 3,
      sym__newline,
      anon_sym_cardinality,
      anon_sym_LBRACE,
  [7811] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(699), 1,
      anon_sym_COMMA,
    ACTIONS(701), 1,
      anon_sym_RPAREN,
    STATE(259), 1,
      aux_sym_function_repeat1,
  [7824] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(703), 1,
      anon_sym_COMMA,
    ACTIONS(705), 1,
      anon_sym_RBRACE,
    STATE(254), 1,
      aux_sym_attributes_repeat1,
  [7837] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(280), 2,
      anon_sym_DQUOTE,
      sym_name,
  [7845] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7853] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [7861] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    STATE(270), 1,
      sym_cardinality,
  [7871] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 2,
      anon_sym_STAR,
      sym_int,
  [7879] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(711), 1,
      anon_sym_STAR,
    ACTIONS(713), 1,
      sym_int,
  [7889] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(715), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [7897] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [7905] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [7913] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7921] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(719), 1,
      anon_sym_DOT_DOT,
    ACTIONS(721), 1,
      anon_sym_RBRACK,
  [7931] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7939] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7947] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [7955] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    STATE(271), 1,
      sym_cardinality,
  [7965] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [7973] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [7981] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7989] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(644), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [7997] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [8005] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [8013] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [8021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [8029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(731), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [8037] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(723), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [8045] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(727), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [8053] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(707), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [8061] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [8069] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(620), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [8077] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [8085] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [8093] = 2,
    ACTIONS(735), 1,
      sym_comment,
    ACTIONS(737), 1,
      sym_string_content,
  [8100] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(739), 1,
      ts_builtin_sym_end,
  [8107] = 2,
    ACTIONS(735), 1,
      sym_comment,
    ACTIONS(741), 1,
      aux_sym_string_name_token1,
  [8114] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(743), 1,
      anon_sym_LBRACK,
  [8121] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(745), 1,
      anon_sym_SQUOTE,
  [8128] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      anon_sym_DQUOTE,
  [8135] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      anon_sym_RBRACK,
  [8142] = 2,
    ACTIONS(735), 1,
      sym_comment,
    ACTIONS(751), 1,
      sym_string_content,
  [8149] = 2,
    ACTIONS(735), 1,
      sym_comment,
    ACTIONS(753), 1,
      aux_sym_string_name_token1,
  [8156] = 2,
    ACTIONS(735), 1,
      sym_comment,
    ACTIONS(755), 1,
      sym_string_content,
  [8163] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(757), 1,
      anon_sym_SQUOTE,
  [8170] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 1,
      anon_sym_DQUOTE,
  [8177] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(761), 1,
      anon_sym_SQUOTE,
  [8184] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      anon_sym_RBRACK,
  [8191] = 2,
    ACTIONS(735), 1,
      sym_comment,
    ACTIONS(763), 1,
      aux_sym_string_name_token1,
  [8198] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(765), 1,
      anon_sym_DQUOTE,
  [8205] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(767), 1,
      anon_sym_SQUOTE,
  [8212] = 2,
    ACTIONS(735), 1,
      sym_comment,
    ACTIONS(769), 1,
      sym_string_content,
  [8219] = 2,
    ACTIONS(735), 1,
      sym_comment,
    ACTIONS(771), 1,
      aux_sym_string_name_token1,
  [8226] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      anon_sym_DQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(21)] = 0,
  [SMALL_STATE(22)] = 41,
  [SMALL_STATE(23)] = 82,
  [SMALL_STATE(24)] = 123,
  [SMALL_STATE(25)] = 164,
  [SMALL_STATE(26)] = 207,
  [SMALL_STATE(27)] = 250,
  [SMALL_STATE(28)] = 291,
  [SMALL_STATE(29)] = 334,
  [SMALL_STATE(30)] = 375,
  [SMALL_STATE(31)] = 418,
  [SMALL_STATE(32)] = 459,
  [SMALL_STATE(33)] = 500,
  [SMALL_STATE(34)] = 543,
  [SMALL_STATE(35)] = 586,
  [SMALL_STATE(36)] = 629,
  [SMALL_STATE(37)] = 670,
  [SMALL_STATE(38)] = 713,
  [SMALL_STATE(39)] = 754,
  [SMALL_STATE(40)] = 794,
  [SMALL_STATE(41)] = 834,
  [SMALL_STATE(42)] = 874,
  [SMALL_STATE(43)] = 914,
  [SMALL_STATE(44)] = 954,
  [SMALL_STATE(45)] = 994,
  [SMALL_STATE(46)] = 1034,
  [SMALL_STATE(47)] = 1074,
  [SMALL_STATE(48)] = 1114,
  [SMALL_STATE(49)] = 1154,
  [SMALL_STATE(50)] = 1194,
  [SMALL_STATE(51)] = 1234,
  [SMALL_STATE(52)] = 1274,
  [SMALL_STATE(53)] = 1314,
  [SMALL_STATE(54)] = 1354,
  [SMALL_STATE(55)] = 1394,
  [SMALL_STATE(56)] = 1445,
  [SMALL_STATE(57)] = 1478,
  [SMALL_STATE(58)] = 1535,
  [SMALL_STATE(59)] = 1591,
  [SMALL_STATE(60)] = 1647,
  [SMALL_STATE(61)] = 1703,
  [SMALL_STATE(62)] = 1759,
  [SMALL_STATE(63)] = 1812,
  [SMALL_STATE(64)] = 1865,
  [SMALL_STATE(65)] = 1918,
  [SMALL_STATE(66)] = 1961,
  [SMALL_STATE(67)] = 1995,
  [SMALL_STATE(68)] = 2025,
  [SMALL_STATE(69)] = 2070,
  [SMALL_STATE(70)] = 2115,
  [SMALL_STATE(71)] = 2160,
  [SMALL_STATE(72)] = 2187,
  [SMALL_STATE(73)] = 2232,
  [SMALL_STATE(74)] = 2277,
  [SMALL_STATE(75)] = 2316,
  [SMALL_STATE(76)] = 2361,
  [SMALL_STATE(77)] = 2406,
  [SMALL_STATE(78)] = 2451,
  [SMALL_STATE(79)] = 2490,
  [SMALL_STATE(80)] = 2535,
  [SMALL_STATE(81)] = 2568,
  [SMALL_STATE(82)] = 2613,
  [SMALL_STATE(83)] = 2645,
  [SMALL_STATE(84)] = 2687,
  [SMALL_STATE(85)] = 2717,
  [SMALL_STATE(86)] = 2759,
  [SMALL_STATE(87)] = 2801,
  [SMALL_STATE(88)] = 2843,
  [SMALL_STATE(89)] = 2885,
  [SMALL_STATE(90)] = 2927,
  [SMALL_STATE(91)] = 2969,
  [SMALL_STATE(92)] = 3011,
  [SMALL_STATE(93)] = 3053,
  [SMALL_STATE(94)] = 3095,
  [SMALL_STATE(95)] = 3125,
  [SMALL_STATE(96)] = 3167,
  [SMALL_STATE(97)] = 3209,
  [SMALL_STATE(98)] = 3251,
  [SMALL_STATE(99)] = 3283,
  [SMALL_STATE(100)] = 3325,
  [SMALL_STATE(101)] = 3367,
  [SMALL_STATE(102)] = 3409,
  [SMALL_STATE(103)] = 3451,
  [SMALL_STATE(104)] = 3493,
  [SMALL_STATE(105)] = 3535,
  [SMALL_STATE(106)] = 3577,
  [SMALL_STATE(107)] = 3619,
  [SMALL_STATE(108)] = 3661,
  [SMALL_STATE(109)] = 3703,
  [SMALL_STATE(110)] = 3745,
  [SMALL_STATE(111)] = 3787,
  [SMALL_STATE(112)] = 3829,
  [SMALL_STATE(113)] = 3861,
  [SMALL_STATE(114)] = 3903,
  [SMALL_STATE(115)] = 3945,
  [SMALL_STATE(116)] = 3977,
  [SMALL_STATE(117)] = 4019,
  [SMALL_STATE(118)] = 4061,
  [SMALL_STATE(119)] = 4103,
  [SMALL_STATE(120)] = 4145,
  [SMALL_STATE(121)] = 4177,
  [SMALL_STATE(122)] = 4219,
  [SMALL_STATE(123)] = 4261,
  [SMALL_STATE(124)] = 4303,
  [SMALL_STATE(125)] = 4345,
  [SMALL_STATE(126)] = 4377,
  [SMALL_STATE(127)] = 4402,
  [SMALL_STATE(128)] = 4431,
  [SMALL_STATE(129)] = 4456,
  [SMALL_STATE(130)] = 4484,
  [SMALL_STATE(131)] = 4512,
  [SMALL_STATE(132)] = 4540,
  [SMALL_STATE(133)] = 4568,
  [SMALL_STATE(134)] = 4596,
  [SMALL_STATE(135)] = 4624,
  [SMALL_STATE(136)] = 4652,
  [SMALL_STATE(137)] = 4684,
  [SMALL_STATE(138)] = 4712,
  [SMALL_STATE(139)] = 4738,
  [SMALL_STATE(140)] = 4764,
  [SMALL_STATE(141)] = 4792,
  [SMALL_STATE(142)] = 4820,
  [SMALL_STATE(143)] = 4846,
  [SMALL_STATE(144)] = 4869,
  [SMALL_STATE(145)] = 4892,
  [SMALL_STATE(146)] = 4915,
  [SMALL_STATE(147)] = 4938,
  [SMALL_STATE(148)] = 4961,
  [SMALL_STATE(149)] = 4990,
  [SMALL_STATE(150)] = 5013,
  [SMALL_STATE(151)] = 5038,
  [SMALL_STATE(152)] = 5077,
  [SMALL_STATE(153)] = 5100,
  [SMALL_STATE(154)] = 5139,
  [SMALL_STATE(155)] = 5178,
  [SMALL_STATE(156)] = 5201,
  [SMALL_STATE(157)] = 5240,
  [SMALL_STATE(158)] = 5265,
  [SMALL_STATE(159)] = 5288,
  [SMALL_STATE(160)] = 5311,
  [SMALL_STATE(161)] = 5346,
  [SMALL_STATE(162)] = 5377,
  [SMALL_STATE(163)] = 5400,
  [SMALL_STATE(164)] = 5423,
  [SMALL_STATE(165)] = 5446,
  [SMALL_STATE(166)] = 5485,
  [SMALL_STATE(167)] = 5518,
  [SMALL_STATE(168)] = 5541,
  [SMALL_STATE(169)] = 5565,
  [SMALL_STATE(170)] = 5593,
  [SMALL_STATE(171)] = 5615,
  [SMALL_STATE(172)] = 5637,
  [SMALL_STATE(173)] = 5659,
  [SMALL_STATE(174)] = 5681,
  [SMALL_STATE(175)] = 5703,
  [SMALL_STATE(176)] = 5725,
  [SMALL_STATE(177)] = 5747,
  [SMALL_STATE(178)] = 5771,
  [SMALL_STATE(179)] = 5793,
  [SMALL_STATE(180)] = 5815,
  [SMALL_STATE(181)] = 5847,
  [SMALL_STATE(182)] = 5877,
  [SMALL_STATE(183)] = 5909,
  [SMALL_STATE(184)] = 5937,
  [SMALL_STATE(185)] = 5959,
  [SMALL_STATE(186)] = 5981,
  [SMALL_STATE(187)] = 6011,
  [SMALL_STATE(188)] = 6045,
  [SMALL_STATE(189)] = 6069,
  [SMALL_STATE(190)] = 6091,
  [SMALL_STATE(191)] = 6113,
  [SMALL_STATE(192)] = 6135,
  [SMALL_STATE(193)] = 6157,
  [SMALL_STATE(194)] = 6179,
  [SMALL_STATE(195)] = 6213,
  [SMALL_STATE(196)] = 6247,
  [SMALL_STATE(197)] = 6271,
  [SMALL_STATE(198)] = 6293,
  [SMALL_STATE(199)] = 6315,
  [SMALL_STATE(200)] = 6337,
  [SMALL_STATE(201)] = 6359,
  [SMALL_STATE(202)] = 6383,
  [SMALL_STATE(203)] = 6417,
  [SMALL_STATE(204)] = 6439,
  [SMALL_STATE(205)] = 6461,
  [SMALL_STATE(206)] = 6495,
  [SMALL_STATE(207)] = 6517,
  [SMALL_STATE(208)] = 6539,
  [SMALL_STATE(209)] = 6561,
  [SMALL_STATE(210)] = 6583,
  [SMALL_STATE(211)] = 6605,
  [SMALL_STATE(212)] = 6633,
  [SMALL_STATE(213)] = 6665,
  [SMALL_STATE(214)] = 6689,
  [SMALL_STATE(215)] = 6719,
  [SMALL_STATE(216)] = 6752,
  [SMALL_STATE(217)] = 6785,
  [SMALL_STATE(218)] = 6818,
  [SMALL_STATE(219)] = 6851,
  [SMALL_STATE(220)] = 6880,
  [SMALL_STATE(221)] = 6909,
  [SMALL_STATE(222)] = 6938,
  [SMALL_STATE(223)] = 6967,
  [SMALL_STATE(224)] = 6996,
  [SMALL_STATE(225)] = 7025,
  [SMALL_STATE(226)] = 7054,
  [SMALL_STATE(227)] = 7083,
  [SMALL_STATE(228)] = 7112,
  [SMALL_STATE(229)] = 7141,
  [SMALL_STATE(230)] = 7170,
  [SMALL_STATE(231)] = 7199,
  [SMALL_STATE(232)] = 7225,
  [SMALL_STATE(233)] = 7249,
  [SMALL_STATE(234)] = 7270,
  [SMALL_STATE(235)] = 7288,
  [SMALL_STATE(236)] = 7303,
  [SMALL_STATE(237)] = 7318,
  [SMALL_STATE(238)] = 7333,
  [SMALL_STATE(239)] = 7347,
  [SMALL_STATE(240)] = 7361,
  [SMALL_STATE(241)] = 7371,
  [SMALL_STATE(242)] = 7385,
  [SMALL_STATE(243)] = 7399,
  [SMALL_STATE(244)] = 7409,
  [SMALL_STATE(245)] = 7425,
  [SMALL_STATE(246)] = 7435,
  [SMALL_STATE(247)] = 7449,
  [SMALL_STATE(248)] = 7459,
  [SMALL_STATE(249)] = 7475,
  [SMALL_STATE(250)] = 7488,
  [SMALL_STATE(251)] = 7501,
  [SMALL_STATE(252)] = 7510,
  [SMALL_STATE(253)] = 7519,
  [SMALL_STATE(254)] = 7532,
  [SMALL_STATE(255)] = 7545,
  [SMALL_STATE(256)] = 7558,
  [SMALL_STATE(257)] = 7571,
  [SMALL_STATE(258)] = 7580,
  [SMALL_STATE(259)] = 7593,
  [SMALL_STATE(260)] = 7606,
  [SMALL_STATE(261)] = 7619,
  [SMALL_STATE(262)] = 7632,
  [SMALL_STATE(263)] = 7645,
  [SMALL_STATE(264)] = 7658,
  [SMALL_STATE(265)] = 7667,
  [SMALL_STATE(266)] = 7680,
  [SMALL_STATE(267)] = 7693,
  [SMALL_STATE(268)] = 7702,
  [SMALL_STATE(269)] = 7715,
  [SMALL_STATE(270)] = 7728,
  [SMALL_STATE(271)] = 7741,
  [SMALL_STATE(272)] = 7754,
  [SMALL_STATE(273)] = 7767,
  [SMALL_STATE(274)] = 7780,
  [SMALL_STATE(275)] = 7789,
  [SMALL_STATE(276)] = 7802,
  [SMALL_STATE(277)] = 7811,
  [SMALL_STATE(278)] = 7824,
  [SMALL_STATE(279)] = 7837,
  [SMALL_STATE(280)] = 7845,
  [SMALL_STATE(281)] = 7853,
  [SMALL_STATE(282)] = 7861,
  [SMALL_STATE(283)] = 7871,
  [SMALL_STATE(284)] = 7879,
  [SMALL_STATE(285)] = 7889,
  [SMALL_STATE(286)] = 7897,
  [SMALL_STATE(287)] = 7905,
  [SMALL_STATE(288)] = 7913,
  [SMALL_STATE(289)] = 7921,
  [SMALL_STATE(290)] = 7931,
  [SMALL_STATE(291)] = 7939,
  [SMALL_STATE(292)] = 7947,
  [SMALL_STATE(293)] = 7955,
  [SMALL_STATE(294)] = 7965,
  [SMALL_STATE(295)] = 7973,
  [SMALL_STATE(296)] = 7981,
  [SMALL_STATE(297)] = 7989,
  [SMALL_STATE(298)] = 7997,
  [SMALL_STATE(299)] = 8005,
  [SMALL_STATE(300)] = 8013,
  [SMALL_STATE(301)] = 8021,
  [SMALL_STATE(302)] = 8029,
  [SMALL_STATE(303)] = 8037,
  [SMALL_STATE(304)] = 8045,
  [SMALL_STATE(305)] = 8053,
  [SMALL_STATE(306)] = 8061,
  [SMALL_STATE(307)] = 8069,
  [SMALL_STATE(308)] = 8077,
  [SMALL_STATE(309)] = 8085,
  [SMALL_STATE(310)] = 8093,
  [SMALL_STATE(311)] = 8100,
  [SMALL_STATE(312)] = 8107,
  [SMALL_STATE(313)] = 8114,
  [SMALL_STATE(314)] = 8121,
  [SMALL_STATE(315)] = 8128,
  [SMALL_STATE(316)] = 8135,
  [SMALL_STATE(317)] = 8142,
  [SMALL_STATE(318)] = 8149,
  [SMALL_STATE(319)] = 8156,
  [SMALL_STATE(320)] = 8163,
  [SMALL_STATE(321)] = 8170,
  [SMALL_STATE(322)] = 8177,
  [SMALL_STATE(323)] = 8184,
  [SMALL_STATE(324)] = 8191,
  [SMALL_STATE(325)] = 8198,
  [SMALL_STATE(326)] = 8205,
  [SMALL_STATE(327)] = 8212,
  [SMALL_STATE(328)] = 8219,
  [SMALL_STATE(329)] = 8226,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(279),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(248),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(232),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(284),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(240),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(251),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(90),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(97),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(159),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(152),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(252),
  [81] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(234),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(247),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(279),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(319),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(312),
  [96] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(248),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(244),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 3),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 4),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 4),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blk, 2, .production_id = 6),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blk, 2, .production_id = 6),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blk, 2, .production_id = 5),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blk, 2, .production_id = 5),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blk, 4, .production_id = 16),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blk, 4, .production_id = 16),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 4, .production_id = 13),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 4, .production_id = 13),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blk, 4, .production_id = 17),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blk, 4, .production_id = 17),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attributes, 5, .production_id = 33),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_attributes, 5, .production_id = 33),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blk, 5, .production_id = 27),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blk, 5, .production_id = 27),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blk, 7, .production_id = 34),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blk, 7, .production_id = 34),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blk, 4, .production_id = 15),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blk, 4, .production_id = 15),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blk, 7, .production_id = 35),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blk, 7, .production_id = 35),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blk, 4, .production_id = 21),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blk, 4, .production_id = 21),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blk, 6, .production_id = 31),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blk, 6, .production_id = 31),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blk, 5, .production_id = 28),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blk, 5, .production_id = 28),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_blk, 6, .production_id = 30),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_blk, 6, .production_id = 30),
  [212] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [214] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2, .production_id = 7),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2, .production_id = 7),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string_name, 3),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string_name, 3),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(138),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 1, .production_id = 10),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_type, 1),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__header, 1),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header, 1),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 1),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 1),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_type, 1),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [284] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 3, .production_id = 13),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 3, .production_id = 13),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__any_name, 1),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__any_name, 1),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [318] = {.entry = {.count = 1, .reusable = false}}, SHIFT(243),
  [320] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lang_lvl, 3, .production_id = 13),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lang_lvl, 3, .production_id = 13),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lang_lvl, 2, .production_id = 7),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lang_lvl, 2, .production_id = 7),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_path_repeat1, 2),
  [344] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(239),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_path, 2),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_path, 2),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [359] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(238),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref, 1, .production_id = 2),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__expr, 1),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__expr, 1),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [376] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(242),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [389] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_path_repeat1, 2), SHIFT_REPEAT(246),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 6, .production_id = 29),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 6, .production_id = 29),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 5, .production_id = 23),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 5, .production_id = 23),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_string, 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_binary_expr, 3, .production_id = 11),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_binary_expr, 3, .production_id = 11),
  [412] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unary_expr, 2, .production_id = 4),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unary_expr, 2, .production_id = 4),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [430] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [432] = {.entry = {.count = 1, .reusable = false}}, SHIFT(108),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [442] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [446] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [448] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [450] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [452] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [458] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [460] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 5, .production_id = 25),
  [462] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 5, .production_id = 25),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [468] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bool, 1),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bool, 1),
  [472] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__header, 1, .production_id = 1),
  [474] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [476] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nested_expr, 3),
  [484] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nested_expr, 3),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_function, 4, .production_id = 14),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_function, 4, .production_id = 14),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [494] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, .production_id = 20),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_constraint, 2, .production_id = 18),
  [498] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [506] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [508] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2, .production_id = 24),
  [514] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_constraints_repeat1, 2, .production_id = 18),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [520] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [522] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [524] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [526] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [528] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [530] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [532] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [534] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [536] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [538] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [540] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [542] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [544] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [546] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [548] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [550] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [552] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [554] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [556] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_incomplete_namespace, 1),
  [558] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_incomplete_namespace, 1),
  [560] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [562] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_incomplete_ref, 2),
  [564] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_incomplete_ref, 2),
  [566] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_major_lvl, 1),
  [568] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_major_lvl, 1),
  [570] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lang_lvl_repeat1, 2),
  [572] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lang_lvl_repeat1, 2), SHIFT_REPEAT(136),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lang_lvl, 1),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [579] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lang_lvl, 2),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_minor_lvl, 1),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [591] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constraints, 1),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_group_mode, 1),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [617] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2), SHIFT_REPEAT(231),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attributes_repeat1, 2),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [624] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [628] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_ref, 3, .production_id = 12),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [636] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2, .production_id = 26), SHIFT_REPEAT(117),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_function_repeat1, 2, .production_id = 26),
  [641] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_vector_repeat1, 2), SHIFT_REPEAT(64),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_vector_repeat1, 2),
  [646] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_attribute_constraints_repeat1, 2), SHIFT_REPEAT(114),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_attribute_constraints_repeat1, 2),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality, 5, .production_id = 22),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace, 2, .production_id = 3),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [673] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [675] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [677] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [687] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [689] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [691] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cardinality, 3, .production_id = 9),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [695] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [697] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typed_feature, 2, .production_id = 8),
  [699] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [701] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 4, .production_id = 13),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_constraints, 4, .production_id = 32),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 2, .production_id = 19),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [721] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 3),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_constraints, 5, .production_id = 32),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 4),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_vector, 5, .production_id = 33),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_constraints, 5, .production_id = 36),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_constraints, 6, .production_id = 37),
  [735] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [739] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(329),
  [743] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [751] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [753] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [757] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [761] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [763] = {.entry = {.count = 1, .reusable = false}}, SHIFT(321),
  [765] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [769] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [771] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_uvl_external_scanner_create(void);
void tree_sitter_uvl_external_scanner_destroy(void *);
bool tree_sitter_uvl_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_uvl_external_scanner_serialize(void *, char *);
void tree_sitter_uvl_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_uvl(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .keyword_lex_fn = ts_lex_keywords,
    .keyword_capture_token = sym_name,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_uvl_external_scanner_create,
      tree_sitter_uvl_external_scanner_destroy,
      tree_sitter_uvl_external_scanner_scan,
      tree_sitter_uvl_external_scanner_serialize,
      tree_sitter_uvl_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
