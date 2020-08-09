#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 48
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 0
#define TOKEN_COUNT 17
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 6

enum {
  anon_sym_DOTmain = 1,
  anon_sym_DOTend_DASHmain = 2,
  anon_sym_DOTmethod = 3,
  anon_sym_DOTend_DASHmethod = 4,
  anon_sym_LPAREN = 5,
  anon_sym_COMMA = 6,
  anon_sym_RPAREN = 7,
  anon_sym_DOTvar = 8,
  anon_sym_DOTend_DASHvar = 9,
  anon_sym_DUP = 10,
  anon_sym_DOTconstant = 11,
  anon_sym_DOTend_DASHconstant = 12,
  sym_identifier = 13,
  sym_hex_number = 14,
  sym_oct_number = 15,
  sym_dec_number = 16,
  sym_source_file = 17,
  sym_main_program = 18,
  sym_method = 19,
  sym_parameters = 20,
  sym_variables = 21,
  sym__statement = 22,
  sym_single_statement = 23,
  sym_constants = 24,
  sym_constant_expression = 25,
  sym__number = 26,
  aux_sym_source_file_repeat1 = 27,
  aux_sym_main_program_repeat1 = 28,
  aux_sym_parameters_repeat1 = 29,
  aux_sym_variables_repeat1 = 30,
  aux_sym_constants_repeat1 = 31,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DOTmain] = ".main",
  [anon_sym_DOTend_DASHmain] = ".end-main",
  [anon_sym_DOTmethod] = ".method",
  [anon_sym_DOTend_DASHmethod] = ".end-method",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [anon_sym_DOTvar] = ".var",
  [anon_sym_DOTend_DASHvar] = ".end-var",
  [anon_sym_DUP] = "DUP",
  [anon_sym_DOTconstant] = ".constant",
  [anon_sym_DOTend_DASHconstant] = ".end-constant",
  [sym_identifier] = "identifier",
  [sym_hex_number] = "hex_number",
  [sym_oct_number] = "oct_number",
  [sym_dec_number] = "dec_number",
  [sym_source_file] = "source_file",
  [sym_main_program] = "main_program",
  [sym_method] = "method",
  [sym_parameters] = "parameters",
  [sym_variables] = "variables",
  [sym__statement] = "_statement",
  [sym_single_statement] = "single_statement",
  [sym_constants] = "constants",
  [sym_constant_expression] = "constant_expression",
  [sym__number] = "_number",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_main_program_repeat1] = "main_program_repeat1",
  [aux_sym_parameters_repeat1] = "parameters_repeat1",
  [aux_sym_variables_repeat1] = "variables_repeat1",
  [aux_sym_constants_repeat1] = "constants_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DOTmain] = anon_sym_DOTmain,
  [anon_sym_DOTend_DASHmain] = anon_sym_DOTend_DASHmain,
  [anon_sym_DOTmethod] = anon_sym_DOTmethod,
  [anon_sym_DOTend_DASHmethod] = anon_sym_DOTend_DASHmethod,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_DOTvar] = anon_sym_DOTvar,
  [anon_sym_DOTend_DASHvar] = anon_sym_DOTend_DASHvar,
  [anon_sym_DUP] = anon_sym_DUP,
  [anon_sym_DOTconstant] = anon_sym_DOTconstant,
  [anon_sym_DOTend_DASHconstant] = anon_sym_DOTend_DASHconstant,
  [sym_identifier] = sym_identifier,
  [sym_hex_number] = sym_hex_number,
  [sym_oct_number] = sym_oct_number,
  [sym_dec_number] = sym_dec_number,
  [sym_source_file] = sym_source_file,
  [sym_main_program] = sym_main_program,
  [sym_method] = sym_method,
  [sym_parameters] = sym_parameters,
  [sym_variables] = sym_variables,
  [sym__statement] = sym__statement,
  [sym_single_statement] = sym_single_statement,
  [sym_constants] = sym_constants,
  [sym_constant_expression] = sym_constant_expression,
  [sym__number] = sym__number,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_main_program_repeat1] = aux_sym_main_program_repeat1,
  [aux_sym_parameters_repeat1] = aux_sym_parameters_repeat1,
  [aux_sym_variables_repeat1] = aux_sym_variables_repeat1,
  [aux_sym_constants_repeat1] = aux_sym_constants_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_DOTmain] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTend_DASHmain] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTmethod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTend_DASHmethod] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTvar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTend_DASHvar] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DUP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTconstant] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTend_DASHconstant] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_hex_number] = {
    .visible = true,
    .named = true,
  },
  [sym_oct_number] = {
    .visible = true,
    .named = true,
  },
  [sym_dec_number] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_main_program] = {
    .visible = true,
    .named = true,
  },
  [sym_method] = {
    .visible = true,
    .named = true,
  },
  [sym_parameters] = {
    .visible = true,
    .named = true,
  },
  [sym_variables] = {
    .visible = true,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_single_statement] = {
    .visible = true,
    .named = true,
  },
  [sym_constants] = {
    .visible = true,
    .named = true,
  },
  [sym_constant_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_main_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_parameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_variables_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_constants_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(41);
      if (lookahead == '(') ADVANCE(46);
      if (lookahead == ')') ADVANCE(48);
      if (lookahead == ',') ADVANCE(47);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == '0') ADVANCE(57);
      if (lookahead == 'D') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 1:
      if (lookahead == '-') ADVANCE(11);
      END_STATE();
    case 2:
      if (lookahead == 'P') ADVANCE(51);
      END_STATE();
    case 3:
      if (lookahead == 'U') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(17);
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(26);
      if (lookahead == 'e') ADVANCE(19);
      if (lookahead == 'm') ADVANCE(4);
      if (lookahead == 'v') ADVANCE(5);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(29);
      if (lookahead == 'm') ADVANCE(9);
      if (lookahead == 'v') ADVANCE(6);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(1);
      END_STATE();
    case 13:
      if (lookahead == 'd') ADVANCE(44);
      END_STATE();
    case 14:
      if (lookahead == 'd') ADVANCE(45);
      END_STATE();
    case 15:
      if (lookahead == 'h') ADVANCE(27);
      END_STATE();
    case 16:
      if (lookahead == 'h') ADVANCE(28);
      END_STATE();
    case 17:
      if (lookahead == 'i') ADVANCE(21);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(22);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(32);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(36);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(13);
      END_STATE();
    case 28:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 29:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 30:
      if (lookahead == 'r') ADVANCE(49);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(50);
      END_STATE();
    case 32:
      if (lookahead == 's') ADVANCE(37);
      END_STATE();
    case 33:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(15);
      END_STATE();
    case 35:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 36:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 37:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(16);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_DOTmain);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_DOTend_DASHmain);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_DOTmethod);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_DOTend_DASHmethod);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_DOTvar);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_DOTend_DASHvar);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_DUP);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DOTconstant);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DOTend_DASHconstant);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_hex_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(55);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_oct_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_dec_number);
      if (lookahead == 'x') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(56);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_dec_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
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
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOTmain] = ACTIONS(1),
    [anon_sym_DOTend_DASHmain] = ACTIONS(1),
    [anon_sym_DOTmethod] = ACTIONS(1),
    [anon_sym_DOTend_DASHmethod] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_DOTvar] = ACTIONS(1),
    [anon_sym_DOTend_DASHvar] = ACTIONS(1),
    [anon_sym_DUP] = ACTIONS(1),
    [anon_sym_DOTconstant] = ACTIONS(1),
    [anon_sym_DOTend_DASHconstant] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_hex_number] = ACTIONS(1),
    [sym_oct_number] = ACTIONS(1),
    [sym_dec_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(45),
    [sym_main_program] = STATE(12),
    [sym_constants] = STATE(38),
    [anon_sym_DOTmain] = ACTIONS(3),
    [anon_sym_DOTconstant] = ACTIONS(5),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(7), 1,
      anon_sym_DOTend_DASHmethod,
    ACTIONS(9), 1,
      anon_sym_DOTvar,
    ACTIONS(11), 1,
      anon_sym_DUP,
    STATE(8), 1,
      sym_variables,
    STATE(5), 3,
      sym__statement,
      sym_single_statement,
      aux_sym_main_program_repeat1,
  [18] = 5,
    ACTIONS(9), 1,
      anon_sym_DOTvar,
    ACTIONS(11), 1,
      anon_sym_DUP,
    ACTIONS(13), 1,
      anon_sym_DOTend_DASHmain,
    STATE(9), 1,
      sym_variables,
    STATE(10), 3,
      sym__statement,
      sym_single_statement,
      aux_sym_main_program_repeat1,
  [36] = 3,
    ACTIONS(17), 1,
      anon_sym_DUP,
    ACTIONS(15), 2,
      anon_sym_DOTend_DASHmain,
      anon_sym_DOTend_DASHmethod,
    STATE(4), 3,
      sym__statement,
      sym_single_statement,
      aux_sym_main_program_repeat1,
  [49] = 3,
    ACTIONS(11), 1,
      anon_sym_DUP,
    ACTIONS(20), 1,
      anon_sym_DOTend_DASHmethod,
    STATE(4), 3,
      sym__statement,
      sym_single_statement,
      aux_sym_main_program_repeat1,
  [61] = 3,
    ACTIONS(11), 1,
      anon_sym_DUP,
    ACTIONS(22), 1,
      anon_sym_DOTend_DASHmethod,
    STATE(4), 3,
      sym__statement,
      sym_single_statement,
      aux_sym_main_program_repeat1,
  [73] = 3,
    ACTIONS(11), 1,
      anon_sym_DUP,
    ACTIONS(24), 1,
      anon_sym_DOTend_DASHmain,
    STATE(4), 3,
      sym__statement,
      sym_single_statement,
      aux_sym_main_program_repeat1,
  [85] = 3,
    ACTIONS(11), 1,
      anon_sym_DUP,
    ACTIONS(20), 1,
      anon_sym_DOTend_DASHmethod,
    STATE(6), 3,
      sym__statement,
      sym_single_statement,
      aux_sym_main_program_repeat1,
  [97] = 3,
    ACTIONS(11), 1,
      anon_sym_DUP,
    ACTIONS(26), 1,
      anon_sym_DOTend_DASHmain,
    STATE(7), 3,
      sym__statement,
      sym_single_statement,
      aux_sym_main_program_repeat1,
  [109] = 3,
    ACTIONS(11), 1,
      anon_sym_DUP,
    ACTIONS(26), 1,
      anon_sym_DOTend_DASHmain,
    STATE(4), 3,
      sym__statement,
      sym_single_statement,
      aux_sym_main_program_repeat1,
  [121] = 3,
    ACTIONS(28), 1,
      anon_sym_DOTend_DASHconstant,
    ACTIONS(30), 1,
      sym_identifier,
    STATE(16), 2,
      sym_constant_expression,
      aux_sym_constants_repeat1,
  [132] = 3,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
    ACTIONS(34), 1,
      anon_sym_DOTmethod,
    STATE(18), 2,
      sym_method,
      aux_sym_source_file_repeat1,
  [143] = 3,
    ACTIONS(34), 1,
      anon_sym_DOTmethod,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    STATE(14), 2,
      sym_method,
      aux_sym_source_file_repeat1,
  [154] = 3,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    ACTIONS(40), 1,
      anon_sym_DOTmethod,
    STATE(14), 2,
      sym_method,
      aux_sym_source_file_repeat1,
  [165] = 3,
    ACTIONS(45), 1,
      sym_dec_number,
    STATE(34), 1,
      sym__number,
    ACTIONS(43), 2,
      sym_hex_number,
      sym_oct_number,
  [176] = 3,
    ACTIONS(30), 1,
      sym_identifier,
    ACTIONS(47), 1,
      anon_sym_DOTend_DASHconstant,
    STATE(17), 2,
      sym_constant_expression,
      aux_sym_constants_repeat1,
  [187] = 3,
    ACTIONS(49), 1,
      anon_sym_DOTend_DASHconstant,
    ACTIONS(51), 1,
      sym_identifier,
    STATE(17), 2,
      sym_constant_expression,
      aux_sym_constants_repeat1,
  [198] = 3,
    ACTIONS(34), 1,
      anon_sym_DOTmethod,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    STATE(14), 2,
      sym_method,
      aux_sym_source_file_repeat1,
  [209] = 3,
    ACTIONS(34), 1,
      anon_sym_DOTmethod,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    STATE(13), 2,
      sym_method,
      aux_sym_source_file_repeat1,
  [220] = 3,
    ACTIONS(56), 1,
      anon_sym_COMMA,
    ACTIONS(59), 1,
      anon_sym_RPAREN,
    STATE(20), 1,
      aux_sym_parameters_repeat1,
  [230] = 3,
    ACTIONS(61), 1,
      anon_sym_DOTend_DASHvar,
    ACTIONS(63), 1,
      sym_identifier,
    STATE(22), 1,
      aux_sym_variables_repeat1,
  [240] = 3,
    ACTIONS(65), 1,
      anon_sym_DOTend_DASHvar,
    ACTIONS(67), 1,
      sym_identifier,
    STATE(30), 1,
      aux_sym_variables_repeat1,
  [250] = 3,
    ACTIONS(69), 1,
      anon_sym_COMMA,
    ACTIONS(71), 1,
      anon_sym_RPAREN,
    STATE(20), 1,
      aux_sym_parameters_repeat1,
  [260] = 1,
    ACTIONS(73), 3,
      anon_sym_DOTend_DASHmethod,
      anon_sym_DOTvar,
      anon_sym_DUP,
  [266] = 1,
    ACTIONS(75), 3,
      anon_sym_DOTend_DASHmain,
      anon_sym_DOTend_DASHmethod,
      anon_sym_DUP,
  [272] = 1,
    ACTIONS(77), 3,
      anon_sym_DOTend_DASHmethod,
      anon_sym_DOTvar,
      anon_sym_DUP,
  [278] = 3,
    ACTIONS(69), 1,
      anon_sym_COMMA,
    ACTIONS(79), 1,
      anon_sym_RPAREN,
    STATE(23), 1,
      aux_sym_parameters_repeat1,
  [288] = 1,
    ACTIONS(81), 3,
      anon_sym_DOTend_DASHmain,
      anon_sym_DOTend_DASHmethod,
      anon_sym_DUP,
  [294] = 1,
    ACTIONS(83), 3,
      anon_sym_DOTend_DASHmain,
      anon_sym_DOTend_DASHmethod,
      anon_sym_DUP,
  [300] = 3,
    ACTIONS(85), 1,
      anon_sym_DOTend_DASHvar,
    ACTIONS(87), 1,
      sym_identifier,
    STATE(30), 1,
      aux_sym_variables_repeat1,
  [310] = 1,
    ACTIONS(90), 3,
      anon_sym_DOTend_DASHmethod,
      anon_sym_DOTvar,
      anon_sym_DUP,
  [316] = 1,
    ACTIONS(92), 2,
      ts_builtin_sym_end,
      anon_sym_DOTmethod,
  [321] = 2,
    ACTIONS(94), 1,
      anon_sym_RPAREN,
    ACTIONS(96), 1,
      sym_identifier,
  [328] = 1,
    ACTIONS(98), 2,
      anon_sym_DOTend_DASHconstant,
      sym_identifier,
  [333] = 1,
    ACTIONS(59), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [338] = 1,
    ACTIONS(100), 2,
      ts_builtin_sym_end,
      anon_sym_DOTmethod,
  [343] = 1,
    ACTIONS(102), 2,
      ts_builtin_sym_end,
      anon_sym_DOTmethod,
  [348] = 2,
    ACTIONS(3), 1,
      anon_sym_DOTmain,
    STATE(19), 1,
      sym_main_program,
  [355] = 1,
    ACTIONS(104), 2,
      ts_builtin_sym_end,
      anon_sym_DOTmethod,
  [360] = 2,
    ACTIONS(106), 1,
      anon_sym_LPAREN,
    STATE(2), 1,
      sym_parameters,
  [367] = 1,
    ACTIONS(108), 2,
      ts_builtin_sym_end,
      anon_sym_DOTmethod,
  [372] = 1,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      anon_sym_DOTmethod,
  [377] = 1,
    ACTIONS(112), 1,
      anon_sym_DOTmain,
  [381] = 1,
    ACTIONS(114), 1,
      sym_identifier,
  [385] = 1,
    ACTIONS(116), 1,
      ts_builtin_sym_end,
  [389] = 1,
    ACTIONS(118), 1,
      anon_sym_DOTmain,
  [393] = 1,
    ACTIONS(120), 1,
      sym_identifier,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 18,
  [SMALL_STATE(4)] = 36,
  [SMALL_STATE(5)] = 49,
  [SMALL_STATE(6)] = 61,
  [SMALL_STATE(7)] = 73,
  [SMALL_STATE(8)] = 85,
  [SMALL_STATE(9)] = 97,
  [SMALL_STATE(10)] = 109,
  [SMALL_STATE(11)] = 121,
  [SMALL_STATE(12)] = 132,
  [SMALL_STATE(13)] = 143,
  [SMALL_STATE(14)] = 154,
  [SMALL_STATE(15)] = 165,
  [SMALL_STATE(16)] = 176,
  [SMALL_STATE(17)] = 187,
  [SMALL_STATE(18)] = 198,
  [SMALL_STATE(19)] = 209,
  [SMALL_STATE(20)] = 220,
  [SMALL_STATE(21)] = 230,
  [SMALL_STATE(22)] = 240,
  [SMALL_STATE(23)] = 250,
  [SMALL_STATE(24)] = 260,
  [SMALL_STATE(25)] = 266,
  [SMALL_STATE(26)] = 272,
  [SMALL_STATE(27)] = 278,
  [SMALL_STATE(28)] = 288,
  [SMALL_STATE(29)] = 294,
  [SMALL_STATE(30)] = 300,
  [SMALL_STATE(31)] = 310,
  [SMALL_STATE(32)] = 316,
  [SMALL_STATE(33)] = 321,
  [SMALL_STATE(34)] = 328,
  [SMALL_STATE(35)] = 333,
  [SMALL_STATE(36)] = 338,
  [SMALL_STATE(37)] = 343,
  [SMALL_STATE(38)] = 348,
  [SMALL_STATE(39)] = 355,
  [SMALL_STATE(40)] = 360,
  [SMALL_STATE(41)] = 367,
  [SMALL_STATE(42)] = 372,
  [SMALL_STATE(43)] = 377,
  [SMALL_STATE(44)] = 381,
  [SMALL_STATE(45)] = 385,
  [SMALL_STATE(46)] = 389,
  [SMALL_STATE(47)] = 393,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_main_program_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_main_program_repeat1, 2), SHIFT_REPEAT(28),
  [20] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [26] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constants_repeat1, 2),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constants_repeat1, 2), SHIFT_REPEAT(15),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [56] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(44),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [67] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables, 2),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_statement, 1),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables, 3),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_repeat1, 2),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_repeat1, 2), SHIFT_REPEAT(30),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_program, 4),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_expression, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 4),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_program, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_program, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 5),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 6),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constants, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [116] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constants, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_jas(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
