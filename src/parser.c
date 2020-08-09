#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 48
#define LARGE_STATE_COUNT 17
#define SYMBOL_COUNT 51
#define ALIAS_COUNT 0
#define TOKEN_COUNT 36
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
  anon_sym_DOTconstant = 30,
  anon_sym_DOTend_DASHconstant = 31,
  sym_identifier = 32,
  sym_hex_number = 33,
  sym_oct_number = 34,
  sym_dec_number = 35,
  sym_source_file = 36,
  sym_main_program = 37,
  sym_method = 38,
  sym_parameters = 39,
  sym_variables = 40,
  sym__statement = 41,
  sym_command = 42,
  sym_constants = 43,
  sym_constant_expression = 44,
  sym__number = 45,
  aux_sym_source_file_repeat1 = 46,
  aux_sym_main_program_repeat1 = 47,
  aux_sym_parameters_repeat1 = 48,
  aux_sym_variables_repeat1 = 49,
  aux_sym_constants_repeat1 = 50,
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
      if (lookahead == '0') ADVANCE(138);
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
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(139);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
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
      if (lookahead == 't') ADVANCE(133);
      END_STATE();
    case 98:
      if (lookahead == 't') ADVANCE(134);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
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
      ACCEPT_TOKEN(anon_sym_DOTconstant);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_DOTend_DASHconstant);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_hex_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_oct_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_dec_number);
      if (lookahead == 'x') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(137);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_dec_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(139);
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
    [anon_sym_DOTconstant] = ACTIONS(1),
    [anon_sym_DOTend_DASHconstant] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_hex_number] = ACTIONS(1),
    [sym_oct_number] = ACTIONS(1),
    [sym_dec_number] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(45),
    [sym_main_program] = STATE(20),
    [sym_constants] = STATE(40),
    [anon_sym_DOTmain] = ACTIONS(3),
    [anon_sym_DOTconstant] = ACTIONS(5),
  },
  [2] = {
    [sym_variables] = STATE(7),
    [sym__statement] = STATE(8),
    [sym_command] = STATE(8),
    [sym__number] = STATE(8),
    [aux_sym_main_program_repeat1] = STATE(8),
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
    [sym_hex_number] = ACTIONS(13),
    [sym_oct_number] = ACTIONS(13),
    [sym_dec_number] = ACTIONS(15),
  },
  [3] = {
    [sym_variables] = STATE(6),
    [sym__statement] = STATE(10),
    [sym_command] = STATE(10),
    [sym__number] = STATE(10),
    [aux_sym_main_program_repeat1] = STATE(10),
    [anon_sym_DOTend_DASHmethod] = ACTIONS(17),
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
    [sym_identifier] = ACTIONS(19),
    [sym_hex_number] = ACTIONS(19),
    [sym_oct_number] = ACTIONS(19),
    [sym_dec_number] = ACTIONS(21),
  },
  [4] = {
    [sym__statement] = STATE(4),
    [sym_command] = STATE(4),
    [sym__number] = STATE(4),
    [aux_sym_main_program_repeat1] = STATE(4),
    [anon_sym_DOTend_DASHmain] = ACTIONS(23),
    [anon_sym_DOTend_DASHmethod] = ACTIONS(23),
    [anon_sym_DUP] = ACTIONS(25),
    [anon_sym_IADD] = ACTIONS(25),
    [anon_sym_IAND] = ACTIONS(25),
    [anon_sym_IOR] = ACTIONS(25),
    [anon_sym_IRETURN] = ACTIONS(25),
    [anon_sym_ISUB] = ACTIONS(25),
    [anon_sym_NOP] = ACTIONS(25),
    [anon_sym_POP] = ACTIONS(25),
    [anon_sym_SWAP] = ACTIONS(25),
    [anon_sym_WIDE] = ACTIONS(25),
    [anon_sym_BIPUSH] = ACTIONS(25),
    [anon_sym_GOTO] = ACTIONS(25),
    [anon_sym_IFEQ] = ACTIONS(25),
    [anon_sym_IFLT] = ACTIONS(25),
    [anon_sym_IF_ICMPEQ] = ACTIONS(25),
    [anon_sym_IINC] = ACTIONS(25),
    [anon_sym_ILOAD] = ACTIONS(25),
    [anon_sym_INVOKEVIRTUAL] = ACTIONS(25),
    [anon_sym_ISTORE] = ACTIONS(25),
    [anon_sym_LDC_W] = ACTIONS(25),
    [sym_identifier] = ACTIONS(28),
    [sym_hex_number] = ACTIONS(28),
    [sym_oct_number] = ACTIONS(28),
    [sym_dec_number] = ACTIONS(31),
  },
  [5] = {
    [sym__statement] = STATE(4),
    [sym_command] = STATE(4),
    [sym__number] = STATE(4),
    [aux_sym_main_program_repeat1] = STATE(4),
    [anon_sym_DOTend_DASHmain] = ACTIONS(34),
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
    [sym_identifier] = ACTIONS(36),
    [sym_hex_number] = ACTIONS(36),
    [sym_oct_number] = ACTIONS(36),
    [sym_dec_number] = ACTIONS(38),
  },
  [6] = {
    [sym__statement] = STATE(9),
    [sym_command] = STATE(9),
    [sym__number] = STATE(9),
    [aux_sym_main_program_repeat1] = STATE(9),
    [anon_sym_DOTend_DASHmethod] = ACTIONS(40),
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
    [sym_identifier] = ACTIONS(42),
    [sym_hex_number] = ACTIONS(42),
    [sym_oct_number] = ACTIONS(42),
    [sym_dec_number] = ACTIONS(44),
  },
  [7] = {
    [sym__statement] = STATE(5),
    [sym_command] = STATE(5),
    [sym__number] = STATE(5),
    [aux_sym_main_program_repeat1] = STATE(5),
    [anon_sym_DOTend_DASHmain] = ACTIONS(46),
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
    [sym_identifier] = ACTIONS(48),
    [sym_hex_number] = ACTIONS(48),
    [sym_oct_number] = ACTIONS(48),
    [sym_dec_number] = ACTIONS(50),
  },
  [8] = {
    [sym__statement] = STATE(4),
    [sym_command] = STATE(4),
    [sym__number] = STATE(4),
    [aux_sym_main_program_repeat1] = STATE(4),
    [anon_sym_DOTend_DASHmain] = ACTIONS(46),
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
    [sym_identifier] = ACTIONS(36),
    [sym_hex_number] = ACTIONS(36),
    [sym_oct_number] = ACTIONS(36),
    [sym_dec_number] = ACTIONS(38),
  },
  [9] = {
    [sym__statement] = STATE(4),
    [sym_command] = STATE(4),
    [sym__number] = STATE(4),
    [aux_sym_main_program_repeat1] = STATE(4),
    [anon_sym_DOTend_DASHmethod] = ACTIONS(52),
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
    [sym_identifier] = ACTIONS(36),
    [sym_hex_number] = ACTIONS(36),
    [sym_oct_number] = ACTIONS(36),
    [sym_dec_number] = ACTIONS(38),
  },
  [10] = {
    [sym__statement] = STATE(4),
    [sym_command] = STATE(4),
    [sym__number] = STATE(4),
    [aux_sym_main_program_repeat1] = STATE(4),
    [anon_sym_DOTend_DASHmethod] = ACTIONS(40),
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
    [sym_identifier] = ACTIONS(36),
    [sym_hex_number] = ACTIONS(36),
    [sym_oct_number] = ACTIONS(36),
    [sym_dec_number] = ACTIONS(38),
  },
  [11] = {
    [anon_sym_DOTend_DASHmethod] = ACTIONS(54),
    [anon_sym_DOTvar] = ACTIONS(54),
    [anon_sym_DUP] = ACTIONS(54),
    [anon_sym_IADD] = ACTIONS(54),
    [anon_sym_IAND] = ACTIONS(54),
    [anon_sym_IOR] = ACTIONS(54),
    [anon_sym_IRETURN] = ACTIONS(54),
    [anon_sym_ISUB] = ACTIONS(54),
    [anon_sym_NOP] = ACTIONS(54),
    [anon_sym_POP] = ACTIONS(54),
    [anon_sym_SWAP] = ACTIONS(54),
    [anon_sym_WIDE] = ACTIONS(54),
    [anon_sym_BIPUSH] = ACTIONS(54),
    [anon_sym_GOTO] = ACTIONS(54),
    [anon_sym_IFEQ] = ACTIONS(54),
    [anon_sym_IFLT] = ACTIONS(54),
    [anon_sym_IF_ICMPEQ] = ACTIONS(54),
    [anon_sym_IINC] = ACTIONS(54),
    [anon_sym_ILOAD] = ACTIONS(54),
    [anon_sym_INVOKEVIRTUAL] = ACTIONS(54),
    [anon_sym_ISTORE] = ACTIONS(54),
    [anon_sym_LDC_W] = ACTIONS(54),
    [sym_identifier] = ACTIONS(54),
    [sym_hex_number] = ACTIONS(54),
    [sym_oct_number] = ACTIONS(54),
    [sym_dec_number] = ACTIONS(56),
  },
  [12] = {
    [anon_sym_DOTend_DASHmain] = ACTIONS(58),
    [anon_sym_DOTend_DASHmethod] = ACTIONS(58),
    [anon_sym_DUP] = ACTIONS(58),
    [anon_sym_IADD] = ACTIONS(58),
    [anon_sym_IAND] = ACTIONS(58),
    [anon_sym_IOR] = ACTIONS(58),
    [anon_sym_IRETURN] = ACTIONS(58),
    [anon_sym_ISUB] = ACTIONS(58),
    [anon_sym_NOP] = ACTIONS(58),
    [anon_sym_POP] = ACTIONS(58),
    [anon_sym_SWAP] = ACTIONS(58),
    [anon_sym_WIDE] = ACTIONS(58),
    [anon_sym_BIPUSH] = ACTIONS(58),
    [anon_sym_GOTO] = ACTIONS(58),
    [anon_sym_IFEQ] = ACTIONS(58),
    [anon_sym_IFLT] = ACTIONS(58),
    [anon_sym_IF_ICMPEQ] = ACTIONS(58),
    [anon_sym_IINC] = ACTIONS(58),
    [anon_sym_ILOAD] = ACTIONS(58),
    [anon_sym_INVOKEVIRTUAL] = ACTIONS(58),
    [anon_sym_ISTORE] = ACTIONS(58),
    [anon_sym_LDC_W] = ACTIONS(58),
    [sym_identifier] = ACTIONS(58),
    [sym_hex_number] = ACTIONS(58),
    [sym_oct_number] = ACTIONS(58),
    [sym_dec_number] = ACTIONS(60),
  },
  [13] = {
    [anon_sym_DOTend_DASHmain] = ACTIONS(62),
    [anon_sym_DOTend_DASHmethod] = ACTIONS(62),
    [anon_sym_DUP] = ACTIONS(62),
    [anon_sym_IADD] = ACTIONS(62),
    [anon_sym_IAND] = ACTIONS(62),
    [anon_sym_IOR] = ACTIONS(62),
    [anon_sym_IRETURN] = ACTIONS(62),
    [anon_sym_ISUB] = ACTIONS(62),
    [anon_sym_NOP] = ACTIONS(62),
    [anon_sym_POP] = ACTIONS(62),
    [anon_sym_SWAP] = ACTIONS(62),
    [anon_sym_WIDE] = ACTIONS(62),
    [anon_sym_BIPUSH] = ACTIONS(62),
    [anon_sym_GOTO] = ACTIONS(62),
    [anon_sym_IFEQ] = ACTIONS(62),
    [anon_sym_IFLT] = ACTIONS(62),
    [anon_sym_IF_ICMPEQ] = ACTIONS(62),
    [anon_sym_IINC] = ACTIONS(62),
    [anon_sym_ILOAD] = ACTIONS(62),
    [anon_sym_INVOKEVIRTUAL] = ACTIONS(62),
    [anon_sym_ISTORE] = ACTIONS(62),
    [anon_sym_LDC_W] = ACTIONS(62),
    [sym_identifier] = ACTIONS(62),
    [sym_hex_number] = ACTIONS(62),
    [sym_oct_number] = ACTIONS(62),
    [sym_dec_number] = ACTIONS(64),
  },
  [14] = {
    [anon_sym_DOTend_DASHmethod] = ACTIONS(66),
    [anon_sym_DOTvar] = ACTIONS(66),
    [anon_sym_DUP] = ACTIONS(66),
    [anon_sym_IADD] = ACTIONS(66),
    [anon_sym_IAND] = ACTIONS(66),
    [anon_sym_IOR] = ACTIONS(66),
    [anon_sym_IRETURN] = ACTIONS(66),
    [anon_sym_ISUB] = ACTIONS(66),
    [anon_sym_NOP] = ACTIONS(66),
    [anon_sym_POP] = ACTIONS(66),
    [anon_sym_SWAP] = ACTIONS(66),
    [anon_sym_WIDE] = ACTIONS(66),
    [anon_sym_BIPUSH] = ACTIONS(66),
    [anon_sym_GOTO] = ACTIONS(66),
    [anon_sym_IFEQ] = ACTIONS(66),
    [anon_sym_IFLT] = ACTIONS(66),
    [anon_sym_IF_ICMPEQ] = ACTIONS(66),
    [anon_sym_IINC] = ACTIONS(66),
    [anon_sym_ILOAD] = ACTIONS(66),
    [anon_sym_INVOKEVIRTUAL] = ACTIONS(66),
    [anon_sym_ISTORE] = ACTIONS(66),
    [anon_sym_LDC_W] = ACTIONS(66),
    [sym_identifier] = ACTIONS(66),
    [sym_hex_number] = ACTIONS(66),
    [sym_oct_number] = ACTIONS(66),
    [sym_dec_number] = ACTIONS(68),
  },
  [15] = {
    [anon_sym_DOTend_DASHmain] = ACTIONS(70),
    [anon_sym_DOTend_DASHmethod] = ACTIONS(70),
    [anon_sym_DUP] = ACTIONS(70),
    [anon_sym_IADD] = ACTIONS(70),
    [anon_sym_IAND] = ACTIONS(70),
    [anon_sym_IOR] = ACTIONS(70),
    [anon_sym_IRETURN] = ACTIONS(70),
    [anon_sym_ISUB] = ACTIONS(70),
    [anon_sym_NOP] = ACTIONS(70),
    [anon_sym_POP] = ACTIONS(70),
    [anon_sym_SWAP] = ACTIONS(70),
    [anon_sym_WIDE] = ACTIONS(70),
    [anon_sym_BIPUSH] = ACTIONS(70),
    [anon_sym_GOTO] = ACTIONS(70),
    [anon_sym_IFEQ] = ACTIONS(70),
    [anon_sym_IFLT] = ACTIONS(70),
    [anon_sym_IF_ICMPEQ] = ACTIONS(70),
    [anon_sym_IINC] = ACTIONS(70),
    [anon_sym_ILOAD] = ACTIONS(70),
    [anon_sym_INVOKEVIRTUAL] = ACTIONS(70),
    [anon_sym_ISTORE] = ACTIONS(70),
    [anon_sym_LDC_W] = ACTIONS(70),
    [sym_identifier] = ACTIONS(70),
    [sym_hex_number] = ACTIONS(70),
    [sym_oct_number] = ACTIONS(70),
    [sym_dec_number] = ACTIONS(72),
  },
  [16] = {
    [anon_sym_DOTend_DASHmethod] = ACTIONS(74),
    [anon_sym_DOTvar] = ACTIONS(74),
    [anon_sym_DUP] = ACTIONS(74),
    [anon_sym_IADD] = ACTIONS(74),
    [anon_sym_IAND] = ACTIONS(74),
    [anon_sym_IOR] = ACTIONS(74),
    [anon_sym_IRETURN] = ACTIONS(74),
    [anon_sym_ISUB] = ACTIONS(74),
    [anon_sym_NOP] = ACTIONS(74),
    [anon_sym_POP] = ACTIONS(74),
    [anon_sym_SWAP] = ACTIONS(74),
    [anon_sym_WIDE] = ACTIONS(74),
    [anon_sym_BIPUSH] = ACTIONS(74),
    [anon_sym_GOTO] = ACTIONS(74),
    [anon_sym_IFEQ] = ACTIONS(74),
    [anon_sym_IFLT] = ACTIONS(74),
    [anon_sym_IF_ICMPEQ] = ACTIONS(74),
    [anon_sym_IINC] = ACTIONS(74),
    [anon_sym_ILOAD] = ACTIONS(74),
    [anon_sym_INVOKEVIRTUAL] = ACTIONS(74),
    [anon_sym_ISTORE] = ACTIONS(74),
    [anon_sym_LDC_W] = ACTIONS(74),
    [sym_identifier] = ACTIONS(74),
    [sym_hex_number] = ACTIONS(74),
    [sym_oct_number] = ACTIONS(74),
    [sym_dec_number] = ACTIONS(76),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    ACTIONS(80), 1,
      anon_sym_DOTmethod,
    STATE(25), 2,
      sym_method,
      aux_sym_source_file_repeat1,
  [11] = 3,
    ACTIONS(84), 1,
      sym_dec_number,
    STATE(32), 1,
      sym__number,
    ACTIONS(82), 2,
      sym_hex_number,
      sym_oct_number,
  [22] = 3,
    ACTIONS(86), 1,
      anon_sym_DOTend_DASHconstant,
    ACTIONS(88), 1,
      sym_identifier,
    STATE(24), 2,
      sym_constant_expression,
      aux_sym_constants_repeat1,
  [33] = 3,
    ACTIONS(80), 1,
      anon_sym_DOTmethod,
    ACTIONS(90), 1,
      ts_builtin_sym_end,
    STATE(21), 2,
      sym_method,
      aux_sym_source_file_repeat1,
  [44] = 3,
    ACTIONS(80), 1,
      anon_sym_DOTmethod,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
    STATE(25), 2,
      sym_method,
      aux_sym_source_file_repeat1,
  [55] = 3,
    ACTIONS(80), 1,
      anon_sym_DOTmethod,
    ACTIONS(92), 1,
      ts_builtin_sym_end,
    STATE(17), 2,
      sym_method,
      aux_sym_source_file_repeat1,
  [66] = 3,
    ACTIONS(88), 1,
      sym_identifier,
    ACTIONS(94), 1,
      anon_sym_DOTend_DASHconstant,
    STATE(19), 2,
      sym_constant_expression,
      aux_sym_constants_repeat1,
  [77] = 3,
    ACTIONS(96), 1,
      anon_sym_DOTend_DASHconstant,
    ACTIONS(98), 1,
      sym_identifier,
    STATE(24), 2,
      sym_constant_expression,
      aux_sym_constants_repeat1,
  [88] = 3,
    ACTIONS(101), 1,
      ts_builtin_sym_end,
    ACTIONS(103), 1,
      anon_sym_DOTmethod,
    STATE(25), 2,
      sym_method,
      aux_sym_source_file_repeat1,
  [99] = 3,
    ACTIONS(106), 1,
      anon_sym_COMMA,
    ACTIONS(109), 1,
      anon_sym_RPAREN,
    STATE(26), 1,
      aux_sym_parameters_repeat1,
  [109] = 3,
    ACTIONS(111), 1,
      anon_sym_DOTend_DASHvar,
    ACTIONS(113), 1,
      sym_identifier,
    STATE(28), 1,
      aux_sym_variables_repeat1,
  [119] = 3,
    ACTIONS(115), 1,
      anon_sym_DOTend_DASHvar,
    ACTIONS(117), 1,
      sym_identifier,
    STATE(28), 1,
      aux_sym_variables_repeat1,
  [129] = 3,
    ACTIONS(120), 1,
      anon_sym_COMMA,
    ACTIONS(122), 1,
      anon_sym_RPAREN,
    STATE(31), 1,
      aux_sym_parameters_repeat1,
  [139] = 3,
    ACTIONS(124), 1,
      anon_sym_DOTend_DASHvar,
    ACTIONS(126), 1,
      sym_identifier,
    STATE(27), 1,
      aux_sym_variables_repeat1,
  [149] = 3,
    ACTIONS(120), 1,
      anon_sym_COMMA,
    ACTIONS(128), 1,
      anon_sym_RPAREN,
    STATE(26), 1,
      aux_sym_parameters_repeat1,
  [159] = 1,
    ACTIONS(130), 2,
      anon_sym_DOTend_DASHconstant,
      sym_identifier,
  [164] = 2,
    ACTIONS(132), 1,
      anon_sym_LPAREN,
    STATE(3), 1,
      sym_parameters,
  [171] = 1,
    ACTIONS(134), 2,
      ts_builtin_sym_end,
      anon_sym_DOTmethod,
  [176] = 2,
    ACTIONS(136), 1,
      anon_sym_RPAREN,
    ACTIONS(138), 1,
      sym_identifier,
  [183] = 1,
    ACTIONS(109), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [188] = 1,
    ACTIONS(140), 2,
      ts_builtin_sym_end,
      anon_sym_DOTmethod,
  [193] = 1,
    ACTIONS(142), 2,
      ts_builtin_sym_end,
      anon_sym_DOTmethod,
  [198] = 1,
    ACTIONS(144), 2,
      ts_builtin_sym_end,
      anon_sym_DOTmethod,
  [203] = 2,
    ACTIONS(3), 1,
      anon_sym_DOTmain,
    STATE(22), 1,
      sym_main_program,
  [210] = 1,
    ACTIONS(146), 2,
      ts_builtin_sym_end,
      anon_sym_DOTmethod,
  [215] = 1,
    ACTIONS(148), 2,
      ts_builtin_sym_end,
      anon_sym_DOTmethod,
  [220] = 1,
    ACTIONS(150), 1,
      anon_sym_DOTmain,
  [224] = 1,
    ACTIONS(152), 1,
      sym_identifier,
  [228] = 1,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
  [232] = 1,
    ACTIONS(156), 1,
      anon_sym_DOTmain,
  [236] = 1,
    ACTIONS(158), 1,
      sym_identifier,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(17)] = 0,
  [SMALL_STATE(18)] = 11,
  [SMALL_STATE(19)] = 22,
  [SMALL_STATE(20)] = 33,
  [SMALL_STATE(21)] = 44,
  [SMALL_STATE(22)] = 55,
  [SMALL_STATE(23)] = 66,
  [SMALL_STATE(24)] = 77,
  [SMALL_STATE(25)] = 88,
  [SMALL_STATE(26)] = 99,
  [SMALL_STATE(27)] = 109,
  [SMALL_STATE(28)] = 119,
  [SMALL_STATE(29)] = 129,
  [SMALL_STATE(30)] = 139,
  [SMALL_STATE(31)] = 149,
  [SMALL_STATE(32)] = 159,
  [SMALL_STATE(33)] = 164,
  [SMALL_STATE(34)] = 171,
  [SMALL_STATE(35)] = 176,
  [SMALL_STATE(36)] = 183,
  [SMALL_STATE(37)] = 188,
  [SMALL_STATE(38)] = 193,
  [SMALL_STATE(39)] = 198,
  [SMALL_STATE(40)] = 203,
  [SMALL_STATE(41)] = 210,
  [SMALL_STATE(42)] = 215,
  [SMALL_STATE(43)] = 220,
  [SMALL_STATE(44)] = 224,
  [SMALL_STATE(45)] = 228,
  [SMALL_STATE(46)] = 232,
  [SMALL_STATE(47)] = 236,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_main_program_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_main_program_repeat1, 2), SHIFT_REPEAT(12),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_main_program_repeat1, 2), SHIFT_REPEAT(4),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_main_program_repeat1, 2), SHIFT_REPEAT(4),
  [34] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [36] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 2),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 2),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 1),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 1),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables, 2),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variables, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 3),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 3),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_variables, 3),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_variables, 3),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parameters, 4),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_parameters, 4),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_constants_repeat1, 2),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_constants_repeat1, 2), SHIFT_REPEAT(18),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(47),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2), SHIFT_REPEAT(44),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_parameters_repeat1, 2),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_variables_repeat1, 2),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_variables_repeat1, 2), SHIFT_REPEAT(28),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant_expression, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_program, 4),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_program, 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 4),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_program, 2),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 5),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_method, 6),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constants, 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [154] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constants, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
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
