#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 11
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 12
#define ALIAS_COUNT 0
#define TOKEN_COUNT 7
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3

enum {
  anon_sym_DOTconstant = 1,
  anon_sym_DOTend_DASHconstant = 2,
  sym_identifier = 3,
  sym_hex_number = 4,
  sym_oct_number = 5,
  sym_dec_number = 6,
  sym_source_file = 7,
  sym_constants = 8,
  sym_constant_expression = 9,
  sym__number = 10,
  aux_sym_constants_repeat1 = 11,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DOTconstant] = ".constant",
  [anon_sym_DOTend_DASHconstant] = ".end-constant",
  [sym_identifier] = "identifier",
  [sym_hex_number] = "hex_number",
  [sym_oct_number] = "oct_number",
  [sym_dec_number] = "dec_number",
  [sym_source_file] = "source_file",
  [sym_constants] = "constants",
  [sym_constant_expression] = "constant_expression",
  [sym__number] = "_number",
  [aux_sym_constants_repeat1] = "constants_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_DOTconstant] = anon_sym_DOTconstant,
  [anon_sym_DOTend_DASHconstant] = anon_sym_DOTend_DASHconstant,
  [sym_identifier] = sym_identifier,
  [sym_hex_number] = sym_hex_number,
  [sym_oct_number] = sym_oct_number,
  [sym_dec_number] = sym_dec_number,
  [sym_source_file] = sym_source_file,
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
      if (eof) ADVANCE(21);
      if (lookahead == '.') ADVANCE(4);
      if (lookahead == '0') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(28);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
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
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(23);
      END_STATE();
    case 19:
      if (lookahead == 't') ADVANCE(3);
      END_STATE();
    case 20:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_DOTconstant);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_DOTend_DASHconstant);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_hex_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_oct_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_dec_number);
      if (lookahead == 'x') ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(26);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_dec_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(28);
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
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOTconstant] = ACTIONS(1),
    [anon_sym_DOTend_DASHconstant] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_hex_number] = ACTIONS(1),
    [sym_oct_number] = ACTIONS(1),
    [sym_dec_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(7),
    [sym_constants] = STATE(8),
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
    ACTIONS(13), 1,
      sym_dec_number,
    STATE(6), 1,
      sym__number,
    ACTIONS(11), 2,
      sym_hex_number,
      sym_oct_number,
  [22] = 3,
    ACTIONS(9), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_DOTend_DASHconstant,
    STATE(5), 2,
      sym_constant_expression,
      aux_sym_constants_repeat1,
  [33] = 3,
    ACTIONS(17), 1,
      anon_sym_DOTend_DASHconstant,
    ACTIONS(19), 1,
      sym_identifier,
    STATE(5), 2,
      sym_constant_expression,
      aux_sym_constants_repeat1,
  [44] = 1,
    ACTIONS(22), 2,
      anon_sym_DOTend_DASHconstant,
      sym_identifier,
  [49] = 1,
    ACTIONS(24), 1,
      ts_builtin_sym_end,
  [53] = 1,
    ACTIONS(26), 1,
      ts_builtin_sym_end,
  [57] = 1,
    ACTIONS(28), 1,
      ts_builtin_sym_end,
  [61] = 1,
    ACTIONS(30), 1,
      ts_builtin_sym_end,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 11,
  [SMALL_STATE(4)] = 22,
  [SMALL_STATE(5)] = 33,
  [SMALL_STATE(6)] = 44,
  [SMALL_STATE(7)] = 49,
  [SMALL_STATE(8)] = 53,
  [SMALL_STATE(9)] = 57,
  [SMALL_STATE(10)] = 61,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constants_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constants_repeat1, 2), SHIFT_REPEAT(3),
  [22] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_expression, 2),
  [24] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constants, 2),
  [30] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constants, 3),
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
