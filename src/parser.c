#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 27
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 23
#define ALIAS_COUNT 0
#define TOKEN_COUNT 12
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4

enum {
  anon_sym_DOTmain = 1,
  anon_sym_DOTend_DASHmain = 2,
  anon_sym_DOTvar = 3,
  anon_sym_DOTend_DASHvar = 4,
  anon_sym_DUP = 5,
  anon_sym_DOTconstant = 6,
  anon_sym_DOTend_DASHconstant = 7,
  sym_identifier = 8,
  sym_hex_number = 9,
  sym_oct_number = 10,
  sym_dec_number = 11,
  sym_source_file = 12,
  sym_main_program = 13,
  sym_variables = 14,
  sym__statement = 15,
  sym_single_statement = 16,
  sym_constants = 17,
  sym_constant_expression = 18,
  sym__number = 19,
  aux_sym_main_program_repeat1 = 20,
  aux_sym_variables_repeat1 = 21,
  aux_sym_constants_repeat1 = 22,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DOTmain] = ".main",
  [anon_sym_DOTend_DASHmain] = ".end-main",
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
  [sym_variables] = "variables",
  [sym__statement] = "_statement",
  [sym_single_statement] = "single_statement",
  [sym_constants] = "constants",
  [sym_constant_expression] = "constant_expression",
  [sym__number] = "_number",
  [aux_sym_main_program_repeat1] = "main_program_repeat1",
  [aux_sym_variables_repeat1] = "variables_repeat1",
  [aux_sym_constants_repeat1] = "constants_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DOTmain] = anon_sym_DOTmain,
  [anon_sym_DOTend_DASHmain] = anon_sym_DOTend_DASHmain,
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
  [sym_variables] = sym_variables,
  [sym__statement] = sym__statement,
  [sym_single_statement] = sym_single_statement,
  [sym_constants] = sym_constants,
  [sym_constant_expression] = sym_constant_expression,
  [sym__number] = sym__number,
  [aux_sym_main_program_repeat1] = aux_sym_main_program_repeat1,
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
  [aux_sym_main_program_repeat1] = {
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
      if (eof) ADVANCE(33);
      if (lookahead == '.') ADVANCE(10);
      if (lookahead == '0') ADVANCE(44);
      if (lookahead == 'D') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(45);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 1:
      if (lookahead == '-') ADVANCE(11);
      END_STATE();
    case 2:
      if (lookahead == 'P') ADVANCE(38);
      END_STATE();
    case 3:
      if (lookahead == 'U') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(13);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(24);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(14);
      END_STATE();
    case 10:
      if (lookahead == 'c') ADVANCE(22);
      if (lookahead == 'e') ADVANCE(15);
      if (lookahead == 'm') ADVANCE(4);
      if (lookahead == 'v') ADVANCE(5);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(23);
      if (lookahead == 'm') ADVANCE(9);
      if (lookahead == 'v') ADVANCE(6);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(1);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(17);
      END_STATE();
    case 14:
      if (lookahead == 'i') ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 21:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 22:
      if (lookahead == 'o') ADVANCE(16);
      END_STATE();
    case 23:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 25:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 26:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 27:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 28:
      if (lookahead == 't') ADVANCE(39);
      END_STATE();
    case 29:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 30:
      if (lookahead == 't') ADVANCE(7);
      END_STATE();
    case 31:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 32:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_DOTmain);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_DOTend_DASHmain);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(anon_sym_DOTvar);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(anon_sym_DOTend_DASHvar);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(anon_sym_DUP);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(anon_sym_DOTconstant);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_DOTend_DASHconstant);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_hex_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_oct_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_dec_number);
      if (lookahead == 'x') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_dec_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
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
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOTmain] = ACTIONS(1),
    [anon_sym_DOTend_DASHmain] = ACTIONS(1),
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
    [sym_source_file] = STATE(23),
    [sym_main_program] = STATE(25),
    [sym_constants] = STATE(16),
    [anon_sym_DOTmain] = ACTIONS(3),
    [anon_sym_DOTconstant] = ACTIONS(5),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(7), 1,
      anon_sym_DOTend_DASHmain,
    ACTIONS(9), 1,
      anon_sym_DOTvar,
    ACTIONS(11), 1,
      anon_sym_DUP,
    STATE(3), 1,
      sym_variables,
    STATE(4), 3,
      sym__statement,
      sym_single_statement,
      aux_sym_main_program_repeat1,
  [18] = 3,
    ACTIONS(11), 1,
      anon_sym_DUP,
    ACTIONS(13), 1,
      anon_sym_DOTend_DASHmain,
    STATE(5), 3,
      sym__statement,
      sym_single_statement,
      aux_sym_main_program_repeat1,
  [30] = 3,
    ACTIONS(11), 1,
      anon_sym_DUP,
    ACTIONS(13), 1,
      anon_sym_DOTend_DASHmain,
    STATE(6), 3,
      sym__statement,
      sym_single_statement,
      aux_sym_main_program_repeat1,
  [42] = 3,
    ACTIONS(11), 1,
      anon_sym_DUP,
    ACTIONS(15), 1,
      anon_sym_DOTend_DASHmain,
    STATE(6), 3,
      sym__statement,
      sym_single_statement,
      aux_sym_main_program_repeat1,
  [54] = 3,
    ACTIONS(17), 1,
      anon_sym_DOTend_DASHmain,
    ACTIONS(19), 1,
      anon_sym_DUP,
    STATE(6), 3,
      sym__statement,
      sym_single_statement,
      aux_sym_main_program_repeat1,
  [66] = 3,
    ACTIONS(22), 1,
      anon_sym_DOTend_DASHconstant,
    ACTIONS(24), 1,
      sym_identifier,
    STATE(10), 2,
      sym_constant_expression,
      aux_sym_constants_repeat1,
  [77] = 3,
    ACTIONS(26), 1,
      anon_sym_DOTend_DASHconstant,
    ACTIONS(28), 1,
      sym_identifier,
    STATE(8), 2,
      sym_constant_expression,
      aux_sym_constants_repeat1,
  [88] = 3,
    ACTIONS(33), 1,
      sym_dec_number,
    STATE(14), 1,
      sym__number,
    ACTIONS(31), 2,
      sym_hex_number,
      sym_oct_number,
  [99] = 3,
    ACTIONS(24), 1,
      sym_identifier,
    ACTIONS(35), 1,
      anon_sym_DOTend_DASHconstant,
    STATE(8), 2,
      sym_constant_expression,
      aux_sym_constants_repeat1,
  [110] = 3,
    ACTIONS(37), 1,
      anon_sym_DOTend_DASHvar,
    ACTIONS(39), 1,
      sym_identifier,
    STATE(11), 1,
      aux_sym_variables_repeat1,
  [120] = 3,
    ACTIONS(42), 1,
      anon_sym_DOTend_DASHvar,
    ACTIONS(44), 1,
      sym_identifier,
    STATE(13), 1,
      aux_sym_variables_repeat1,
  [130] = 3,
    ACTIONS(46), 1,
      anon_sym_DOTend_DASHvar,
    ACTIONS(48), 1,
      sym_identifier,
    STATE(11), 1,
      aux_sym_variables_repeat1,
  [140] = 1,
    ACTIONS(50), 2,
      anon_sym_DOTend_DASHconstant,
      sym_identifier,
  [145] = 1,
    ACTIONS(52), 2,
      anon_sym_DOTend_DASHmain,
      anon_sym_DUP,
  [150] = 2,
    ACTIONS(3), 1,
      anon_sym_DOTmain,
    STATE(21), 1,
      sym_main_program,
  [157] = 1,
    ACTIONS(54), 2,
      anon_sym_DOTend_DASHmain,
      anon_sym_DUP,
  [162] = 1,
    ACTIONS(56), 2,
      anon_sym_DOTend_DASHmain,
      anon_sym_DUP,
  [167] = 1,
    ACTIONS(58), 1,
      anon_sym_DOTmain,
  [171] = 1,
    ACTIONS(60), 1,
      ts_builtin_sym_end,
  [175] = 1,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
  [179] = 1,
    ACTIONS(64), 1,
      anon_sym_DOTmain,
  [183] = 1,
    ACTIONS(66), 1,
      ts_builtin_sym_end,
  [187] = 1,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
  [191] = 1,
    ACTIONS(70), 1,
      ts_builtin_sym_end,
  [195] = 1,
    ACTIONS(72), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 18,
  [SMALL_STATE(4)] = 30,
  [SMALL_STATE(5)] = 42,
  [SMALL_STATE(6)] = 54,
  [SMALL_STATE(7)] = 66,
  [SMALL_STATE(8)] = 77,
  [SMALL_STATE(9)] = 88,
  [SMALL_STATE(10)] = 99,
  [SMALL_STATE(11)] = 110,
  [SMALL_STATE(12)] = 120,
  [SMALL_STATE(13)] = 130,
  [SMALL_STATE(14)] = 140,
  [SMALL_STATE(15)] = 145,
  [SMALL_STATE(16)] = 150,
  [SMALL_STATE(17)] = 157,
  [SMALL_STATE(18)] = 162,
  [SMALL_STATE(19)] = 167,
  [SMALL_STATE(20)] = 171,
  [SMALL_STATE(21)] = 175,
  [SMALL_STATE(22)] = 179,
  [SMALL_STATE(23)] = 183,
  [SMALL_STATE(24)] = 187,
  [SMALL_STATE(25)] = 191,
  [SMALL_STATE(26)] = 195,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_main_program_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_main_program_repeat1, 2), SHIFT_REPEAT(17),
  [22] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [24] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constants_repeat1, 2),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constants_repeat1, 2), SHIFT_REPEAT(9),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_repeat1, 2),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_repeat1, 2), SHIFT_REPEAT(11),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_expression, 2),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables, 3),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_statement, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constants, 2),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_program, 3),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constants, 3),
  [66] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_program, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_program, 4),
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
