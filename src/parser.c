#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 34
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 33
#define ALIAS_COUNT 1
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_COLON = 1,
  anon_sym_file = 2,
  anon_sym_format = 3,
  aux_sym_disassembly_section_token1 = 4,
  aux_sym_machine_code_bytes_token1 = 5,
  aux_sym_instruction_token1 = 6,
  sym_address = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  anon_sym_File = 10,
  anon_sym_Offset_COLON = 11,
  sym_hexadecimal = 12,
  anon_sym_Disassemblyofsection = 13,
  sym_integer = 14,
  sym_file_path = 15,
  sym__label_identifier = 16,
  sym_section_name = 17,
  sym_source = 18,
  sym__line = 19,
  sym_header = 20,
  sym_disassembly_section = 21,
  sym_label_line = 22,
  sym_source_location = 23,
  sym_offset_line = 24,
  sym_machine_code_bytes = 25,
  sym_instruction = 26,
  sym__file_offset = 27,
  sym_file_offset = 28,
  sym_disassembly_section_label = 29,
  sym_identifier = 30,
  aux_sym_source_repeat1 = 31,
  aux_sym_machine_code_bytes_repeat1 = 32,
  alias_sym_section_address = 33,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COLON] = ":",
  [anon_sym_file] = "file",
  [anon_sym_format] = "format",
  [aux_sym_disassembly_section_token1] = "identifier",
  [aux_sym_machine_code_bytes_token1] = "machine_code_bytes_token1",
  [aux_sym_instruction_token1] = "instruction_token1",
  [sym_address] = "address",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_File] = "File",
  [anon_sym_Offset_COLON] = "Offset:",
  [sym_hexadecimal] = "hexadecimal",
  [anon_sym_Disassemblyofsection] = "Disassembly of section ",
  [sym_integer] = "integer",
  [sym_file_path] = "file_path",
  [sym__label_identifier] = "label",
  [sym_section_name] = "section_name",
  [sym_source] = "source",
  [sym__line] = "_line",
  [sym_header] = "header",
  [sym_disassembly_section] = "disassembly_section",
  [sym_label_line] = "label_line",
  [sym_source_location] = "source_location",
  [sym_offset_line] = "offset_line",
  [sym_machine_code_bytes] = "machine_code_bytes",
  [sym_instruction] = "instruction",
  [sym__file_offset] = "_file_offset",
  [sym_file_offset] = "file_offset",
  [sym_disassembly_section_label] = "disassembly_section_label",
  [sym_identifier] = "identifier",
  [aux_sym_source_repeat1] = "source_repeat1",
  [aux_sym_machine_code_bytes_repeat1] = "machine_code_bytes_repeat1",
  [alias_sym_section_address] = "section_address",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_file] = anon_sym_file,
  [anon_sym_format] = anon_sym_format,
  [aux_sym_disassembly_section_token1] = sym_identifier,
  [aux_sym_machine_code_bytes_token1] = aux_sym_machine_code_bytes_token1,
  [aux_sym_instruction_token1] = aux_sym_instruction_token1,
  [sym_address] = sym_address,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_File] = anon_sym_File,
  [anon_sym_Offset_COLON] = anon_sym_Offset_COLON,
  [sym_hexadecimal] = sym_hexadecimal,
  [anon_sym_Disassemblyofsection] = anon_sym_Disassemblyofsection,
  [sym_integer] = sym_integer,
  [sym_file_path] = sym_file_path,
  [sym__label_identifier] = sym__label_identifier,
  [sym_section_name] = sym_section_name,
  [sym_source] = sym_source,
  [sym__line] = sym__line,
  [sym_header] = sym_header,
  [sym_disassembly_section] = sym_disassembly_section,
  [sym_label_line] = sym_label_line,
  [sym_source_location] = sym_source_location,
  [sym_offset_line] = sym_offset_line,
  [sym_machine_code_bytes] = sym_machine_code_bytes,
  [sym_instruction] = sym_instruction,
  [sym__file_offset] = sym__file_offset,
  [sym_file_offset] = sym_file_offset,
  [sym_disassembly_section_label] = sym_disassembly_section_label,
  [sym_identifier] = sym_identifier,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
  [aux_sym_machine_code_bytes_repeat1] = aux_sym_machine_code_bytes_repeat1,
  [alias_sym_section_address] = alias_sym_section_address,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_file] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_format] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_disassembly_section_token1] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_machine_code_bytes_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_instruction_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_address] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_File] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Offset_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_hexadecimal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Disassemblyofsection] = {
    .visible = true,
    .named = false,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_file_path] = {
    .visible = true,
    .named = true,
  },
  [sym__label_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_section_name] = {
    .visible = true,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym_header] = {
    .visible = true,
    .named = true,
  },
  [sym_disassembly_section] = {
    .visible = true,
    .named = true,
  },
  [sym_label_line] = {
    .visible = true,
    .named = true,
  },
  [sym_source_location] = {
    .visible = true,
    .named = true,
  },
  [sym_offset_line] = {
    .visible = true,
    .named = true,
  },
  [sym_machine_code_bytes] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym__file_offset] = {
    .visible = false,
    .named = true,
  },
  [sym_file_offset] = {
    .visible = true,
    .named = true,
  },
  [sym_disassembly_section_label] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_machine_code_bytes_repeat1] = {
    .visible = false,
    .named = false,
  },
  [alias_sym_section_address] = {
    .visible = true,
    .named = true,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
  [1] = {
    [0] = alias_sym_section_address,
  },
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(52);
      if (lookahead == '(') ADVANCE(105);
      if (lookahead == ')') ADVANCE(106);
      if (lookahead == '.') ADVANCE(48);
      if (lookahead == '/') ADVANCE(46);
      if (lookahead == '0') ADVANCE(99);
      if (lookahead == ':') ADVANCE(53);
      if (lookahead == '<') ADVANCE(47);
      if (lookahead == 'D') ADVANCE(95);
      if (lookahead == 'F') ADVANCE(96);
      if (lookahead == 'O') ADVANCE(17);
      if (lookahead == 'f') ADVANCE(98);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(102);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(32);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(110);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(37);
      END_STATE();
    case 5:
      if (lookahead == '0') ADVANCE(43);
      if (lookahead == 'F') ADVANCE(21);
      if (lookahead == 'f') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(45);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(108);
      END_STATE();
    case 7:
      if (lookahead == '>') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(40);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 10:
      if (lookahead == 'b') ADVANCE(25);
      END_STATE();
    case 11:
      if (lookahead == 'c') ADVANCE(41);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(107);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 17:
      if (lookahead == 'f') ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == 'f') ADVANCE(35);
      END_STATE();
    case 19:
      if (lookahead == 'f') ADVANCE(4);
      END_STATE();
    case 20:
      if (lookahead == 'f') ADVANCE(23);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(20)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 22:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(12);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(13);
      END_STATE();
    case 27:
      if (lookahead == 'm') ADVANCE(10);
      END_STATE();
    case 28:
      if (lookahead == 'm') ADVANCE(8);
      END_STATE();
    case 29:
      if (lookahead == 'n') ADVANCE(3);
      END_STATE();
    case 30:
      if (lookahead == 'o') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 31:
      if (lookahead == 'o') ADVANCE(29);
      END_STATE();
    case 32:
      if (lookahead == 'o') ADVANCE(19);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(28);
      END_STATE();
    case 34:
      if (lookahead == 's') ADVANCE(9);
      END_STATE();
    case 35:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 36:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 37:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 38:
      if (lookahead == 's') ADVANCE(36);
      END_STATE();
    case 39:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 40:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 41:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 42:
      if (lookahead == 'y') ADVANCE(2);
      END_STATE();
    case 43:
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(57);
      END_STATE();
    case 46:
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 47:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 48:
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(125);
      END_STATE();
    case 49:
      if (eof) ADVANCE(52);
      if (lookahead == '\n') SKIP(49)
      if (lookahead == '/') ADVANCE(92);
      if (lookahead == 'D') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      if (lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 50:
      if (eof) ADVANCE(52);
      if (lookahead == '\n') SKIP(50)
      if (lookahead == '/') ADVANCE(92);
      if (lookahead == 'D') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      if (lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      if (lookahead != 0) ADVANCE(94);
      END_STATE();
    case 51:
      if (eof) ADVANCE(52);
      if (lookahead == '/') ADVANCE(46);
      if (lookahead == 'D') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(51)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      if (lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_disassembly_section_token1);
      if (lookahead == '>') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_machine_code_bytes_token1);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(aux_sym_machine_code_bytes_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(aux_sym_machine_code_bytes_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_machine_code_bytes_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_machine_code_bytes_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_instruction_token1);
      if (lookahead == ' ') ADVANCE(79);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(aux_sym_instruction_token1);
      if (lookahead == ' ') ADVANCE(83);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_instruction_token1);
      if (lookahead == ' ') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_instruction_token1);
      if (lookahead == '/') ADVANCE(92);
      if (lookahead == 'D') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(89);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      if (lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(aux_sym_instruction_token1);
      if (lookahead == '/') ADVANCE(92);
      if (lookahead == 'D') ADVANCE(74);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      if (lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_instruction_token1);
      if (lookahead == 'a') ADVANCE(84);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(aux_sym_instruction_token1);
      if (lookahead == 'b') ADVANCE(76);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_instruction_token1);
      if (lookahead == 'c') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(aux_sym_instruction_token1);
      if (lookahead == 'e') ADVANCE(77);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_instruction_token1);
      if (lookahead == 'e') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_instruction_token1);
      if (lookahead == 'f') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_instruction_token1);
      if (lookahead == 'i') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_instruction_token1);
      if (lookahead == 'i') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_instruction_token1);
      if (lookahead == 'i') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_instruction_token1);
      if (lookahead == 'l') ADVANCE(86);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_instruction_token1);
      if (lookahead == 'm') ADVANCE(68);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_instruction_token1);
      if (lookahead == 'n') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_instruction_token1);
      if (lookahead == 'o') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_instruction_token1);
      if (lookahead == 'o') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_instruction_token1);
      if (lookahead == 's') ADVANCE(67);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_instruction_token1);
      if (lookahead == 's') ADVANCE(70);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_instruction_token1);
      if (lookahead == 's') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_instruction_token1);
      if (lookahead == 's') ADVANCE(82);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_instruction_token1);
      if (lookahead == 't') ADVANCE(75);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_instruction_token1);
      if (lookahead == 'y') ADVANCE(62);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_instruction_token1);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(61);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_instruction_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_instruction_token1);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_instruction_token1);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_instruction_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(24);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(120);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(26);
      if (lookahead == 'o') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(58);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_File);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(anon_sym_Offset_COLON);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(anon_sym_Disassemblyofsection);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(anon_sym_Disassemblyofsection);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(94);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == ' ') ADVANCE(32);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'a') ADVANCE(122);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'b') ADVANCE(118);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'e') ADVANCE(119);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'l') ADVANCE(123);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'm') ADVANCE(116);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 's') ADVANCE(115);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 's') ADVANCE(117);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 's') ADVANCE(121);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'y') ADVANCE(114);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym__label_identifier);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(124);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(125);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 51},
  [2] = {.lex_state = 51},
  [3] = {.lex_state = 51},
  [4] = {.lex_state = 49},
  [5] = {.lex_state = 49},
  [6] = {.lex_state = 50},
  [7] = {.lex_state = 51},
  [8] = {.lex_state = 51},
  [9] = {.lex_state = 51},
  [10] = {.lex_state = 51},
  [11] = {.lex_state = 51},
  [12] = {.lex_state = 51},
  [13] = {.lex_state = 51},
  [14] = {.lex_state = 51},
  [15] = {.lex_state = 51},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 20},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_file] = ACTIONS(1),
    [anon_sym_format] = ACTIONS(1),
    [aux_sym_disassembly_section_token1] = ACTIONS(1),
    [aux_sym_machine_code_bytes_token1] = ACTIONS(1),
    [sym_address] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_File] = ACTIONS(1),
    [anon_sym_Offset_COLON] = ACTIONS(1),
    [sym_hexadecimal] = ACTIONS(1),
    [anon_sym_Disassemblyofsection] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_file_path] = ACTIONS(1),
    [sym_section_name] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(32),
    [sym__line] = STATE(2),
    [sym_header] = STATE(2),
    [sym_disassembly_section] = STATE(2),
    [sym_label_line] = STATE(2),
    [sym_source_location] = STATE(2),
    [sym_offset_line] = STATE(2),
    [sym_disassembly_section_label] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_address] = ACTIONS(5),
    [anon_sym_Disassemblyofsection] = ACTIONS(7),
    [sym_file_path] = ACTIONS(9),
    [sym__label_identifier] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(5), 1,
      sym_address,
    ACTIONS(7), 1,
      anon_sym_Disassemblyofsection,
    ACTIONS(9), 1,
      sym_file_path,
    ACTIONS(11), 1,
      sym__label_identifier,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(3), 8,
      sym__line,
      sym_header,
      sym_disassembly_section,
      sym_label_line,
      sym_source_location,
      sym_offset_line,
      sym_disassembly_section_label,
      aux_sym_source_repeat1,
  [26] = 6,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      sym_address,
    ACTIONS(20), 1,
      anon_sym_Disassemblyofsection,
    ACTIONS(23), 1,
      sym_file_path,
    ACTIONS(26), 1,
      sym__label_identifier,
    STATE(3), 8,
      sym__line,
      sym_header,
      sym_disassembly_section,
      sym_label_line,
      sym_source_location,
      sym_offset_line,
      sym_disassembly_section_label,
      aux_sym_source_repeat1,
  [52] = 4,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      aux_sym_machine_code_bytes_token1,
    STATE(4), 1,
      aux_sym_machine_code_bytes_repeat1,
    ACTIONS(34), 5,
      aux_sym_instruction_token1,
      sym_address,
      anon_sym_Disassemblyofsection,
      sym_file_path,
      sym__label_identifier,
  [69] = 4,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(38), 1,
      aux_sym_machine_code_bytes_token1,
    STATE(4), 1,
      aux_sym_machine_code_bytes_repeat1,
    ACTIONS(40), 5,
      aux_sym_instruction_token1,
      sym_address,
      anon_sym_Disassemblyofsection,
      sym_file_path,
      sym__label_identifier,
  [86] = 4,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 1,
      aux_sym_instruction_token1,
    STATE(13), 1,
      sym_instruction,
    ACTIONS(46), 4,
      sym_address,
      anon_sym_Disassemblyofsection,
      sym_file_path,
      sym__label_identifier,
  [102] = 2,
    ACTIONS(50), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(48), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [112] = 2,
    ACTIONS(54), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(52), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [122] = 2,
    ACTIONS(58), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(56), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [132] = 2,
    ACTIONS(62), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(60), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [142] = 2,
    ACTIONS(66), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(64), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [152] = 2,
    ACTIONS(70), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(68), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [162] = 2,
    ACTIONS(74), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(72), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [172] = 2,
    ACTIONS(78), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(76), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [182] = 2,
    ACTIONS(82), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(80), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [192] = 3,
    ACTIONS(84), 1,
      anon_sym_COLON,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      sym__file_offset,
  [202] = 3,
    ACTIONS(88), 1,
      aux_sym_machine_code_bytes_token1,
    STATE(5), 1,
      aux_sym_machine_code_bytes_repeat1,
    STATE(6), 1,
      sym_machine_code_bytes,
  [212] = 2,
    ACTIONS(90), 1,
      anon_sym_file,
    ACTIONS(92), 1,
      sym_integer,
  [219] = 2,
    ACTIONS(94), 1,
      anon_sym_COLON,
    ACTIONS(96), 1,
      aux_sym_disassembly_section_token1,
  [226] = 2,
    ACTIONS(98), 1,
      aux_sym_instruction_token1,
    STATE(9), 1,
      sym_identifier,
  [233] = 2,
    ACTIONS(100), 1,
      anon_sym_File,
    STATE(26), 1,
      sym_file_offset,
  [240] = 1,
    ACTIONS(102), 1,
      anon_sym_format,
  [244] = 1,
    ACTIONS(104), 1,
      anon_sym_COLON,
  [248] = 1,
    ACTIONS(106), 1,
      sym_section_name,
  [252] = 1,
    ACTIONS(108), 1,
      anon_sym_Offset_COLON,
  [256] = 1,
    ACTIONS(110), 1,
      anon_sym_RPAREN,
  [260] = 1,
    ACTIONS(112), 1,
      anon_sym_COLON,
  [264] = 1,
    ACTIONS(114), 1,
      anon_sym_COLON,
  [268] = 1,
    ACTIONS(116), 1,
      sym_hexadecimal,
  [272] = 1,
    ACTIONS(118), 1,
      anon_sym_COLON,
  [276] = 1,
    ACTIONS(120), 1,
      anon_sym_COLON,
  [280] = 1,
    ACTIONS(122), 1,
      ts_builtin_sym_end,
  [284] = 1,
    ACTIONS(124), 1,
      anon_sym_RPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 26,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 69,
  [SMALL_STATE(6)] = 86,
  [SMALL_STATE(7)] = 102,
  [SMALL_STATE(8)] = 112,
  [SMALL_STATE(9)] = 122,
  [SMALL_STATE(10)] = 132,
  [SMALL_STATE(11)] = 142,
  [SMALL_STATE(12)] = 152,
  [SMALL_STATE(13)] = 162,
  [SMALL_STATE(14)] = 172,
  [SMALL_STATE(15)] = 182,
  [SMALL_STATE(16)] = 192,
  [SMALL_STATE(17)] = 202,
  [SMALL_STATE(18)] = 212,
  [SMALL_STATE(19)] = 219,
  [SMALL_STATE(20)] = 226,
  [SMALL_STATE(21)] = 233,
  [SMALL_STATE(22)] = 240,
  [SMALL_STATE(23)] = 244,
  [SMALL_STATE(24)] = 248,
  [SMALL_STATE(25)] = 252,
  [SMALL_STATE(26)] = 256,
  [SMALL_STATE(27)] = 260,
  [SMALL_STATE(28)] = 264,
  [SMALL_STATE(29)] = 268,
  [SMALL_STATE(30)] = 272,
  [SMALL_STATE(31)] = 276,
  [SMALL_STATE(32)] = 280,
  [SMALL_STATE(33)] = 284,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(19),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(24),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(28),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(31),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_machine_code_bytes_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_machine_code_bytes_repeat1, 2), SHIFT_REPEAT(4),
  [34] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_machine_code_bytes_repeat1, 2),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_code_bytes, 1),
  [38] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_machine_code_bytes, 1),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset_line, 3),
  [44] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset_line, 3),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disassembly_section, 3, .production_id = 1),
  [50] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_disassembly_section, 3, .production_id = 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 5),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_line, 2),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_line, 2),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_identifier, 1),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_identifier, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disassembly_section, 4, .production_id = 1),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_disassembly_section, 4, .production_id = 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset_line, 4),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset_line, 4),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disassembly_section_label, 3),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_disassembly_section_label, 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_location, 3),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_source_location, 3),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_offset, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [122] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_offset, 3),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_objdump(void) {
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
