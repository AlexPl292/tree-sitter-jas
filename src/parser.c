#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 50
#define LARGE_STATE_COUNT 12
#define SYMBOL_COUNT 54
#define ALIAS_COUNT 0
#define TOKEN_COUNT 38
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
  sym_comment = 10,
  anon_sym_DUP = 11,
  anon_sym_IADD = 12,
  anon_sym_IAND = 13,
  anon_sym_IOR = 14,
  anon_sym_IRETURN = 15,
  anon_sym_ISUB = 16,
  anon_sym_NOP = 17,
  anon_sym_POP = 18,
  anon_sym_SWAP = 19,
  anon_sym_WIDE = 20,
  anon_sym_BIPUSH = 21,
  anon_sym_GOTO = 22,
  anon_sym_IFEQ = 23,
  anon_sym_IFLT = 24,
  anon_sym_IF_ICMPEQ = 25,
  anon_sym_IINC = 26,
  anon_sym_ILOAD = 27,
  anon_sym_INVOKEVIRTUAL = 28,
  anon_sym_ISTORE = 29,
  anon_sym_LDC_W = 30,
  anon_sym_COLON = 31,
  anon_sym_DOTconstant = 32,
  anon_sym_DOTend_DASHconstant = 33,
  sym_identifier = 34,
  sym_hex_number = 35,
  sym_oct_number = 36,
  sym_dec_number = 37,
  sym_source_file = 38,
  sym_main_program = 39,
  sym_method = 40,
  sym_parameters = 41,
  sym_variables = 42,
  sym__statement = 43,
  sym_command = 44,
  sym_label = 45,
  sym_constants = 46,
  sym_constant_expression = 47,
  sym__number = 48,
  aux_sym_source_file_repeat1 = 49,
  aux_sym_main_program_repeat1 = 50,
  aux_sym_parameters_repeat1 = 51,
  aux_sym_variables_repeat1 = 52,
  aux_sym_constants_repeat1 = 53,
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
  [sym_comment] = "comment",
  [anon_sym_DUP] = "DUP",
  [anon_sym_IADD] = "IADD",
  [anon_sym_IAND] = "IAND",
  [anon_sym_IOR] = "IOR",
  [anon_sym_IRETURN] = "IRETURN",
  [anon_sym_ISUB] = "ISUB",
  [anon_sym_NOP] = "NOP",
  [anon_sym_POP] = "POP",
  [anon_sym_SWAP] = "SWAP",
  [anon_sym_WIDE] = "WIDE",
  [anon_sym_BIPUSH] = "BIPUSH",
  [anon_sym_GOTO] = "GOTO",
  [anon_sym_IFEQ] = "IFEQ",
  [anon_sym_IFLT] = "IFLT",
  [anon_sym_IF_ICMPEQ] = "IF_ICMPEQ",
  [anon_sym_IINC] = "IINC",
  [anon_sym_ILOAD] = "ILOAD",
  [anon_sym_INVOKEVIRTUAL] = "INVOKEVIRTUAL",
  [anon_sym_ISTORE] = "ISTORE",
  [anon_sym_LDC_W] = "LDC_W",
  [anon_sym_COLON] = ":",
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
  [sym_command] = "command",
  [sym_label] = "label",
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
  [sym_comment] = sym_comment,
  [anon_sym_DUP] = anon_sym_DUP,
  [anon_sym_IADD] = anon_sym_IADD,
  [anon_sym_IAND] = anon_sym_IAND,
  [anon_sym_IOR] = anon_sym_IOR,
  [anon_sym_IRETURN] = anon_sym_IRETURN,
  [anon_sym_ISUB] = anon_sym_ISUB,
  [anon_sym_NOP] = anon_sym_NOP,
  [anon_sym_POP] = anon_sym_POP,
  [anon_sym_SWAP] = anon_sym_SWAP,
  [anon_sym_WIDE] = anon_sym_WIDE,
  [anon_sym_BIPUSH] = anon_sym_BIPUSH,
  [anon_sym_GOTO] = anon_sym_GOTO,
  [anon_sym_IFEQ] = anon_sym_IFEQ,
  [anon_sym_IFLT] = anon_sym_IFLT,
  [anon_sym_IF_ICMPEQ] = anon_sym_IF_ICMPEQ,
  [anon_sym_IINC] = anon_sym_IINC,
  [anon_sym_ILOAD] = anon_sym_ILOAD,
  [anon_sym_INVOKEVIRTUAL] = anon_sym_INVOKEVIRTUAL,
  [anon_sym_ISTORE] = anon_sym_ISTORE,
  [anon_sym_LDC_W] = anon_sym_LDC_W,
  [anon_sym_COLON] = anon_sym_COLON,
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
  [sym_command] = sym_command,
  [sym_label] = sym_label,
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
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DUP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IADD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IAND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IOR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IRETURN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ISUB] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_NOP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SWAP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_WIDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BIPUSH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GOTO] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IFEQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IFLT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IF_ICMPEQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_IINC] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ILOAD] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_INVOKEVIRTUAL] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ISTORE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LDC_W] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
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
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
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
      if (eof) ADVANCE(107);
      if (lookahead == '(') ADVANCE(112);
      if (lookahead == ')') ADVANCE(114);
      if (lookahead == ',') ADVANCE(113);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == '0') ADVANCE(145);
      if (lookahead == ':') ADVANCE(139);
      if (lookahead == 'B') ADVANCE(24);
      if (lookahead == 'D') ADVANCE(59);
      if (lookahead == 'G') ADVANCE(33);
      if (lookahead == 'I') ADVANCE(3);
      if (lookahead == 'L') ADVANCE(11);
      if (lookahead == 'N') ADVANCE(38);
      if (lookahead == 'P') ADVANCE(39);
      if (lookahead == 'S') ADVANCE(64);
      if (lookahead == 'W') ADVANCE(25);
      if (lookahead == '\\') SKIP(106)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(146);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 1:
      if (lookahead == '-') ADVANCE(74);
      END_STATE();
    case 2:
      if (lookahead == '/') ADVANCE(117);
      END_STATE();
    case 3:
      if (lookahead == 'A') ADVANCE(16);
      if (lookahead == 'F') ADVANCE(17);
      if (lookahead == 'I') ADVANCE(32);
      if (lookahead == 'L') ADVANCE(37);
      if (lookahead == 'N') ADVANCE(63);
      if (lookahead == 'O') ADVANCE(48);
      if (lookahead == 'R') ADVANCE(22);
      if (lookahead == 'S') ADVANCE(57);
      END_STATE();
    case 4:
      if (lookahead == 'A') ADVANCE(29);
      END_STATE();
    case 5:
      if (lookahead == 'A') ADVANCE(14);
      END_STATE();
    case 6:
      if (lookahead == 'A') ADVANCE(43);
      END_STATE();
    case 7:
      if (lookahead == 'B') ADVANCE(124);
      END_STATE();
    case 8:
      if (lookahead == 'C') ADVANCE(66);
      END_STATE();
    case 9:
      if (lookahead == 'C') ADVANCE(134);
      END_STATE();
    case 10:
      if (lookahead == 'C') ADVANCE(30);
      END_STATE();
    case 11:
      if (lookahead == 'D') ADVANCE(8);
      END_STATE();
    case 12:
      if (lookahead == 'D') ADVANCE(120);
      END_STATE();
    case 13:
      if (lookahead == 'D') ADVANCE(121);
      END_STATE();
    case 14:
      if (lookahead == 'D') ADVANCE(135);
      END_STATE();
    case 15:
      if (lookahead == 'D') ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == 'D') ADVANCE(12);
      if (lookahead == 'N') ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(46);
      if (lookahead == 'L') ADVANCE(53);
      if (lookahead == '_') ADVANCE(26);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(128);
      END_STATE();
    case 19:
      if (lookahead == 'E') ADVANCE(137);
      END_STATE();
    case 20:
      if (lookahead == 'E') ADVANCE(62);
      END_STATE();
    case 21:
      if (lookahead == 'E') ADVANCE(47);
      END_STATE();
    case 22:
      if (lookahead == 'E') ADVANCE(54);
      END_STATE();
    case 23:
      if (lookahead == 'H') ADVANCE(129);
      END_STATE();
    case 24:
      if (lookahead == 'I') ADVANCE(44);
      END_STATE();
    case 25:
      if (lookahead == 'I') ADVANCE(15);
      END_STATE();
    case 26:
      if (lookahead == 'I') ADVANCE(10);
      END_STATE();
    case 27:
      if (lookahead == 'I') ADVANCE(50);
      END_STATE();
    case 28:
      if (lookahead == 'K') ADVANCE(20);
      END_STATE();
    case 29:
      if (lookahead == 'L') ADVANCE(136);
      END_STATE();
    case 30:
      if (lookahead == 'M') ADVANCE(45);
      END_STATE();
    case 31:
      if (lookahead == 'N') ADVANCE(123);
      END_STATE();
    case 32:
      if (lookahead == 'N') ADVANCE(9);
      END_STATE();
    case 33:
      if (lookahead == 'O') ADVANCE(56);
      END_STATE();
    case 34:
      if (lookahead == 'O') ADVANCE(130);
      END_STATE();
    case 35:
      if (lookahead == 'O') ADVANCE(28);
      END_STATE();
    case 36:
      if (lookahead == 'O') ADVANCE(51);
      END_STATE();
    case 37:
      if (lookahead == 'O') ADVANCE(5);
      END_STATE();
    case 38:
      if (lookahead == 'O') ADVANCE(41);
      END_STATE();
    case 39:
      if (lookahead == 'O') ADVANCE(42);
      END_STATE();
    case 40:
      if (lookahead == 'P') ADVANCE(119);
      END_STATE();
    case 41:
      if (lookahead == 'P') ADVANCE(125);
      END_STATE();
    case 42:
      if (lookahead == 'P') ADVANCE(126);
      END_STATE();
    case 43:
      if (lookahead == 'P') ADVANCE(127);
      END_STATE();
    case 44:
      if (lookahead == 'P') ADVANCE(58);
      END_STATE();
    case 45:
      if (lookahead == 'P') ADVANCE(21);
      END_STATE();
    case 46:
      if (lookahead == 'Q') ADVANCE(131);
      END_STATE();
    case 47:
      if (lookahead == 'Q') ADVANCE(133);
      END_STATE();
    case 48:
      if (lookahead == 'R') ADVANCE(122);
      END_STATE();
    case 49:
      if (lookahead == 'R') ADVANCE(31);
      END_STATE();
    case 50:
      if (lookahead == 'R') ADVANCE(55);
      END_STATE();
    case 51:
      if (lookahead == 'R') ADVANCE(19);
      END_STATE();
    case 52:
      if (lookahead == 'S') ADVANCE(23);
      END_STATE();
    case 53:
      if (lookahead == 'T') ADVANCE(132);
      END_STATE();
    case 54:
      if (lookahead == 'T') ADVANCE(60);
      END_STATE();
    case 55:
      if (lookahead == 'T') ADVANCE(61);
      END_STATE();
    case 56:
      if (lookahead == 'T') ADVANCE(34);
      END_STATE();
    case 57:
      if (lookahead == 'T') ADVANCE(36);
      if (lookahead == 'U') ADVANCE(7);
      END_STATE();
    case 58:
      if (lookahead == 'U') ADVANCE(52);
      END_STATE();
    case 59:
      if (lookahead == 'U') ADVANCE(40);
      END_STATE();
    case 60:
      if (lookahead == 'U') ADVANCE(49);
      END_STATE();
    case 61:
      if (lookahead == 'U') ADVANCE(4);
      END_STATE();
    case 62:
      if (lookahead == 'V') ADVANCE(27);
      END_STATE();
    case 63:
      if (lookahead == 'V') ADVANCE(35);
      END_STATE();
    case 64:
      if (lookahead == 'W') ADVANCE(6);
      END_STATE();
    case 65:
      if (lookahead == 'W') ADVANCE(138);
      END_STATE();
    case 66:
      if (lookahead == '_') ADVANCE(65);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(80);
      if (lookahead == 'e') ADVANCE(97);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(94);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(87);
      END_STATE();
    case 72:
      if (lookahead == 'a') ADVANCE(81);
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(89);
      if (lookahead == 'e') ADVANCE(82);
      if (lookahead == 'm') ADVANCE(67);
      if (lookahead == 'v') ADVANCE(68);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(92);
      if (lookahead == 'm') ADVANCE(72);
      if (lookahead == 'v') ADVANCE(69);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(1);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(110);
      END_STATE();
    case 77:
      if (lookahead == 'd') ADVANCE(111);
      END_STATE();
    case 78:
      if (lookahead == 'h') ADVANCE(90);
      END_STATE();
    case 79:
      if (lookahead == 'h') ADVANCE(91);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 81:
      if (lookahead == 'i') ADVANCE(85);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(75);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 88:
      if (lookahead == 'n') ADVANCE(96);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(77);
      END_STATE();
    case 92:
      if (lookahead == 'o') ADVANCE(88);
      END_STATE();
    case 93:
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 94:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 95:
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 96:
      if (lookahead == 's') ADVANCE(101);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(140);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(141);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 102:
      if (lookahead == 't') ADVANCE(79);
      END_STATE();
    case 103:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 104:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(117);
      if (lookahead == '\r') ADVANCE(118);
      END_STATE();
    case 105:
      if (eof) ADVANCE(107);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 106:
      if (eof) ADVANCE(107);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(105)
      END_STATE();
    case 107:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_DOTmain);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_DOTend_DASHmain);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_DOTmethod);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_DOTend_DASHmethod);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_DOTvar);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_DOTend_DASHvar);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(117);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(117);
      if (lookahead == '\\') ADVANCE(104);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_DUP);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_IADD);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_IAND);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_IOR);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_IRETURN);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_ISUB);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_NOP);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_POP);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_SWAP);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_WIDE);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_BIPUSH);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_GOTO);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_IFEQ);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_IFLT);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_IF_ICMPEQ);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_IINC);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_ILOAD);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(anon_sym_INVOKEVIRTUAL);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(anon_sym_ISTORE);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(anon_sym_LDC_W);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_DOTconstant);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_DOTend_DASHconstant);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_hex_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_oct_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_dec_number);
      if (lookahead == 'x') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(144);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_dec_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
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
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
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
    [sym_comment] = ACTIONS(3),
    [anon_sym_DUP] = ACTIONS(1),
    [anon_sym_IADD] = ACTIONS(1),
    [anon_sym_IAND] = ACTIONS(1),
    [anon_sym_IOR] = ACTIONS(1),
    [anon_sym_IRETURN] = ACTIONS(1),
    [anon_sym_ISUB] = ACTIONS(1),
    [anon_sym_NOP] = ACTIONS(1),
    [anon_sym_POP] = ACTIONS(1),
    [anon_sym_SWAP] = ACTIONS(1),
    [anon_sym_WIDE] = ACTIONS(1),
    [anon_sym_BIPUSH] = ACTIONS(1),
    [anon_sym_GOTO] = ACTIONS(1),
    [anon_sym_IFEQ] = ACTIONS(1),
    [anon_sym_IFLT] = ACTIONS(1),
    [anon_sym_IF_ICMPEQ] = ACTIONS(1),
    [anon_sym_IINC] = ACTIONS(1),
    [anon_sym_ILOAD] = ACTIONS(1),
    [anon_sym_INVOKEVIRTUAL] = ACTIONS(1),
    [anon_sym_ISTORE] = ACTIONS(1),
    [anon_sym_LDC_W] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_DOTconstant] = ACTIONS(1),
    [anon_sym_DOTend_DASHconstant] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_hex_number] = ACTIONS(1),
    [sym_oct_number] = ACTIONS(1),
    [sym_dec_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(45),
    [sym_main_program] = STATE(23),
    [sym_constants] = STATE(39),
    [anon_sym_DOTmain] = ACTIONS(5),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DOTconstant] = ACTIONS(7),
  },
  [2] = {
    [sym_variables] = STATE(7),
    [sym__statement] = STATE(10),
    [sym_command] = STATE(10),
    [sym_label] = STATE(10),
    [sym__number] = STATE(10),
    [aux_sym_main_program_repeat1] = STATE(10),
    [anon_sym_DOTend_DASHmain] = ACTIONS(9),
    [anon_sym_DOTvar] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DUP] = ACTIONS(13),
    [anon_sym_IADD] = ACTIONS(13),
    [anon_sym_IAND] = ACTIONS(13),
    [anon_sym_IOR] = ACTIONS(13),
    [anon_sym_IRETURN] = ACTIONS(13),
    [anon_sym_ISUB] = ACTIONS(13),
    [anon_sym_NOP] = ACTIONS(13),
    [anon_sym_POP] = ACTIONS(13),
    [anon_sym_SWAP] = ACTIONS(13),
    [anon_sym_WIDE] = ACTIONS(13),
    [anon_sym_BIPUSH] = ACTIONS(13),
    [anon_sym_GOTO] = ACTIONS(13),
    [anon_sym_IFEQ] = ACTIONS(13),
    [anon_sym_IFLT] = ACTIONS(13),
    [anon_sym_IF_ICMPEQ] = ACTIONS(13),
    [anon_sym_IINC] = ACTIONS(13),
    [anon_sym_ILOAD] = ACTIONS(13),
    [anon_sym_INVOKEVIRTUAL] = ACTIONS(13),
    [anon_sym_ISTORE] = ACTIONS(13),
    [anon_sym_LDC_W] = ACTIONS(13),
    [sym_identifier] = ACTIONS(15),
    [sym_hex_number] = ACTIONS(17),
    [sym_oct_number] = ACTIONS(17),
    [sym_dec_number] = ACTIONS(19),
  },
  [3] = {
    [sym_variables] = STATE(9),
    [sym__statement] = STATE(8),
    [sym_command] = STATE(8),
    [sym_label] = STATE(8),
    [sym__number] = STATE(8),
    [aux_sym_main_program_repeat1] = STATE(8),
    [anon_sym_DOTend_DASHmethod] = ACTIONS(21),
    [anon_sym_DOTvar] = ACTIONS(11),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DUP] = ACTIONS(13),
    [anon_sym_IADD] = ACTIONS(13),
    [anon_sym_IAND] = ACTIONS(13),
    [anon_sym_IOR] = ACTIONS(13),
    [anon_sym_IRETURN] = ACTIONS(13),
    [anon_sym_ISUB] = ACTIONS(13),
    [anon_sym_NOP] = ACTIONS(13),
    [anon_sym_POP] = ACTIONS(13),
    [anon_sym_SWAP] = ACTIONS(13),
    [anon_sym_WIDE] = ACTIONS(13),
    [anon_sym_BIPUSH] = ACTIONS(13),
    [anon_sym_GOTO] = ACTIONS(13),
    [anon_sym_IFEQ] = ACTIONS(13),
    [anon_sym_IFLT] = ACTIONS(13),
    [anon_sym_IF_ICMPEQ] = ACTIONS(13),
    [anon_sym_IINC] = ACTIONS(13),
    [anon_sym_ILOAD] = ACTIONS(13),
    [anon_sym_INVOKEVIRTUAL] = ACTIONS(13),
    [anon_sym_ISTORE] = ACTIONS(13),
    [anon_sym_LDC_W] = ACTIONS(13),
    [sym_identifier] = ACTIONS(15),
    [sym_hex_number] = ACTIONS(23),
    [sym_oct_number] = ACTIONS(23),
    [sym_dec_number] = ACTIONS(25),
  },
  [4] = {
    [sym__statement] = STATE(4),
    [sym_command] = STATE(4),
    [sym_label] = STATE(4),
    [sym__number] = STATE(4),
    [aux_sym_main_program_repeat1] = STATE(4),
    [anon_sym_DOTend_DASHmain] = ACTIONS(27),
    [anon_sym_DOTend_DASHmethod] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DUP] = ACTIONS(29),
    [anon_sym_IADD] = ACTIONS(29),
    [anon_sym_IAND] = ACTIONS(29),
    [anon_sym_IOR] = ACTIONS(29),
    [anon_sym_IRETURN] = ACTIONS(29),
    [anon_sym_ISUB] = ACTIONS(29),
    [anon_sym_NOP] = ACTIONS(29),
    [anon_sym_POP] = ACTIONS(29),
    [anon_sym_SWAP] = ACTIONS(29),
    [anon_sym_WIDE] = ACTIONS(29),
    [anon_sym_BIPUSH] = ACTIONS(29),
    [anon_sym_GOTO] = ACTIONS(29),
    [anon_sym_IFEQ] = ACTIONS(29),
    [anon_sym_IFLT] = ACTIONS(29),
    [anon_sym_IF_ICMPEQ] = ACTIONS(29),
    [anon_sym_IINC] = ACTIONS(29),
    [anon_sym_ILOAD] = ACTIONS(29),
    [anon_sym_INVOKEVIRTUAL] = ACTIONS(29),
    [anon_sym_ISTORE] = ACTIONS(29),
    [anon_sym_LDC_W] = ACTIONS(29),
    [sym_identifier] = ACTIONS(32),
    [sym_hex_number] = ACTIONS(35),
    [sym_oct_number] = ACTIONS(35),
    [sym_dec_number] = ACTIONS(38),
  },
  [5] = {
    [sym__statement] = STATE(4),
    [sym_command] = STATE(4),
    [sym_label] = STATE(4),
    [sym__number] = STATE(4),
    [aux_sym_main_program_repeat1] = STATE(4),
    [anon_sym_DOTend_DASHmain] = ACTIONS(41),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DUP] = ACTIONS(13),
    [anon_sym_IADD] = ACTIONS(13),
    [anon_sym_IAND] = ACTIONS(13),
    [anon_sym_IOR] = ACTIONS(13),
    [anon_sym_IRETURN] = ACTIONS(13),
    [anon_sym_ISUB] = ACTIONS(13),
    [anon_sym_NOP] = ACTIONS(13),
    [anon_sym_POP] = ACTIONS(13),
    [anon_sym_SWAP] = ACTIONS(13),
    [anon_sym_WIDE] = ACTIONS(13),
    [anon_sym_BIPUSH] = ACTIONS(13),
    [anon_sym_GOTO] = ACTIONS(13),
    [anon_sym_IFEQ] = ACTIONS(13),
    [anon_sym_IFLT] = ACTIONS(13),
    [anon_sym_IF_ICMPEQ] = ACTIONS(13),
    [anon_sym_IINC] = ACTIONS(13),
    [anon_sym_ILOAD] = ACTIONS(13),
    [anon_sym_INVOKEVIRTUAL] = ACTIONS(13),
    [anon_sym_ISTORE] = ACTIONS(13),
    [anon_sym_LDC_W] = ACTIONS(13),
    [sym_identifier] = ACTIONS(15),
    [sym_hex_number] = ACTIONS(43),
    [sym_oct_number] = ACTIONS(43),
    [sym_dec_number] = ACTIONS(45),
  },
  [6] = {
    [sym__statement] = STATE(4),
    [sym_command] = STATE(4),
    [sym_label] = STATE(4),
    [sym__number] = STATE(4),
    [aux_sym_main_program_repeat1] = STATE(4),
    [anon_sym_DOTend_DASHmethod] = ACTIONS(47),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DUP] = ACTIONS(13),
    [anon_sym_IADD] = ACTIONS(13),
    [anon_sym_IAND] = ACTIONS(13),
    [anon_sym_IOR] = ACTIONS(13),
    [anon_sym_IRETURN] = ACTIONS(13),
    [anon_sym_ISUB] = ACTIONS(13),
    [anon_sym_NOP] = ACTIONS(13),
    [anon_sym_POP] = ACTIONS(13),
    [anon_sym_SWAP] = ACTIONS(13),
    [anon_sym_WIDE] = ACTIONS(13),
    [anon_sym_BIPUSH] = ACTIONS(13),
    [anon_sym_GOTO] = ACTIONS(13),
    [anon_sym_IFEQ] = ACTIONS(13),
    [anon_sym_IFLT] = ACTIONS(13),
    [anon_sym_IF_ICMPEQ] = ACTIONS(13),
    [anon_sym_IINC] = ACTIONS(13),
    [anon_sym_ILOAD] = ACTIONS(13),
    [anon_sym_INVOKEVIRTUAL] = ACTIONS(13),
    [anon_sym_ISTORE] = ACTIONS(13),
    [anon_sym_LDC_W] = ACTIONS(13),
    [sym_identifier] = ACTIONS(15),
    [sym_hex_number] = ACTIONS(43),
    [sym_oct_number] = ACTIONS(43),
    [sym_dec_number] = ACTIONS(45),
  },
  [7] = {
    [sym__statement] = STATE(5),
    [sym_command] = STATE(5),
    [sym_label] = STATE(5),
    [sym__number] = STATE(5),
    [aux_sym_main_program_repeat1] = STATE(5),
    [anon_sym_DOTend_DASHmain] = ACTIONS(49),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DUP] = ACTIONS(13),
    [anon_sym_IADD] = ACTIONS(13),
    [anon_sym_IAND] = ACTIONS(13),
    [anon_sym_IOR] = ACTIONS(13),
    [anon_sym_IRETURN] = ACTIONS(13),
    [anon_sym_ISUB] = ACTIONS(13),
    [anon_sym_NOP] = ACTIONS(13),
    [anon_sym_POP] = ACTIONS(13),
    [anon_sym_SWAP] = ACTIONS(13),
    [anon_sym_WIDE] = ACTIONS(13),
    [anon_sym_BIPUSH] = ACTIONS(13),
    [anon_sym_GOTO] = ACTIONS(13),
    [anon_sym_IFEQ] = ACTIONS(13),
    [anon_sym_IFLT] = ACTIONS(13),
    [anon_sym_IF_ICMPEQ] = ACTIONS(13),
    [anon_sym_IINC] = ACTIONS(13),
    [anon_sym_ILOAD] = ACTIONS(13),
    [anon_sym_INVOKEVIRTUAL] = ACTIONS(13),
    [anon_sym_ISTORE] = ACTIONS(13),
    [anon_sym_LDC_W] = ACTIONS(13),
    [sym_identifier] = ACTIONS(15),
    [sym_hex_number] = ACTIONS(51),
    [sym_oct_number] = ACTIONS(51),
    [sym_dec_number] = ACTIONS(53),
  },
  [8] = {
    [sym__statement] = STATE(4),
    [sym_command] = STATE(4),
    [sym_label] = STATE(4),
    [sym__number] = STATE(4),
    [aux_sym_main_program_repeat1] = STATE(4),
    [anon_sym_DOTend_DASHmethod] = ACTIONS(55),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DUP] = ACTIONS(13),
    [anon_sym_IADD] = ACTIONS(13),
    [anon_sym_IAND] = ACTIONS(13),
    [anon_sym_IOR] = ACTIONS(13),
    [anon_sym_IRETURN] = ACTIONS(13),
    [anon_sym_ISUB] = ACTIONS(13),
    [anon_sym_NOP] = ACTIONS(13),
    [anon_sym_POP] = ACTIONS(13),
    [anon_sym_SWAP] = ACTIONS(13),
    [anon_sym_WIDE] = ACTIONS(13),
    [anon_sym_BIPUSH] = ACTIONS(13),
    [anon_sym_GOTO] = ACTIONS(13),
    [anon_sym_IFEQ] = ACTIONS(13),
    [anon_sym_IFLT] = ACTIONS(13),
    [anon_sym_IF_ICMPEQ] = ACTIONS(13),
    [anon_sym_IINC] = ACTIONS(13),
    [anon_sym_ILOAD] = ACTIONS(13),
    [anon_sym_INVOKEVIRTUAL] = ACTIONS(13),
    [anon_sym_ISTORE] = ACTIONS(13),
    [anon_sym_LDC_W] = ACTIONS(13),
    [sym_identifier] = ACTIONS(15),
    [sym_hex_number] = ACTIONS(43),
    [sym_oct_number] = ACTIONS(43),
    [sym_dec_number] = ACTIONS(45),
  },
  [9] = {
    [sym__statement] = STATE(6),
    [sym_command] = STATE(6),
    [sym_label] = STATE(6),
    [sym__number] = STATE(6),
    [aux_sym_main_program_repeat1] = STATE(6),
    [anon_sym_DOTend_DASHmethod] = ACTIONS(55),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DUP] = ACTIONS(13),
    [anon_sym_IADD] = ACTIONS(13),
    [anon_sym_IAND] = ACTIONS(13),
    [anon_sym_IOR] = ACTIONS(13),
    [anon_sym_IRETURN] = ACTIONS(13),
    [anon_sym_ISUB] = ACTIONS(13),
    [anon_sym_NOP] = ACTIONS(13),
    [anon_sym_POP] = ACTIONS(13),
    [anon_sym_SWAP] = ACTIONS(13),
    [anon_sym_WIDE] = ACTIONS(13),
    [anon_sym_BIPUSH] = ACTIONS(13),
    [anon_sym_GOTO] = ACTIONS(13),
    [anon_sym_IFEQ] = ACTIONS(13),
    [anon_sym_IFLT] = ACTIONS(13),
    [anon_sym_IF_ICMPEQ] = ACTIONS(13),
    [anon_sym_IINC] = ACTIONS(13),
    [anon_sym_ILOAD] = ACTIONS(13),
    [anon_sym_INVOKEVIRTUAL] = ACTIONS(13),
    [anon_sym_ISTORE] = ACTIONS(13),
    [anon_sym_LDC_W] = ACTIONS(13),
    [sym_identifier] = ACTIONS(15),
    [sym_hex_number] = ACTIONS(57),
    [sym_oct_number] = ACTIONS(57),
    [sym_dec_number] = ACTIONS(59),
  },
  [10] = {
    [sym__statement] = STATE(4),
    [sym_command] = STATE(4),
    [sym_label] = STATE(4),
    [sym__number] = STATE(4),
    [aux_sym_main_program_repeat1] = STATE(4),
    [anon_sym_DOTend_DASHmain] = ACTIONS(49),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DUP] = ACTIONS(13),
    [anon_sym_IADD] = ACTIONS(13),
    [anon_sym_IAND] = ACTIONS(13),
    [anon_sym_IOR] = ACTIONS(13),
    [anon_sym_IRETURN] = ACTIONS(13),
    [anon_sym_ISUB] = ACTIONS(13),
    [anon_sym_NOP] = ACTIONS(13),
    [anon_sym_POP] = ACTIONS(13),
    [anon_sym_SWAP] = ACTIONS(13),
    [anon_sym_WIDE] = ACTIONS(13),
    [anon_sym_BIPUSH] = ACTIONS(13),
    [anon_sym_GOTO] = ACTIONS(13),
    [anon_sym_IFEQ] = ACTIONS(13),
    [anon_sym_IFLT] = ACTIONS(13),
    [anon_sym_IF_ICMPEQ] = ACTIONS(13),
    [anon_sym_IINC] = ACTIONS(13),
    [anon_sym_ILOAD] = ACTIONS(13),
    [anon_sym_INVOKEVIRTUAL] = ACTIONS(13),
    [anon_sym_ISTORE] = ACTIONS(13),
    [anon_sym_LDC_W] = ACTIONS(13),
    [sym_identifier] = ACTIONS(15),
    [sym_hex_number] = ACTIONS(43),
    [sym_oct_number] = ACTIONS(43),
    [sym_dec_number] = ACTIONS(45),
  },
  [11] = {
    [anon_sym_DOTend_DASHmain] = ACTIONS(61),
    [anon_sym_DOTend_DASHmethod] = ACTIONS(61),
    [sym_comment] = ACTIONS(3),
    [anon_sym_DUP] = ACTIONS(61),
    [anon_sym_IADD] = ACTIONS(61),
    [anon_sym_IAND] = ACTIONS(61),
    [anon_sym_IOR] = ACTIONS(61),
    [anon_sym_IRETURN] = ACTIONS(61),
    [anon_sym_ISUB] = ACTIONS(61),
    [anon_sym_NOP] = ACTIONS(61),
    [anon_sym_POP] = ACTIONS(61),
    [anon_sym_SWAP] = ACTIONS(61),
    [anon_sym_WIDE] = ACTIONS(61),
    [anon_sym_BIPUSH] = ACTIONS(61),
    [anon_sym_GOTO] = ACTIONS(61),
    [anon_sym_IFEQ] = ACTIONS(61),
    [anon_sym_IFLT] = ACTIONS(61),
    [anon_sym_IF_ICMPEQ] = ACTIONS(61),
    [anon_sym_IINC] = ACTIONS(61),
    [anon_sym_ILOAD] = ACTIONS(61),
    [anon_sym_INVOKEVIRTUAL] = ACTIONS(61),
    [anon_sym_ISTORE] = ACTIONS(61),
    [anon_sym_LDC_W] = ACTIONS(61),
    [anon_sym_COLON] = ACTIONS(63),
    [sym_identifier] = ACTIONS(61),
    [sym_hex_number] = ACTIONS(61),
    [sym_oct_number] = ACTIONS(61),
    [sym_dec_number] = ACTIONS(65),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(69), 1,
      sym_dec_number,
    ACTIONS(67), 25,
      anon_sym_DOTend_DASHmain,
      anon_sym_DOTend_DASHmethod,
      anon_sym_DUP,
      anon_sym_IADD,
      anon_sym_IAND,
      anon_sym_IOR,
      anon_sym_IRETURN,
      anon_sym_ISUB,
      anon_sym_NOP,
      anon_sym_POP,
      anon_sym_SWAP,
      anon_sym_WIDE,
      anon_sym_BIPUSH,
      anon_sym_GOTO,
      anon_sym_IFEQ,
      anon_sym_IFLT,
      anon_sym_IF_ICMPEQ,
      anon_sym_IINC,
      anon_sym_ILOAD,
      anon_sym_INVOKEVIRTUAL,
      anon_sym_ISTORE,
      anon_sym_LDC_W,
      sym_identifier,
      sym_hex_number,
      sym_oct_number,
  [34] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(73), 1,
      sym_dec_number,
    ACTIONS(71), 25,
      anon_sym_DOTend_DASHmethod,
      anon_sym_DOTvar,
      anon_sym_DUP,
      anon_sym_IADD,
      anon_sym_IAND,
      anon_sym_IOR,
      anon_sym_IRETURN,
      anon_sym_ISUB,
      anon_sym_NOP,
      anon_sym_POP,
      anon_sym_SWAP,
      anon_sym_WIDE,
      anon_sym_BIPUSH,
      anon_sym_GOTO,
      anon_sym_IFEQ,
      anon_sym_IFLT,
      anon_sym_IF_ICMPEQ,
      anon_sym_IINC,
      anon_sym_ILOAD,
      anon_sym_INVOKEVIRTUAL,
      anon_sym_ISTORE,
      anon_sym_LDC_W,
      sym_identifier,
      sym_hex_number,
      sym_oct_number,
  [68] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(77), 1,
      sym_dec_number,
    ACTIONS(75), 25,
      anon_sym_DOTend_DASHmain,
      anon_sym_DOTend_DASHmethod,
      anon_sym_DUP,
      anon_sym_IADD,
      anon_sym_IAND,
      anon_sym_IOR,
      anon_sym_IRETURN,
      anon_sym_ISUB,
      anon_sym_NOP,
      anon_sym_POP,
      anon_sym_SWAP,
      anon_sym_WIDE,
      anon_sym_BIPUSH,
      anon_sym_GOTO,
      anon_sym_IFEQ,
      anon_sym_IFLT,
      anon_sym_IF_ICMPEQ,
      anon_sym_IINC,
      anon_sym_ILOAD,
      anon_sym_INVOKEVIRTUAL,
      anon_sym_ISTORE,
      anon_sym_LDC_W,
      sym_identifier,
      sym_hex_number,
      sym_oct_number,
  [102] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(81), 1,
      sym_dec_number,
    ACTIONS(79), 25,
      anon_sym_DOTend_DASHmethod,
      anon_sym_DOTvar,
      anon_sym_DUP,
      anon_sym_IADD,
      anon_sym_IAND,
      anon_sym_IOR,
      anon_sym_IRETURN,
      anon_sym_ISUB,
      anon_sym_NOP,
      anon_sym_POP,
      anon_sym_SWAP,
      anon_sym_WIDE,
      anon_sym_BIPUSH,
      anon_sym_GOTO,
      anon_sym_IFEQ,
      anon_sym_IFLT,
      anon_sym_IF_ICMPEQ,
      anon_sym_IINC,
      anon_sym_ILOAD,
      anon_sym_INVOKEVIRTUAL,
      anon_sym_ISTORE,
      anon_sym_LDC_W,
      sym_identifier,
      sym_hex_number,
      sym_oct_number,
  [136] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(85), 1,
      sym_dec_number,
    ACTIONS(83), 25,
      anon_sym_DOTend_DASHmethod,
      anon_sym_DOTvar,
      anon_sym_DUP,
      anon_sym_IADD,
      anon_sym_IAND,
      anon_sym_IOR,
      anon_sym_IRETURN,
      anon_sym_ISUB,
      anon_sym_NOP,
      anon_sym_POP,
      anon_sym_SWAP,
      anon_sym_WIDE,
      anon_sym_BIPUSH,
      anon_sym_GOTO,
      anon_sym_IFEQ,
      anon_sym_IFLT,
      anon_sym_IF_ICMPEQ,
      anon_sym_IINC,
      anon_sym_ILOAD,
      anon_sym_INVOKEVIRTUAL,
      anon_sym_ISTORE,
      anon_sym_LDC_W,
      sym_identifier,
      sym_hex_number,
      sym_oct_number,
  [170] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(89), 1,
      sym_dec_number,
    ACTIONS(87), 25,
      anon_sym_DOTend_DASHmain,
      anon_sym_DOTend_DASHmethod,
      anon_sym_DUP,
      anon_sym_IADD,
      anon_sym_IAND,
      anon_sym_IOR,
      anon_sym_IRETURN,
      anon_sym_ISUB,
      anon_sym_NOP,
      anon_sym_POP,
      anon_sym_SWAP,
      anon_sym_WIDE,
      anon_sym_BIPUSH,
      anon_sym_GOTO,
      anon_sym_IFEQ,
      anon_sym_IFLT,
      anon_sym_IF_ICMPEQ,
      anon_sym_IINC,
      anon_sym_ILOAD,
      anon_sym_INVOKEVIRTUAL,
      anon_sym_ISTORE,
      anon_sym_LDC_W,
      sym_identifier,
      sym_hex_number,
      sym_oct_number,
  [204] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(93), 1,
      sym_dec_number,
    ACTIONS(91), 25,
      anon_sym_DOTend_DASHmain,
      anon_sym_DOTend_DASHmethod,
      anon_sym_DUP,
      anon_sym_IADD,
      anon_sym_IAND,
      anon_sym_IOR,
      anon_sym_IRETURN,
      anon_sym_ISUB,
      anon_sym_NOP,
      anon_sym_POP,
      anon_sym_SWAP,
      anon_sym_WIDE,
      anon_sym_BIPUSH,
      anon_sym_GOTO,
      anon_sym_IFEQ,
      anon_sym_IFLT,
      anon_sym_IF_ICMPEQ,
      anon_sym_IINC,
      anon_sym_ILOAD,
      anon_sym_INVOKEVIRTUAL,
      anon_sym_ISTORE,
      anon_sym_LDC_W,
      sym_identifier,
      sym_hex_number,
      sym_oct_number,
  [238] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    ACTIONS(97), 1,
      anon_sym_DOTmethod,
    STATE(24), 2,
      sym_method,
      aux_sym_source_file_repeat1,
  [252] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(95), 1,
      ts_builtin_sym_end,
    ACTIONS(97), 1,
      anon_sym_DOTmethod,
    STATE(26), 2,
      sym_method,
      aux_sym_source_file_repeat1,
  [266] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_DOTend_DASHconstant,
    ACTIONS(101), 1,
      sym_identifier,
    STATE(21), 2,
      sym_constant_expression,
      aux_sym_constants_repeat1,
  [280] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_DOTend_DASHconstant,
    ACTIONS(106), 1,
      sym_identifier,
    STATE(27), 2,
      sym_constant_expression,
      aux_sym_constants_repeat1,
  [294] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_DOTmethod,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
    STATE(19), 2,
      sym_method,
      aux_sym_source_file_repeat1,
  [308] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      ts_builtin_sym_end,
    ACTIONS(112), 1,
      anon_sym_DOTmethod,
    STATE(24), 2,
      sym_method,
      aux_sym_source_file_repeat1,
  [322] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(117), 1,
      sym_dec_number,
    STATE(43), 1,
      sym__number,
    ACTIONS(115), 2,
      sym_hex_number,
      sym_oct_number,
  [336] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(97), 1,
      anon_sym_DOTmethod,
    ACTIONS(119), 1,
      ts_builtin_sym_end,
    STATE(24), 2,
      sym_method,
      aux_sym_source_file_repeat1,
  [350] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      sym_identifier,
    ACTIONS(121), 1,
      anon_sym_DOTend_DASHconstant,
    STATE(21), 2,
      sym_constant_expression,
      aux_sym_constants_repeat1,
  [364] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_DOTend_DASHvar,
    ACTIONS(125), 1,
      sym_identifier,
    STATE(32), 1,
      aux_sym_variables_repeat1,
  [377] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_DOTend_DASHvar,
    ACTIONS(129), 1,
      sym_identifier,
    STATE(28), 1,
      aux_sym_variables_repeat1,
  [390] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_COMMA,
    ACTIONS(134), 1,
      anon_sym_RPAREN,
    STATE(30), 1,
      aux_sym_parameters_repeat1,
  [403] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_COMMA,
    ACTIONS(138), 1,
      anon_sym_RPAREN,
    STATE(30), 1,
      aux_sym_parameters_repeat1,
  [416] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 1,
      anon_sym_DOTend_DASHvar,
    ACTIONS(142), 1,
      sym_identifier,
    STATE(32), 1,
      aux_sym_variables_repeat1,
  [429] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 1,
      anon_sym_COMMA,
    ACTIONS(145), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      aux_sym_parameters_repeat1,
  [442] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_RPAREN,
    ACTIONS(149), 1,
      sym_identifier,
  [452] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    STATE(3), 1,
      sym_parameters,
  [462] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(153), 2,
      ts_builtin_sym_end,
      anon_sym_DOTmethod,
  [470] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 2,
      ts_builtin_sym_end,
      anon_sym_DOTmethod,
  [478] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 2,
      ts_builtin_sym_end,
      anon_sym_DOTmethod,
  [486] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(5), 1,
      anon_sym_DOTmain,
    STATE(20), 1,
      sym_main_program,
  [496] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(159), 2,
      ts_builtin_sym_end,
      anon_sym_DOTmethod,
  [504] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 2,
      ts_builtin_sym_end,
      anon_sym_DOTmethod,
  [512] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [520] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(163), 2,
      anon_sym_DOTend_DASHconstant,
      sym_identifier,
  [528] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(165), 2,
      ts_builtin_sym_end,
      anon_sym_DOTmethod,
  [536] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(167), 1,
      ts_builtin_sym_end,
  [543] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(169), 1,
      sym_identifier,
  [550] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_DOTmain,
  [557] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_identifier,
  [564] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_DOTmain,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(12)] = 0,
  [SMALL_STATE(13)] = 34,
  [SMALL_STATE(14)] = 68,
  [SMALL_STATE(15)] = 102,
  [SMALL_STATE(16)] = 136,
  [SMALL_STATE(17)] = 170,
  [SMALL_STATE(18)] = 204,
  [SMALL_STATE(19)] = 238,
  [SMALL_STATE(20)] = 252,
  [SMALL_STATE(21)] = 266,
  [SMALL_STATE(22)] = 280,
  [SMALL_STATE(23)] = 294,
  [SMALL_STATE(24)] = 308,
  [SMALL_STATE(25)] = 322,
  [SMALL_STATE(26)] = 336,
  [SMALL_STATE(27)] = 350,
  [SMALL_STATE(28)] = 364,
  [SMALL_STATE(29)] = 377,
  [SMALL_STATE(30)] = 390,
  [SMALL_STATE(31)] = 403,
  [SMALL_STATE(32)] = 416,
  [SMALL_STATE(33)] = 429,
  [SMALL_STATE(34)] = 442,
  [SMALL_STATE(35)] = 452,
  [SMALL_STATE(36)] = 462,
  [SMALL_STATE(37)] = 470,
  [SMALL_STATE(38)] = 478,
  [SMALL_STATE(39)] = 486,
  [SMALL_STATE(40)] = 496,
  [SMALL_STATE(41)] = 504,
  [SMALL_STATE(42)] = 512,
  [SMALL_STATE(43)] = 520,
  [SMALL_STATE(44)] = 528,
  [SMALL_STATE(45)] = 536,
  [SMALL_STATE(46)] = 543,
  [SMALL_STATE(47)] = 550,
  [SMALL_STATE(48)] = 557,
  [SMALL_STATE(49)] = 564,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_main_program_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_main_program_repeat1, 2), SHIFT_REPEAT(14),
  [32] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_main_program_repeat1, 2), SHIFT_REPEAT(11),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_main_program_repeat1, 2), SHIFT_REPEAT(4),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_main_program_repeat1, 2), SHIFT_REPEAT(4),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables, 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variables, 2),
  [71] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [73] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 4),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables, 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variables, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constants_repeat1, 2),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constants_repeat1, 2), SHIFT_REPEAT(25),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [117] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [131] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(46),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_repeat1, 2),
  [142] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_repeat1, 2), SHIFT_REPEAT(32),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_program, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 4),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_program, 4),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_program, 2),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 5),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_expression, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 6),
  [167] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constants, 2),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constants, 3),
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
