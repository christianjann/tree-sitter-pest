#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 85
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 60
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_EQ = 1,
  anon_sym_LBRACE = 2,
  anon_sym_RBRACE = 3,
  sym_identifier = 4,
  anon_sym__ = 5,
  anon_sym_AT = 6,
  anon_sym_DOLLAR = 7,
  anon_sym_BANG = 8,
  anon_sym_PIPE = 9,
  anon_sym_LPAREN = 10,
  anon_sym_RPAREN = 11,
  anon_sym_DOT_DOT = 12,
  sym_character = 13,
  anon_sym_DQUOTE = 14,
  sym__unescaped_double_string_fragment = 15,
  sym__escape_sequence = 16,
  anon_sym_CARET = 17,
  anon_sym_PUSH = 18,
  anon_sym_PEEK = 19,
  anon_sym_LBRACK = 20,
  aux_sym__peek_slice_token1 = 21,
  anon_sym_RBRACK = 22,
  anon_sym_POP = 23,
  sym_builtin = 24,
  sym_const = 25,
  anon_sym_POUND = 26,
  anon_sym_TILDE = 27,
  anon_sym_AMP = 28,
  anon_sym_QMARK = 29,
  anon_sym_STAR = 30,
  anon_sym_PLUS = 31,
  anon_sym_COMMA = 32,
  sym_line_comment = 33,
  anon_sym_SLASH_STAR = 34,
  aux_sym_block_comment_token1 = 35,
  anon_sym_SLASH = 36,
  sym_pest = 37,
  sym_grammar_rule = 38,
  sym_modifier = 39,
  sym_expression = 40,
  sym_term = 41,
  sym__node = 42,
  sym__terminal = 43,
  sym_range = 44,
  sym_string = 45,
  sym__insensitive_string = 46,
  sym__push = 47,
  sym__peek_slice = 48,
  sym__pop = 49,
  sym_node_tag = 50,
  sym_infix_operator = 51,
  sym_prefix_operator = 52,
  sym_postfix_operator = 53,
  sym_block_comment = 54,
  aux_sym_pest_repeat1 = 55,
  aux_sym_expression_repeat1 = 56,
  aux_sym_term_repeat1 = 57,
  aux_sym_term_repeat2 = 58,
  aux_sym_string_repeat1 = 59,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "=",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [sym_identifier] = "identifier",
  [anon_sym__] = "_",
  [anon_sym_AT] = "@",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_BANG] = "!",
  [anon_sym_PIPE] = "|",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOT_DOT] = "..",
  [sym_character] = "character",
  [anon_sym_DQUOTE] = "\"",
  [sym__unescaped_double_string_fragment] = "_unescaped_double_string_fragment",
  [sym__escape_sequence] = "_escape_sequence",
  [anon_sym_CARET] = "^",
  [anon_sym_PUSH] = "PUSH",
  [anon_sym_PEEK] = "PEEK",
  [anon_sym_LBRACK] = "[",
  [aux_sym__peek_slice_token1] = "_peek_slice_token1",
  [anon_sym_RBRACK] = "]",
  [anon_sym_POP] = "POP",
  [sym_builtin] = "builtin",
  [sym_const] = "const",
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
  [sym_modifier] = "modifier",
  [sym_expression] = "expression",
  [sym_term] = "term",
  [sym__node] = "_node",
  [sym__terminal] = "_terminal",
  [sym_range] = "range",
  [sym_string] = "string",
  [sym__insensitive_string] = "_insensitive_string",
  [sym__push] = "_push",
  [sym__peek_slice] = "_peek_slice",
  [sym__pop] = "_pop",
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
  [sym_identifier] = sym_identifier,
  [anon_sym__] = anon_sym__,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DOT_DOT] = anon_sym_DOT_DOT,
  [sym_character] = sym_character,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym__unescaped_double_string_fragment] = sym__unescaped_double_string_fragment,
  [sym__escape_sequence] = sym__escape_sequence,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym_PUSH] = anon_sym_PUSH,
  [anon_sym_PEEK] = anon_sym_PEEK,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [aux_sym__peek_slice_token1] = aux_sym__peek_slice_token1,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_POP] = anon_sym_POP,
  [sym_builtin] = sym_builtin,
  [sym_const] = sym_const,
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
  [sym_modifier] = sym_modifier,
  [sym_expression] = sym_expression,
  [sym_term] = sym_term,
  [sym__node] = sym__node,
  [sym__terminal] = sym__terminal,
  [sym_range] = sym_range,
  [sym_string] = sym_string,
  [sym__insensitive_string] = sym__insensitive_string,
  [sym__push] = sym__push,
  [sym__peek_slice] = sym__peek_slice,
  [sym__pop] = sym__pop,
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT] = {
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
  [anon_sym_PUSH] = {
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
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POP] = {
    .visible = true,
    .named = false,
  },
  [sym_builtin] = {
    .visible = true,
    .named = true,
  },
  [sym_const] = {
    .visible = true,
    .named = true,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(29);
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '"') ADVANCE(50);
      if (lookahead == '#') ADVANCE(82);
      if (lookahead == '$') ADVANCE(43);
      if (lookahead == '&') ADVANCE(84);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '(') ADVANCE(46);
      if (lookahead == ')') ADVANCE(47);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '+') ADVANCE(87);
      if (lookahead == ',') ADVANCE(88);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '/') ADVANCE(97);
      if (lookahead == '=') ADVANCE(30);
      if (lookahead == '?') ADVANCE(85);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == 'A') ADVANCE(35);
      if (lookahead == 'D') ADVANCE(37);
      if (lookahead == 'E') ADVANCE(36);
      if (lookahead == 'N') ADVANCE(33);
      if (lookahead == 'P') ADVANCE(34);
      if (lookahead == 'S') ADVANCE(36);
      if (lookahead == '[') ADVANCE(59);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == ']') ADVANCE(61);
      if (lookahead == '^') ADVANCE(56);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == '{') ADVANCE(31);
      if (lookahead == '|') ADVANCE(45);
      if (lookahead == '}') ADVANCE(32);
      if (lookahead == '~') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 1:
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '"') ADVANCE(50);
      if (lookahead == '#') ADVANCE(82);
      if (lookahead == '&') ADVANCE(84);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '(') ADVANCE(46);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == 'A') ADVANCE(35);
      if (lookahead == 'D') ADVANCE(37);
      if (lookahead == 'E') ADVANCE(36);
      if (lookahead == 'N') ADVANCE(33);
      if (lookahead == 'P') ADVANCE(34);
      if (lookahead == 'S') ADVANCE(36);
      if (lookahead == '^') ADVANCE(56);
      if (lookahead == '|') ADVANCE(45);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 2:
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '$') ADVANCE(43);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == '_') ADVANCE(40);
      if (lookahead == '{') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(50);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(50);
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == '\\') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(3)
      if (lookahead != 0) ADVANCE(54);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(49);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(49);
      if (lookahead == '\\') ADVANCE(14);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '/') ADVANCE(92);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(96);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(8);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 9:
      if (lookahead == '*') ADVANCE(96);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == '*') ADVANCE(95);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead != 0) ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == '.') ADVANCE(48);
      END_STATE();
    case 12:
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 13:
      if (lookahead == 'u') ADVANCE(15);
      if (lookahead == 'x') ADVANCE(24);
      if (lookahead != 0) ADVANCE(55);
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
      if (lookahead == '}') ADVANCE(55);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(55);
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
      if (lookahead == '!') ADVANCE(44);
      if (lookahead == '"') ADVANCE(50);
      if (lookahead == '#') ADVANCE(82);
      if (lookahead == '$') ADVANCE(43);
      if (lookahead == '&') ADVANCE(84);
      if (lookahead == '\'') ADVANCE(6);
      if (lookahead == '(') ADVANCE(46);
      if (lookahead == ')') ADVANCE(47);
      if (lookahead == '*') ADVANCE(86);
      if (lookahead == '+') ADVANCE(87);
      if (lookahead == ',') ADVANCE(88);
      if (lookahead == '.') ADVANCE(11);
      if (lookahead == '/') ADVANCE(97);
      if (lookahead == '=') ADVANCE(30);
      if (lookahead == '?') ADVANCE(85);
      if (lookahead == '@') ADVANCE(42);
      if (lookahead == 'A') ADVANCE(35);
      if (lookahead == 'D') ADVANCE(37);
      if (lookahead == 'E') ADVANCE(36);
      if (lookahead == 'N') ADVANCE(33);
      if (lookahead == 'P') ADVANCE(34);
      if (lookahead == 'S') ADVANCE(36);
      if (lookahead == '[') ADVANCE(59);
      if (lookahead == ']') ADVANCE(61);
      if (lookahead == '^') ADVANCE(56);
      if (lookahead == '_') ADVANCE(41);
      if (lookahead == '{') ADVANCE(31);
      if (lookahead == '|') ADVANCE(45);
      if (lookahead == '}') ADVANCE(32);
      if (lookahead == '~') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(27)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      if (('B' <= lookahead && lookahead <= 'Z')) ADVANCE(38);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 28:
      if (eof) ADVANCE(29);
      if (lookahead == '/') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(38);
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
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(79);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(81);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(66);
      if (lookahead == 'O') ADVANCE(77);
      if (lookahead == 'U') ADVANCE(78);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(81);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(80);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(81);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(68);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(81);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(75);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(81);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(81);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym__);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(81);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_DOT_DOT);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_character);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '*') ADVANCE(54);
      if (lookahead == '/') ADVANCE(53);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(54);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '/') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(52);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(54);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead == '!' ||
          lookahead == '/') ADVANCE(54);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym__unescaped_double_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym__escape_sequence);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_PUSH);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_PEEK);
      if (lookahead == '_') ADVANCE(64);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym__peek_slice_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_POP);
      if (lookahead == '_') ADVANCE(64);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_builtin);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_const);
      if (lookahead == 'A') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(81);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_const);
      if (lookahead == 'E') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(81);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_const);
      if (lookahead == 'E') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(81);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_const);
      if (lookahead == 'H') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(81);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_const);
      if (lookahead == 'I') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(81);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_const);
      if (lookahead == 'I') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(81);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_const);
      if (lookahead == 'K') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(81);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_const);
      if (lookahead == 'L') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(81);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_const);
      if (lookahead == 'L') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(81);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_const);
      if (lookahead == 'L') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(81);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_const);
      if (lookahead == 'N') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(81);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_const);
      if (lookahead == 'O') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(81);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_const);
      if (lookahead == 'P') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(81);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_const);
      if (lookahead == 'P') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(81);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_const);
      if (lookahead == 'S') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(81);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_const);
      if (lookahead == 'W') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(81);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_const);
      if (lookahead == 'Y') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_const);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_QMARK);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead == '/') ADVANCE(93);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '\n') ADVANCE(9);
      if (lookahead == '!' ||
          lookahead == '/') ADVANCE(90);
      if (lookahead == '*') ADVANCE(89);
      if (lookahead != 0) ADVANCE(90);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead == '!' ||
          lookahead == '/') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_line_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(93);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_SLASH_STAR);
      if (lookahead == '*') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(9);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_block_comment_token1);
      if (lookahead == '*') ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(9);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_SLASH);
      if (lookahead == '*') ADVANCE(94);
      if (lookahead == '/') ADVANCE(92);
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
  [46] = {.lex_state = 28},
  [47] = {.lex_state = 28},
  [48] = {.lex_state = 4},
  [49] = {.lex_state = 4},
  [50] = {.lex_state = 4},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 28},
  [53] = {.lex_state = 4},
  [54] = {.lex_state = 28},
  [55] = {.lex_state = 28},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 12},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
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
  [81] = {.lex_state = 8},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_block_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOT_DOT] = ACTIONS(1),
    [sym_character] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [sym__escape_sequence] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym_PUSH] = ACTIONS(1),
    [anon_sym_PEEK] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [aux_sym__peek_slice_token1] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_POP] = ACTIONS(1),
    [sym_builtin] = ACTIONS(1),
    [sym_const] = ACTIONS(1),
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
    [sym_pest] = STATE(83),
    [sym_grammar_rule] = STATE(54),
    [sym_block_comment] = STATE(1),
    [aux_sym_pest_repeat1] = STATE(47),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_identifier] = ACTIONS(9),
    [sym_const] = ACTIONS(11),
    [sym_line_comment] = ACTIONS(3),
    [anon_sym_SLASH_STAR] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(17), 1,
      anon_sym_PIPE,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_character,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_CARET,
    ACTIONS(27), 1,
      anon_sym_PUSH,
    ACTIONS(29), 1,
      anon_sym_PEEK,
    ACTIONS(31), 1,
      anon_sym_POP,
    ACTIONS(33), 1,
      sym_builtin,
    ACTIONS(35), 1,
      anon_sym_POUND,
    STATE(2), 1,
      sym_block_comment,
    STATE(9), 1,
      aux_sym_term_repeat1,
    STATE(10), 1,
      sym_node_tag,
    STATE(15), 1,
      sym_prefix_operator,
    STATE(17), 1,
      sym__node,
    STATE(28), 1,
      sym__terminal,
    STATE(44), 1,
      sym_term,
    STATE(76), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_identifier,
      sym_const,
    ACTIONS(15), 2,
      anon_sym_BANG,
      anon_sym_AMP,
    STATE(32), 6,
      sym_range,
      sym_string,
      sym__insensitive_string,
      sym__push,
      sym__peek_slice,
      sym__pop,
  [77] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(17), 1,
      anon_sym_PIPE,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_character,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_CARET,
    ACTIONS(27), 1,
      anon_sym_PUSH,
    ACTIONS(29), 1,
      anon_sym_PEEK,
    ACTIONS(31), 1,
      anon_sym_POP,
    ACTIONS(33), 1,
      sym_builtin,
    ACTIONS(35), 1,
      anon_sym_POUND,
    STATE(3), 1,
      sym_block_comment,
    STATE(9), 1,
      aux_sym_term_repeat1,
    STATE(10), 1,
      sym_node_tag,
    STATE(15), 1,
      sym_prefix_operator,
    STATE(17), 1,
      sym__node,
    STATE(28), 1,
      sym__terminal,
    STATE(44), 1,
      sym_term,
    STATE(72), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_identifier,
      sym_const,
    ACTIONS(15), 2,
      anon_sym_BANG,
      anon_sym_AMP,
    STATE(32), 6,
      sym_range,
      sym_string,
      sym__insensitive_string,
      sym__push,
      sym__peek_slice,
      sym__pop,
  [154] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(17), 1,
      anon_sym_PIPE,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_character,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_CARET,
    ACTIONS(27), 1,
      anon_sym_PUSH,
    ACTIONS(29), 1,
      anon_sym_PEEK,
    ACTIONS(31), 1,
      anon_sym_POP,
    ACTIONS(33), 1,
      sym_builtin,
    ACTIONS(35), 1,
      anon_sym_POUND,
    STATE(4), 1,
      sym_block_comment,
    STATE(9), 1,
      aux_sym_term_repeat1,
    STATE(10), 1,
      sym_node_tag,
    STATE(15), 1,
      sym_prefix_operator,
    STATE(17), 1,
      sym__node,
    STATE(28), 1,
      sym__terminal,
    STATE(44), 1,
      sym_term,
    STATE(74), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_identifier,
      sym_const,
    ACTIONS(15), 2,
      anon_sym_BANG,
      anon_sym_AMP,
    STATE(32), 6,
      sym_range,
      sym_string,
      sym__insensitive_string,
      sym__push,
      sym__peek_slice,
      sym__pop,
  [231] = 23,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(17), 1,
      anon_sym_PIPE,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_character,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_CARET,
    ACTIONS(27), 1,
      anon_sym_PUSH,
    ACTIONS(29), 1,
      anon_sym_PEEK,
    ACTIONS(31), 1,
      anon_sym_POP,
    ACTIONS(33), 1,
      sym_builtin,
    ACTIONS(35), 1,
      anon_sym_POUND,
    STATE(5), 1,
      sym_block_comment,
    STATE(9), 1,
      aux_sym_term_repeat1,
    STATE(10), 1,
      sym_node_tag,
    STATE(15), 1,
      sym_prefix_operator,
    STATE(17), 1,
      sym__node,
    STATE(28), 1,
      sym__terminal,
    STATE(44), 1,
      sym_term,
    STATE(64), 1,
      sym_expression,
    ACTIONS(13), 2,
      sym_identifier,
      sym_const,
    ACTIONS(15), 2,
      anon_sym_BANG,
      anon_sym_AMP,
    STATE(32), 6,
      sym_range,
      sym_string,
      sym__insensitive_string,
      sym__push,
      sym__peek_slice,
      sym__pop,
  [308] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_character,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_CARET,
    ACTIONS(27), 1,
      anon_sym_PUSH,
    ACTIONS(29), 1,
      anon_sym_PEEK,
    ACTIONS(31), 1,
      anon_sym_POP,
    ACTIONS(33), 1,
      sym_builtin,
    ACTIONS(35), 1,
      anon_sym_POUND,
    STATE(6), 1,
      sym_block_comment,
    STATE(9), 1,
      aux_sym_term_repeat1,
    STATE(10), 1,
      sym_node_tag,
    STATE(15), 1,
      sym_prefix_operator,
    STATE(17), 1,
      sym__node,
    STATE(28), 1,
      sym__terminal,
    STATE(51), 1,
      sym_term,
    ACTIONS(13), 2,
      sym_identifier,
      sym_const,
    ACTIONS(15), 2,
      anon_sym_BANG,
      anon_sym_AMP,
    STATE(32), 6,
      sym_range,
      sym_string,
      sym__insensitive_string,
      sym__push,
      sym__peek_slice,
      sym__pop,
  [379] = 21,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_character,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_CARET,
    ACTIONS(27), 1,
      anon_sym_PUSH,
    ACTIONS(29), 1,
      anon_sym_PEEK,
    ACTIONS(31), 1,
      anon_sym_POP,
    ACTIONS(33), 1,
      sym_builtin,
    ACTIONS(35), 1,
      anon_sym_POUND,
    STATE(7), 1,
      sym_block_comment,
    STATE(9), 1,
      aux_sym_term_repeat1,
    STATE(10), 1,
      sym_node_tag,
    STATE(15), 1,
      sym_prefix_operator,
    STATE(17), 1,
      sym__node,
    STATE(28), 1,
      sym__terminal,
    STATE(45), 1,
      sym_term,
    ACTIONS(13), 2,
      sym_identifier,
      sym_const,
    ACTIONS(15), 2,
      anon_sym_BANG,
      anon_sym_AMP,
    STATE(32), 6,
      sym_range,
      sym_string,
      sym__insensitive_string,
      sym__push,
      sym__peek_slice,
      sym__pop,
  [450] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_character,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_CARET,
    ACTIONS(27), 1,
      anon_sym_PUSH,
    ACTIONS(29), 1,
      anon_sym_PEEK,
    ACTIONS(31), 1,
      anon_sym_POP,
    ACTIONS(33), 1,
      sym_builtin,
    STATE(8), 1,
      sym_block_comment,
    STATE(11), 1,
      aux_sym_term_repeat1,
    STATE(15), 1,
      sym_prefix_operator,
    STATE(20), 1,
      sym__node,
    STATE(28), 1,
      sym__terminal,
    ACTIONS(13), 2,
      sym_identifier,
      sym_const,
    ACTIONS(15), 2,
      anon_sym_BANG,
      anon_sym_AMP,
    STATE(32), 6,
      sym_range,
      sym_string,
      sym__insensitive_string,
      sym__push,
      sym__peek_slice,
      sym__pop,
  [512] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_character,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_CARET,
    ACTIONS(27), 1,
      anon_sym_PUSH,
    ACTIONS(29), 1,
      anon_sym_PEEK,
    ACTIONS(31), 1,
      anon_sym_POP,
    ACTIONS(33), 1,
      sym_builtin,
    STATE(9), 1,
      sym_block_comment,
    STATE(11), 1,
      aux_sym_term_repeat1,
    STATE(15), 1,
      sym_prefix_operator,
    STATE(19), 1,
      sym__node,
    STATE(28), 1,
      sym__terminal,
    ACTIONS(13), 2,
      sym_identifier,
      sym_const,
    ACTIONS(15), 2,
      anon_sym_BANG,
      anon_sym_AMP,
    STATE(32), 6,
      sym_range,
      sym_string,
      sym__insensitive_string,
      sym__push,
      sym__peek_slice,
      sym__pop,
  [574] = 18,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(19), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      sym_character,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(25), 1,
      anon_sym_CARET,
    ACTIONS(27), 1,
      anon_sym_PUSH,
    ACTIONS(29), 1,
      anon_sym_PEEK,
    ACTIONS(31), 1,
      anon_sym_POP,
    ACTIONS(33), 1,
      sym_builtin,
    STATE(8), 1,
      aux_sym_term_repeat1,
    STATE(10), 1,
      sym_block_comment,
    STATE(15), 1,
      sym_prefix_operator,
    STATE(19), 1,
      sym__node,
    STATE(28), 1,
      sym__terminal,
    ACTIONS(13), 2,
      sym_identifier,
      sym_const,
    ACTIONS(15), 2,
      anon_sym_BANG,
      anon_sym_AMP,
    STATE(32), 6,
      sym_range,
      sym_string,
      sym__insensitive_string,
      sym__push,
      sym__peek_slice,
      sym__pop,
  [636] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(15), 1,
      sym_prefix_operator,
    ACTIONS(39), 2,
      anon_sym_BANG,
      anon_sym_AMP,
    STATE(11), 2,
      sym_block_comment,
      aux_sym_term_repeat1,
    ACTIONS(37), 4,
      sym_identifier,
      anon_sym_PEEK,
      anon_sym_POP,
      sym_const,
    ACTIONS(42), 6,
      anon_sym_LPAREN,
      sym_character,
      anon_sym_DQUOTE,
      anon_sym_CARET,
      anon_sym_PUSH,
      sym_builtin,
  [668] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(12), 1,
      sym_block_comment,
    ACTIONS(44), 4,
      sym_identifier,
      anon_sym_PEEK,
      anon_sym_POP,
      sym_const,
    ACTIONS(46), 9,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_character,
      anon_sym_DQUOTE,
      anon_sym_CARET,
      anon_sym_PUSH,
      sym_builtin,
      anon_sym_POUND,
      anon_sym_AMP,
  [695] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(13), 1,
      sym_block_comment,
    ACTIONS(48), 4,
      sym_identifier,
      anon_sym_PEEK,
      anon_sym_POP,
      sym_const,
    ACTIONS(50), 8,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_character,
      anon_sym_DQUOTE,
      anon_sym_CARET,
      anon_sym_PUSH,
      sym_builtin,
      anon_sym_AMP,
  [721] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(14), 1,
      sym_block_comment,
    ACTIONS(52), 4,
      sym_identifier,
      anon_sym_PEEK,
      anon_sym_POP,
      sym_const,
    ACTIONS(54), 8,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_character,
      anon_sym_DQUOTE,
      anon_sym_CARET,
      anon_sym_PUSH,
      sym_builtin,
      anon_sym_AMP,
  [747] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(15), 1,
      sym_block_comment,
    ACTIONS(56), 4,
      sym_identifier,
      anon_sym_PEEK,
      anon_sym_POP,
      sym_const,
    ACTIONS(58), 8,
      anon_sym_BANG,
      anon_sym_LPAREN,
      sym_character,
      anon_sym_DQUOTE,
      anon_sym_CARET,
      anon_sym_PUSH,
      sym_builtin,
      anon_sym_AMP,
  [773] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(60), 1,
      anon_sym_LBRACE,
    STATE(16), 1,
      sym_block_comment,
    STATE(22), 1,
      aux_sym_term_repeat2,
    STATE(26), 1,
      sym_postfix_operator,
    ACTIONS(64), 3,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(62), 4,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_TILDE,
  [803] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(60), 1,
      anon_sym_LBRACE,
    STATE(17), 1,
      sym_block_comment,
    STATE(18), 1,
      aux_sym_term_repeat2,
    STATE(26), 1,
      sym_postfix_operator,
    ACTIONS(64), 3,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(66), 4,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_TILDE,
  [833] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(60), 1,
      anon_sym_LBRACE,
    STATE(18), 1,
      sym_block_comment,
    STATE(22), 1,
      aux_sym_term_repeat2,
    STATE(26), 1,
      sym_postfix_operator,
    ACTIONS(64), 3,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(68), 4,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_TILDE,
  [863] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(60), 1,
      anon_sym_LBRACE,
    STATE(19), 1,
      sym_block_comment,
    STATE(21), 1,
      aux_sym_term_repeat2,
    STATE(26), 1,
      sym_postfix_operator,
    ACTIONS(64), 3,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(68), 4,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_TILDE,
  [893] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(60), 1,
      anon_sym_LBRACE,
    STATE(16), 1,
      aux_sym_term_repeat2,
    STATE(20), 1,
      sym_block_comment,
    STATE(26), 1,
      sym_postfix_operator,
    ACTIONS(64), 3,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(70), 4,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_TILDE,
  [923] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(60), 1,
      anon_sym_LBRACE,
    STATE(21), 1,
      sym_block_comment,
    STATE(22), 1,
      aux_sym_term_repeat2,
    STATE(26), 1,
      sym_postfix_operator,
    ACTIONS(64), 3,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(70), 4,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_TILDE,
  [953] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(72), 1,
      anon_sym_LBRACE,
    STATE(26), 1,
      sym_postfix_operator,
    STATE(22), 2,
      sym_block_comment,
      aux_sym_term_repeat2,
    ACTIONS(77), 3,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PLUS,
    ACTIONS(75), 4,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_TILDE,
  [981] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(23), 1,
      sym_block_comment,
    ACTIONS(80), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PLUS,
  [1001] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(24), 1,
      sym_block_comment,
    ACTIONS(82), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PLUS,
  [1021] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(25), 1,
      sym_block_comment,
    ACTIONS(84), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PLUS,
  [1041] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(26), 1,
      sym_block_comment,
    ACTIONS(86), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PLUS,
  [1061] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(27), 1,
      sym_block_comment,
    ACTIONS(88), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PLUS,
  [1081] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(28), 1,
      sym_block_comment,
    ACTIONS(90), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PLUS,
  [1101] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(29), 1,
      sym_block_comment,
    ACTIONS(92), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PLUS,
  [1121] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(30), 1,
      sym_block_comment,
    ACTIONS(94), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PLUS,
  [1141] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(31), 1,
      sym_block_comment,
    ACTIONS(96), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PLUS,
  [1161] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(32), 1,
      sym_block_comment,
    ACTIONS(98), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PLUS,
  [1181] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(33), 1,
      sym_block_comment,
    ACTIONS(100), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PLUS,
  [1201] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(34), 1,
      sym_block_comment,
    ACTIONS(102), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PLUS,
  [1221] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(35), 1,
      sym_block_comment,
    ACTIONS(104), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PLUS,
  [1241] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(36), 1,
      sym_block_comment,
    ACTIONS(106), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PLUS,
  [1261] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(37), 1,
      sym_block_comment,
    ACTIONS(108), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PLUS,
  [1281] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(38), 1,
      sym_block_comment,
    ACTIONS(110), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PLUS,
  [1301] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(39), 1,
      sym_block_comment,
    ACTIONS(112), 8,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_TILDE,
      anon_sym_QMARK,
      anon_sym_STAR,
      anon_sym_PLUS,
  [1321] = 6,
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
    STATE(40), 2,
      sym_block_comment,
      aux_sym_expression_repeat1,
  [1343] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(6), 1,
      sym_infix_operator,
    STATE(40), 1,
      aux_sym_expression_repeat1,
    STATE(41), 1,
      sym_block_comment,
    ACTIONS(119), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
    ACTIONS(121), 2,
      anon_sym_PIPE,
      anon_sym_TILDE,
  [1367] = 6,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(123), 1,
      anon_sym_LBRACE,
    STATE(42), 1,
      sym_block_comment,
    STATE(73), 1,
      sym_modifier,
    ACTIONS(125), 4,
      anon_sym__,
      anon_sym_AT,
      anon_sym_DOLLAR,
      anon_sym_BANG,
  [1389] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(6), 1,
      sym_infix_operator,
    STATE(40), 1,
      aux_sym_expression_repeat1,
    STATE(43), 1,
      sym_block_comment,
    ACTIONS(121), 2,
      anon_sym_PIPE,
      anon_sym_TILDE,
    ACTIONS(127), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [1413] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(6), 1,
      sym_infix_operator,
    STATE(43), 1,
      aux_sym_expression_repeat1,
    STATE(44), 1,
      sym_block_comment,
    ACTIONS(121), 2,
      anon_sym_PIPE,
      anon_sym_TILDE,
    ACTIONS(129), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [1437] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(6), 1,
      sym_infix_operator,
    STATE(41), 1,
      aux_sym_expression_repeat1,
    STATE(45), 1,
      sym_block_comment,
    ACTIONS(121), 2,
      anon_sym_PIPE,
      anon_sym_TILDE,
    ACTIONS(127), 2,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
  [1461] = 7,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(131), 1,
      ts_builtin_sym_end,
    ACTIONS(133), 1,
      sym_identifier,
    ACTIONS(136), 1,
      sym_const,
    STATE(54), 1,
      sym_grammar_rule,
    STATE(46), 2,
      sym_block_comment,
      aux_sym_pest_repeat1,
  [1484] = 8,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(11), 1,
      sym_const,
    ACTIONS(139), 1,
      ts_builtin_sym_end,
    STATE(46), 1,
      aux_sym_pest_repeat1,
    STATE(47), 1,
      sym_block_comment,
    STATE(54), 1,
      sym_grammar_rule,
  [1509] = 6,
    ACTIONS(141), 1,
      anon_sym_DQUOTE,
    ACTIONS(145), 1,
      sym_line_comment,
    ACTIONS(147), 1,
      anon_sym_SLASH_STAR,
    STATE(48), 1,
      sym_block_comment,
    STATE(49), 1,
      aux_sym_string_repeat1,
    ACTIONS(143), 2,
      sym__unescaped_double_string_fragment,
      sym__escape_sequence,
  [1529] = 6,
    ACTIONS(145), 1,
      sym_line_comment,
    ACTIONS(147), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(149), 1,
      anon_sym_DQUOTE,
    STATE(49), 1,
      sym_block_comment,
    STATE(50), 1,
      aux_sym_string_repeat1,
    ACTIONS(143), 2,
      sym__unescaped_double_string_fragment,
      sym__escape_sequence,
  [1549] = 5,
    ACTIONS(145), 1,
      sym_line_comment,
    ACTIONS(147), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(151), 1,
      anon_sym_DQUOTE,
    ACTIONS(153), 2,
      sym__unescaped_double_string_fragment,
      sym__escape_sequence,
    STATE(50), 2,
      sym_block_comment,
      aux_sym_string_repeat1,
  [1567] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    STATE(51), 1,
      sym_block_comment,
    ACTIONS(114), 4,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_RPAREN,
      anon_sym_TILDE,
  [1583] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(158), 1,
      sym_identifier,
    STATE(52), 1,
      sym_block_comment,
    ACTIONS(156), 2,
      ts_builtin_sym_end,
      sym_const,
  [1600] = 5,
    ACTIONS(145), 1,
      sym_line_comment,
    ACTIONS(147), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(160), 1,
      anon_sym_DQUOTE,
    STATE(53), 1,
      sym_block_comment,
    ACTIONS(162), 2,
      sym__unescaped_double_string_fragment,
      sym__escape_sequence,
  [1617] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(166), 1,
      sym_identifier,
    STATE(54), 1,
      sym_block_comment,
    ACTIONS(164), 2,
      ts_builtin_sym_end,
      sym_const,
  [1634] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(170), 1,
      sym_identifier,
    STATE(55), 1,
      sym_block_comment,
    ACTIONS(168), 2,
      ts_builtin_sym_end,
      sym_const,
  [1651] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    STATE(23), 1,
      sym_string,
    STATE(56), 1,
      sym_block_comment,
  [1667] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(172), 1,
      anon_sym_RBRACE,
    ACTIONS(174), 1,
      anon_sym_COMMA,
    STATE(57), 1,
      sym_block_comment,
  [1683] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(176), 1,
      anon_sym_RBRACE,
    ACTIONS(178), 1,
      aux_sym__peek_slice_token1,
    STATE(58), 1,
      sym_block_comment,
  [1699] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(180), 1,
      aux_sym__peek_slice_token1,
    ACTIONS(182), 1,
      anon_sym_RBRACK,
    STATE(59), 1,
      sym_block_comment,
  [1715] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(184), 1,
      anon_sym_DOT_DOT,
    ACTIONS(186), 1,
      aux_sym__peek_slice_token1,
    STATE(60), 1,
      sym_block_comment,
  [1731] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(188), 1,
      aux_sym__peek_slice_token1,
    ACTIONS(190), 1,
      anon_sym_RBRACK,
    STATE(61), 1,
      sym_block_comment,
  [1747] = 5,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(192), 1,
      aux_sym__peek_slice_token1,
    ACTIONS(194), 1,
      anon_sym_COMMA,
    STATE(62), 1,
      sym_block_comment,
  [1763] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(196), 1,
      anon_sym_LBRACE,
    STATE(63), 1,
      sym_block_comment,
  [1776] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(198), 1,
      anon_sym_RPAREN,
    STATE(64), 1,
      sym_block_comment,
  [1789] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(200), 1,
      sym_identifier,
    STATE(65), 1,
      sym_block_comment,
  [1802] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(202), 1,
      aux_sym__peek_slice_token1,
    STATE(66), 1,
      sym_block_comment,
  [1815] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(204), 1,
      anon_sym_LBRACK,
    STATE(67), 1,
      sym_block_comment,
  [1828] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(206), 1,
      anon_sym_LPAREN,
    STATE(68), 1,
      sym_block_comment,
  [1841] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(208), 1,
      sym_character,
    STATE(69), 1,
      sym_block_comment,
  [1854] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(210), 1,
      anon_sym_DOT_DOT,
    STATE(70), 1,
      sym_block_comment,
  [1867] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(182), 1,
      anon_sym_RBRACK,
    STATE(71), 1,
      sym_block_comment,
  [1880] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(212), 1,
      anon_sym_RBRACE,
    STATE(72), 1,
      sym_block_comment,
  [1893] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(214), 1,
      anon_sym_LBRACE,
    STATE(73), 1,
      sym_block_comment,
  [1906] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(216), 1,
      anon_sym_RBRACE,
    STATE(74), 1,
      sym_block_comment,
  [1919] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(218), 1,
      anon_sym_DOT_DOT,
    STATE(75), 1,
      sym_block_comment,
  [1932] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(220), 1,
      anon_sym_RPAREN,
    STATE(76), 1,
      sym_block_comment,
  [1945] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(176), 1,
      anon_sym_RBRACE,
    STATE(77), 1,
      sym_block_comment,
  [1958] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(222), 1,
      anon_sym_EQ,
    STATE(78), 1,
      sym_block_comment,
  [1971] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(224), 1,
      anon_sym_SLASH,
    STATE(79), 1,
      sym_block_comment,
  [1984] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(226), 1,
      anon_sym_RBRACK,
    STATE(80), 1,
      sym_block_comment,
  [1997] = 4,
    ACTIONS(145), 1,
      sym_line_comment,
    ACTIONS(147), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(228), 1,
      aux_sym_block_comment_token1,
    STATE(81), 1,
      sym_block_comment,
  [2010] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(230), 1,
      anon_sym_RBRACE,
    STATE(82), 1,
      sym_block_comment,
  [2023] = 4,
    ACTIONS(3), 1,
      sym_line_comment,
    ACTIONS(5), 1,
      anon_sym_SLASH_STAR,
    ACTIONS(232), 1,
      ts_builtin_sym_end,
    STATE(83), 1,
      sym_block_comment,
  [2036] = 1,
    ACTIONS(234), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 77,
  [SMALL_STATE(4)] = 154,
  [SMALL_STATE(5)] = 231,
  [SMALL_STATE(6)] = 308,
  [SMALL_STATE(7)] = 379,
  [SMALL_STATE(8)] = 450,
  [SMALL_STATE(9)] = 512,
  [SMALL_STATE(10)] = 574,
  [SMALL_STATE(11)] = 636,
  [SMALL_STATE(12)] = 668,
  [SMALL_STATE(13)] = 695,
  [SMALL_STATE(14)] = 721,
  [SMALL_STATE(15)] = 747,
  [SMALL_STATE(16)] = 773,
  [SMALL_STATE(17)] = 803,
  [SMALL_STATE(18)] = 833,
  [SMALL_STATE(19)] = 863,
  [SMALL_STATE(20)] = 893,
  [SMALL_STATE(21)] = 923,
  [SMALL_STATE(22)] = 953,
  [SMALL_STATE(23)] = 981,
  [SMALL_STATE(24)] = 1001,
  [SMALL_STATE(25)] = 1021,
  [SMALL_STATE(26)] = 1041,
  [SMALL_STATE(27)] = 1061,
  [SMALL_STATE(28)] = 1081,
  [SMALL_STATE(29)] = 1101,
  [SMALL_STATE(30)] = 1121,
  [SMALL_STATE(31)] = 1141,
  [SMALL_STATE(32)] = 1161,
  [SMALL_STATE(33)] = 1181,
  [SMALL_STATE(34)] = 1201,
  [SMALL_STATE(35)] = 1221,
  [SMALL_STATE(36)] = 1241,
  [SMALL_STATE(37)] = 1261,
  [SMALL_STATE(38)] = 1281,
  [SMALL_STATE(39)] = 1301,
  [SMALL_STATE(40)] = 1321,
  [SMALL_STATE(41)] = 1343,
  [SMALL_STATE(42)] = 1367,
  [SMALL_STATE(43)] = 1389,
  [SMALL_STATE(44)] = 1413,
  [SMALL_STATE(45)] = 1437,
  [SMALL_STATE(46)] = 1461,
  [SMALL_STATE(47)] = 1484,
  [SMALL_STATE(48)] = 1509,
  [SMALL_STATE(49)] = 1529,
  [SMALL_STATE(50)] = 1549,
  [SMALL_STATE(51)] = 1567,
  [SMALL_STATE(52)] = 1583,
  [SMALL_STATE(53)] = 1600,
  [SMALL_STATE(54)] = 1617,
  [SMALL_STATE(55)] = 1634,
  [SMALL_STATE(56)] = 1651,
  [SMALL_STATE(57)] = 1667,
  [SMALL_STATE(58)] = 1683,
  [SMALL_STATE(59)] = 1699,
  [SMALL_STATE(60)] = 1715,
  [SMALL_STATE(61)] = 1731,
  [SMALL_STATE(62)] = 1747,
  [SMALL_STATE(63)] = 1763,
  [SMALL_STATE(64)] = 1776,
  [SMALL_STATE(65)] = 1789,
  [SMALL_STATE(66)] = 1802,
  [SMALL_STATE(67)] = 1815,
  [SMALL_STATE(68)] = 1828,
  [SMALL_STATE(69)] = 1841,
  [SMALL_STATE(70)] = 1854,
  [SMALL_STATE(71)] = 1867,
  [SMALL_STATE(72)] = 1880,
  [SMALL_STATE(73)] = 1893,
  [SMALL_STATE(74)] = 1906,
  [SMALL_STATE(75)] = 1919,
  [SMALL_STATE(76)] = 1932,
  [SMALL_STATE(77)] = 1945,
  [SMALL_STATE(78)] = 1958,
  [SMALL_STATE(79)] = 1971,
  [SMALL_STATE(80)] = 1984,
  [SMALL_STATE(81)] = 1997,
  [SMALL_STATE(82)] = 2010,
  [SMALL_STATE(83)] = 2023,
  [SMALL_STATE(84)] = 2036,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pest, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(67),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_term_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_term_repeat1, 2), SHIFT_REPEAT(14),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_term_repeat1, 2),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_infix_operator, 1),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_infix_operator, 1),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_node_tag, 2),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_node_tag, 2),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_prefix_operator, 1),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_prefix_operator, 1),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_term_repeat1, 1),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_term_repeat1, 1),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 4),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_term, 3),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_term_repeat2, 2), SHIFT_REPEAT(62),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_term_repeat2, 2),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_term_repeat2, 2), SHIFT_REPEAT(33),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__insensitive_string, 2),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postfix_operator, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__peek_slice, 6),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_term_repeat2, 1),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postfix_operator, 5),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pop, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__peek_slice, 5),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postfix_operator, 4),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__terminal, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_postfix_operator, 1),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_range, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__node, 3),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__push, 4),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__peek_slice, 4),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_expression_repeat1, 2), SHIFT_REPEAT(12),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 2),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expression, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pest_repeat1, 2),
  [133] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_pest_repeat1, 2), SHIFT_REPEAT(78),
  [136] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pest_repeat1, 2), SHIFT_REPEAT(78),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pest, 1),
  [141] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [147] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [149] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2), SHIFT_REPEAT(53),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 5, .production_id = 1),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 5, .production_id = 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 1),
  [164] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pest_repeat1, 1),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pest_repeat1, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grammar_rule, 6, .production_id = 1),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grammar_rule, 6, .production_id = 1),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_modifier, 1),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(79),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [232] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block_comment, 3),
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
