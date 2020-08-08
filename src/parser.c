#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 18
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 18
#define ALIAS_COUNT 0
#define TOKEN_COUNT 10
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  anon_sym_DOTmain = 1,
  anon_sym_DOTend_DASHmain = 2,
  anon_sym_DUP = 3,
  anon_sym_DOTconstant = 4,
  anon_sym_DOTend_DASHconstant = 5,
  sym_identifier = 6,
  sym_hex_number = 7,
  sym_oct_number = 8,
  sym_dec_number = 9,
  sym_source_file = 10,
  sym_main_program = 11,
  aux_sym__statement = 12,
  sym_single_statement = 13,
  sym_constants = 14,
  sym_constant_expression = 15,
  sym__number = 16,
  aux_sym_constants_repeat1 = 17,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DOTmain] = ".main",
  [anon_sym_DOTend_DASHmain] = ".end-main",
  [anon_sym_DUP] = "DUP",
  [anon_sym_DOTconstant] = ".constant",
  [anon_sym_DOTend_DASHconstant] = ".end-constant",
  [sym_identifier] = "identifier",
  [sym_hex_number] = "hex_number",
  [sym_oct_number] = "oct_number",
  [sym_dec_number] = "dec_number",
  [sym_source_file] = "source_file",
  [sym_main_program] = "main_program",
  [aux_sym__statement] = "_statement",
  [sym_single_statement] = "single_statement",
  [sym_constants] = "constants",
  [sym_constant_expression] = "constant_expression",
  [sym__number] = "_number",
  [aux_sym_constants_repeat1] = "constants_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DOTmain] = anon_sym_DOTmain,
  [anon_sym_DOTend_DASHmain] = anon_sym_DOTend_DASHmain,
  [anon_sym_DUP] = anon_sym_DUP,
  [anon_sym_DOTconstant] = anon_sym_DOTconstant,
  [anon_sym_DOTend_DASHconstant] = anon_sym_DOTend_DASHconstant,
  [sym_identifier] = sym_identifier,
  [sym_hex_number] = sym_hex_number,
  [sym_oct_number] = sym_oct_number,
  [sym_dec_number] = sym_dec_number,
  [sym_source_file] = sym_source_file,
  [sym_main_program] = sym_main_program,
  [aux_sym__statement] = aux_sym__statement,
  [sym_single_statement] = sym_single_statement,
  [sym_constants] = sym_constants,
  [sym_constant_expression] = sym_constant_expression,
  [sym__number] = sym__number,
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
  [aux_sym__statement] = {
    .visible = false,
    .named = false,
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
      if (eof) ADVANCE(29);
      if (lookahead == '.') ADVANCE(8);
      if (lookahead == '0') ADVANCE(38);
      if (lookahead == 'D') ADVANCE(3);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(39);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 1:
      if (lookahead == '-') ADVANCE(9);
      END_STATE();
    case 2:
      if (lookahead == 'P') ADVANCE(32);
      END_STATE();
    case 3:
      if (lookahead == 'U') ADVANCE(2);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(11);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(17);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(18);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(12);
      END_STATE();
    case 8:
      if (lookahead == 'c') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(13);
      if (lookahead == 'm') ADVANCE(4);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(21);
      if (lookahead == 'm') ADVANCE(7);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(1);
      END_STATE();
    case 11:
      if (lookahead == 'i') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 13:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(22);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 17:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 18:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 19:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 20:
      if (lookahead == 'o') ADVANCE(14);
      END_STATE();
    case 21:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 22:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 23:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 24:
      if (lookahead == 't') ADVANCE(33);
      END_STATE();
    case 25:
      if (lookahead == 't') ADVANCE(34);
      END_STATE();
    case 26:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 27:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 28:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_DOTmain);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_DOTend_DASHmain);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_DUP);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_DOTconstant);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_DOTend_DASHconstant);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_hex_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_oct_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_dec_number);
      if (lookahead == 'x') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(37);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_dec_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(39);
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
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOTmain] = ACTIONS(1),
    [anon_sym_DOTend_DASHmain] = ACTIONS(1),
    [anon_sym_DUP] = ACTIONS(1),
    [anon_sym_DOTconstant] = ACTIONS(1),
    [anon_sym_DOTend_DASHconstant] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_hex_number] = ACTIONS(1),
    [sym_oct_number] = ACTIONS(1),
    [sym_dec_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(12),
    [sym_main_program] = STATE(13),
    [sym_constants] = STATE(9),
    [anon_sym_DOTmain] = ACTIONS(3),
    [anon_sym_DOTconstant] = ACTIONS(5),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(7), 1,
      anon_sym_DOTend_DASHconstant,
    ACTIONS(9), 1,
      sym_identifier,
    STATE(5), 2,
      sym_constant_expression,
      aux_sym_constants_repeat1,
  [11] = 3,
    ACTIONS(11), 1,
      anon_sym_DOTend_DASHmain,
    ACTIONS(13), 1,
      anon_sym_DUP,
    STATE(6), 2,
      aux_sym__statement,
      sym_single_statement,
  [22] = 3,
    ACTIONS(17), 1,
      sym_dec_number,
    STATE(11), 1,
      sym__number,
    ACTIONS(15), 2,
      sym_hex_number,
      sym_oct_number,
  [33] = 3,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(19), 1,
      anon_sym_DOTend_DASHconstant,
    STATE(7), 2,
      sym_constant_expression,
      aux_sym_constants_repeat1,
  [44] = 3,
    ACTIONS(21), 1,
      anon_sym_DOTend_DASHmain,
    ACTIONS(23), 1,
      anon_sym_DUP,
    STATE(6), 2,
      aux_sym__statement,
      sym_single_statement,
  [55] = 3,
    ACTIONS(26), 1,
      anon_sym_DOTend_DASHconstant,
    ACTIONS(28), 1,
      sym_identifier,
    STATE(7), 2,
      sym_constant_expression,
      aux_sym_constants_repeat1,
  [66] = 2,
    ACTIONS(13), 1,
      anon_sym_DUP,
    STATE(3), 2,
      aux_sym__statement,
      sym_single_statement,
  [74] = 2,
    ACTIONS(3), 1,
      anon_sym_DOTmain,
    STATE(15), 1,
      sym_main_program,
  [81] = 1,
    ACTIONS(31), 2,
      anon_sym_DOTend_DASHmain,
      anon_sym_DUP,
  [86] = 1,
    ACTIONS(33), 2,
      anon_sym_DOTend_DASHconstant,
      sym_identifier,
  [91] = 1,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
  [95] = 1,
    ACTIONS(37), 1,
      ts_builtin_sym_end,
  [99] = 1,
    ACTIONS(39), 1,
      anon_sym_DOTmain,
  [103] = 1,
    ACTIONS(41), 1,
      ts_builtin_sym_end,
  [107] = 1,
    ACTIONS(43), 1,
      ts_builtin_sym_end,
  [111] = 1,
    ACTIONS(45), 1,
      anon_sym_DOTmain,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 11,
  [SMALL_STATE(4)] = 22,
  [SMALL_STATE(5)] = 33,
  [SMALL_STATE(6)] = 44,
  [SMALL_STATE(7)] = 55,
  [SMALL_STATE(8)] = 66,
  [SMALL_STATE(9)] = 74,
  [SMALL_STATE(10)] = 81,
  [SMALL_STATE(11)] = 86,
  [SMALL_STATE(12)] = 91,
  [SMALL_STATE(13)] = 95,
  [SMALL_STATE(14)] = 99,
  [SMALL_STATE(15)] = 103,
  [SMALL_STATE(16)] = 107,
  [SMALL_STATE(17)] = 111,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__statement, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__statement, 2), SHIFT_REPEAT(10),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constants_repeat1, 2),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constants_repeat1, 2), SHIFT_REPEAT(4),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_single_statement, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_expression, 2),
  [35] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constants, 2),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_program, 3),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constants, 3),
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
