#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 60
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 45
#define ALIAS_COUNT 1
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_COLON = 1,
  anon_sym_file = 2,
  anon_sym_format = 3,
  aux_sym_disassembly_section_token1 = 4,
  anon_sym_LPAREN = 5,
  anon_sym_discriminator = 6,
  anon_sym_RPAREN = 7,
  aux_sym_offset_line_token1 = 8,
  anon_sym_POUND = 9,
  anon_sym_LT = 10,
  anon_sym_PLUS = 11,
  anon_sym_GT = 12,
  aux_sym__code_location_token1 = 13,
  sym_hexadecimal = 14,
  sym_byte = 15,
  sym_instruction = 16,
  sym_address = 17,
  anon_sym_File = 18,
  anon_sym_Offset_COLON = 19,
  anon_sym_Disassemblyofsection = 20,
  sym_integer = 21,
  sym_file_path = 22,
  sym__label_identifier = 23,
  sym_identifier = 24,
  sym_section_name = 25,
  sym_source = 26,
  sym__line = 27,
  sym_header = 28,
  sym_disassembly_section = 29,
  sym_source_location = 30,
  sym_discriminator = 31,
  sym_offset_line = 32,
  sym_objdump_comment = 33,
  sym__comment_with_label = 34,
  sym__comment_with_address = 35,
  sym_code_location = 36,
  aux_sym__code_location = 37,
  sym___code_location = 38,
  sym_label_line = 39,
  sym_machine_code_bytes = 40,
  sym_file_offset = 41,
  sym_disassembly_section_label = 42,
  aux_sym_source_repeat1 = 43,
  aux_sym_machine_code_bytes_repeat1 = 44,
  alias_sym_section_address = 45,
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
  [aux_sym_offset_line_token1] = "offset_line_token1",
  [anon_sym_POUND] = "#",
  [anon_sym_LT] = "<",
  [anon_sym_PLUS] = "+",
  [anon_sym_GT] = ">",
  [aux_sym__code_location_token1] = "_code_location_token1",
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
  [sym_objdump_comment] = "objdump_comment",
  [sym__comment_with_label] = "_comment_with_label",
  [sym__comment_with_address] = "_comment_with_address",
  [sym_code_location] = "code_location",
  [aux_sym__code_location] = "_code_location",
  [sym___code_location] = "__code_location",
  [sym_label_line] = "label_line",
  [sym_machine_code_bytes] = "machine_code_bytes",
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
  [aux_sym_offset_line_token1] = aux_sym_offset_line_token1,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_GT] = anon_sym_GT,
  [aux_sym__code_location_token1] = aux_sym__code_location_token1,
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
  [sym_objdump_comment] = sym_objdump_comment,
  [sym__comment_with_label] = sym__comment_with_label,
  [sym__comment_with_address] = sym__comment_with_address,
  [sym_code_location] = sym_code_location,
  [aux_sym__code_location] = aux_sym__code_location,
  [sym___code_location] = sym___code_location,
  [sym_label_line] = sym_label_line,
  [sym_machine_code_bytes] = sym_machine_code_bytes,
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
  [aux_sym_offset_line_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__code_location_token1] = {
    .visible = false,
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
  [sym_objdump_comment] = {
    .visible = true,
    .named = true,
  },
  [sym__comment_with_label] = {
    .visible = false,
    .named = true,
  },
  [sym__comment_with_address] = {
    .visible = false,
    .named = true,
  },
  [sym_code_location] = {
    .visible = true,
    .named = true,
  },
  [aux_sym__code_location] = {
    .visible = false,
    .named = false,
  },
  [sym___code_location] = {
    .visible = false,
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
  [2] = {
    [1] = sym_identifier,
  },
};

static const uint16_t ts_non_terminal_alias_map[] = {
  aux_sym__code_location, 2,
    aux_sym__code_location,
    sym_identifier,
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
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(67);
      if (lookahead == '#') ADVANCE(76);
      if (lookahead == '(') ADVANCE(72);
      if (lookahead == ')') ADVANCE(74);
      if (lookahead == '+') ADVANCE(78);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '0') ADVANCE(95);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == '>') ADVANCE(79);
      if (lookahead == 'D') ADVANCE(89);
      if (lookahead == 'F') ADVANCE(90);
      if (lookahead == 'O') ADVANCE(23);
      if (lookahead == 'd') ADVANCE(93);
      if (lookahead == 'f') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(99);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '<') ADVANCE(88);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(119);
      if (lookahead != 0) ADVANCE(120);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(105);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead == '(') ADVANCE(72);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == 'D') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      if (lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead == '(') ADVANCE(72);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == 'D') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      if (lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(43);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(52);
      END_STATE();
    case 8:
      if (lookahead == '+') ADVANCE(78);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == '>') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0) ADVANCE(81);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == '<') ADVANCE(62);
      if (lookahead == 'F') ADVANCE(27);
      if (lookahead == 'd') ADVANCE(29);
      if (lookahead == 'f') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(60);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(104);
      END_STATE();
    case 11:
      if (lookahead == '>') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 15:
      if (lookahead == 'b') ADVANCE(34);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(46);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 23:
      if (lookahead == 'f') ADVANCE(25);
      END_STATE();
    case 24:
      if (lookahead == 'f') ADVANCE(7);
      END_STATE();
    case 25:
      if (lookahead == 'f') ADVANCE(50);
      END_STATE();
    case 26:
      if (lookahead == 'f') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(26)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 36:
      if (lookahead == 'm') ADVANCE(15);
      END_STATE();
    case 37:
      if (lookahead == 'm') ADVANCE(12);
      END_STATE();
    case 38:
      if (lookahead == 'm') ADVANCE(28);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(3);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(13);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(73);
      END_STATE();
    case 48:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 49:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 50:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 52:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 53:
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(70);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 58:
      if (lookahead == 'y') ADVANCE(6);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 61:
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 62:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 63:
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(121);
      END_STATE();
    case 64:
      if (eof) ADVANCE(67);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '(') ADVANCE(72);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == 'D') ADVANCE(92);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(64)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(101);
      if (lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 65:
      if (eof) ADVANCE(67);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '(') ADVANCE(72);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == 'D') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(65)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      if (lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 66:
      if (eof) ADVANCE(67);
      if (lookahead == '#') ADVANCE(76);
      if (lookahead == '(') ADVANCE(72);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '0') ADVANCE(96);
      if (lookahead == ':') ADVANCE(68);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == 'D') ADVANCE(91);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(66)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      if (lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_disassembly_section_token1);
      if (lookahead == '>') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_discriminator);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_offset_line_token1);
      if (lookahead == ' ') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(75);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym__code_location_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(80);
      if (lookahead != 0 &&
          lookahead != '+' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(81);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym__code_location_token1);
      if (lookahead != 0 &&
          lookahead != '+' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_byte);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_byte);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_byte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_byte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<') ADVANCE(88);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<') ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(86);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(100);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_File);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_Offset_COLON);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_Disassemblyofsection);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == ' ') ADVANCE(43);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'a') ADVANCE(116);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'b') ADVANCE(112);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'e') ADVANCE(113);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'l') ADVANCE(117);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'm') ADVANCE(110);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 's') ADVANCE(109);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 's') ADVANCE(111);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 's') ADVANCE(115);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'y') ADVANCE(108);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__label_identifier);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(119);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(120);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(121);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 66},
  [2] = {.lex_state = 66},
  [3] = {.lex_state = 66},
  [4] = {.lex_state = 66},
  [5] = {.lex_state = 64},
  [6] = {.lex_state = 65},
  [7] = {.lex_state = 64},
  [8] = {.lex_state = 66},
  [9] = {.lex_state = 66},
  [10] = {.lex_state = 66},
  [11] = {.lex_state = 66},
  [12] = {.lex_state = 66},
  [13] = {.lex_state = 66},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 66},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 66},
  [19] = {.lex_state = 66},
  [20] = {.lex_state = 66},
  [21] = {.lex_state = 66},
  [22] = {.lex_state = 66},
  [23] = {.lex_state = 66},
  [24] = {.lex_state = 66},
  [25] = {.lex_state = 66},
  [26] = {.lex_state = 66},
  [27] = {.lex_state = 66},
  [28] = {.lex_state = 66},
  [29] = {.lex_state = 66},
  [30] = {.lex_state = 66},
  [31] = {.lex_state = 66},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 9},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 26},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 9},
  [41] = {.lex_state = 66},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 66},
  [46] = {.lex_state = 66},
  [47] = {.lex_state = 9},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 26},
  [52] = {.lex_state = 9},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 9},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_file] = ACTIONS(1),
    [anon_sym_format] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_discriminator] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
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
    [sym_source] = STATE(42),
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
    STATE(4), 8,
      sym__line,
      sym_header,
      sym_disassembly_section,
      sym_source_location,
      sym_offset_line,
      sym_label_line,
      sym_disassembly_section_label,
      aux_sym_source_repeat1,
  [26] = 8,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_POUND,
    ACTIONS(21), 1,
      anon_sym_LT,
    STATE(9), 1,
      sym_code_location,
    ACTIONS(23), 2,
      sym_address,
      sym__label_identifier,
    STATE(25), 2,
      sym__comment_with_label,
      sym__comment_with_address,
    STATE(27), 2,
      sym_objdump_comment,
      sym_file_offset,
    ACTIONS(15), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [56] = 6,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      sym_address,
    ACTIONS(30), 1,
      anon_sym_Disassemblyofsection,
    ACTIONS(33), 1,
      sym_file_path,
    ACTIONS(36), 1,
      sym__label_identifier,
    STATE(4), 8,
      sym__line,
      sym_header,
      sym_disassembly_section,
      sym_source_location,
      sym_offset_line,
      sym_label_line,
      sym_disassembly_section_label,
      aux_sym_source_repeat1,
  [82] = 4,
    ACTIONS(43), 1,
      sym_byte,
    STATE(5), 1,
      aux_sym_machine_code_bytes_repeat1,
    ACTIONS(39), 2,
      ts_builtin_sym_end,
      aux_sym_offset_line_token1,
    ACTIONS(41), 6,
      anon_sym_LPAREN,
      anon_sym_LT,
      sym_address,
      anon_sym_Disassemblyofsection,
      sym_file_path,
      sym__label_identifier,
  [101] = 7,
    ACTIONS(46), 1,
      ts_builtin_sym_end,
    ACTIONS(48), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      aux_sym_offset_line_token1,
    ACTIONS(52), 1,
      anon_sym_LT,
    STATE(11), 1,
      sym_code_location,
    STATE(26), 1,
      sym_file_offset,
    ACTIONS(54), 4,
      sym_address,
      anon_sym_Disassemblyofsection,
      sym_file_path,
      sym__label_identifier,
  [126] = 4,
    ACTIONS(60), 1,
      sym_byte,
    STATE(5), 1,
      aux_sym_machine_code_bytes_repeat1,
    ACTIONS(56), 2,
      ts_builtin_sym_end,
      aux_sym_offset_line_token1,
    ACTIONS(58), 6,
      anon_sym_LPAREN,
      anon_sym_LT,
      sym_address,
      anon_sym_Disassemblyofsection,
      sym_file_path,
      sym__label_identifier,
  [145] = 4,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym_file_offset,
    ACTIONS(64), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(62), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [161] = 4,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym_file_offset,
    ACTIONS(68), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(66), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [177] = 4,
    ACTIONS(72), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_discriminator,
    ACTIONS(74), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(70), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [193] = 4,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    STATE(30), 1,
      sym_file_offset,
    ACTIONS(78), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(76), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [209] = 2,
    ACTIONS(82), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(80), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [220] = 2,
    ACTIONS(86), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(84), 4,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [231] = 5,
    ACTIONS(88), 1,
      anon_sym_LT,
    ACTIONS(93), 1,
      aux_sym__code_location_token1,
    STATE(14), 1,
      aux_sym__code_location,
    STATE(34), 1,
      sym___code_location,
    ACTIONS(91), 2,
      anon_sym_PLUS,
      anon_sym_GT,
  [248] = 2,
    ACTIONS(98), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(96), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [259] = 6,
    ACTIONS(100), 1,
      anon_sym_LT,
    ACTIONS(102), 1,
      anon_sym_PLUS,
    ACTIONS(104), 1,
      anon_sym_GT,
    ACTIONS(106), 1,
      aux_sym__code_location_token1,
    STATE(14), 1,
      aux_sym__code_location,
    STATE(34), 1,
      sym___code_location,
  [278] = 5,
    ACTIONS(100), 1,
      anon_sym_LT,
    ACTIONS(106), 1,
      aux_sym__code_location_token1,
    ACTIONS(108), 1,
      anon_sym_GT,
    STATE(14), 1,
      aux_sym__code_location,
    STATE(34), 1,
      sym___code_location,
  [294] = 2,
    ACTIONS(112), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(110), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [304] = 2,
    ACTIONS(116), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(114), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [314] = 2,
    ACTIONS(120), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(118), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [324] = 2,
    ACTIONS(124), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(122), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [334] = 2,
    ACTIONS(128), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(126), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [344] = 2,
    ACTIONS(132), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(130), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [354] = 2,
    ACTIONS(136), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(134), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [364] = 2,
    ACTIONS(140), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(138), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [374] = 2,
    ACTIONS(78), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(76), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [384] = 2,
    ACTIONS(68), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(66), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [394] = 2,
    ACTIONS(144), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(142), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [404] = 2,
    ACTIONS(148), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(146), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [414] = 2,
    ACTIONS(23), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(15), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [424] = 2,
    ACTIONS(152), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(150), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [434] = 4,
    ACTIONS(100), 1,
      anon_sym_LT,
    ACTIONS(106), 1,
      aux_sym__code_location_token1,
    STATE(16), 1,
      aux_sym__code_location,
    STATE(34), 1,
      sym___code_location,
  [447] = 4,
    ACTIONS(100), 1,
      anon_sym_LT,
    ACTIONS(106), 1,
      aux_sym__code_location_token1,
    STATE(17), 1,
      aux_sym__code_location,
    STATE(34), 1,
      sym___code_location,
  [460] = 2,
    ACTIONS(156), 1,
      aux_sym__code_location_token1,
    ACTIONS(154), 3,
      anon_sym_LT,
      anon_sym_PLUS,
      anon_sym_GT,
  [469] = 2,
    ACTIONS(160), 1,
      aux_sym__code_location_token1,
    ACTIONS(158), 3,
      anon_sym_LT,
      anon_sym_PLUS,
      anon_sym_GT,
  [478] = 3,
    ACTIONS(162), 1,
      sym_byte,
    STATE(6), 1,
      sym_machine_code_bytes,
    STATE(7), 1,
      aux_sym_machine_code_bytes_repeat1,
  [488] = 3,
    ACTIONS(17), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 1,
      anon_sym_COLON,
    STATE(56), 1,
      sym_file_offset,
  [498] = 2,
    ACTIONS(166), 1,
      anon_sym_file,
    ACTIONS(168), 1,
      sym_integer,
  [505] = 2,
    ACTIONS(21), 1,
      anon_sym_LT,
    STATE(8), 1,
      sym_code_location,
  [512] = 2,
    ACTIONS(170), 1,
      anon_sym_COLON,
    ACTIONS(172), 1,
      aux_sym_disassembly_section_token1,
  [519] = 2,
    ACTIONS(174), 1,
      sym_hexadecimal,
    ACTIONS(176), 1,
      sym_address,
  [526] = 1,
    ACTIONS(178), 1,
      ts_builtin_sym_end,
  [530] = 1,
    ACTIONS(180), 1,
      anon_sym_Offset_COLON,
  [534] = 1,
    ACTIONS(182), 1,
      anon_sym_COLON,
  [538] = 1,
    ACTIONS(184), 1,
      sym_hexadecimal,
  [542] = 1,
    ACTIONS(186), 1,
      sym_hexadecimal,
  [546] = 1,
    ACTIONS(188), 1,
      anon_sym_discriminator,
  [550] = 1,
    ACTIONS(190), 1,
      anon_sym_RPAREN,
  [554] = 1,
    ACTIONS(192), 1,
      anon_sym_RPAREN,
  [558] = 1,
    ACTIONS(194), 1,
      sym_instruction,
  [562] = 1,
    ACTIONS(196), 1,
      sym_integer,
  [566] = 1,
    ACTIONS(198), 1,
      anon_sym_format,
  [570] = 1,
    ACTIONS(200), 1,
      sym_identifier,
  [574] = 1,
    ACTIONS(202), 1,
      anon_sym_GT,
  [578] = 1,
    ACTIONS(204), 1,
      anon_sym_COLON,
  [582] = 1,
    ACTIONS(206), 1,
      anon_sym_COLON,
  [586] = 1,
    ACTIONS(208), 1,
      anon_sym_COLON,
  [590] = 1,
    ACTIONS(210), 1,
      sym_section_name,
  [594] = 1,
    ACTIONS(212), 1,
      anon_sym_File,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 26,
  [SMALL_STATE(4)] = 56,
  [SMALL_STATE(5)] = 82,
  [SMALL_STATE(6)] = 101,
  [SMALL_STATE(7)] = 126,
  [SMALL_STATE(8)] = 145,
  [SMALL_STATE(9)] = 161,
  [SMALL_STATE(10)] = 177,
  [SMALL_STATE(11)] = 193,
  [SMALL_STATE(12)] = 209,
  [SMALL_STATE(13)] = 220,
  [SMALL_STATE(14)] = 231,
  [SMALL_STATE(15)] = 248,
  [SMALL_STATE(16)] = 259,
  [SMALL_STATE(17)] = 278,
  [SMALL_STATE(18)] = 294,
  [SMALL_STATE(19)] = 304,
  [SMALL_STATE(20)] = 314,
  [SMALL_STATE(21)] = 324,
  [SMALL_STATE(22)] = 334,
  [SMALL_STATE(23)] = 344,
  [SMALL_STATE(24)] = 354,
  [SMALL_STATE(25)] = 364,
  [SMALL_STATE(26)] = 374,
  [SMALL_STATE(27)] = 384,
  [SMALL_STATE(28)] = 394,
  [SMALL_STATE(29)] = 404,
  [SMALL_STATE(30)] = 414,
  [SMALL_STATE(31)] = 424,
  [SMALL_STATE(32)] = 434,
  [SMALL_STATE(33)] = 447,
  [SMALL_STATE(34)] = 460,
  [SMALL_STATE(35)] = 469,
  [SMALL_STATE(36)] = 478,
  [SMALL_STATE(37)] = 488,
  [SMALL_STATE(38)] = 498,
  [SMALL_STATE(39)] = 505,
  [SMALL_STATE(40)] = 512,
  [SMALL_STATE(41)] = 519,
  [SMALL_STATE(42)] = 526,
  [SMALL_STATE(43)] = 530,
  [SMALL_STATE(44)] = 534,
  [SMALL_STATE(45)] = 538,
  [SMALL_STATE(46)] = 542,
  [SMALL_STATE(47)] = 546,
  [SMALL_STATE(48)] = 550,
  [SMALL_STATE(49)] = 554,
  [SMALL_STATE(50)] = 558,
  [SMALL_STATE(51)] = 562,
  [SMALL_STATE(52)] = 566,
  [SMALL_STATE(53)] = 570,
  [SMALL_STATE(54)] = 574,
  [SMALL_STATE(55)] = 578,
  [SMALL_STATE(56)] = 582,
  [SMALL_STATE(57)] = 586,
  [SMALL_STATE(58)] = 590,
  [SMALL_STATE(59)] = 594,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset_line, 5),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset_line, 5),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(40),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(58),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(57),
  [36] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(55),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_machine_code_bytes_repeat1, 2),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_machine_code_bytes_repeat1, 2),
  [43] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_machine_code_bytes_repeat1, 2), SHIFT_REPEAT(5),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset_line, 3),
  [48] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset_line, 3),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_code_bytes, 1),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_machine_code_bytes, 1),
  [60] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_with_label, 3),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_with_label, 3),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset_line, 6),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset_line, 6),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_location, 3),
  [72] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_source_location, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset_line, 4),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset_line, 4),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_location, 5, .production_id = 2),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_location, 5, .production_id = 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_offset, 5),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_offset, 5),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__code_location, 2), SHIFT_REPEAT(33),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__code_location, 2),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__code_location, 2), SHIFT_REPEAT(34),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_location, 3, .production_id = 2),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_location, 3, .production_id = 2),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 5),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disassembly_section, 3, .production_id = 1),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_disassembly_section, 3, .production_id = 1),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_with_label, 4),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_with_label, 4),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_discriminator, 4),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_discriminator, 4),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disassembly_section_label, 3),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_disassembly_section_label, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset_line, 7),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset_line, 7),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_with_address, 2),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_with_address, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_objdump_comment, 1),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_objdump_comment, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disassembly_section, 4, .production_id = 1),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_disassembly_section, 4, .production_id = 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_line, 2),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_line, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_location, 4),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_source_location, 4),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__code_location, 1),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__code_location, 1),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym___code_location, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym___code_location, 3),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [178] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
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
