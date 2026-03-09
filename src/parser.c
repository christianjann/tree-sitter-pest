#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 86
#define LARGE_STATE_COUNT 8
#define SYMBOL_COUNT 67
#define ALIAS_COUNT 0
#define TOKEN_COUNT 43
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_EQ = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  anon_sym_PUSH = 4,
  anon_sym_LPAREN = 5,
  anon_sym_RPAREN = 6,
  anon_sym_PEEK = 7,
  anon_sym_LBRACK = 8,
  aux_sym__peek_slice_token1 = 9,
  anon_sym_DOT_DOT = 10,
  anon_sym_RBRACK = 11,
  anon_sym_POP = 12,
  anon_sym_ANY = 13,
  anon_sym_DROP = 14,
  anon_sym_EOI = 15,
  anon_sym_NEWLINE = 16,
  anon_sym_PEEK_ALL = 17,
  anon_sym_POP_ALL = 18,
  anon_sym_SOI = 19,
  sym_const = 20,
  sym_identifier = 21,
  anon_sym__ = 22,
  anon_sym_AT = 23,
  anon_sym_DOLLAR = 24,
  anon_sym_BANG = 25,
  anon_sym_PIPE = 26,
  sym_character = 27,
  anon_sym_DQUOTE = 28,
  sym__unescaped_double_string_fragment = 29,
  sym__escape_sequence = 30,
  anon_sym_CARET = 31,
  anon_sym_POUND = 32,
  anon_sym_TILDE = 33,
  anon_sym_AMP = 34,
  anon_sym_QMARK = 35,
  anon_sym_STAR = 36,
  anon_sym_PLUS = 37,
  anon_sym_COMMA = 38,
  sym_line_comment = 39,
  anon_sym_SLASH_STAR = 40,
  aux_sym_block_comment_token1 = 41,
  anon_sym_SLASH = 42,
  sym_pest = 43,
  sym_grammar_rule = 44,
  sym__push = 45,
  sym__peek_slice = 46,
  sym__pop = 47,
  sym_builtin = 48,
  sym_modifier = 49,
  sym_expression = 50,
  sym_term = 51,
  sym__node = 52,
  sym__terminal = 53,
  sym_range = 54,
  sym_string = 55,
  sym__insensitive_string = 56,
  sym_node_tag = 57,
  sym_infix_operator = 58,
  sym_prefix_operator = 59,
  sym_postfix_operator = 60,
  sym_block_comment = 61,
  aux_sym_pest_repeat1 = 62,
  aux_sym_expression_repeat1 = 63,
  aux_sym_term_repeat1 = 64,
  aux_sym_term_repeat2 = 65,
  aux_sym_string_repeat1 = 66,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_PUSH] = "PUSH",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_PEEK] = "PEEK",
  [anon_sym_LBRACK] = "[",
  [aux_sym__peek_slice_token1] = "_peek_slice_token1",
  [anon_sym_DOT_DOT] = "..",
  [anon_sym_RBRACK] = "]",
  [anon_sym_POP] = "POP",
  [anon_sym_ANY] = "ANY",
  [anon_sym_DROP] = "DROP",
  [anon_sym_EOI] = "EOI",
  [anon_sym_NEWLINE] = "NEWLINE",
  [anon_sym_PEEK_ALL] = "PEEK_ALL",
  [anon_sym_POP_ALL] = "POP_ALL",
  [anon_sym_SOI] = "SOI",
  [sym_const] = "const",
  [sym_identifier] = "identifier",
  [anon_sym__] = "_",
  [anon_sym_AT] = "@",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_BANG] = "!",
  [anon_sym_PIPE] = "|",
  [sym_character] = "character",
  [anon_sym_DQUOTE] = "\"",
  [sym__unescaped_double_string_fragment] = "_unescaped_double_string_fragment",
  [sym__escape_sequence] = "_escape_sequence",
  [anon_sym_CARET] = "^",
  [anon_sym_POUND] = "#",
  [anon_sym_TILDE] = "~",
  [anon_sym_AMP] = "&",
  [anon_sym_QMARK] = "\?",
  [anon_sym_STAR] = "*",
  [anon_sym_PLUS] = "+",
  [anon_sym_COMMA] = ",",
  [sym_line_comment] = "line_comment",
  [anon_sym_SLASH_STAR] = "/*",
  [aux_sym_block_comment_token1] = "block_comment_token1",
  [anon_sym_SLASH] = "/",
  [sym_pest] = "pest",
  [sym_grammar_rule] = "grammar_rule",
  [sym__push] = "_push",
  [sym__peek_slice] = "_peek_slice",
  [sym__pop] = "_pop",
  [sym_builtin] = "builtin",
  [sym_modifier] = "modifier",
  [sym_expression] = "expression",
  [sym_term] = "term",
  [sym__node] = "_node",
  [sym__terminal] = "_terminal",
  [sym_range] = "range",
  [sym_string] = "string",
  [sym__insensitive_string] = "_insensitive_string",
  [sym_node_tag] = "node_tag",
  [sym_infix_operator] = "infix_operator",
  [sym_prefix_operator] = "prefix_operator",
  [sym_postfix_operator] = "postfix_operator",
  [sym_block_comment] = "block_comment",
  [aux_sym_pest_repeat1] = "pest_repeat1",
  [aux_sym_expression_repeat1] = "expression_repeat1",
  [aux_sym_term_repeat1] = "term_repeat1",
  [aux_sym_term_repeat2] = "term_repeat2",
  [aux_sym_string_repeat1] = "string_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_PUSH] = anon_sym_PUSH,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_PEEK] = anon_sym_PEEK,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [aux_sym__peek_slice_token1] = aux_sym__peek_slice_token1,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_POP] = anon_sym_POP,
  [anon_sym_ANY] = anon_sym_ANY,
  [anon_sym_DROP] = anon_sym_DROP,
  [anon_sym_EOI] = anon_sym_EOI,
  [anon_sym_NEWLINE] = anon_sym_NEWLINE,
  [anon_sym_PEEK_ALL] = anon_sym_PEEK_ALL,
  [anon_sym_POP_ALL] = anon_sym_POP_ALL,
  [anon_sym_SOI] = anon_sym_SOI,
  [sym_const] = sym_const,
  [sym_identifier] = sym_identifier,
  [anon_sym__] = anon_sym__,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym_character] = sym_character,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym__unescaped_double_string_fragment] = sym__unescaped_double_string_fragment,
  [sym__escape_sequence] = sym__escape_sequence,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_QMARK] = anon_sym_QMARK,
  [anon_sym_STAR] = anon_sym_STAR,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_line_comment] = sym_line_comment,
  [anon_sym_SLASH_STAR] = anon_sym_SLASH_STAR,
  [aux_sym_block_comment_token1] = aux_sym_block_comment_token1,
  [anon_sym_SLASH] = anon_sym_SLASH,
  [sym_pest] = sym_pest,
  [sym_grammar_rule] = sym_grammar_rule,
  [sym__push] = sym__push,
  [sym__peek_slice] = sym__peek_slice,
  [sym__pop] = sym__pop,
  [sym_builtin] = sym_builtin,
  [sym_modifier] = sym_modifier,
  [sym_expression] = sym_expression,
  [sym_term] = sym_term,
  [sym__node] = sym__node,
  [sym__terminal] = sym__terminal,
  [sym_range] = sym_range,
  [sym_string] = sym_string,
  [sym__insensitive_string] = sym__insensitive_string,
  [sym_node_tag] = sym_node_tag,
  [sym_infix_operator] = sym_infix_operator,
  [sym_prefix_operator] = sym_prefix_operator,
  [sym_postfix_operator] = sym_postfix_operator,
  [sym_block_comment] = sym_block_comment,
  [aux_sym_pest_repeat1] = aux_sym_pest_repeat1,
  [aux_sym_expression_repeat1] = aux_sym_expression_repeat1,
  [aux_sym_term_repeat1] = aux_sym_term_repeat1,
  [aux_sym_term_repeat2] = aux_sym_term_repeat2,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PUSH] = {
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
  [anon_sym_PEEK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__peek_slice_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ANY] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DROP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EOI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NEWLINE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PEEK_ALL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POP_ALL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SOI] = {
    .visible = true,
    .named = false,
  },
  [sym_const] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
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
  [sym_character] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym__unescaped_double_string_fragment] = {
    .visible = false,
    .named = true,
  },
  [sym__escape_sequence] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_QMARK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SLASH_STAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_block_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SLASH] = {
    .visible = true,
    .named = false,
  },
  [sym_pest] = {
    .visible = true,
    .named = true,
  },
  [sym_grammar_rule] = {
    .visible = true,
    .named = true,
  },
  [sym__push] = {
    .visible = false,
    .named = true,
  },
  [sym__peek_slice] = {
    .visible = false,
    .named = true,
  },
  [sym__pop] = {
    .visible = false,
    .named = true,
  },
  [sym_builtin] = {
    .visible = true,
    .named = true,
  },
  [sym_modifier] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_term] = {
    .visible = true,
    .named = true,
  },
  [sym__node] = {
    .visible = false,
    .named = true,
  },
  [sym__terminal] = {
    .visible = false,
    .named = true,
  },
  [sym_range] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym__insensitive_string] = {
    .visible = false,
    .named = true,
  },
  [sym_node_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_infix_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_prefix_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_postfix_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_pest_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_term_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_term_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_name = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(29);
      if (lookahead == '!') ADVANCE(82);
      if (lookahead == '"') ADVANCE(85);
      if (lookahead == '#') ADVANCE(92);
      if (lookahead == '$') ADVANCE(81);
      if (lookahead == '&') ADVANCE(94);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == '*') ADVANCE(96);
      if (lookahead == '+') ADVANCE(97);
      if (lookahead == ',') ADVANCE(98);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '/') ADVANCE(107);
      if (lookahead == '=') ADVANCE(30);
      if (lookahead == '?') ADVANCE(95);
      if (lookahead == '@') ADVANCE(80);
      if (lookahead == 'A') ADVANCE(65);
      if (lookahead == 'D') ADVANCE(72);
      if (lookahead == 'E') ADVANCE(67);
      if (lookahead == 'N') ADVANCE(51);
      if (lookahead == 'P') ADVANCE(54);
      if (lookahead == 'S') ADVANCE(68);
      if (lookahead == '[') ADVANCE(37);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == ']') ADVANCE(40);
      if (lookahead == '^') ADVANCE(91);
      if (lookahead == '_') ADVANCE(79);
      if (lookahead == '{') ADVANCE(31);
      if (lookahead == '|') ADVANCE(83);
      if (lookahead == '}') ADVANCE(32);
      if (lookahead == '~') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(76);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(82);
      if (lookahead == '"') ADVANCE(85);
      if (lookahead == '#') ADVANCE(92);
      if (lookahead == '&') ADVANCE(94);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == 'A') ADVANCE(65);
      if (lookahead == 'D') ADVANCE(72);
      if (lookahead == 'E') ADVANCE(67);
      if (lookahead == 'N') ADVANCE(51);
      if (lookahead == 'P') ADVANCE(54);
      if (lookahead == 'S') ADVANCE(68);
      if (lookahead == '^') ADVANCE(91);
      if (lookahead == '|') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(76);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(82);
      if (lookahead == '$') ADVANCE(81);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '@') ADVANCE(80);
      if (lookahead == '_') ADVANCE(78);
      if (lookahead == '{') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(85);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(85);
      if (lookahead == '/') ADVANCE(86);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (lookahead != 0) ADVANCE(89);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(84);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(84);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(104);
      if (lookahead == '/') ADVANCE(102);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(106);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(106);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(105);
      if (lookahead == '/') ADVANCE(101);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(39);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 13:
      if (lookahead == 'u') ADVANCE(15);
      if (lookahead == 'x') ADVANCE(24);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 14:
      if (lookahead == 'u') ADVANCE(16);
      if (lookahead == 'x') ADVANCE(25);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 15:
      if (lookahead == '{') ADVANCE(22);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      END_STATE();
    case 16:
      if (lookahead == '{') ADVANCE(23);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == '}') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 18:
      if (lookahead == '}') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 19:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(5);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(24);
      END_STATE();
    case 21:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      END_STATE();
    case 22:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(18);
      END_STATE();
    case 23:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      END_STATE();
    case 24:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(25);
      END_STATE();
    case 27:
      if (eof) ADVANCE(29);
      if (lookahead == '!') ADVANCE(82);
      if (lookahead == '"') ADVANCE(85);
      if (lookahead == '#') ADVANCE(92);
      if (lookahead == '$') ADVANCE(81);
      if (lookahead == '&') ADVANCE(94);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '(') ADVANCE(34);
      if (lookahead == ')') ADVANCE(35);
      if (lookahead == '*') ADVANCE(96);
      if (lookahead == '+') ADVANCE(97);
      if (lookahead == ',') ADVANCE(98);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '/') ADVANCE(107);
      if (lookahead == '=') ADVANCE(30);
      if (lookahead == '?') ADVANCE(95);
      if (lookahead == '@') ADVANCE(80);
      if (lookahead == 'A') ADVANCE(65);
      if (lookahead == 'D') ADVANCE(72);
      if (lookahead == 'E') ADVANCE(67);
      if (lookahead == 'N') ADVANCE(51);
      if (lookahead == 'P') ADVANCE(54);
      if (lookahead == 'S') ADVANCE(68);
      if (lookahead == '[') ADVANCE(37);
      if (lookahead == ']') ADVANCE(40);
      if (lookahead == '^') ADVANCE(91);
      if (lookahead == '_') ADVANCE(79);
      if (lookahead == '{') ADVANCE(31);
      if (lookahead == '|') ADVANCE(83);
      if (lookahead == '}') ADVANCE(32);
      if (lookahead == '~') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(76);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 28:
      if (eof) ADVANCE(29);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(76);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_PUSH);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(76);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_PEEK);
      if (lookahead == '_') ADVANCE(50);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(76);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym__peek_slice_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_POP);
      if (lookahead == '_') ADVANCE(49);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z')) ADVANCE(76);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_ANY);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(76);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DROP);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(76);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_EOI);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(76);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_NEWLINE);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(76);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_PEEK_ALL);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(76);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_POP_ALL);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(76);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_SOI);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(76);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_const);
      if (lookahead == 'A') ADVANCE(63);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(76);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_const);
      if (lookahead == 'A') ADVANCE(64);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(76);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_const);
      if (lookahead == 'E') ADVANCE(74);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(76);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_const);
      if (lookahead == 'E') ADVANCE(59);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(76);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_const);
      if (lookahead == 'E') ADVANCE(45);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(76);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_const);
      if (lookahead == 'E') ADVANCE(52);
      if (lookahead == 'O') ADVANCE(70);
      if (lookahead == 'U') ADVANCE(73);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(76);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_const);
      if (lookahead == 'H') ADVANCE(33);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(76);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_const);
      if (lookahead == 'I') ADVANCE(44);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(76);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_const);
      if (lookahead == 'I') ADVANCE(48);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(76);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_const);
      if (lookahead == 'I') ADVANCE(66);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(76);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_const);
      if (lookahead == 'K') ADVANCE(36);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(76);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_const);
      if (lookahead == 'L') ADVANCE(47);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(76);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_const);
      if (lookahead == 'L') ADVANCE(46);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(76);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_const);
      if (lookahead == 'L') ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(76);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_const);
      if (lookahead == 'L') ADVANCE(60);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(76);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_const);
      if (lookahead == 'L') ADVANCE(61);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(76);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_const);
      if (lookahead == 'N') ADVANCE(75);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(76);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_const);
      if (lookahead == 'N') ADVANCE(53);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(76);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_const);
      if (lookahead == 'O') ADVANCE(56);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(76);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_const);
      if (lookahead == 'O') ADVANCE(57);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(76);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_const);
      if (lookahead == 'O') ADVANCE(71);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(76);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_const);
      if (lookahead == 'P') ADVANCE(41);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(76);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_const);
      if (lookahead == 'P') ADVANCE(43);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(76);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_const);
      if (lookahead == 'R') ADVANCE(69);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(76);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_const);
      if (lookahead == 'S') ADVANCE(55);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(76);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_const);
      if (lookahead == 'W') ADVANCE(62);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(76);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_const);
      if (lookahead == 'Y') ADVANCE(42);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_const);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym__);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(76);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_character);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '/') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(89);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '/') ADVANCE(86);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(89);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '!' ||
          lookahead == '/') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(89);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(89);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '*') ADVANCE(99);
      if (lookahead == '/') ADVANCE(103);
      if (lookahead != 0) ADVANCE(100);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '*') ADVANCE(99);
      if (lookahead != 0) ADVANCE(100);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '!' ||
          lookahead == '/') ADVANCE(100);
      if (lookahead == '*') ADVANCE(99);
      if (lookahead != 0) ADVANCE(100);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '!' ||
          lookahead == '/') ADVANCE(103);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(9);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '*') ADVANCE(106);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(9);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(104);
      if (lookahead == '/') ADVANCE(102);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 28},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 2},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 28},
  [48] = {.lex_state = 28},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 4},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 28},
  [54] = {.lex_state = 28},
  [55] = {.lex_state = 4},
  [56] = {.lex_state = 28},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 8},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 12},
  [85] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_block_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_PUSH] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_PEEK] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [aux_sym__peek_slice_token1] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_POP] = ACTIONS(1),
    [anon_sym_ANY] = ACTIONS(1),
    [anon_sym_DROP] = ACTIONS(1),
    [anon_sym_EOI] = ACTIONS(1),
    [anon_sym_NEWLINE] = ACTIONS(1),
    [anon_sym_PEEK_ALL] = ACTIONS(1),
    [anon_sym_POP_ALL] = ACTIONS(1),
    [anon_sym_SOI] = ACTIONS(1),
    [sym_const] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym_character] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym__escape_sequence] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_QMARK] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
    [anon_sym_SLASH] = ACTIONS(1),
  },
  [1] = {
    [sym_pest] = STATE(64),
    [sym_grammar_rule] = STATE(53),
    [sym_block_comment] = STATE(1),
    [aux_sym_pest_repeat1] = STATE(47),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_const] = ACTIONS(9),
    [sym_identifier] = ACTIONS(9),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [2] = {
    [sym__push] = STATE(27),
    [sym__peek_slice] = STATE(27),
    [sym__pop] = STATE(27),
    [sym_builtin] = STATE(27),
    [sym_expression] = STATE(73),
    [sym_term] = STATE(46),
    [sym__node] = STATE(22),
    [sym__terminal] = STATE(34),
    [sym_range] = STATE(27),
    [sym_string] = STATE(27),
    [sym__insensitive_string] = STATE(27),
    [sym_node_tag] = STATE(9),
    [sym_prefix_operator] = STATE(14),
    [sym_block_comment] = STATE(2),
    [aux_sym_term_repeat1] = STATE(10),
    [anon_sym_PUSH] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_PEEK] = ACTIONS(15),
    [anon_sym_POP] = ACTIONS(17),
    [anon_sym_ANY] = ACTIONS(19),
    [anon_sym_DROP] = ACTIONS(19),
    [anon_sym_EOI] = ACTIONS(19),
    [anon_sym_NEWLINE] = ACTIONS(19),
    [anon_sym_PEEK_ALL] = ACTIONS(19),
    [anon_sym_POP_ALL] = ACTIONS(19),
    [anon_sym_SOI] = ACTIONS(19),
    [sym_const] = ACTIONS(21),
    [sym_identifier] = ACTIONS(21),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_PIPE] = ACTIONS(25),
    [sym_character] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_CARET] = ACTIONS(31),
    [anon_sym_POUND] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(23),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [3] = {
    [sym__push] = STATE(27),
    [sym__peek_slice] = STATE(27),
    [sym__pop] = STATE(27),
    [sym_builtin] = STATE(27),
    [sym_expression] = STATE(71),
    [sym_term] = STATE(46),
    [sym__node] = STATE(22),
    [sym__terminal] = STATE(34),
    [sym_range] = STATE(27),
    [sym_string] = STATE(27),
    [sym__insensitive_string] = STATE(27),
    [sym_node_tag] = STATE(9),
    [sym_prefix_operator] = STATE(14),
    [sym_block_comment] = STATE(3),
    [aux_sym_term_repeat1] = STATE(10),
    [anon_sym_PUSH] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_PEEK] = ACTIONS(15),
    [anon_sym_POP] = ACTIONS(17),
    [anon_sym_ANY] = ACTIONS(19),
    [anon_sym_DROP] = ACTIONS(19),
    [anon_sym_EOI] = ACTIONS(19),
    [anon_sym_NEWLINE] = ACTIONS(19),
    [anon_sym_PEEK_ALL] = ACTIONS(19),
    [anon_sym_POP_ALL] = ACTIONS(19),
    [anon_sym_SOI] = ACTIONS(19),
    [sym_const] = ACTIONS(21),
    [sym_identifier] = ACTIONS(21),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_PIPE] = ACTIONS(25),
    [sym_character] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_CARET] = ACTIONS(31),
    [anon_sym_POUND] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(23),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [4] = {
    [sym__push] = STATE(27),
    [sym__peek_slice] = STATE(27),
    [sym__pop] = STATE(27),
    [sym_builtin] = STATE(27),
    [sym_expression] = STATE(81),
    [sym_term] = STATE(46),
    [sym__node] = STATE(22),
    [sym__terminal] = STATE(34),
    [sym_range] = STATE(27),
    [sym_string] = STATE(27),
    [sym__insensitive_string] = STATE(27),
    [sym_node_tag] = STATE(9),
    [sym_prefix_operator] = STATE(14),
    [sym_block_comment] = STATE(4),
    [aux_sym_term_repeat1] = STATE(10),
    [anon_sym_PUSH] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_PEEK] = ACTIONS(15),
    [anon_sym_POP] = ACTIONS(17),
    [anon_sym_ANY] = ACTIONS(19),
    [anon_sym_DROP] = ACTIONS(19),
    [anon_sym_EOI] = ACTIONS(19),
    [anon_sym_NEWLINE] = ACTIONS(19),
    [anon_sym_PEEK_ALL] = ACTIONS(19),
    [anon_sym_POP_ALL] = ACTIONS(19),
    [anon_sym_SOI] = ACTIONS(19),
    [sym_const] = ACTIONS(21),
    [sym_identifier] = ACTIONS(21),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_PIPE] = ACTIONS(25),
    [sym_character] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_CARET] = ACTIONS(31),
    [anon_sym_POUND] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(23),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [5] = {
    [sym__push] = STATE(27),
    [sym__peek_slice] = STATE(27),
    [sym__pop] = STATE(27),
    [sym_builtin] = STATE(27),
    [sym_expression] = STATE(82),
    [sym_term] = STATE(46),
    [sym__node] = STATE(22),
    [sym__terminal] = STATE(34),
    [sym_range] = STATE(27),
    [sym_string] = STATE(27),
    [sym__insensitive_string] = STATE(27),
    [sym_node_tag] = STATE(9),
    [sym_prefix_operator] = STATE(14),
    [sym_block_comment] = STATE(5),
    [aux_sym_term_repeat1] = STATE(10),
    [anon_sym_PUSH] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_PEEK] = ACTIONS(15),
    [anon_sym_POP] = ACTIONS(17),
    [anon_sym_ANY] = ACTIONS(19),
    [anon_sym_DROP] = ACTIONS(19),
    [anon_sym_EOI] = ACTIONS(19),
    [anon_sym_NEWLINE] = ACTIONS(19),
    [anon_sym_PEEK_ALL] = ACTIONS(19),
    [anon_sym_POP_ALL] = ACTIONS(19),
    [anon_sym_SOI] = ACTIONS(19),
    [sym_const] = ACTIONS(21),
    [sym_identifier] = ACTIONS(21),
    [anon_sym_BANG] = ACTIONS(23),
    [anon_sym_PIPE] = ACTIONS(25),
    [sym_character] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_CARET] = ACTIONS(31),
    [anon_sym_POUND] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(23),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [6] = {
    [sym__push] = STATE(27),
    [sym__peek_slice] = STATE(27),
    [sym__pop] = STATE(27),
    [sym_builtin] = STATE(27),
    [sym_term] = STATE(50),
    [sym__node] = STATE(22),
    [sym__terminal] = STATE(34),
    [sym_range] = STATE(27),
    [sym_string] = STATE(27),
    [sym__insensitive_string] = STATE(27),
    [sym_node_tag] = STATE(9),
    [sym_prefix_operator] = STATE(14),
    [sym_block_comment] = STATE(6),
    [aux_sym_term_repeat1] = STATE(10),
    [anon_sym_PUSH] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_PEEK] = ACTIONS(15),
    [anon_sym_POP] = ACTIONS(17),
    [anon_sym_ANY] = ACTIONS(19),
    [anon_sym_DROP] = ACTIONS(19),
    [anon_sym_EOI] = ACTIONS(19),
    [anon_sym_NEWLINE] = ACTIONS(19),
    [anon_sym_PEEK_ALL] = ACTIONS(19),
    [anon_sym_POP_ALL] = ACTIONS(19),
    [anon_sym_SOI] = ACTIONS(19),
    [sym_const] = ACTIONS(21),
    [sym_identifier] = ACTIONS(21),
    [anon_sym_BANG] = ACTIONS(23),
    [sym_character] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_CARET] = ACTIONS(31),
    [anon_sym_POUND] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(23),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
  [7] = {
    [sym__push] = STATE(27),
    [sym__peek_slice] = STATE(27),
    [sym__pop] = STATE(27),
    [sym_builtin] = STATE(27),
    [sym_term] = STATE(45),
    [sym__node] = STATE(22),
    [sym__terminal] = STATE(34),
    [sym_range] = STATE(27),
    [sym_string] = STATE(27),
    [sym__insensitive_string] = STATE(27),
    [sym_node_tag] = STATE(9),
    [sym_prefix_operator] = STATE(14),
    [sym_block_comment] = STATE(7),
    [aux_sym_term_repeat1] = STATE(10),
    [anon_sym_PUSH] = ACTIONS(11),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_PEEK] = ACTIONS(15),
    [anon_sym_POP] = ACTIONS(17),
    [anon_sym_ANY] = ACTIONS(19),
    [anon_sym_DROP] = ACTIONS(19),
    [anon_sym_EOI] = ACTIONS(19),
    [anon_sym_NEWLINE] = ACTIONS(19),
    [anon_sym_PEEK_ALL] = ACTIONS(19),
    [anon_sym_POP_ALL] = ACTIONS(19),
    [anon_sym_SOI] = ACTIONS(19),
    [sym_const] = ACTIONS(21),
    [sym_identifier] = ACTIONS(21),
    [anon_sym_BANG] = ACTIONS(23),
    [sym_character] = ACTIONS(27),
    [anon_sym_DQUOTE] = ACTIONS(29),
    [anon_sym_CARET] = ACTIONS(31),
    [anon_sym_POUND] = ACTIONS(33),
    [anon_sym_AMP] = ACTIONS(23),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(11), 1,
      anon_sym_PUSH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_PEEK,
    ACTIONS(17), 1,
      anon_sym_POP,
    ACTIONS(27), 1,
      sym_character,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    STATE(8), 1,
      sym_block_comment,
    STATE(11), 1,
      aux_sym_term_repeat1,
    STATE(14), 1,
      sym_prefix_operator,
    STATE(21), 1,
      sym__node,
    STATE(34), 1,
      sym__terminal,
    ACTIONS(21), 2,
      sym_const,
      sym_identifier,
    ACTIONS(23), 2,
      anon_sym_BANG,
      anon_sym_AMP,
    ACTIONS(19), 7,
      anon_sym_ANY,
      anon_sym_DROP,
      anon_sym_EOI,
      anon_sym_NEWLINE,
      anon_sym_PEEK_ALL,
      anon_sym_POP_ALL,
      anon_sym_SOI,
    STATE(27), 7,
      sym__push,
      sym__peek_slice,
      sym__pop,
      sym_builtin,
      sym_range,
      sym_string,
      sym__insensitive_string,
  [69] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(11), 1,
      anon_sym_PUSH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_PEEK,
    ACTIONS(17), 1,
      anon_sym_POP,
    ACTIONS(27), 1,
      sym_character,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    STATE(8), 1,
      aux_sym_term_repeat1,
    STATE(9), 1,
      sym_block_comment,
    STATE(14), 1,
      sym_prefix_operator,
    STATE(16), 1,
      sym__node,
    STATE(34), 1,
      sym__terminal,
    ACTIONS(21), 2,
      sym_const,
      sym_identifier,
    ACTIONS(23), 2,
      anon_sym_BANG,
      anon_sym_AMP,
    ACTIONS(19), 7,
      anon_sym_ANY,
      anon_sym_DROP,
      anon_sym_EOI,
      anon_sym_NEWLINE,
      anon_sym_PEEK_ALL,
      anon_sym_POP_ALL,
      anon_sym_SOI,
    STATE(27), 7,
      sym__push,
      sym__peek_slice,
      sym__pop,
      sym_builtin,
      sym_range,
      sym_string,
      sym__insensitive_string,
  [138] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(11), 1,
      anon_sym_PUSH,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_PEEK,
    ACTIONS(17), 1,
      anon_sym_POP,
    ACTIONS(27), 1,
      sym_character,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(31), 1,
      anon_sym_CARET,
    STATE(10), 1,
      sym_block_comment,
    STATE(11), 1,
      aux_sym_term_repeat1,
    STATE(14), 1,
      sym_prefix_operator,
    STATE(16), 1,
      sym__node,
    STATE(34), 1,
      sym__terminal,
    ACTIONS(21), 2,
      sym_const,
      sym_identifier,
    ACTIONS(23), 2,
      anon_sym_BANG,
      anon_sym_AMP,
    ACTIONS(19), 7,
      anon_sym_ANY,
      anon_sym_DROP,
      anon_sym_EOI,
      anon_sym_NEWLINE,
      anon_sym_PEEK_ALL,
      anon_sym_POP_ALL,
      anon_sym_SOI,
    STATE(27), 7,
      sym__push,
      sym__peek_slice,
      sym__pop,
      sym_builtin,
      sym_range,
      sym_string,
      sym__insensitive_string,
  [207] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(14), 1,
      sym_prefix_operator,
    ACTIONS(39), 2,
      anon_sym_BANG,
      anon_sym_AMP,
    STATE(11), 2,
      sym_block_comment,
      aux_sym_term_repeat1,
    ACTIONS(37), 4,
      anon_sym_LPAREN,
      sym_character,
      anon_sym_DQUOTE,
      anon_sym_CARET,
    ACTIONS(35), 12,
      anon_sym_PUSH,
      anon_sym_PEEK,
      anon_sym_POP,
      anon_sym_ANY,
      anon_sym_DROP,
      anon_sym_EOI,
      anon_sym_NEWLINE,
      anon_sym_PEEK_ALL,
      anon_sym_POP_ALL,
      anon_sym_SOI,
      sym_const,
      sym_identifier,
  [245] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(12), 1,
      sym_block_comment,
    ACTIONS(44), 7,
      anon_sym_LPAREN,
      anon_sym_BANG,
      sym_character,
      anon_sym_DQUOTE,
      anon_sym_CARET,
      anon_sym_POUND,
      anon_sym_AMP,
    ACTIONS(42), 12,
      anon_sym_PUSH,
      anon_sym_PEEK,
      anon_sym_POP,
      anon_sym_ANY,
      anon_sym_DROP,
      anon_sym_EOI,
      anon_sym_NEWLINE,
      anon_sym_PEEK_ALL,
      anon_sym_POP_ALL,
      anon_sym_SOI,
      sym_const,
      sym_identifier,
  [278] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(13), 1,
      sym_block_comment,
    ACTIONS(48), 6,
      anon_sym_LPAREN,
      anon_sym_BANG,
      sym_character,
      anon_sym_DQUOTE,
      anon_sym_CARET,
      anon_sym_AMP,
    ACTIONS(46), 12,
      anon_sym_PUSH,
      anon_sym_PEEK,
      anon_sym_POP,
      anon_sym_ANY,
      anon_sym_DROP,
      anon_sym_EOI,
      anon_sym_NEWLINE,
      anon_sym_PEEK_ALL,
      anon_sym_POP_ALL,
      anon_sym_SOI,
      sym_const,
      sym_identifier,
  [310] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(14), 1,
      sym_block_comment,
    ACTIONS(52), 6,
      anon_sym_LPAREN,
      anon_sym_BANG,
      sym_character,
      anon_sym_DQUOTE,
      anon_sym_CARET,
      anon_sym_AMP,
    ACTIONS(50), 12,
      anon_sym_PUSH,
      anon_sym_PEEK,
      anon_sym_POP,
      anon_sym_ANY,
      anon_sym_DROP,
      anon_sym_EOI,
      anon_sym_NEWLINE,
      anon_sym_PEEK_ALL,
      anon_sym_POP_ALL,
      anon_sym_SOI,
      sym_const,
      sym_identifier,
  [342] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(15), 1,
      sym_block_comment,
    ACTIONS(56), 6,
      anon_sym_LPAREN,
      anon_sym_BANG,
      sym_character,
      anon_sym_DQUOTE,
      anon_sym_CARET,
      anon_sym_AMP,
    ACTIONS(54), 12,
      anon_sym_PUSH,
      anon_sym_PEEK,
      anon_sym_POP,
      anon_sym_ANY,
      anon_sym_DROP,
      anon_sym_EOI,
      anon_sym_NEWLINE,
      anon_sym_PEEK_ALL,
      anon_sym_POP_ALL,
      anon_sym_SOI,
      sym_const,
      sym_identifier,
  [374] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(58), 1,
      anon_sym_LBRACE,
    STATE(16), 1,
      sym_block_comment,
    STATE(20), 1,
      aux_sym_term_repeat2,
    STATE(33), 1,
      sym_postfix_operator,
    ACTIONS(62), 3,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(60), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_TILDE,
  [404] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(58), 1,
      anon_sym_LBRACE,
    STATE(17), 1,
      sym_block_comment,
    STATE(19), 1,
      aux_sym_term_repeat2,
    STATE(33), 1,
      sym_postfix_operator,
    ACTIONS(62), 3,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(60), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_TILDE,
  [434] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(58), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      sym_block_comment,
    STATE(19), 1,
      aux_sym_term_repeat2,
    STATE(33), 1,
      sym_postfix_operator,
    ACTIONS(62), 3,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(64), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_TILDE,
  [464] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(66), 1,
      anon_sym_LBRACE,
    STATE(33), 1,
      sym_postfix_operator,
    STATE(19), 2,
      sym_block_comment,
      aux_sym_term_repeat2,
    ACTIONS(71), 3,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(69), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_TILDE,
  [492] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(58), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      aux_sym_term_repeat2,
    STATE(20), 1,
      sym_block_comment,
    STATE(33), 1,
      sym_postfix_operator,
    ACTIONS(62), 3,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(74), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_TILDE,
  [522] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(58), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      aux_sym_term_repeat2,
    STATE(21), 1,
      sym_block_comment,
    STATE(33), 1,
      sym_postfix_operator,
    ACTIONS(62), 3,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(74), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_TILDE,
  [552] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(58), 1,
      anon_sym_LBRACE,
    STATE(17), 1,
      aux_sym_term_repeat2,
    STATE(22), 1,
      sym_block_comment,
    STATE(33), 1,
      sym_postfix_operator,
    ACTIONS(62), 3,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(76), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_TILDE,
  [582] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(23), 1,
      sym_block_comment,
    ACTIONS(78), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_TILDE,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PLUS,
  [602] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(24), 1,
      sym_block_comment,
    ACTIONS(80), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_TILDE,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PLUS,
  [622] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(25), 1,
      sym_block_comment,
    ACTIONS(82), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_TILDE,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PLUS,
  [642] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(26), 1,
      sym_block_comment,
    ACTIONS(84), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_TILDE,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PLUS,
  [662] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(27), 1,
      sym_block_comment,
    ACTIONS(86), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_TILDE,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PLUS,
  [682] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(28), 1,
      sym_block_comment,
    ACTIONS(88), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_TILDE,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PLUS,
  [702] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(29), 1,
      sym_block_comment,
    ACTIONS(90), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_TILDE,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PLUS,
  [722] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(30), 1,
      sym_block_comment,
    ACTIONS(92), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_TILDE,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PLUS,
  [742] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(31), 1,
      sym_block_comment,
    ACTIONS(94), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_TILDE,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PLUS,
  [762] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(32), 1,
      sym_block_comment,
    ACTIONS(96), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_TILDE,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PLUS,
  [782] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(33), 1,
      sym_block_comment,
    ACTIONS(98), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_TILDE,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PLUS,
  [802] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(34), 1,
      sym_block_comment,
    ACTIONS(100), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_TILDE,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PLUS,
  [822] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(35), 1,
      sym_block_comment,
    ACTIONS(102), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_TILDE,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PLUS,
  [842] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(36), 1,
      sym_block_comment,
    ACTIONS(104), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_TILDE,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PLUS,
  [862] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(37), 1,
      sym_block_comment,
    ACTIONS(106), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_TILDE,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PLUS,
  [882] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(38), 1,
      sym_block_comment,
    ACTIONS(108), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_TILDE,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PLUS,
  [902] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(39), 1,
      sym_block_comment,
    ACTIONS(110), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_TILDE,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PLUS,
  [922] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(40), 1,
      sym_block_comment,
    ACTIONS(112), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_TILDE,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PLUS,
  [942] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(6), 1,
      sym_infix_operator,
    ACTIONS(114), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(116), 2,
      anon_sym_PIPE,
      anon_sym_TILDE,
    STATE(41), 2,
      sym_block_comment,
      aux_sym_expression_repeat1,
  [964] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(119), 1,
      anon_sym_LBRACE,
    STATE(42), 1,
      sym_block_comment,
    STATE(75), 1,
      sym_modifier,
    ACTIONS(121), 4,
      anon_sym__,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_BANG,
  [986] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(6), 1,
      sym_infix_operator,
    STATE(41), 1,
      aux_sym_expression_repeat1,
    STATE(43), 1,
      sym_block_comment,
    ACTIONS(123), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(125), 2,
      anon_sym_PIPE,
      anon_sym_TILDE,
  [1010] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(6), 1,
      sym_infix_operator,
    STATE(41), 1,
      aux_sym_expression_repeat1,
    STATE(44), 1,
      sym_block_comment,
    ACTIONS(125), 2,
      anon_sym_PIPE,
      anon_sym_TILDE,
    ACTIONS(127), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [1034] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(6), 1,
      sym_infix_operator,
    STATE(44), 1,
      aux_sym_expression_repeat1,
    STATE(45), 1,
      sym_block_comment,
    ACTIONS(123), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(125), 2,
      anon_sym_PIPE,
      anon_sym_TILDE,
  [1058] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(6), 1,
      sym_infix_operator,
    STATE(43), 1,
      aux_sym_expression_repeat1,
    STATE(46), 1,
      sym_block_comment,
    ACTIONS(125), 2,
      anon_sym_PIPE,
      anon_sym_TILDE,
    ACTIONS(129), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [1082] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
    STATE(47), 1,
      sym_block_comment,
    STATE(48), 1,
      aux_sym_pest_repeat1,
    STATE(53), 1,
      sym_grammar_rule,
    ACTIONS(9), 2,
      sym_const,
      sym_identifier,
  [1105] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(133), 1,
      ts_builtin_sym_end,
    STATE(53), 1,
      sym_grammar_rule,
    ACTIONS(135), 2,
      sym_const,
      sym_identifier,
    STATE(48), 2,
      sym_block_comment,
      aux_sym_pest_repeat1,
  [1126] = 6,
    ACTIONS(138), 1,
      anon_sym_DQUOTE,
    ACTIONS(142), 1,
      sym_line_comment,
    ACTIONS(144), 1,
      anon_sym_SLASH_STAR,
    STATE(49), 1,
      sym_block_comment,
    STATE(51), 1,
      aux_sym_string_repeat1,
    ACTIONS(140), 2,
      sym__unescaped_double_string_fragment,
      sym__escape_sequence,
  [1146] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(50), 1,
      sym_block_comment,
    ACTIONS(114), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_PIPE,
      anon_sym_TILDE,
  [1162] = 5,
    ACTIONS(142), 1,
      sym_line_comment,
    ACTIONS(144), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(146), 1,
      anon_sym_DQUOTE,
    ACTIONS(148), 2,
      sym__unescaped_double_string_fragment,
      sym__escape_sequence,
    STATE(51), 2,
      sym_block_comment,
      aux_sym_string_repeat1,
  [1180] = 6,
    ACTIONS(142), 1,
      sym_line_comment,
    ACTIONS(144), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    STATE(49), 1,
      aux_sym_string_repeat1,
    STATE(52), 1,
      sym_block_comment,
    ACTIONS(140), 2,
      sym__unescaped_double_string_fragment,
      sym__escape_sequence,
  [1200] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
    STATE(53), 1,
      sym_block_comment,
    ACTIONS(155), 2,
      sym_const,
      sym_identifier,
  [1217] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(157), 1,
      ts_builtin_sym_end,
    STATE(54), 1,
      sym_block_comment,
    ACTIONS(159), 2,
      sym_const,
      sym_identifier,
  [1234] = 5,
    ACTIONS(142), 1,
      sym_line_comment,
    ACTIONS(144), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(161), 1,
      anon_sym_DQUOTE,
    STATE(55), 1,
      sym_block_comment,
    ACTIONS(163), 2,
      sym__unescaped_double_string_fragment,
      sym__escape_sequence,
  [1251] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(165), 1,
      ts_builtin_sym_end,
    STATE(56), 1,
      sym_block_comment,
    ACTIONS(167), 2,
      sym_const,
      sym_identifier,
  [1268] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    STATE(23), 1,
      sym_string,
    STATE(57), 1,
      sym_block_comment,
  [1284] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(169), 1,
      anon_sym_RBRACE,
    ACTIONS(171), 1,
      aux_sym__peek_slice_token1,
    STATE(58), 1,
      sym_block_comment,
  [1300] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(173), 1,
      aux_sym__peek_slice_token1,
    ACTIONS(175), 1,
      anon_sym_DOT_DOT,
    STATE(59), 1,
      sym_block_comment,
  [1316] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(177), 1,
      aux_sym__peek_slice_token1,
    ACTIONS(179), 1,
      anon_sym_RBRACK,
    STATE(60), 1,
      sym_block_comment,
  [1332] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(181), 1,
      aux_sym__peek_slice_token1,
    ACTIONS(183), 1,
      anon_sym_RBRACK,
    STATE(61), 1,
      sym_block_comment,
  [1348] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(185), 1,
      aux_sym__peek_slice_token1,
    ACTIONS(187), 1,
      anon_sym_COMMA,
    STATE(62), 1,
      sym_block_comment,
  [1364] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(189), 1,
      anon_sym_RBRACE,
    ACTIONS(191), 1,
      anon_sym_COMMA,
    STATE(63), 1,
      sym_block_comment,
  [1380] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(193), 1,
      ts_builtin_sym_end,
    STATE(64), 1,
      sym_block_comment,
  [1393] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(195), 1,
      sym_character,
    STATE(65), 1,
      sym_block_comment,
  [1406] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(197), 1,
      anon_sym_LPAREN,
    STATE(66), 1,
      sym_block_comment,
  [1419] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(199), 1,
      aux_sym__peek_slice_token1,
    STATE(67), 1,
      sym_block_comment,
  [1432] = 4,
    ACTIONS(142), 1,
      sym_line_comment,
    ACTIONS(144), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(201), 1,
      aux_sym_block_comment_token1,
    STATE(68), 1,
      sym_block_comment,
  [1445] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(203), 1,
      anon_sym_LBRACK,
    STATE(69), 1,
      sym_block_comment,
  [1458] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(205), 1,
      anon_sym_SLASH,
    STATE(70), 1,
      sym_block_comment,
  [1471] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(207), 1,
      anon_sym_RBRACE,
    STATE(71), 1,
      sym_block_comment,
  [1484] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(209), 1,
      anon_sym_LBRACE,
    STATE(72), 1,
      sym_block_comment,
  [1497] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(211), 1,
      anon_sym_RPAREN,
    STATE(73), 1,
      sym_block_comment,
  [1510] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(179), 1,
      anon_sym_RBRACK,
    STATE(74), 1,
      sym_block_comment,
  [1523] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(213), 1,
      anon_sym_LBRACE,
    STATE(75), 1,
      sym_block_comment,
  [1536] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(215), 1,
      anon_sym_DOT_DOT,
    STATE(76), 1,
      sym_block_comment,
  [1549] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(217), 1,
      anon_sym_DOT_DOT,
    STATE(77), 1,
      sym_block_comment,
  [1562] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(169), 1,
      anon_sym_RBRACE,
    STATE(78), 1,
      sym_block_comment,
  [1575] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(219), 1,
      anon_sym_EQ,
    STATE(79), 1,
      sym_block_comment,
  [1588] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(221), 1,
      anon_sym_RBRACK,
    STATE(80), 1,
      sym_block_comment,
  [1601] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(223), 1,
      anon_sym_RPAREN,
    STATE(81), 1,
      sym_block_comment,
  [1614] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(225), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      sym_block_comment,
  [1627] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(227), 1,
      anon_sym_RBRACE,
    STATE(83), 1,
      sym_block_comment,
  [1640] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(229), 1,
      sym_identifier,
    STATE(84), 1,
      sym_block_comment,
  [1653] = 1,
    ACTIONS(231), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(8)] = 0,
  [SMALL_STATE(9)] = 69,
  [SMALL_STATE(10)] = 138,
  [SMALL_STATE(11)] = 207,
  [SMALL_STATE(12)] = 245,
  [SMALL_STATE(13)] = 278,
  [SMALL_STATE(14)] = 310,
  [SMALL_STATE(15)] = 342,
  [SMALL_STATE(16)] = 374,
  [SMALL_STATE(17)] = 404,
  [SMALL_STATE(18)] = 434,
  [SMALL_STATE(19)] = 464,
  [SMALL_STATE(20)] = 492,
  [SMALL_STATE(21)] = 522,
  [SMALL_STATE(22)] = 552,
  [SMALL_STATE(23)] = 582,
  [SMALL_STATE(24)] = 602,
  [SMALL_STATE(25)] = 622,
  [SMALL_STATE(26)] = 642,
  [SMALL_STATE(27)] = 662,
  [SMALL_STATE(28)] = 682,
  [SMALL_STATE(29)] = 702,
  [SMALL_STATE(30)] = 722,
  [SMALL_STATE(31)] = 742,
  [SMALL_STATE(32)] = 762,
  [SMALL_STATE(33)] = 782,
  [SMALL_STATE(34)] = 802,
  [SMALL_STATE(35)] = 822,
  [SMALL_STATE(36)] = 842,
  [SMALL_STATE(37)] = 862,
  [SMALL_STATE(38)] = 882,
  [SMALL_STATE(39)] = 902,
  [SMALL_STATE(40)] = 922,
  [SMALL_STATE(41)] = 942,
  [SMALL_STATE(42)] = 964,
  [SMALL_STATE(43)] = 986,
  [SMALL_STATE(44)] = 1010,
  [SMALL_STATE(45)] = 1034,
  [SMALL_STATE(46)] = 1058,
  [SMALL_STATE(47)] = 1082,
  [SMALL_STATE(48)] = 1105,
  [SMALL_STATE(49)] = 1126,
  [SMALL_STATE(50)] = 1146,
  [SMALL_STATE(51)] = 1162,
  [SMALL_STATE(52)] = 1180,
  [SMALL_STATE(53)] = 1200,
  [SMALL_STATE(54)] = 1217,
  [SMALL_STATE(55)] = 1234,
  [SMALL_STATE(56)] = 1251,
  [SMALL_STATE(57)] = 1268,
  [SMALL_STATE(58)] = 1284,
  [SMALL_STATE(59)] = 1300,
  [SMALL_STATE(60)] = 1316,
  [SMALL_STATE(61)] = 1332,
  [SMALL_STATE(62)] = 1348,
  [SMALL_STATE(63)] = 1364,
  [SMALL_STATE(64)] = 1380,
  [SMALL_STATE(65)] = 1393,
  [SMALL_STATE(66)] = 1406,
  [SMALL_STATE(67)] = 1419,
  [SMALL_STATE(68)] = 1432,
  [SMALL_STATE(69)] = 1445,
  [SMALL_STATE(70)] = 1458,
  [SMALL_STATE(71)] = 1471,
  [SMALL_STATE(72)] = 1484,
  [SMALL_STATE(73)] = 1497,
  [SMALL_STATE(74)] = 1510,
  [SMALL_STATE(75)] = 1523,
  [SMALL_STATE(76)] = 1536,
  [SMALL_STATE(77)] = 1549,
  [SMALL_STATE(78)] = 1562,
  [SMALL_STATE(79)] = 1575,
  [SMALL_STATE(80)] = 1588,
  [SMALL_STATE(81)] = 1601,
  [SMALL_STATE(82)] = 1614,
  [SMALL_STATE(83)] = 1627,
  [SMALL_STATE(84)] = 1640,
  [SMALL_STATE(85)] = 1653,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pest, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [35] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_term_repeat1, 2),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_term_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(15),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_infix_operator, 1),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix_operator, 1),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_tag, 2),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_tag, 2),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_term_repeat1, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_term_repeat1, 1),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix_operator, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix_operator, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 4),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_term_repeat2, 2), SHIFT_REPEAT(62),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_term_repeat2, 2),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_term_repeat2, 2), SHIFT_REPEAT(37),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__insensitive_string, 2),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__push, 4),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pop, 1),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_builtin, 1),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__terminal, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postfix_operator, 5),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node, 3),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__peek_slice, 6),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postfix_operator, 4),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__peek_slice, 5),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_term_repeat2, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postfix_operator, 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__peek_slice, 4),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postfix_operator, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(12),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pest, 1),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pest_repeat1, 2),
  [135] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pest_repeat1, 2), SHIFT_REPEAT(79),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(55),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pest_repeat1, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pest_repeat1, 1),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 5, .production_id = 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 5, .production_id = 1),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 1),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 6, .production_id = 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 6, .production_id = 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [193] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [201] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 1),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [217] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [229] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_pest(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
