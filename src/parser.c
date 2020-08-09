#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 50
#define LARGE_STATE_COUNT 12
#define SYMBOL_COUNT 53
#define ALIAS_COUNT 0
#define TOKEN_COUNT 37
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
  anon_sym_IADD = 11,
  anon_sym_IAND = 12,
  anon_sym_IOR = 13,
  anon_sym_IRETURN = 14,
  anon_sym_ISUB = 15,
  anon_sym_NOP = 16,
  anon_sym_POP = 17,
  anon_sym_SWAP = 18,
  anon_sym_WIDE = 19,
  anon_sym_BIPUSH = 20,
  anon_sym_GOTO = 21,
  anon_sym_IFEQ = 22,
  anon_sym_IFLT = 23,
  anon_sym_IF_ICMPEQ = 24,
  anon_sym_IINC = 25,
  anon_sym_ILOAD = 26,
  anon_sym_INVOKEVIRTUAL = 27,
  anon_sym_ISTORE = 28,
  anon_sym_LDC_W = 29,
  anon_sym_COLON = 30,
  anon_sym_DOTconstant = 31,
  anon_sym_DOTend_DASHconstant = 32,
  sym_identifier = 33,
  sym_hex_number = 34,
  sym_oct_number = 35,
  sym_dec_number = 36,
  sym_source_file = 37,
  sym_main_program = 38,
  sym_method = 39,
  sym_parameters = 40,
  sym_variables = 41,
  sym__statement = 42,
  sym_command = 43,
  sym_label = 44,
  sym_constants = 45,
  sym_constant_expression = 46,
  sym__number = 47,
  aux_sym_source_file_repeat1 = 48,
  aux_sym_main_program_repeat1 = 49,
  aux_sym_parameters_repeat1 = 50,
  aux_sym_variables_repeat1 = 51,
  aux_sym_constants_repeat1 = 52,
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
      if (eof) ADVANCE(103);
      if (lookahead == '(') ADVANCE(108);
      if (lookahead == ')') ADVANCE(110);
      if (lookahead == ',') ADVANCE(109);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == '0') ADVANCE(139);
      if (lookahead == ':') ADVANCE(133);
      if (lookahead == 'B') ADVANCE(23);
      if (lookahead == 'D') ADVANCE(58);
      if (lookahead == 'G') ADVANCE(32);
      if (lookahead == 'I') ADVANCE(2);
      if (lookahead == 'L') ADVANCE(10);
      if (lookahead == 'N') ADVANCE(37);
      if (lookahead == 'P') ADVANCE(38);
      if (lookahead == 'S') ADVANCE(63);
      if (lookahead == 'W') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(140);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 1:
      if (lookahead == '-') ADVANCE(73);
      END_STATE();
    case 2:
      if (lookahead == 'A') ADVANCE(15);
      if (lookahead == 'F') ADVANCE(16);
      if (lookahead == 'I') ADVANCE(31);
      if (lookahead == 'L') ADVANCE(36);
      if (lookahead == 'N') ADVANCE(62);
      if (lookahead == 'O') ADVANCE(47);
      if (lookahead == 'R') ADVANCE(21);
      if (lookahead == 'S') ADVANCE(56);
      END_STATE();
    case 3:
      if (lookahead == 'A') ADVANCE(28);
      END_STATE();
    case 4:
      if (lookahead == 'A') ADVANCE(13);
      END_STATE();
    case 5:
      if (lookahead == 'A') ADVANCE(42);
      END_STATE();
    case 6:
      if (lookahead == 'B') ADVANCE(118);
      END_STATE();
    case 7:
      if (lookahead == 'C') ADVANCE(65);
      END_STATE();
    case 8:
      if (lookahead == 'C') ADVANCE(128);
      END_STATE();
    case 9:
      if (lookahead == 'C') ADVANCE(29);
      END_STATE();
    case 10:
      if (lookahead == 'D') ADVANCE(7);
      END_STATE();
    case 11:
      if (lookahead == 'D') ADVANCE(114);
      END_STATE();
    case 12:
      if (lookahead == 'D') ADVANCE(115);
      END_STATE();
    case 13:
      if (lookahead == 'D') ADVANCE(129);
      END_STATE();
    case 14:
      if (lookahead == 'D') ADVANCE(17);
      END_STATE();
    case 15:
      if (lookahead == 'D') ADVANCE(11);
      if (lookahead == 'N') ADVANCE(12);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(45);
      if (lookahead == 'L') ADVANCE(52);
      if (lookahead == '_') ADVANCE(25);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(122);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(131);
      END_STATE();
    case 19:
      if (lookahead == 'E') ADVANCE(61);
      END_STATE();
    case 20:
      if (lookahead == 'E') ADVANCE(46);
      END_STATE();
    case 21:
      if (lookahead == 'E') ADVANCE(53);
      END_STATE();
    case 22:
      if (lookahead == 'H') ADVANCE(123);
      END_STATE();
    case 23:
      if (lookahead == 'I') ADVANCE(43);
      END_STATE();
    case 24:
      if (lookahead == 'I') ADVANCE(14);
      END_STATE();
    case 25:
      if (lookahead == 'I') ADVANCE(9);
      END_STATE();
    case 26:
      if (lookahead == 'I') ADVANCE(49);
      END_STATE();
    case 27:
      if (lookahead == 'K') ADVANCE(19);
      END_STATE();
    case 28:
      if (lookahead == 'L') ADVANCE(130);
      END_STATE();
    case 29:
      if (lookahead == 'M') ADVANCE(44);
      END_STATE();
    case 30:
      if (lookahead == 'N') ADVANCE(117);
      END_STATE();
    case 31:
      if (lookahead == 'N') ADVANCE(8);
      END_STATE();
    case 32:
      if (lookahead == 'O') ADVANCE(55);
      END_STATE();
    case 33:
      if (lookahead == 'O') ADVANCE(124);
      END_STATE();
    case 34:
      if (lookahead == 'O') ADVANCE(27);
      END_STATE();
    case 35:
      if (lookahead == 'O') ADVANCE(50);
      END_STATE();
    case 36:
      if (lookahead == 'O') ADVANCE(4);
      END_STATE();
    case 37:
      if (lookahead == 'O') ADVANCE(40);
      END_STATE();
    case 38:
      if (lookahead == 'O') ADVANCE(41);
      END_STATE();
    case 39:
      if (lookahead == 'P') ADVANCE(113);
      END_STATE();
    case 40:
      if (lookahead == 'P') ADVANCE(119);
      END_STATE();
    case 41:
      if (lookahead == 'P') ADVANCE(120);
      END_STATE();
    case 42:
      if (lookahead == 'P') ADVANCE(121);
      END_STATE();
    case 43:
      if (lookahead == 'P') ADVANCE(57);
      END_STATE();
    case 44:
      if (lookahead == 'P') ADVANCE(20);
      END_STATE();
    case 45:
      if (lookahead == 'Q') ADVANCE(125);
      END_STATE();
    case 46:
      if (lookahead == 'Q') ADVANCE(127);
      END_STATE();
    case 47:
      if (lookahead == 'R') ADVANCE(116);
      END_STATE();
    case 48:
      if (lookahead == 'R') ADVANCE(30);
      END_STATE();
    case 49:
      if (lookahead == 'R') ADVANCE(54);
      END_STATE();
    case 50:
      if (lookahead == 'R') ADVANCE(18);
      END_STATE();
    case 51:
      if (lookahead == 'S') ADVANCE(22);
      END_STATE();
    case 52:
      if (lookahead == 'T') ADVANCE(126);
      END_STATE();
    case 53:
      if (lookahead == 'T') ADVANCE(59);
      END_STATE();
    case 54:
      if (lookahead == 'T') ADVANCE(60);
      END_STATE();
    case 55:
      if (lookahead == 'T') ADVANCE(33);
      END_STATE();
    case 56:
      if (lookahead == 'T') ADVANCE(35);
      if (lookahead == 'U') ADVANCE(6);
      END_STATE();
    case 57:
      if (lookahead == 'U') ADVANCE(51);
      END_STATE();
    case 58:
      if (lookahead == 'U') ADVANCE(39);
      END_STATE();
    case 59:
      if (lookahead == 'U') ADVANCE(48);
      END_STATE();
    case 60:
      if (lookahead == 'U') ADVANCE(3);
      END_STATE();
    case 61:
      if (lookahead == 'V') ADVANCE(26);
      END_STATE();
    case 62:
      if (lookahead == 'V') ADVANCE(34);
      END_STATE();
    case 63:
      if (lookahead == 'W') ADVANCE(5);
      END_STATE();
    case 64:
      if (lookahead == 'W') ADVANCE(132);
      END_STATE();
    case 65:
      if (lookahead == '_') ADVANCE(64);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(79);
      if (lookahead == 'e') ADVANCE(96);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(92);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(93);
      END_STATE();
    case 69:
      if (lookahead == 'a') ADVANCE(85);
      END_STATE();
    case 70:
      if (lookahead == 'a') ADVANCE(86);
      END_STATE();
    case 71:
      if (lookahead == 'a') ADVANCE(80);
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(88);
      if (lookahead == 'e') ADVANCE(81);
      if (lookahead == 'm') ADVANCE(66);
      if (lookahead == 'v') ADVANCE(67);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(91);
      if (lookahead == 'm') ADVANCE(71);
      if (lookahead == 'v') ADVANCE(68);
      END_STATE();
    case 74:
      if (lookahead == 'd') ADVANCE(1);
      END_STATE();
    case 75:
      if (lookahead == 'd') ADVANCE(106);
      END_STATE();
    case 76:
      if (lookahead == 'd') ADVANCE(107);
      END_STATE();
    case 77:
      if (lookahead == 'h') ADVANCE(89);
      END_STATE();
    case 78:
      if (lookahead == 'h') ADVANCE(90);
      END_STATE();
    case 79:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 80:
      if (lookahead == 'i') ADVANCE(84);
      END_STATE();
    case 81:
      if (lookahead == 'n') ADVANCE(74);
      END_STATE();
    case 82:
      if (lookahead == 'n') ADVANCE(94);
      END_STATE();
    case 83:
      if (lookahead == 'n') ADVANCE(104);
      END_STATE();
    case 84:
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 85:
      if (lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 86:
      if (lookahead == 'n') ADVANCE(98);
      END_STATE();
    case 87:
      if (lookahead == 'n') ADVANCE(95);
      END_STATE();
    case 88:
      if (lookahead == 'o') ADVANCE(82);
      END_STATE();
    case 89:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 90:
      if (lookahead == 'o') ADVANCE(76);
      END_STATE();
    case 91:
      if (lookahead == 'o') ADVANCE(87);
      END_STATE();
    case 92:
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 93:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 94:
      if (lookahead == 's') ADVANCE(99);
      END_STATE();
    case 95:
      if (lookahead == 's') ADVANCE(100);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(77);
      END_STATE();
    case 97:
      if (lookahead == 't') ADVANCE(134);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 99:
      if (lookahead == 't') ADVANCE(69);
      END_STATE();
    case 100:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 101:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 102:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_DOTmain);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_DOTend_DASHmain);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_DOTmethod);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_DOTend_DASHmethod);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_DOTvar);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_DOTend_DASHvar);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_DUP);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_IADD);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_IAND);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_IOR);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_IRETURN);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(anon_sym_ISUB);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_NOP);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_POP);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_SWAP);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_WIDE);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_BIPUSH);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_GOTO);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_IFEQ);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_IFLT);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_IF_ICMPEQ);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_IINC);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_ILOAD);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_INVOKEVIRTUAL);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_ISTORE);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_LDC_W);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_DOTconstant);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_DOTend_DASHconstant);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_hex_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_oct_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_dec_number);
      if (lookahead == 'x') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_dec_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(140);
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
    [anon_sym_DOTmain] = ACTIONS(3),
    [anon_sym_DOTconstant] = ACTIONS(5),
  },
  [2] = {
    [sym_variables] = STATE(7),
    [sym__statement] = STATE(10),
    [sym_command] = STATE(10),
    [sym_label] = STATE(10),
    [sym__number] = STATE(10),
    [aux_sym_main_program_repeat1] = STATE(10),
    [anon_sym_DOTend_DASHmain] = ACTIONS(7),
    [anon_sym_DOTvar] = ACTIONS(9),
    [anon_sym_DUP] = ACTIONS(11),
    [anon_sym_IADD] = ACTIONS(11),
    [anon_sym_IAND] = ACTIONS(11),
    [anon_sym_IOR] = ACTIONS(11),
    [anon_sym_IRETURN] = ACTIONS(11),
    [anon_sym_ISUB] = ACTIONS(11),
    [anon_sym_NOP] = ACTIONS(11),
    [anon_sym_POP] = ACTIONS(11),
    [anon_sym_SWAP] = ACTIONS(11),
    [anon_sym_WIDE] = ACTIONS(11),
    [anon_sym_BIPUSH] = ACTIONS(11),
    [anon_sym_GOTO] = ACTIONS(11),
    [anon_sym_IFEQ] = ACTIONS(11),
    [anon_sym_IFLT] = ACTIONS(11),
    [anon_sym_IF_ICMPEQ] = ACTIONS(11),
    [anon_sym_IINC] = ACTIONS(11),
    [anon_sym_ILOAD] = ACTIONS(11),
    [anon_sym_INVOKEVIRTUAL] = ACTIONS(11),
    [anon_sym_ISTORE] = ACTIONS(11),
    [anon_sym_LDC_W] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [sym_hex_number] = ACTIONS(15),
    [sym_oct_number] = ACTIONS(15),
    [sym_dec_number] = ACTIONS(17),
  },
  [3] = {
    [sym_variables] = STATE(9),
    [sym__statement] = STATE(8),
    [sym_command] = STATE(8),
    [sym_label] = STATE(8),
    [sym__number] = STATE(8),
    [aux_sym_main_program_repeat1] = STATE(8),
    [anon_sym_DOTend_DASHmethod] = ACTIONS(19),
    [anon_sym_DOTvar] = ACTIONS(9),
    [anon_sym_DUP] = ACTIONS(11),
    [anon_sym_IADD] = ACTIONS(11),
    [anon_sym_IAND] = ACTIONS(11),
    [anon_sym_IOR] = ACTIONS(11),
    [anon_sym_IRETURN] = ACTIONS(11),
    [anon_sym_ISUB] = ACTIONS(11),
    [anon_sym_NOP] = ACTIONS(11),
    [anon_sym_POP] = ACTIONS(11),
    [anon_sym_SWAP] = ACTIONS(11),
    [anon_sym_WIDE] = ACTIONS(11),
    [anon_sym_BIPUSH] = ACTIONS(11),
    [anon_sym_GOTO] = ACTIONS(11),
    [anon_sym_IFEQ] = ACTIONS(11),
    [anon_sym_IFLT] = ACTIONS(11),
    [anon_sym_IF_ICMPEQ] = ACTIONS(11),
    [anon_sym_IINC] = ACTIONS(11),
    [anon_sym_ILOAD] = ACTIONS(11),
    [anon_sym_INVOKEVIRTUAL] = ACTIONS(11),
    [anon_sym_ISTORE] = ACTIONS(11),
    [anon_sym_LDC_W] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [sym_hex_number] = ACTIONS(21),
    [sym_oct_number] = ACTIONS(21),
    [sym_dec_number] = ACTIONS(23),
  },
  [4] = {
    [sym__statement] = STATE(4),
    [sym_command] = STATE(4),
    [sym_label] = STATE(4),
    [sym__number] = STATE(4),
    [aux_sym_main_program_repeat1] = STATE(4),
    [anon_sym_DOTend_DASHmain] = ACTIONS(25),
    [anon_sym_DOTend_DASHmethod] = ACTIONS(25),
    [anon_sym_DUP] = ACTIONS(27),
    [anon_sym_IADD] = ACTIONS(27),
    [anon_sym_IAND] = ACTIONS(27),
    [anon_sym_IOR] = ACTIONS(27),
    [anon_sym_IRETURN] = ACTIONS(27),
    [anon_sym_ISUB] = ACTIONS(27),
    [anon_sym_NOP] = ACTIONS(27),
    [anon_sym_POP] = ACTIONS(27),
    [anon_sym_SWAP] = ACTIONS(27),
    [anon_sym_WIDE] = ACTIONS(27),
    [anon_sym_BIPUSH] = ACTIONS(27),
    [anon_sym_GOTO] = ACTIONS(27),
    [anon_sym_IFEQ] = ACTIONS(27),
    [anon_sym_IFLT] = ACTIONS(27),
    [anon_sym_IF_ICMPEQ] = ACTIONS(27),
    [anon_sym_IINC] = ACTIONS(27),
    [anon_sym_ILOAD] = ACTIONS(27),
    [anon_sym_INVOKEVIRTUAL] = ACTIONS(27),
    [anon_sym_ISTORE] = ACTIONS(27),
    [anon_sym_LDC_W] = ACTIONS(27),
    [sym_identifier] = ACTIONS(30),
    [sym_hex_number] = ACTIONS(33),
    [sym_oct_number] = ACTIONS(33),
    [sym_dec_number] = ACTIONS(36),
  },
  [5] = {
    [sym__statement] = STATE(4),
    [sym_command] = STATE(4),
    [sym_label] = STATE(4),
    [sym__number] = STATE(4),
    [aux_sym_main_program_repeat1] = STATE(4),
    [anon_sym_DOTend_DASHmain] = ACTIONS(39),
    [anon_sym_DUP] = ACTIONS(11),
    [anon_sym_IADD] = ACTIONS(11),
    [anon_sym_IAND] = ACTIONS(11),
    [anon_sym_IOR] = ACTIONS(11),
    [anon_sym_IRETURN] = ACTIONS(11),
    [anon_sym_ISUB] = ACTIONS(11),
    [anon_sym_NOP] = ACTIONS(11),
    [anon_sym_POP] = ACTIONS(11),
    [anon_sym_SWAP] = ACTIONS(11),
    [anon_sym_WIDE] = ACTIONS(11),
    [anon_sym_BIPUSH] = ACTIONS(11),
    [anon_sym_GOTO] = ACTIONS(11),
    [anon_sym_IFEQ] = ACTIONS(11),
    [anon_sym_IFLT] = ACTIONS(11),
    [anon_sym_IF_ICMPEQ] = ACTIONS(11),
    [anon_sym_IINC] = ACTIONS(11),
    [anon_sym_ILOAD] = ACTIONS(11),
    [anon_sym_INVOKEVIRTUAL] = ACTIONS(11),
    [anon_sym_ISTORE] = ACTIONS(11),
    [anon_sym_LDC_W] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [sym_hex_number] = ACTIONS(41),
    [sym_oct_number] = ACTIONS(41),
    [sym_dec_number] = ACTIONS(43),
  },
  [6] = {
    [sym__statement] = STATE(4),
    [sym_command] = STATE(4),
    [sym_label] = STATE(4),
    [sym__number] = STATE(4),
    [aux_sym_main_program_repeat1] = STATE(4),
    [anon_sym_DOTend_DASHmethod] = ACTIONS(45),
    [anon_sym_DUP] = ACTIONS(11),
    [anon_sym_IADD] = ACTIONS(11),
    [anon_sym_IAND] = ACTIONS(11),
    [anon_sym_IOR] = ACTIONS(11),
    [anon_sym_IRETURN] = ACTIONS(11),
    [anon_sym_ISUB] = ACTIONS(11),
    [anon_sym_NOP] = ACTIONS(11),
    [anon_sym_POP] = ACTIONS(11),
    [anon_sym_SWAP] = ACTIONS(11),
    [anon_sym_WIDE] = ACTIONS(11),
    [anon_sym_BIPUSH] = ACTIONS(11),
    [anon_sym_GOTO] = ACTIONS(11),
    [anon_sym_IFEQ] = ACTIONS(11),
    [anon_sym_IFLT] = ACTIONS(11),
    [anon_sym_IF_ICMPEQ] = ACTIONS(11),
    [anon_sym_IINC] = ACTIONS(11),
    [anon_sym_ILOAD] = ACTIONS(11),
    [anon_sym_INVOKEVIRTUAL] = ACTIONS(11),
    [anon_sym_ISTORE] = ACTIONS(11),
    [anon_sym_LDC_W] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [sym_hex_number] = ACTIONS(41),
    [sym_oct_number] = ACTIONS(41),
    [sym_dec_number] = ACTIONS(43),
  },
  [7] = {
    [sym__statement] = STATE(5),
    [sym_command] = STATE(5),
    [sym_label] = STATE(5),
    [sym__number] = STATE(5),
    [aux_sym_main_program_repeat1] = STATE(5),
    [anon_sym_DOTend_DASHmain] = ACTIONS(47),
    [anon_sym_DUP] = ACTIONS(11),
    [anon_sym_IADD] = ACTIONS(11),
    [anon_sym_IAND] = ACTIONS(11),
    [anon_sym_IOR] = ACTIONS(11),
    [anon_sym_IRETURN] = ACTIONS(11),
    [anon_sym_ISUB] = ACTIONS(11),
    [anon_sym_NOP] = ACTIONS(11),
    [anon_sym_POP] = ACTIONS(11),
    [anon_sym_SWAP] = ACTIONS(11),
    [anon_sym_WIDE] = ACTIONS(11),
    [anon_sym_BIPUSH] = ACTIONS(11),
    [anon_sym_GOTO] = ACTIONS(11),
    [anon_sym_IFEQ] = ACTIONS(11),
    [anon_sym_IFLT] = ACTIONS(11),
    [anon_sym_IF_ICMPEQ] = ACTIONS(11),
    [anon_sym_IINC] = ACTIONS(11),
    [anon_sym_ILOAD] = ACTIONS(11),
    [anon_sym_INVOKEVIRTUAL] = ACTIONS(11),
    [anon_sym_ISTORE] = ACTIONS(11),
    [anon_sym_LDC_W] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [sym_hex_number] = ACTIONS(49),
    [sym_oct_number] = ACTIONS(49),
    [sym_dec_number] = ACTIONS(51),
  },
  [8] = {
    [sym__statement] = STATE(4),
    [sym_command] = STATE(4),
    [sym_label] = STATE(4),
    [sym__number] = STATE(4),
    [aux_sym_main_program_repeat1] = STATE(4),
    [anon_sym_DOTend_DASHmethod] = ACTIONS(53),
    [anon_sym_DUP] = ACTIONS(11),
    [anon_sym_IADD] = ACTIONS(11),
    [anon_sym_IAND] = ACTIONS(11),
    [anon_sym_IOR] = ACTIONS(11),
    [anon_sym_IRETURN] = ACTIONS(11),
    [anon_sym_ISUB] = ACTIONS(11),
    [anon_sym_NOP] = ACTIONS(11),
    [anon_sym_POP] = ACTIONS(11),
    [anon_sym_SWAP] = ACTIONS(11),
    [anon_sym_WIDE] = ACTIONS(11),
    [anon_sym_BIPUSH] = ACTIONS(11),
    [anon_sym_GOTO] = ACTIONS(11),
    [anon_sym_IFEQ] = ACTIONS(11),
    [anon_sym_IFLT] = ACTIONS(11),
    [anon_sym_IF_ICMPEQ] = ACTIONS(11),
    [anon_sym_IINC] = ACTIONS(11),
    [anon_sym_ILOAD] = ACTIONS(11),
    [anon_sym_INVOKEVIRTUAL] = ACTIONS(11),
    [anon_sym_ISTORE] = ACTIONS(11),
    [anon_sym_LDC_W] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [sym_hex_number] = ACTIONS(41),
    [sym_oct_number] = ACTIONS(41),
    [sym_dec_number] = ACTIONS(43),
  },
  [9] = {
    [sym__statement] = STATE(6),
    [sym_command] = STATE(6),
    [sym_label] = STATE(6),
    [sym__number] = STATE(6),
    [aux_sym_main_program_repeat1] = STATE(6),
    [anon_sym_DOTend_DASHmethod] = ACTIONS(53),
    [anon_sym_DUP] = ACTIONS(11),
    [anon_sym_IADD] = ACTIONS(11),
    [anon_sym_IAND] = ACTIONS(11),
    [anon_sym_IOR] = ACTIONS(11),
    [anon_sym_IRETURN] = ACTIONS(11),
    [anon_sym_ISUB] = ACTIONS(11),
    [anon_sym_NOP] = ACTIONS(11),
    [anon_sym_POP] = ACTIONS(11),
    [anon_sym_SWAP] = ACTIONS(11),
    [anon_sym_WIDE] = ACTIONS(11),
    [anon_sym_BIPUSH] = ACTIONS(11),
    [anon_sym_GOTO] = ACTIONS(11),
    [anon_sym_IFEQ] = ACTIONS(11),
    [anon_sym_IFLT] = ACTIONS(11),
    [anon_sym_IF_ICMPEQ] = ACTIONS(11),
    [anon_sym_IINC] = ACTIONS(11),
    [anon_sym_ILOAD] = ACTIONS(11),
    [anon_sym_INVOKEVIRTUAL] = ACTIONS(11),
    [anon_sym_ISTORE] = ACTIONS(11),
    [anon_sym_LDC_W] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [sym_hex_number] = ACTIONS(55),
    [sym_oct_number] = ACTIONS(55),
    [sym_dec_number] = ACTIONS(57),
  },
  [10] = {
    [sym__statement] = STATE(4),
    [sym_command] = STATE(4),
    [sym_label] = STATE(4),
    [sym__number] = STATE(4),
    [aux_sym_main_program_repeat1] = STATE(4),
    [anon_sym_DOTend_DASHmain] = ACTIONS(47),
    [anon_sym_DUP] = ACTIONS(11),
    [anon_sym_IADD] = ACTIONS(11),
    [anon_sym_IAND] = ACTIONS(11),
    [anon_sym_IOR] = ACTIONS(11),
    [anon_sym_IRETURN] = ACTIONS(11),
    [anon_sym_ISUB] = ACTIONS(11),
    [anon_sym_NOP] = ACTIONS(11),
    [anon_sym_POP] = ACTIONS(11),
    [anon_sym_SWAP] = ACTIONS(11),
    [anon_sym_WIDE] = ACTIONS(11),
    [anon_sym_BIPUSH] = ACTIONS(11),
    [anon_sym_GOTO] = ACTIONS(11),
    [anon_sym_IFEQ] = ACTIONS(11),
    [anon_sym_IFLT] = ACTIONS(11),
    [anon_sym_IF_ICMPEQ] = ACTIONS(11),
    [anon_sym_IINC] = ACTIONS(11),
    [anon_sym_ILOAD] = ACTIONS(11),
    [anon_sym_INVOKEVIRTUAL] = ACTIONS(11),
    [anon_sym_ISTORE] = ACTIONS(11),
    [anon_sym_LDC_W] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [sym_hex_number] = ACTIONS(41),
    [sym_oct_number] = ACTIONS(41),
    [sym_dec_number] = ACTIONS(43),
  },
  [11] = {
    [anon_sym_DOTend_DASHmain] = ACTIONS(59),
    [anon_sym_DOTend_DASHmethod] = ACTIONS(59),
    [anon_sym_DUP] = ACTIONS(59),
    [anon_sym_IADD] = ACTIONS(59),
    [anon_sym_IAND] = ACTIONS(59),
    [anon_sym_IOR] = ACTIONS(59),
    [anon_sym_IRETURN] = ACTIONS(59),
    [anon_sym_ISUB] = ACTIONS(59),
    [anon_sym_NOP] = ACTIONS(59),
    [anon_sym_POP] = ACTIONS(59),
    [anon_sym_SWAP] = ACTIONS(59),
    [anon_sym_WIDE] = ACTIONS(59),
    [anon_sym_BIPUSH] = ACTIONS(59),
    [anon_sym_GOTO] = ACTIONS(59),
    [anon_sym_IFEQ] = ACTIONS(59),
    [anon_sym_IFLT] = ACTIONS(59),
    [anon_sym_IF_ICMPEQ] = ACTIONS(59),
    [anon_sym_IINC] = ACTIONS(59),
    [anon_sym_ILOAD] = ACTIONS(59),
    [anon_sym_INVOKEVIRTUAL] = ACTIONS(59),
    [anon_sym_ISTORE] = ACTIONS(59),
    [anon_sym_LDC_W] = ACTIONS(59),
    [anon_sym_COLON] = ACTIONS(61),
    [sym_identifier] = ACTIONS(59),
    [sym_hex_number] = ACTIONS(59),
    [sym_oct_number] = ACTIONS(59),
    [sym_dec_number] = ACTIONS(63),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(67), 1,
      sym_dec_number,
    ACTIONS(65), 25,
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
  [31] = 2,
    ACTIONS(71), 1,
      sym_dec_number,
    ACTIONS(69), 25,
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
  [62] = 2,
    ACTIONS(75), 1,
      sym_dec_number,
    ACTIONS(73), 25,
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
  [93] = 2,
    ACTIONS(79), 1,
      sym_dec_number,
    ACTIONS(77), 25,
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
  [124] = 2,
    ACTIONS(83), 1,
      sym_dec_number,
    ACTIONS(81), 25,
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
  [155] = 2,
    ACTIONS(87), 1,
      sym_dec_number,
    ACTIONS(85), 25,
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
  [186] = 2,
    ACTIONS(91), 1,
      sym_dec_number,
    ACTIONS(89), 25,
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
  [217] = 3,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    ACTIONS(95), 1,
      anon_sym_DOTmethod,
    STATE(24), 2,
      sym_method,
      aux_sym_source_file_repeat1,
  [228] = 3,
    ACTIONS(93), 1,
      ts_builtin_sym_end,
    ACTIONS(95), 1,
      anon_sym_DOTmethod,
    STATE(26), 2,
      sym_method,
      aux_sym_source_file_repeat1,
  [239] = 3,
    ACTIONS(97), 1,
      anon_sym_DOTend_DASHconstant,
    ACTIONS(99), 1,
      sym_identifier,
    STATE(21), 2,
      sym_constant_expression,
      aux_sym_constants_repeat1,
  [250] = 3,
    ACTIONS(102), 1,
      anon_sym_DOTend_DASHconstant,
    ACTIONS(104), 1,
      sym_identifier,
    STATE(27), 2,
      sym_constant_expression,
      aux_sym_constants_repeat1,
  [261] = 3,
    ACTIONS(95), 1,
      anon_sym_DOTmethod,
    ACTIONS(106), 1,
      ts_builtin_sym_end,
    STATE(19), 2,
      sym_method,
      aux_sym_source_file_repeat1,
  [272] = 3,
    ACTIONS(108), 1,
      ts_builtin_sym_end,
    ACTIONS(110), 1,
      anon_sym_DOTmethod,
    STATE(24), 2,
      sym_method,
      aux_sym_source_file_repeat1,
  [283] = 3,
    ACTIONS(115), 1,
      sym_dec_number,
    STATE(43), 1,
      sym__number,
    ACTIONS(113), 2,
      sym_hex_number,
      sym_oct_number,
  [294] = 3,
    ACTIONS(95), 1,
      anon_sym_DOTmethod,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    STATE(24), 2,
      sym_method,
      aux_sym_source_file_repeat1,
  [305] = 3,
    ACTIONS(104), 1,
      sym_identifier,
    ACTIONS(119), 1,
      anon_sym_DOTend_DASHconstant,
    STATE(21), 2,
      sym_constant_expression,
      aux_sym_constants_repeat1,
  [316] = 3,
    ACTIONS(121), 1,
      anon_sym_DOTend_DASHvar,
    ACTIONS(123), 1,
      sym_identifier,
    STATE(32), 1,
      aux_sym_variables_repeat1,
  [326] = 3,
    ACTIONS(125), 1,
      anon_sym_DOTend_DASHvar,
    ACTIONS(127), 1,
      sym_identifier,
    STATE(28), 1,
      aux_sym_variables_repeat1,
  [336] = 3,
    ACTIONS(129), 1,
      anon_sym_COMMA,
    ACTIONS(132), 1,
      anon_sym_RPAREN,
    STATE(30), 1,
      aux_sym_parameters_repeat1,
  [346] = 3,
    ACTIONS(134), 1,
      anon_sym_COMMA,
    ACTIONS(136), 1,
      anon_sym_RPAREN,
    STATE(30), 1,
      aux_sym_parameters_repeat1,
  [356] = 3,
    ACTIONS(138), 1,
      anon_sym_DOTend_DASHvar,
    ACTIONS(140), 1,
      sym_identifier,
    STATE(32), 1,
      aux_sym_variables_repeat1,
  [366] = 3,
    ACTIONS(134), 1,
      anon_sym_COMMA,
    ACTIONS(143), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      aux_sym_parameters_repeat1,
  [376] = 2,
    ACTIONS(145), 1,
      anon_sym_RPAREN,
    ACTIONS(147), 1,
      sym_identifier,
  [383] = 2,
    ACTIONS(149), 1,
      anon_sym_LPAREN,
    STATE(3), 1,
      sym_parameters,
  [390] = 1,
    ACTIONS(151), 2,
      ts_builtin_sym_end,
      anon_sym_DOTmethod,
  [395] = 1,
    ACTIONS(153), 2,
      ts_builtin_sym_end,
      anon_sym_DOTmethod,
  [400] = 1,
    ACTIONS(155), 2,
      ts_builtin_sym_end,
      anon_sym_DOTmethod,
  [405] = 2,
    ACTIONS(3), 1,
      anon_sym_DOTmain,
    STATE(20), 1,
      sym_main_program,
  [412] = 1,
    ACTIONS(157), 2,
      ts_builtin_sym_end,
      anon_sym_DOTmethod,
  [417] = 1,
    ACTIONS(159), 2,
      ts_builtin_sym_end,
      anon_sym_DOTmethod,
  [422] = 1,
    ACTIONS(132), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [427] = 1,
    ACTIONS(161), 2,
      anon_sym_DOTend_DASHconstant,
      sym_identifier,
  [432] = 1,
    ACTIONS(163), 2,
      ts_builtin_sym_end,
      anon_sym_DOTmethod,
  [437] = 1,
    ACTIONS(165), 1,
      ts_builtin_sym_end,
  [441] = 1,
    ACTIONS(167), 1,
      sym_identifier,
  [445] = 1,
    ACTIONS(169), 1,
      anon_sym_DOTmain,
  [449] = 1,
    ACTIONS(171), 1,
      sym_identifier,
  [453] = 1,
    ACTIONS(173), 1,
      anon_sym_DOTmain,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(12)] = 0,
  [SMALL_STATE(13)] = 31,
  [SMALL_STATE(14)] = 62,
  [SMALL_STATE(15)] = 93,
  [SMALL_STATE(16)] = 124,
  [SMALL_STATE(17)] = 155,
  [SMALL_STATE(18)] = 186,
  [SMALL_STATE(19)] = 217,
  [SMALL_STATE(20)] = 228,
  [SMALL_STATE(21)] = 239,
  [SMALL_STATE(22)] = 250,
  [SMALL_STATE(23)] = 261,
  [SMALL_STATE(24)] = 272,
  [SMALL_STATE(25)] = 283,
  [SMALL_STATE(26)] = 294,
  [SMALL_STATE(27)] = 305,
  [SMALL_STATE(28)] = 316,
  [SMALL_STATE(29)] = 326,
  [SMALL_STATE(30)] = 336,
  [SMALL_STATE(31)] = 346,
  [SMALL_STATE(32)] = 356,
  [SMALL_STATE(33)] = 366,
  [SMALL_STATE(34)] = 376,
  [SMALL_STATE(35)] = 383,
  [SMALL_STATE(36)] = 390,
  [SMALL_STATE(37)] = 395,
  [SMALL_STATE(38)] = 400,
  [SMALL_STATE(39)] = 405,
  [SMALL_STATE(40)] = 412,
  [SMALL_STATE(41)] = 417,
  [SMALL_STATE(42)] = 422,
  [SMALL_STATE(43)] = 427,
  [SMALL_STATE(44)] = 432,
  [SMALL_STATE(45)] = 437,
  [SMALL_STATE(46)] = 441,
  [SMALL_STATE(47)] = 445,
  [SMALL_STATE(48)] = 449,
  [SMALL_STATE(49)] = 453,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_main_program_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_main_program_repeat1, 2), SHIFT_REPEAT(14),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_main_program_repeat1, 2), SHIFT_REPEAT(11),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_main_program_repeat1, 2), SHIFT_REPEAT(4),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_main_program_repeat1, 2), SHIFT_REPEAT(4),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__statement, 1),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variables, 2),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 4),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 2),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables, 3),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variables, 3),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constants_repeat1, 2),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constants_repeat1, 2), SHIFT_REPEAT(25),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [123] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(46),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_repeat1, 2),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_repeat1, 2), SHIFT_REPEAT(32),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_program, 3),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 4),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_program, 4),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_program, 2),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 5),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_expression, 2),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 6),
  [165] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constants, 2),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constants, 3),
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
