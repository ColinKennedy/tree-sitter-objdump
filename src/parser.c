#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 37
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 34
#define ALIAS_COUNT 1
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 2

enum {
  anon_sym_COLON = 1,
  anon_sym_file = 2,
  anon_sym_format = 3,
  aux_sym_disassembly_section_token1 = 4,
  anon_sym_LPAREN = 5,
  anon_sym_discriminator = 6,
  anon_sym_RPAREN = 7,
  sym_hexadecimal = 8,
  sym_byte = 9,
  sym_instruction = 10,
  sym_address = 11,
  anon_sym_File = 12,
  anon_sym_Offset_COLON = 13,
  anon_sym_Disassemblyofsection = 14,
  sym_integer = 15,
  sym_file_path = 16,
  sym__label_identifier = 17,
  sym_identifier = 18,
  sym_section_name = 19,
  sym_source = 20,
  sym__line = 21,
  sym_header = 22,
  sym_disassembly_section = 23,
  sym_source_location = 24,
  sym_discriminator = 25,
  sym_offset_line = 26,
  sym_label_line = 27,
  sym_machine_code_bytes = 28,
  sym__file_offset = 29,
  sym_file_offset = 30,
  sym_disassembly_section_label = 31,
  aux_sym_source_repeat1 = 32,
  aux_sym_machine_code_bytes_repeat1 = 33,
  alias_sym_section_address = 34,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COLON] = ":",
  [anon_sym_file] = "file",
  [anon_sym_format] = "format",
  [aux_sym_disassembly_section_token1] = "identifier",
  [anon_sym_LPAREN] = "(",
  [anon_sym_discriminator] = "discriminator",
  [anon_sym_RPAREN] = ")",
  [sym_hexadecimal] = "hexadecimal",
  [sym_byte] = "byte",
  [sym_instruction] = "instruction",
  [sym_address] = "address",
  [anon_sym_File] = "File",
  [anon_sym_Offset_COLON] = "Offset:",
  [anon_sym_Disassemblyofsection] = "Disassembly of section ",
  [sym_integer] = "integer",
  [sym_file_path] = "file_path",
  [sym__label_identifier] = "label",
  [sym_identifier] = "identifier",
  [sym_section_name] = "section_name",
  [sym_source] = "source",
  [sym__line] = "_line",
  [sym_header] = "header",
  [sym_disassembly_section] = "disassembly_section",
  [sym_source_location] = "source_location",
  [sym_discriminator] = "discriminator",
  [sym_offset_line] = "offset_line",
  [sym_label_line] = "label_line",
  [sym_machine_code_bytes] = "machine_code_bytes",
  [sym__file_offset] = "_file_offset",
  [sym_file_offset] = "file_offset",
  [sym_disassembly_section_label] = "disassembly_section_label",
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
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_discriminator] = anon_sym_discriminator,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [sym_hexadecimal] = sym_hexadecimal,
  [sym_byte] = sym_byte,
  [sym_instruction] = sym_instruction,
  [sym_address] = sym_address,
  [anon_sym_File] = anon_sym_File,
  [anon_sym_Offset_COLON] = anon_sym_Offset_COLON,
  [anon_sym_Disassemblyofsection] = anon_sym_Disassemblyofsection,
  [sym_integer] = sym_integer,
  [sym_file_path] = sym_file_path,
  [sym__label_identifier] = sym__label_identifier,
  [sym_identifier] = sym_identifier,
  [sym_section_name] = sym_section_name,
  [sym_source] = sym_source,
  [sym__line] = sym__line,
  [sym_header] = sym_header,
  [sym_disassembly_section] = sym_disassembly_section,
  [sym_source_location] = sym_source_location,
  [sym_discriminator] = sym_discriminator,
  [sym_offset_line] = sym_offset_line,
  [sym_label_line] = sym_label_line,
  [sym_machine_code_bytes] = sym_machine_code_bytes,
  [sym__file_offset] = sym__file_offset,
  [sym_file_offset] = sym_file_offset,
  [sym_disassembly_section_label] = sym_disassembly_section_label,
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_discriminator] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [sym_hexadecimal] = {
    .visible = true,
    .named = true,
  },
  [sym_byte] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_address] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_File] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Offset_COLON] = {
    .visible = true,
    .named = false,
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
  [sym_identifier] = {
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
  [sym_source_location] = {
    .visible = true,
    .named = true,
  },
  [sym_discriminator] = {
    .visible = true,
    .named = true,
  },
  [sym_offset_line] = {
    .visible = true,
    .named = true,
  },
  [sym_label_line] = {
    .visible = true,
    .named = true,
  },
  [sym_machine_code_bytes] = {
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
  [34] = 34,
  [35] = 35,
  [36] = 36,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(65);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == ')') ADVANCE(72);
      if (lookahead == '.') ADVANCE(61);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == '0') ADVANCE(110);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == '<') ADVANCE(60);
      if (lookahead == 'D') ADVANCE(103);
      if (lookahead == 'F') ADVANCE(104);
      if (lookahead == 'O') ADVANCE(19);
      if (lookahead == 'd') ADVANCE(108);
      if (lookahead == 'f') ADVANCE(109);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(116);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(114);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead != 0) ADVANCE(143);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(124);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(39);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(48);
      END_STATE();
    case 5:
      if (lookahead == '0') ADVANCE(55);
      if (lookahead == 'F') ADVANCE(23);
      if (lookahead == 'd') ADVANCE(25);
      if (lookahead == 'f') ADVANCE(37);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(57);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(123);
      END_STATE();
    case 7:
      if (lookahead == '>') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 11:
      if (lookahead == 'b') ADVANCE(30);
      END_STATE();
    case 12:
      if (lookahead == 'c') ADVANCE(42);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(53);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(67);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(50);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(32);
      END_STATE();
    case 19:
      if (lookahead == 'f') ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == 'f') ADVANCE(4);
      END_STATE();
    case 21:
      if (lookahead == 'f') ADVANCE(46);
      END_STATE();
    case 22:
      if (lookahead == 'f') ADVANCE(28);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(22)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 23:
      if (lookahead == 'i') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 24:
      if (lookahead == 'i') ADVANCE(36);
      END_STATE();
    case 25:
      if (lookahead == 'i') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(31);
      END_STATE();
    case 29:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 30:
      if (lookahead == 'l') ADVANCE(54);
      END_STATE();
    case 31:
      if (lookahead == 'l') ADVANCE(15);
      END_STATE();
    case 32:
      if (lookahead == 'm') ADVANCE(11);
      END_STATE();
    case 33:
      if (lookahead == 'm') ADVANCE(8);
      END_STATE();
    case 34:
      if (lookahead == 'm') ADVANCE(24);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(2);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 37:
      if (lookahead == 'o') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 38:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(26);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(71);
      END_STATE();
    case 44:
      if (lookahead == 's') ADVANCE(10);
      END_STATE();
    case 45:
      if (lookahead == 's') ADVANCE(12);
      END_STATE();
    case 46:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 47:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 48:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 49:
      if (lookahead == 's') ADVANCE(47);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(68);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(27);
      END_STATE();
    case 54:
      if (lookahead == 'y') ADVANCE(3);
      END_STATE();
    case 55:
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 56:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 57:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(74);
      END_STATE();
    case 58:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 59:
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 60:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 61:
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(144);
      END_STATE();
    case 62:
      if (eof) ADVANCE(65);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == 'D') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(62)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(120);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(117);
      if (lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 63:
      if (eof) ADVANCE(65);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == 'D') ADVANCE(106);
      if (lookahead == '.' ||
          lookahead == '@') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(63)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 64:
      if (eof) ADVANCE(65);
      if (lookahead == '/') ADVANCE(59);
      if (lookahead == 'D') ADVANCE(107);
      if (lookahead == '.' ||
          lookahead == '@') ADVANCE(141);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(64)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(113);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(140);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(aux_sym_disassembly_section_token1);
      if (lookahead == '>') ADVANCE(69);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(7);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_discriminator);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_byte);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_byte);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          lookahead == '@') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(99);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_byte);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(120);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_byte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_byte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(120);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == ' ') ADVANCE(92);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == ' ') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == ' ') ADVANCE(125);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == 'a') ADVANCE(96);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == 'b') ADVANCE(89);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == 'c') ADVANCE(97);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == 'e') ADVANCE(90);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == 'e') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == 'f') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == 'i') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == 'l') ADVANCE(98);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == 'm') ADVANCE(83);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == 'n') ADVANCE(81);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == 'o') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == 'o') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == 's') ADVANCE(85);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == 's') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == 's') ADVANCE(94);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == 't') ADVANCE(88);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == 'y') ADVANCE(79);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_instruction);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(99);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_instruction);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_instruction);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(29);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(117);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(136);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          lookahead == '@') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(136);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          lookahead == '@') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(112);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(31);
      if (lookahead == 'o') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_address);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          lookahead == '@') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_address);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          lookahead == '@') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(99);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_address);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          lookahead == '@') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(112);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(120);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(78);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(117);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(77);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(58);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_File);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_Offset_COLON);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_Disassemblyofsection);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_Disassemblyofsection);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(102);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == ' ') ADVANCE(39);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'a') ADVANCE(137);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'b') ADVANCE(132);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'e') ADVANCE(133);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'l') ADVANCE(138);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'm') ADVANCE(130);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 's') ADVANCE(129);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 's') ADVANCE(131);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 's') ADVANCE(82);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          lookahead == '@') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 's') ADVANCE(135);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'y') ADVANCE(128);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__label_identifier);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          lookahead == '@') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(101);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__label_identifier);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          lookahead == '@') ADVANCE(141);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(139);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__label_identifier);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(141);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(142);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(143);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(144);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 62},
  [2] = {.lex_state = 62},
  [3] = {.lex_state = 62},
  [4] = {.lex_state = 63},
  [5] = {.lex_state = 63},
  [6] = {.lex_state = 62},
  [7] = {.lex_state = 64},
  [8] = {.lex_state = 62},
  [9] = {.lex_state = 62},
  [10] = {.lex_state = 62},
  [11] = {.lex_state = 62},
  [12] = {.lex_state = 62},
  [13] = {.lex_state = 62},
  [14] = {.lex_state = 62},
  [15] = {.lex_state = 62},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 22},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 5},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 5},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 22},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_file] = ACTIONS(1),
    [anon_sym_format] = ACTIONS(1),
    [aux_sym_disassembly_section_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_discriminator] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [sym_hexadecimal] = ACTIONS(1),
    [sym_byte] = ACTIONS(1),
    [sym_address] = ACTIONS(1),
    [anon_sym_File] = ACTIONS(1),
    [anon_sym_Offset_COLON] = ACTIONS(1),
    [anon_sym_Disassemblyofsection] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_file_path] = ACTIONS(1),
    [sym_section_name] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(29),
    [sym__line] = STATE(2),
    [sym_header] = STATE(2),
    [sym_disassembly_section] = STATE(2),
    [sym_source_location] = STATE(2),
    [sym_offset_line] = STATE(2),
    [sym_label_line] = STATE(2),
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
      sym_source_location,
      sym_offset_line,
      sym_label_line,
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
      sym_source_location,
      sym_offset_line,
      sym_label_line,
      sym_disassembly_section_label,
      aux_sym_source_repeat1,
  [52] = 4,
    ACTIONS(31), 1,
      sym_byte,
    STATE(5), 1,
      aux_sym_machine_code_bytes_repeat1,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      sym_file_path,
    ACTIONS(33), 4,
      sym_instruction,
      sym_address,
      anon_sym_Disassemblyofsection,
      sym__label_identifier,
  [69] = 4,
    ACTIONS(37), 1,
      sym_byte,
    STATE(5), 1,
      aux_sym_machine_code_bytes_repeat1,
    ACTIONS(35), 2,
      ts_builtin_sym_end,
      sym_file_path,
    ACTIONS(40), 4,
      sym_instruction,
      sym_address,
      anon_sym_Disassemblyofsection,
      sym__label_identifier,
  [86] = 4,
    ACTIONS(44), 1,
      anon_sym_LPAREN,
    STATE(9), 1,
      sym_discriminator,
    ACTIONS(46), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(42), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [102] = 3,
    ACTIONS(50), 1,
      sym_instruction,
    ACTIONS(48), 2,
      ts_builtin_sym_end,
      sym_file_path,
    ACTIONS(52), 3,
      sym_address,
      anon_sym_Disassemblyofsection,
      sym__label_identifier,
  [115] = 2,
    ACTIONS(56), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(54), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [125] = 2,
    ACTIONS(60), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(58), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [135] = 2,
    ACTIONS(64), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(62), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [145] = 2,
    ACTIONS(68), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(66), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [155] = 2,
    ACTIONS(72), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(70), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [165] = 2,
    ACTIONS(76), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(74), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [175] = 2,
    ACTIONS(80), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(78), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [185] = 2,
    ACTIONS(84), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(82), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [195] = 3,
    ACTIONS(86), 1,
      sym_byte,
    STATE(4), 1,
      aux_sym_machine_code_bytes_repeat1,
    STATE(7), 1,
      sym_machine_code_bytes,
  [205] = 3,
    ACTIONS(88), 1,
      anon_sym_COLON,
    ACTIONS(90), 1,
      anon_sym_LPAREN,
    STATE(21), 1,
      sym__file_offset,
  [215] = 2,
    ACTIONS(92), 1,
      anon_sym_file,
    ACTIONS(94), 1,
      sym_integer,
  [222] = 2,
    ACTIONS(96), 1,
      anon_sym_COLON,
    ACTIONS(98), 1,
      aux_sym_disassembly_section_token1,
  [229] = 2,
    ACTIONS(100), 1,
      anon_sym_File,
    STATE(25), 1,
      sym_file_offset,
  [236] = 1,
    ACTIONS(102), 1,
      anon_sym_COLON,
  [240] = 1,
    ACTIONS(104), 1,
      anon_sym_format,
  [244] = 1,
    ACTIONS(106), 1,
      sym_section_name,
  [248] = 1,
    ACTIONS(108), 1,
      anon_sym_Offset_COLON,
  [252] = 1,
    ACTIONS(110), 1,
      anon_sym_RPAREN,
  [256] = 1,
    ACTIONS(112), 1,
      anon_sym_COLON,
  [260] = 1,
    ACTIONS(114), 1,
      sym_identifier,
  [264] = 1,
    ACTIONS(116), 1,
      anon_sym_discriminator,
  [268] = 1,
    ACTIONS(118), 1,
      ts_builtin_sym_end,
  [272] = 1,
    ACTIONS(120), 1,
      sym_hexadecimal,
  [276] = 1,
    ACTIONS(122), 1,
      anon_sym_COLON,
  [280] = 1,
    ACTIONS(124), 1,
      anon_sym_COLON,
  [284] = 1,
    ACTIONS(126), 1,
      sym_integer,
  [288] = 1,
    ACTIONS(128), 1,
      anon_sym_RPAREN,
  [292] = 1,
    ACTIONS(130), 1,
      anon_sym_RPAREN,
  [296] = 1,
    ACTIONS(132), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 26,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 69,
  [SMALL_STATE(6)] = 86,
  [SMALL_STATE(7)] = 102,
  [SMALL_STATE(8)] = 115,
  [SMALL_STATE(9)] = 125,
  [SMALL_STATE(10)] = 135,
  [SMALL_STATE(11)] = 145,
  [SMALL_STATE(12)] = 155,
  [SMALL_STATE(13)] = 165,
  [SMALL_STATE(14)] = 175,
  [SMALL_STATE(15)] = 185,
  [SMALL_STATE(16)] = 195,
  [SMALL_STATE(17)] = 205,
  [SMALL_STATE(18)] = 215,
  [SMALL_STATE(19)] = 222,
  [SMALL_STATE(20)] = 229,
  [SMALL_STATE(21)] = 236,
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
  [SMALL_STATE(34)] = 288,
  [SMALL_STATE(35)] = 292,
  [SMALL_STATE(36)] = 296,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(19),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(23),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(36),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(32),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_code_bytes, 1),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [33] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_machine_code_bytes, 1),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_machine_code_bytes_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_machine_code_bytes_repeat1, 2), SHIFT_REPEAT(5),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_machine_code_bytes_repeat1, 2),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_location, 3),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_source_location, 3),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset_line, 3),
  [50] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset_line, 3),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 5),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_location, 4),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_source_location, 4),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disassembly_section, 4, .production_id = 1),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_disassembly_section, 4, .production_id = 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_line, 2),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_line, 2),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset_line, 4),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset_line, 4),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disassembly_section, 3, .production_id = 1),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_disassembly_section, 3, .production_id = 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_discriminator, 4),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_discriminator, 4),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disassembly_section_label, 3),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_disassembly_section_label, 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [118] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__file_offset, 3),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_offset, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
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
