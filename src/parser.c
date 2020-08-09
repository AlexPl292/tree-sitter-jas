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
  sym_comment = 37,
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
  [sym_comment] = "comment",
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
  [sym_comment] = sym_comment,
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
  [sym_comment] = {
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
      if (eof) ADVANCE(51);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == ')') ADVANCE(58);
      if (lookahead == ',') ADVANCE(57);
      if (lookahead == '.') ADVANCE(13);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '0') ADVANCE(151);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == 'B') ADVANCE(105);
      if (lookahead == 'D') ADVANCE(140);
      if (lookahead == 'G') ADVANCE(114);
      if (lookahead == 'I') ADVANCE(84);
      if (lookahead == 'L') ADVANCE(92);
      if (lookahead == 'N') ADVANCE(119);
      if (lookahead == 'P') ADVANCE(120);
      if (lookahead == 'S') ADVANCE(145);
      if (lookahead == 'W') ADVANCE(106);
      if (lookahead == '\\') SKIP(50)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(152);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(3)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(58);
      if (lookahead == '.') ADVANCE(20);
      if (lookahead == '/') ADVANCE(6);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 4:
      if (lookahead == '-') ADVANCE(14);
      END_STATE();
    case 5:
      if (lookahead == '-') ADVANCE(15);
      END_STATE();
    case 6:
      if (lookahead == '/') ADVANCE(153);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(23);
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(37);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(30);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(24);
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(33);
      if (lookahead == 'e') ADVANCE(25);
      if (lookahead == 'm') ADVANCE(7);
      if (lookahead == 'v') ADVANCE(8);
      END_STATE();
    case 14:
      if (lookahead == 'c') ADVANCE(36);
      if (lookahead == 'm') ADVANCE(12);
      if (lookahead == 'v') ADVANCE(9);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(36);
      if (lookahead == 'v') ADVANCE(9);
      END_STATE();
    case 16:
      if (lookahead == 'd') ADVANCE(4);
      END_STATE();
    case 17:
      if (lookahead == 'd') ADVANCE(54);
      END_STATE();
    case 18:
      if (lookahead == 'd') ADVANCE(55);
      END_STATE();
    case 19:
      if (lookahead == 'd') ADVANCE(5);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 21:
      if (lookahead == 'h') ADVANCE(34);
      END_STATE();
    case 22:
      if (lookahead == 'h') ADVANCE(35);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(27);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(28);
      END_STATE();
    case 25:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 26:
      if (lookahead == 'n') ADVANCE(39);
      END_STATE();
    case 27:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 28:
      if (lookahead == 'n') ADVANCE(53);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(42);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(43);
      END_STATE();
    case 31:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 32:
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    case 33:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 34:
      if (lookahead == 'o') ADVANCE(17);
      END_STATE();
    case 35:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 36:
      if (lookahead == 'o') ADVANCE(32);
      END_STATE();
    case 37:
      if (lookahead == 'r') ADVANCE(59);
      END_STATE();
    case 38:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 39:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 40:
      if (lookahead == 's') ADVANCE(45);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 42:
      if (lookahead == 't') ADVANCE(82);
      END_STATE();
    case 43:
      if (lookahead == 't') ADVANCE(83);
      END_STATE();
    case 44:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 45:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 46:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 48:
      if (lookahead != 0 &&
          lookahead != '\r') ADVANCE(153);
      if (lookahead == '\r') ADVANCE(154);
      END_STATE();
    case 49:
      if (eof) ADVANCE(51);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 50:
      if (eof) ADVANCE(51);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(49)
      END_STATE();
    case 51:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_DOTmain);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_DOTend_DASHmain);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_DOTmethod);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_DOTend_DASHmethod);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DOTvar);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_DOTend_DASHvar);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(anon_sym_DUP);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_IADD);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_IAND);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_IOR);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_IRETURN);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_ISUB);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_NOP);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_POP);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_SWAP);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_WIDE);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_BIPUSH);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_GOTO);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_IFEQ);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_IFLT);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_IF_ICMPEQ);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_IINC);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_ILOAD);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_INVOKEVIRTUAL);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_ISTORE);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LDC_W);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_DOTconstant);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_DOTend_DASHconstant);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(97);
      if (lookahead == 'F') ADVANCE(98);
      if (lookahead == 'I') ADVANCE(113);
      if (lookahead == 'L') ADVANCE(118);
      if (lookahead == 'N') ADVANCE(144);
      if (lookahead == 'O') ADVANCE(129);
      if (lookahead == 'R') ADVANCE(103);
      if (lookahead == 'S') ADVANCE(138);
      if (lookahead == '-' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(110);
      if (lookahead == '-' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(95);
      if (lookahead == '-' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'A') ADVANCE(124);
      if (lookahead == '-' ||
          ('B' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'B') ADVANCE(66);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(147);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(76);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'C') ADVANCE(111);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(89);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(62);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(63);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(77);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(99);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'D') ADVANCE(93);
      if (lookahead == 'N') ADVANCE(94);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(127);
      if (lookahead == 'L') ADVANCE(134);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(70);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(79);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(143);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(128);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'E') ADVANCE(135);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'H') ADVANCE(71);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(125);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(96);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(91);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'I') ADVANCE(131);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'K') ADVANCE(101);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'L') ADVANCE(78);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'M') ADVANCE(126);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(65);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'N') ADVANCE(90);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(137);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(72);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(109);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(132);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(86);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(122);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'O') ADVANCE(123);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(61);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(67);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(68);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(69);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(139);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'P') ADVANCE(102);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q') ADVANCE(73);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'Q') ADVANCE(75);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(64);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(112);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(136);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'R') ADVANCE(100);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'S') ADVANCE(104);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(74);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(141);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(142);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(115);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'T') ADVANCE(117);
      if (lookahead == 'U') ADVANCE(88);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(133);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(121);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(130);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'U') ADVANCE(85);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(108);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'V') ADVANCE(116);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W') ADVANCE(87);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == 'W') ADVANCE(80);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '_') ADVANCE(146);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_hex_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_oct_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_dec_number);
      if (lookahead == 'x') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_dec_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(152);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead == '\\') ADVANCE(48);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(153);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(153);
      if (lookahead == '\\') ADVANCE(48);
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
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 3},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 3},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 3},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 3},
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
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source_file] = STATE(45),
    [sym_main_program] = STATE(23),
    [sym_constants] = STATE(39),
    [anon_sym_DOTmain] = ACTIONS(5),
    [anon_sym_DOTconstant] = ACTIONS(7),
    [sym_comment] = ACTIONS(3),
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
    [sym_comment] = ACTIONS(3),
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
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym__statement] = STATE(4),
    [sym_command] = STATE(4),
    [sym_label] = STATE(4),
    [sym__number] = STATE(4),
    [aux_sym_main_program_repeat1] = STATE(4),
    [anon_sym_DOTend_DASHmain] = ACTIONS(27),
    [anon_sym_DOTend_DASHmethod] = ACTIONS(27),
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
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym__statement] = STATE(4),
    [sym_command] = STATE(4),
    [sym_label] = STATE(4),
    [sym__number] = STATE(4),
    [aux_sym_main_program_repeat1] = STATE(4),
    [anon_sym_DOTend_DASHmain] = ACTIONS(41),
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
    [sym_comment] = ACTIONS(3),
  },
  [6] = {
    [sym__statement] = STATE(4),
    [sym_command] = STATE(4),
    [sym_label] = STATE(4),
    [sym__number] = STATE(4),
    [aux_sym_main_program_repeat1] = STATE(4),
    [anon_sym_DOTend_DASHmethod] = ACTIONS(47),
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
    [sym_comment] = ACTIONS(3),
  },
  [7] = {
    [sym__statement] = STATE(5),
    [sym_command] = STATE(5),
    [sym_label] = STATE(5),
    [sym__number] = STATE(5),
    [aux_sym_main_program_repeat1] = STATE(5),
    [anon_sym_DOTend_DASHmain] = ACTIONS(49),
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
    [sym_comment] = ACTIONS(3),
  },
  [8] = {
    [sym__statement] = STATE(4),
    [sym_command] = STATE(4),
    [sym_label] = STATE(4),
    [sym__number] = STATE(4),
    [aux_sym_main_program_repeat1] = STATE(4),
    [anon_sym_DOTend_DASHmethod] = ACTIONS(55),
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
    [sym_comment] = ACTIONS(3),
  },
  [9] = {
    [sym__statement] = STATE(6),
    [sym_command] = STATE(6),
    [sym_label] = STATE(6),
    [sym__number] = STATE(6),
    [aux_sym_main_program_repeat1] = STATE(6),
    [anon_sym_DOTend_DASHmethod] = ACTIONS(55),
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
    [sym_comment] = ACTIONS(3),
  },
  [10] = {
    [sym__statement] = STATE(4),
    [sym_command] = STATE(4),
    [sym_label] = STATE(4),
    [sym__number] = STATE(4),
    [aux_sym_main_program_repeat1] = STATE(4),
    [anon_sym_DOTend_DASHmain] = ACTIONS(49),
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
    [sym_comment] = ACTIONS(3),
  },
  [11] = {
    [anon_sym_DOTend_DASHmain] = ACTIONS(61),
    [anon_sym_DOTend_DASHmethod] = ACTIONS(61),
    [anon_sym_DUP] = ACTIONS(63),
    [anon_sym_IADD] = ACTIONS(63),
    [anon_sym_IAND] = ACTIONS(63),
    [anon_sym_IOR] = ACTIONS(63),
    [anon_sym_IRETURN] = ACTIONS(63),
    [anon_sym_ISUB] = ACTIONS(63),
    [anon_sym_NOP] = ACTIONS(63),
    [anon_sym_POP] = ACTIONS(63),
    [anon_sym_SWAP] = ACTIONS(63),
    [anon_sym_WIDE] = ACTIONS(63),
    [anon_sym_BIPUSH] = ACTIONS(63),
    [anon_sym_GOTO] = ACTIONS(63),
    [anon_sym_IFEQ] = ACTIONS(63),
    [anon_sym_IFLT] = ACTIONS(63),
    [anon_sym_IF_ICMPEQ] = ACTIONS(63),
    [anon_sym_IINC] = ACTIONS(63),
    [anon_sym_ILOAD] = ACTIONS(63),
    [anon_sym_INVOKEVIRTUAL] = ACTIONS(63),
    [anon_sym_ISTORE] = ACTIONS(63),
    [anon_sym_LDC_W] = ACTIONS(63),
    [anon_sym_COLON] = ACTIONS(65),
    [sym_identifier] = ACTIONS(63),
    [sym_hex_number] = ACTIONS(61),
    [sym_oct_number] = ACTIONS(61),
    [sym_dec_number] = ACTIONS(63),
    [sym_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(67), 4,
      anon_sym_DOTend_DASHmain,
      anon_sym_DOTend_DASHmethod,
      sym_hex_number,
      sym_oct_number,
    ACTIONS(69), 22,
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
      sym_dec_number,
  [34] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(71), 4,
      anon_sym_DOTend_DASHmethod,
      anon_sym_DOTvar,
      sym_hex_number,
      sym_oct_number,
    ACTIONS(73), 22,
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
      sym_dec_number,
  [68] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(75), 4,
      anon_sym_DOTend_DASHmain,
      anon_sym_DOTend_DASHmethod,
      sym_hex_number,
      sym_oct_number,
    ACTIONS(77), 22,
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
      sym_dec_number,
  [102] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(79), 4,
      anon_sym_DOTend_DASHmethod,
      anon_sym_DOTvar,
      sym_hex_number,
      sym_oct_number,
    ACTIONS(81), 22,
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
      sym_dec_number,
  [136] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(83), 4,
      anon_sym_DOTend_DASHmethod,
      anon_sym_DOTvar,
      sym_hex_number,
      sym_oct_number,
    ACTIONS(85), 22,
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
      sym_dec_number,
  [170] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 4,
      anon_sym_DOTend_DASHmain,
      anon_sym_DOTend_DASHmethod,
      sym_hex_number,
      sym_oct_number,
    ACTIONS(89), 22,
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
      sym_dec_number,
  [204] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(91), 4,
      anon_sym_DOTend_DASHmain,
      anon_sym_DOTend_DASHmethod,
      sym_hex_number,
      sym_oct_number,
    ACTIONS(93), 22,
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
      sym_dec_number,
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
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_main_program_repeat1, 2),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_main_program_repeat1, 2), SHIFT_REPEAT(14),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_main_program_repeat1, 2), SHIFT_REPEAT(11),
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
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__statement, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
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
