#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 12
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 11
#define ALIAS_COUNT 0
#define TOKEN_COUNT 5
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  anon_sym_DOTconstant = 1,
  anon_sym_DOTend_DASHconstant = 2,
  sym_identifier = 3,
  sym_dec_number = 4,
  sym_source_file = 5,
  sym_constants = 6,
  sym_constant_expression = 7,
  sym__number = 8,
  aux_sym_source_file_repeat1 = 9,
  aux_sym_constants_repeat1 = 10,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DOTconstant] = ".constant",
  [anon_sym_DOTend_DASHconstant] = ".end-constant",
  [sym_identifier] = "identifier",
  [sym_dec_number] = "dec_number",
  [sym_source_file] = "source_file",
  [sym_constants] = "constants",
  [sym_constant_expression] = "constant_expression",
  [sym__number] = "_number",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_constants_repeat1] = "constants_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DOTconstant] = anon_sym_DOTconstant,
  [anon_sym_DOTend_DASHconstant] = anon_sym_DOTend_DASHconstant,
  [sym_identifier] = sym_identifier,
  [sym_dec_number] = sym_dec_number,
  [sym_source_file] = sym_source_file,
  [sym_constants] = sym_constants,
  [sym_constant_expression] = sym_constant_expression,
  [sym__number] = sym__number,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_constants_repeat1] = aux_sym_constants_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
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
  [sym_dec_number] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
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
      if (eof) ADVANCE(20);
      if (lookahead == '.') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 1:
      if (lookahead == '-') ADVANCE(5);
      END_STATE();
    case 2:
      if (lookahead == 'a') ADVANCE(9);
      END_STATE();
    case 3:
      if (lookahead == 'a') ADVANCE(10);
      END_STATE();
    case 4:
      if (lookahead == 'c') ADVANCE(12);
      if (lookahead == 'e') ADVANCE(7);
      END_STATE();
    case 5:
      if (lookahead == 'c') ADVANCE(13);
      END_STATE();
    case 6:
      if (lookahead == 'd') ADVANCE(1);
      END_STATE();
    case 7:
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 8:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 9:
      if (lookahead == 'n') ADVANCE(17);
      END_STATE();
    case 10:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 11:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 'o') ADVANCE(8);
      END_STATE();
    case 13:
      if (lookahead == 'o') ADVANCE(11);
      END_STATE();
    case 14:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 15:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 16:
      if (lookahead == 't') ADVANCE(2);
      END_STATE();
    case 17:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 19:
      if (lookahead == 't') ADVANCE(3);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_DOTconstant);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_DOTend_DASHconstant);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_dec_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(24);
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
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOTconstant] = ACTIONS(1),
    [anon_sym_DOTend_DASHconstant] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_dec_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(11),
    [sym_constants] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_DOTconstant] = ACTIONS(5),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(7), 1,
      anon_sym_DOTend_DASHconstant,
    ACTIONS(9), 1,
      sym_identifier,
    STATE(4), 2,
      sym_constant_expression,
      aux_sym_constants_repeat1,
  [11] = 3,
    ACTIONS(5), 1,
      anon_sym_DOTconstant,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    STATE(5), 2,
      sym_constants,
      aux_sym_source_file_repeat1,
  [22] = 3,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_DOTend_DASHconstant,
    STATE(6), 2,
      sym_constant_expression,
      aux_sym_constants_repeat1,
  [33] = 3,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      anon_sym_DOTconstant,
    STATE(5), 2,
      sym_constants,
      aux_sym_source_file_repeat1,
  [44] = 3,
    ACTIONS(20), 1,
      anon_sym_DOTend_DASHconstant,
    ACTIONS(22), 1,
      sym_identifier,
    STATE(6), 2,
      sym_constant_expression,
      aux_sym_constants_repeat1,
  [55] = 1,
    ACTIONS(25), 2,
      ts_builtin_sym_end,
      anon_sym_DOTconstant,
  [60] = 2,
    ACTIONS(27), 1,
      sym_dec_number,
    STATE(9), 1,
      sym__number,
  [67] = 1,
    ACTIONS(29), 2,
      anon_sym_DOTend_DASHconstant,
      sym_identifier,
  [72] = 1,
    ACTIONS(31), 2,
      ts_builtin_sym_end,
      anon_sym_DOTconstant,
  [77] = 1,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 11,
  [SMALL_STATE(4)] = 22,
  [SMALL_STATE(5)] = 33,
  [SMALL_STATE(6)] = 44,
  [SMALL_STATE(7)] = 55,
  [SMALL_STATE(8)] = 60,
  [SMALL_STATE(9)] = 67,
  [SMALL_STATE(10)] = 72,
  [SMALL_STATE(11)] = 77,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(2),
  [20] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constants_repeat1, 2),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constants_repeat1, 2), SHIFT_REPEAT(8),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constants, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_expression, 2),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constants, 3),
  [33] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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
