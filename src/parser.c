#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 65
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 48
#define ALIAS_COUNT 1
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

enum {
  anon_sym_COLON = 1,
  anon_sym_file = 2,
  anon_sym_format = 3,
  aux_sym_disassembly_section_token1 = 4,
  anon_sym_LPAREN = 5,
  anon_sym_discriminator = 6,
  anon_sym_RPAREN = 7,
  aux_sym__instruction_and_comment_token1 = 8,
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
  sym__instruction_and_comment = 33,
  sym__instruction_and_location = 34,
  sym_objdump_comment = 35,
  sym__comment_with_label = 36,
  sym__comment_with_address = 37,
  sym_code_location = 38,
  aux_sym__code_location = 39,
  sym___code_location = 40,
  sym_label_line = 41,
  sym_machine_code_bytes = 42,
  sym_file_offset = 43,
  sym_disassembly_section_label = 44,
  aux_sym_source_repeat1 = 45,
  aux_sym_disassembly_section_repeat1 = 46,
  aux_sym_machine_code_bytes_repeat1 = 47,
  alias_sym_section_address = 48,
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
  [aux_sym__instruction_and_comment_token1] = "_instruction_and_comment_token1",
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
  [sym__instruction_and_comment] = "_instruction_and_comment",
  [sym__instruction_and_location] = "_instruction_and_location",
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
  [aux_sym_disassembly_section_repeat1] = "disassembly_section_repeat1",
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
  [aux_sym__instruction_and_comment_token1] = aux_sym__instruction_and_comment_token1,
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
  [sym__instruction_and_comment] = sym__instruction_and_comment,
  [sym__instruction_and_location] = sym__instruction_and_location,
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
  [aux_sym_disassembly_section_repeat1] = aux_sym_disassembly_section_repeat1,
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
  [aux_sym__instruction_and_comment_token1] = {
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
  [sym__instruction_and_comment] = {
    .visible = false,
    .named = true,
  },
  [sym__instruction_and_location] = {
    .visible = false,
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
  [aux_sym_disassembly_section_repeat1] = {
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
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(68);
      if (lookahead == '#') ADVANCE(77);
      if (lookahead == '(') ADVANCE(73);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == '+') ADVANCE(79);
      if (lookahead == '.') ADVANCE(64);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '0') ADVANCE(97);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '>') ADVANCE(81);
      if (lookahead == 'D') ADVANCE(91);
      if (lookahead == 'F') ADVANCE(92);
      if (lookahead == 'O') ADVANCE(24);
      if (lookahead == 'd') ADVANCE(95);
      if (lookahead == 'f') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(101);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(121);
      if (lookahead != 0) ADVANCE(122);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '<') ADVANCE(90);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(107);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(76);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == 'D') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      if (lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(76);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == 'D') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      if (lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(42);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(51);
      END_STATE();
    case 8:
      if (lookahead == '+') ADVANCE(80);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == '>') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0) ADVANCE(83);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '<') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      if (lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(106);
      END_STATE();
    case 11:
      if (lookahead == '>') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 12:
      if (lookahead == 'F') ADVANCE(27);
      if (lookahead == 'd') ADVANCE(29);
      if (lookahead == 'f') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(12)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(60);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 16:
      if (lookahead == 'b') ADVANCE(34);
      END_STATE();
    case 17:
      if (lookahead == 'c') ADVANCE(45);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(70);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 24:
      if (lookahead == 'f') ADVANCE(26);
      END_STATE();
    case 25:
      if (lookahead == 'f') ADVANCE(7);
      END_STATE();
    case 26:
      if (lookahead == 'f') ADVANCE(49);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(38);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(19);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 36:
      if (lookahead == 'm') ADVANCE(16);
      END_STATE();
    case 37:
      if (lookahead == 'm') ADVANCE(13);
      END_STATE();
    case 38:
      if (lookahead == 'm') ADVANCE(28);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(3);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(14);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(37);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(30);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 47:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 48:
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 49:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 50:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 52:
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(10);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(71);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 57:
      if (lookahead == 'y') ADVANCE(6);
      END_STATE();
    case 58:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(58)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(85);
      END_STATE();
    case 61:
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 62:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 63:
      if (lookahead != 0 &&
          lookahead != '0') ADVANCE(83);
      END_STATE();
    case 64:
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(123);
      END_STATE();
    case 65:
      if (eof) ADVANCE(68);
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == 'D') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(65)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      if (lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 66:
      if (eof) ADVANCE(68);
      if (lookahead == ' ') ADVANCE(4);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == 'D') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(66)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      if (lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 67:
      if (eof) ADVANCE(68);
      if (lookahead == '#') ADVANCE(77);
      if (lookahead == '(') ADVANCE(73);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '0') ADVANCE(98);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == '<') ADVANCE(78);
      if (lookahead == 'D') ADVANCE(93);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(67)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      if (lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_disassembly_section_token1);
      if (lookahead == '>') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_discriminator);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym__instruction_and_comment_token1);
      if (lookahead == ' ') ADVANCE(76);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead != 0 &&
          lookahead != '0') ADVANCE(83);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym__code_location_token1);
      if (lookahead == '+') ADVANCE(80);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(82);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(83);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym__code_location_token1);
      if (lookahead == '+') ADVANCE(63);
      if (lookahead != 0 &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_byte);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_byte);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_byte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_byte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<') ADVANCE(90);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<') ADVANCE(90);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(86);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(102);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(87);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_File);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_Offset_COLON);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_Disassemblyofsection);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == ' ') ADVANCE(42);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'a') ADVANCE(118);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'b') ADVANCE(114);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'e') ADVANCE(115);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'l') ADVANCE(119);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'm') ADVANCE(112);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 's') ADVANCE(111);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 's') ADVANCE(113);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 's') ADVANCE(117);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'y') ADVANCE(110);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym__label_identifier);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(120);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(121);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(122);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(123);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 67},
  [2] = {.lex_state = 67},
  [3] = {.lex_state = 67},
  [4] = {.lex_state = 67},
  [5] = {.lex_state = 67},
  [6] = {.lex_state = 67},
  [7] = {.lex_state = 67},
  [8] = {.lex_state = 65},
  [9] = {.lex_state = 65},
  [10] = {.lex_state = 66},
  [11] = {.lex_state = 67},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 9},
  [14] = {.lex_state = 67},
  [15] = {.lex_state = 67},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 67},
  [18] = {.lex_state = 67},
  [19] = {.lex_state = 67},
  [20] = {.lex_state = 8},
  [21] = {.lex_state = 67},
  [22] = {.lex_state = 67},
  [23] = {.lex_state = 67},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 67},
  [26] = {.lex_state = 67},
  [27] = {.lex_state = 67},
  [28] = {.lex_state = 67},
  [29] = {.lex_state = 67},
  [30] = {.lex_state = 67},
  [31] = {.lex_state = 67},
  [32] = {.lex_state = 8},
  [33] = {.lex_state = 67},
  [34] = {.lex_state = 8},
  [35] = {.lex_state = 8},
  [36] = {.lex_state = 67},
  [37] = {.lex_state = 8},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 12},
  [40] = {.lex_state = 67},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 12},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 58},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 58},
  [47] = {.lex_state = 12},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 67},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 12},
  [52] = {.lex_state = 12},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 9},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 67},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
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
    [sym_source] = STATE(59),
    [sym__line] = STATE(6),
    [sym_header] = STATE(6),
    [sym_disassembly_section] = STATE(6),
    [sym_disassembly_section_label] = STATE(6),
    [aux_sym_source_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_address] = ACTIONS(5),
    [anon_sym_Disassemblyofsection] = ACTIONS(7),
    [sym_file_path] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(15), 1,
      anon_sym_POUND,
    ACTIONS(17), 1,
      anon_sym_LT,
    STATE(11), 1,
      sym_code_location,
    STATE(27), 1,
      sym_file_offset,
    STATE(29), 1,
      sym_objdump_comment,
    ACTIONS(19), 2,
      sym_address,
      sym__label_identifier,
    STATE(28), 2,
      sym__comment_with_label,
      sym__comment_with_address,
    ACTIONS(11), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [32] = 5,
    ACTIONS(23), 1,
      sym_address,
    ACTIONS(26), 1,
      sym_file_path,
    ACTIONS(29), 1,
      sym__label_identifier,
    ACTIONS(21), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    STATE(3), 4,
      sym_source_location,
      sym_offset_line,
      sym_label_line,
      aux_sym_disassembly_section_repeat1,
  [52] = 5,
    ACTIONS(34), 1,
      sym_address,
    ACTIONS(37), 1,
      sym_file_path,
    ACTIONS(40), 1,
      sym__label_identifier,
    ACTIONS(32), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    STATE(3), 4,
      sym_source_location,
      sym_offset_line,
      sym_label_line,
      aux_sym_disassembly_section_repeat1,
  [72] = 5,
    ACTIONS(40), 1,
      sym__label_identifier,
    ACTIONS(44), 1,
      sym_address,
    ACTIONS(47), 1,
      sym_file_path,
    ACTIONS(42), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    STATE(3), 4,
      sym_source_location,
      sym_offset_line,
      sym_label_line,
      aux_sym_disassembly_section_repeat1,
  [92] = 5,
    ACTIONS(5), 1,
      sym_address,
    ACTIONS(7), 1,
      anon_sym_Disassemblyofsection,
    ACTIONS(9), 1,
      sym_file_path,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    STATE(7), 5,
      sym__line,
      sym_header,
      sym_disassembly_section,
      sym_disassembly_section_label,
      aux_sym_source_repeat1,
  [112] = 5,
    ACTIONS(52), 1,
      ts_builtin_sym_end,
    ACTIONS(54), 1,
      sym_address,
    ACTIONS(57), 1,
      anon_sym_Disassemblyofsection,
    ACTIONS(60), 1,
      sym_file_path,
    STATE(7), 5,
      sym__line,
      sym_header,
      sym_disassembly_section,
      sym_disassembly_section_label,
      aux_sym_source_repeat1,
  [132] = 4,
    ACTIONS(65), 1,
      sym_byte,
    STATE(9), 1,
      aux_sym_machine_code_bytes_repeat1,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      aux_sym__instruction_and_comment_token1,
    ACTIONS(67), 4,
      sym_address,
      anon_sym_Disassemblyofsection,
      sym_file_path,
      sym__label_identifier,
  [149] = 4,
    ACTIONS(71), 1,
      sym_byte,
    STATE(9), 1,
      aux_sym_machine_code_bytes_repeat1,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      aux_sym__instruction_and_comment_token1,
    ACTIONS(74), 4,
      sym_address,
      anon_sym_Disassemblyofsection,
      sym_file_path,
      sym__label_identifier,
  [166] = 4,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
    ACTIONS(78), 1,
      aux_sym__instruction_and_comment_token1,
    STATE(31), 2,
      sym__instruction_and_comment,
      sym__instruction_and_location,
    ACTIONS(80), 4,
      sym_address,
      anon_sym_Disassemblyofsection,
      sym_file_path,
      sym__label_identifier,
  [183] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym_file_offset,
    ACTIONS(84), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(82), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [199] = 4,
    ACTIONS(40), 1,
      sym__label_identifier,
    ACTIONS(86), 1,
      sym_address,
    ACTIONS(88), 1,
      sym_file_path,
    STATE(4), 4,
      sym_source_location,
      sym_offset_line,
      sym_label_line,
      aux_sym_disassembly_section_repeat1,
  [215] = 4,
    ACTIONS(40), 1,
      sym__label_identifier,
    ACTIONS(86), 1,
      sym_address,
    ACTIONS(88), 1,
      sym_file_path,
    STATE(5), 4,
      sym_source_location,
      sym_offset_line,
      sym_label_line,
      aux_sym_disassembly_section_repeat1,
  [231] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym_file_offset,
    ACTIONS(92), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(90), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [247] = 4,
    ACTIONS(96), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym_discriminator,
    ACTIONS(98), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(94), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [263] = 6,
    ACTIONS(100), 1,
      anon_sym_LT,
    ACTIONS(102), 1,
      anon_sym_PLUS,
    ACTIONS(104), 1,
      anon_sym_GT,
    ACTIONS(106), 1,
      aux_sym__code_location_token1,
    STATE(20), 1,
      aux_sym__code_location,
    STATE(32), 1,
      sym___code_location,
  [282] = 2,
    ACTIONS(110), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(108), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [293] = 2,
    ACTIONS(114), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(112), 4,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [304] = 2,
    ACTIONS(118), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(116), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [315] = 5,
    ACTIONS(120), 1,
      anon_sym_LT,
    ACTIONS(125), 1,
      aux_sym__code_location_token1,
    STATE(20), 1,
      aux_sym__code_location,
    STATE(32), 1,
      sym___code_location,
    ACTIONS(123), 2,
      anon_sym_PLUS,
      anon_sym_GT,
  [332] = 2,
    ACTIONS(130), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(128), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [342] = 2,
    ACTIONS(134), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(132), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [352] = 2,
    ACTIONS(138), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(136), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [362] = 5,
    ACTIONS(100), 1,
      anon_sym_LT,
    ACTIONS(106), 1,
      aux_sym__code_location_token1,
    ACTIONS(140), 1,
      anon_sym_GT,
    STATE(20), 1,
      aux_sym__code_location,
    STATE(32), 1,
      sym___code_location,
  [378] = 2,
    ACTIONS(144), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(142), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [388] = 2,
    ACTIONS(148), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(146), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [398] = 2,
    ACTIONS(84), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(82), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [408] = 2,
    ACTIONS(152), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(150), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [418] = 2,
    ACTIONS(156), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(154), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [428] = 2,
    ACTIONS(160), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(158), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [438] = 2,
    ACTIONS(164), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(162), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [448] = 2,
    ACTIONS(168), 1,
      aux_sym__code_location_token1,
    ACTIONS(166), 3,
      anon_sym_LT,
      anon_sym_PLUS,
      anon_sym_GT,
  [457] = 2,
    ACTIONS(172), 1,
      sym_address,
    ACTIONS(170), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [466] = 2,
    ACTIONS(176), 1,
      aux_sym__code_location_token1,
    ACTIONS(174), 3,
      anon_sym_LT,
      anon_sym_PLUS,
      anon_sym_GT,
  [475] = 4,
    ACTIONS(100), 1,
      anon_sym_LT,
    ACTIONS(106), 1,
      aux_sym__code_location_token1,
    STATE(24), 1,
      aux_sym__code_location,
    STATE(32), 1,
      sym___code_location,
  [488] = 2,
    ACTIONS(180), 1,
      sym_address,
    ACTIONS(178), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [497] = 4,
    ACTIONS(100), 1,
      anon_sym_LT,
    ACTIONS(106), 1,
      aux_sym__code_location_token1,
    STATE(16), 1,
      aux_sym__code_location,
    STATE(32), 1,
      sym___code_location,
  [510] = 3,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(182), 1,
      anon_sym_COLON,
    STATE(53), 1,
      sym_file_offset,
  [520] = 3,
    ACTIONS(184), 1,
      sym_byte,
    STATE(8), 1,
      aux_sym_machine_code_bytes_repeat1,
    STATE(10), 1,
      sym_machine_code_bytes,
  [530] = 2,
    ACTIONS(186), 1,
      sym_hexadecimal,
    ACTIONS(188), 1,
      sym_address,
  [537] = 2,
    ACTIONS(17), 1,
      anon_sym_LT,
    STATE(14), 1,
      sym_code_location,
  [544] = 1,
    ACTIONS(190), 1,
      anon_sym_file,
  [548] = 1,
    ACTIONS(192), 1,
      anon_sym_COLON,
  [552] = 1,
    ACTIONS(194), 1,
      sym_integer,
  [556] = 1,
    ACTIONS(196), 1,
      anon_sym_COLON,
  [560] = 1,
    ACTIONS(198), 1,
      sym_integer,
  [564] = 1,
    ACTIONS(200), 1,
      anon_sym_File,
  [568] = 1,
    ACTIONS(202), 1,
      anon_sym_RPAREN,
  [572] = 1,
    ACTIONS(204), 1,
      sym_hexadecimal,
  [576] = 1,
    ACTIONS(206), 1,
      anon_sym_RPAREN,
  [580] = 1,
    ACTIONS(208), 1,
      anon_sym_discriminator,
  [584] = 1,
    ACTIONS(210), 1,
      anon_sym_format,
  [588] = 1,
    ACTIONS(212), 1,
      anon_sym_COLON,
  [592] = 1,
    ACTIONS(214), 1,
      sym_identifier,
  [596] = 1,
    ACTIONS(216), 1,
      anon_sym_Offset_COLON,
  [600] = 1,
    ACTIONS(218), 1,
      aux_sym_disassembly_section_token1,
  [604] = 1,
    ACTIONS(220), 1,
      anon_sym_COLON,
  [608] = 1,
    ACTIONS(222), 1,
      sym_hexadecimal,
  [612] = 1,
    ACTIONS(224), 1,
      ts_builtin_sym_end,
  [616] = 1,
    ACTIONS(226), 1,
      anon_sym_COLON,
  [620] = 1,
    ACTIONS(228), 1,
      anon_sym_COLON,
  [624] = 1,
    ACTIONS(230), 1,
      sym_instruction,
  [628] = 1,
    ACTIONS(232), 1,
      anon_sym_GT,
  [632] = 1,
    ACTIONS(234), 1,
      sym_section_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 32,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 72,
  [SMALL_STATE(6)] = 92,
  [SMALL_STATE(7)] = 112,
  [SMALL_STATE(8)] = 132,
  [SMALL_STATE(9)] = 149,
  [SMALL_STATE(10)] = 166,
  [SMALL_STATE(11)] = 183,
  [SMALL_STATE(12)] = 199,
  [SMALL_STATE(13)] = 215,
  [SMALL_STATE(14)] = 231,
  [SMALL_STATE(15)] = 247,
  [SMALL_STATE(16)] = 263,
  [SMALL_STATE(17)] = 282,
  [SMALL_STATE(18)] = 293,
  [SMALL_STATE(19)] = 304,
  [SMALL_STATE(20)] = 315,
  [SMALL_STATE(21)] = 332,
  [SMALL_STATE(22)] = 342,
  [SMALL_STATE(23)] = 352,
  [SMALL_STATE(24)] = 362,
  [SMALL_STATE(25)] = 378,
  [SMALL_STATE(26)] = 388,
  [SMALL_STATE(27)] = 398,
  [SMALL_STATE(28)] = 408,
  [SMALL_STATE(29)] = 418,
  [SMALL_STATE(30)] = 428,
  [SMALL_STATE(31)] = 438,
  [SMALL_STATE(32)] = 448,
  [SMALL_STATE(33)] = 457,
  [SMALL_STATE(34)] = 466,
  [SMALL_STATE(35)] = 475,
  [SMALL_STATE(36)] = 488,
  [SMALL_STATE(37)] = 497,
  [SMALL_STATE(38)] = 510,
  [SMALL_STATE(39)] = 520,
  [SMALL_STATE(40)] = 530,
  [SMALL_STATE(41)] = 537,
  [SMALL_STATE(42)] = 544,
  [SMALL_STATE(43)] = 548,
  [SMALL_STATE(44)] = 552,
  [SMALL_STATE(45)] = 556,
  [SMALL_STATE(46)] = 560,
  [SMALL_STATE(47)] = 564,
  [SMALL_STATE(48)] = 568,
  [SMALL_STATE(49)] = 572,
  [SMALL_STATE(50)] = 576,
  [SMALL_STATE(51)] = 580,
  [SMALL_STATE(52)] = 584,
  [SMALL_STATE(53)] = 588,
  [SMALL_STATE(54)] = 592,
  [SMALL_STATE(55)] = 596,
  [SMALL_STATE(56)] = 600,
  [SMALL_STATE(57)] = 604,
  [SMALL_STATE(58)] = 608,
  [SMALL_STATE(59)] = 612,
  [SMALL_STATE(60)] = 616,
  [SMALL_STATE(61)] = 620,
  [SMALL_STATE(62)] = 624,
  [SMALL_STATE(63)] = 628,
  [SMALL_STATE(64)] = 632,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(56),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction_and_location, 2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__instruction_and_location, 2),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_disassembly_section_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_disassembly_section_repeat1, 2), SHIFT_REPEAT(45),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disassembly_section_repeat1, 2), SHIFT_REPEAT(61),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_disassembly_section_repeat1, 2), SHIFT_REPEAT(57),
  [32] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disassembly_section, 4, .production_id = 1),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_disassembly_section, 4, .production_id = 1), SHIFT(45),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_disassembly_section, 4, .production_id = 1), SHIFT(61),
  [40] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disassembly_section, 5, .production_id = 1),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_disassembly_section, 5, .production_id = 1), SHIFT(45),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_disassembly_section, 5, .production_id = 1), SHIFT(61),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(56),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(64),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(60),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_code_bytes, 1),
  [65] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_machine_code_bytes, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_machine_code_bytes_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_machine_code_bytes_repeat1, 2), SHIFT_REPEAT(9),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_machine_code_bytes_repeat1, 2),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset_line, 3),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset_line, 3),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction_and_location, 3),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__instruction_and_location, 3),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_with_label, 3),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_with_label, 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_location, 3),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_source_location, 3),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_location, 5, .production_id = 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_location, 5, .production_id = 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_offset, 5),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_offset, 5),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_location, 3, .production_id = 2),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_location, 3, .production_id = 2),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__code_location, 2), SHIFT_REPEAT(35),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__code_location, 2),
  [125] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__code_location, 2), SHIFT_REPEAT(32),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_with_address, 2),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_with_address, 2),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_location, 4),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_source_location, 4),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_with_label, 4),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_with_label, 4),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_discriminator, 4),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_discriminator, 4),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction_and_location, 4),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__instruction_and_location, 4),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_objdump_comment, 1),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_objdump_comment, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction_and_comment, 3),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__instruction_and_comment, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_line, 2),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_line, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset_line, 4),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset_line, 4),
  [166] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__code_location, 1),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__code_location, 1),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 5),
  [174] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym___code_location, 3),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym___code_location, 3),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disassembly_section_label, 3),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_disassembly_section_label, 3),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [224] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
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
