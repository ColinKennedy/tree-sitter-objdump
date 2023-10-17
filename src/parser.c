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
      if (eof) ADVANCE(65);
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == ')') ADVANCE(72);
      if (lookahead == '+') ADVANCE(76);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '0') ADVANCE(91);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == '>') ADVANCE(77);
      if (lookahead == 'D') ADVANCE(86);
      if (lookahead == 'F') ADVANCE(87);
      if (lookahead == 'O') ADVANCE(24);
      if (lookahead == 'd') ADVANCE(89);
      if (lookahead == 'f') ADVANCE(90);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(95);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(93);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(114);
      if (lookahead != 0) ADVANCE(115);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '<') ADVANCE(85);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(100);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(5);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(60);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(42);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(51);
      END_STATE();
    case 8:
      if (lookahead == '+') ADVANCE(76);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == '>') ADVANCE(77);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0) ADVANCE(79);
      END_STATE();
    case 9:
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '<') ADVANCE(62);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      if (lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(99);
      END_STATE();
    case 11:
      if (lookahead == '>') ADVANCE(69);
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
      if (lookahead == 'e') ADVANCE(98);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(67);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
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
      if (lookahead == 'r') ADVANCE(71);
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
      if (lookahead == 't') ADVANCE(68);
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
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 59:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 61:
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 62:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(11);
      END_STATE();
    case 63:
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(116);
      END_STATE();
    case 64:
      if (eof) ADVANCE(65);
      if (lookahead == '#') ADVANCE(74);
      if (lookahead == '(') ADVANCE(70);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '0') ADVANCE(92);
      if (lookahead == ':') ADVANCE(66);
      if (lookahead == '<') ADVANCE(75);
      if (lookahead == 'D') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(64)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(97);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      if (lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(113);
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
          lookahead != '\n') ADVANCE(11);
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
      ACCEPT_TOKEN(aux_sym__instruction_and_comment_token1);
      if (lookahead == ' ') ADVANCE(73);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(73);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym__code_location_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(78);
      if (lookahead != 0 &&
          lookahead != '+' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym__code_location_token1);
      if (lookahead != 0 &&
          lookahead != '+' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_byte);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_byte);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_byte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(84);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<') ADVANCE(85);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<') ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(82);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(94);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_File);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_Offset_COLON);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_Disassemblyofsection);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(102);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == ' ') ADVANCE(42);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'a') ADVANCE(111);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'b') ADVANCE(107);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'e') ADVANCE(108);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'l') ADVANCE(112);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'm') ADVANCE(105);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 's') ADVANCE(104);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 's') ADVANCE(106);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 's') ADVANCE(110);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'y') ADVANCE(103);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__label_identifier);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(115);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(116);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 64},
  [2] = {.lex_state = 64},
  [3] = {.lex_state = 64},
  [4] = {.lex_state = 64},
  [5] = {.lex_state = 64},
  [6] = {.lex_state = 64},
  [7] = {.lex_state = 64},
  [8] = {.lex_state = 64},
  [9] = {.lex_state = 64},
  [10] = {.lex_state = 9},
  [11] = {.lex_state = 64},
  [12] = {.lex_state = 9},
  [13] = {.lex_state = 64},
  [14] = {.lex_state = 8},
  [15] = {.lex_state = 64},
  [16] = {.lex_state = 64},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 64},
  [19] = {.lex_state = 64},
  [20] = {.lex_state = 64},
  [21] = {.lex_state = 64},
  [22] = {.lex_state = 64},
  [23] = {.lex_state = 64},
  [24] = {.lex_state = 64},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 64},
  [27] = {.lex_state = 64},
  [28] = {.lex_state = 64},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 64},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 64},
  [35] = {.lex_state = 4},
  [36] = {.lex_state = 12},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 4},
  [39] = {.lex_state = 4},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 64},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 9},
  [45] = {.lex_state = 64},
  [46] = {.lex_state = 58},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 12},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 12},
  [54] = {.lex_state = 58},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 12},
  [57] = {.lex_state = 12},
  [58] = {.lex_state = 64},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
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
    [sym_source] = STATE(61),
    [sym__line] = STATE(4),
    [sym_header] = STATE(4),
    [sym_disassembly_section] = STATE(4),
    [sym_disassembly_section_label] = STATE(4),
    [aux_sym_source_repeat1] = STATE(4),
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
    STATE(18), 1,
      sym_objdump_comment,
    STATE(20), 1,
      sym_file_offset,
    ACTIONS(19), 2,
      sym_address,
      sym__label_identifier,
    STATE(21), 2,
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
    STATE(7), 4,
      sym_source_location,
      sym_offset_line,
      sym_label_line,
      aux_sym_disassembly_section_repeat1,
  [52] = 5,
    ACTIONS(5), 1,
      sym_address,
    ACTIONS(7), 1,
      anon_sym_Disassemblyofsection,
    ACTIONS(9), 1,
      sym_file_path,
    ACTIONS(31), 1,
      ts_builtin_sym_end,
    STATE(5), 5,
      sym__line,
      sym_header,
      sym_disassembly_section,
      sym_disassembly_section_label,
      aux_sym_source_repeat1,
  [72] = 5,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      sym_address,
    ACTIONS(38), 1,
      anon_sym_Disassemblyofsection,
    ACTIONS(41), 1,
      sym_file_path,
    STATE(5), 5,
      sym__line,
      sym_header,
      sym_disassembly_section,
      sym_disassembly_section_label,
      aux_sym_source_repeat1,
  [92] = 5,
    ACTIONS(29), 1,
      sym__label_identifier,
    ACTIONS(46), 1,
      sym_address,
    ACTIONS(49), 1,
      sym_file_path,
    ACTIONS(44), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    STATE(7), 4,
      sym_source_location,
      sym_offset_line,
      sym_label_line,
      aux_sym_disassembly_section_repeat1,
  [112] = 5,
    ACTIONS(54), 1,
      sym_address,
    ACTIONS(57), 1,
      sym_file_path,
    ACTIONS(60), 1,
      sym__label_identifier,
    ACTIONS(52), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    STATE(7), 4,
      sym_source_location,
      sym_offset_line,
      sym_label_line,
      aux_sym_disassembly_section_repeat1,
  [132] = 4,
    ACTIONS(65), 1,
      anon_sym_LPAREN,
    STATE(28), 1,
      sym_discriminator,
    ACTIONS(67), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(63), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [148] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym_file_offset,
    ACTIONS(71), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(69), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [164] = 4,
    ACTIONS(29), 1,
      sym__label_identifier,
    ACTIONS(73), 1,
      sym_address,
    ACTIONS(75), 1,
      sym_file_path,
    STATE(3), 4,
      sym_source_location,
      sym_offset_line,
      sym_label_line,
      aux_sym_disassembly_section_repeat1,
  [180] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym_file_offset,
    ACTIONS(79), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(77), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [196] = 4,
    ACTIONS(29), 1,
      sym__label_identifier,
    ACTIONS(73), 1,
      sym_address,
    ACTIONS(75), 1,
      sym_file_path,
    STATE(6), 4,
      sym_source_location,
      sym_offset_line,
      sym_label_line,
      aux_sym_disassembly_section_repeat1,
  [212] = 2,
    ACTIONS(83), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(81), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [223] = 5,
    ACTIONS(85), 1,
      anon_sym_LT,
    ACTIONS(90), 1,
      aux_sym__code_location_token1,
    STATE(14), 1,
      aux_sym__code_location,
    STATE(31), 1,
      sym___code_location,
    ACTIONS(88), 2,
      anon_sym_PLUS,
      anon_sym_GT,
  [240] = 2,
    ACTIONS(95), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(93), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [251] = 2,
    ACTIONS(99), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(97), 4,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [262] = 6,
    ACTIONS(101), 1,
      anon_sym_LT,
    ACTIONS(103), 1,
      anon_sym_PLUS,
    ACTIONS(105), 1,
      anon_sym_GT,
    ACTIONS(107), 1,
      aux_sym__code_location_token1,
    STATE(14), 1,
      aux_sym__code_location,
    STATE(31), 1,
      sym___code_location,
  [281] = 2,
    ACTIONS(111), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(109), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [291] = 2,
    ACTIONS(115), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(113), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [301] = 2,
    ACTIONS(79), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(77), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [311] = 2,
    ACTIONS(119), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(117), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [321] = 2,
    ACTIONS(123), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(121), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [331] = 2,
    ACTIONS(127), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(125), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [341] = 2,
    ACTIONS(131), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(129), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [351] = 5,
    ACTIONS(101), 1,
      anon_sym_LT,
    ACTIONS(107), 1,
      aux_sym__code_location_token1,
    ACTIONS(133), 1,
      anon_sym_GT,
    STATE(14), 1,
      aux_sym__code_location,
    STATE(31), 1,
      sym___code_location,
  [367] = 2,
    ACTIONS(137), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(135), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [377] = 2,
    ACTIONS(141), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(139), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [387] = 2,
    ACTIONS(145), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(143), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [397] = 2,
    ACTIONS(149), 1,
      aux_sym__code_location_token1,
    ACTIONS(147), 3,
      anon_sym_LT,
      anon_sym_PLUS,
      anon_sym_GT,
  [406] = 4,
    ACTIONS(101), 1,
      anon_sym_LT,
    ACTIONS(107), 1,
      aux_sym__code_location_token1,
    STATE(25), 1,
      aux_sym__code_location,
    STATE(31), 1,
      sym___code_location,
  [419] = 2,
    ACTIONS(153), 1,
      aux_sym__code_location_token1,
    ACTIONS(151), 3,
      anon_sym_LT,
      anon_sym_PLUS,
      anon_sym_GT,
  [428] = 2,
    ACTIONS(157), 1,
      sym_address,
    ACTIONS(155), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [437] = 4,
    ACTIONS(101), 1,
      anon_sym_LT,
    ACTIONS(107), 1,
      aux_sym__code_location_token1,
    STATE(17), 1,
      aux_sym__code_location,
    STATE(31), 1,
      sym___code_location,
  [450] = 2,
    ACTIONS(161), 1,
      sym_address,
    ACTIONS(159), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [459] = 3,
    ACTIONS(163), 1,
      aux_sym__instruction_and_comment_token1,
    ACTIONS(165), 1,
      sym_byte,
    STATE(38), 1,
      aux_sym_machine_code_bytes_repeat1,
  [469] = 3,
    ACTIONS(167), 1,
      sym_byte,
    STATE(35), 1,
      aux_sym_machine_code_bytes_repeat1,
    STATE(39), 1,
      sym_machine_code_bytes,
  [479] = 3,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(169), 1,
      anon_sym_COLON,
    STATE(55), 1,
      sym_file_offset,
  [489] = 3,
    ACTIONS(171), 1,
      aux_sym__instruction_and_comment_token1,
    ACTIONS(173), 1,
      sym_byte,
    STATE(38), 1,
      aux_sym_machine_code_bytes_repeat1,
  [499] = 2,
    ACTIONS(176), 1,
      aux_sym__instruction_and_comment_token1,
    STATE(27), 2,
      sym__instruction_and_comment,
      sym__instruction_and_location,
  [507] = 2,
    ACTIONS(17), 1,
      anon_sym_LT,
    STATE(9), 1,
      sym_code_location,
  [514] = 2,
    ACTIONS(178), 1,
      sym_hexadecimal,
    ACTIONS(180), 1,
      sym_address,
  [521] = 1,
    ACTIONS(182), 1,
      anon_sym_COLON,
  [525] = 1,
    ACTIONS(184), 1,
      anon_sym_COLON,
  [529] = 1,
    ACTIONS(186), 1,
      aux_sym_disassembly_section_token1,
  [533] = 1,
    ACTIONS(188), 1,
      sym_hexadecimal,
  [537] = 1,
    ACTIONS(190), 1,
      sym_integer,
  [541] = 1,
    ACTIONS(192), 1,
      sym_identifier,
  [545] = 1,
    ACTIONS(194), 1,
      anon_sym_RPAREN,
  [549] = 1,
    ACTIONS(196), 1,
      anon_sym_Offset_COLON,
  [553] = 1,
    ACTIONS(198), 1,
      anon_sym_discriminator,
  [557] = 1,
    ACTIONS(200), 1,
      anon_sym_COLON,
  [561] = 1,
    ACTIONS(202), 1,
      sym_section_name,
  [565] = 1,
    ACTIONS(204), 1,
      anon_sym_format,
  [569] = 1,
    ACTIONS(206), 1,
      sym_integer,
  [573] = 1,
    ACTIONS(208), 1,
      anon_sym_COLON,
  [577] = 1,
    ACTIONS(210), 1,
      anon_sym_File,
  [581] = 1,
    ACTIONS(212), 1,
      anon_sym_file,
  [585] = 1,
    ACTIONS(214), 1,
      sym_hexadecimal,
  [589] = 1,
    ACTIONS(216), 1,
      anon_sym_RPAREN,
  [593] = 1,
    ACTIONS(218), 1,
      sym_instruction,
  [597] = 1,
    ACTIONS(220), 1,
      ts_builtin_sym_end,
  [601] = 1,
    ACTIONS(222), 1,
      anon_sym_COLON,
  [605] = 1,
    ACTIONS(224), 1,
      anon_sym_GT,
  [609] = 1,
    ACTIONS(226), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 32,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 72,
  [SMALL_STATE(6)] = 92,
  [SMALL_STATE(7)] = 112,
  [SMALL_STATE(8)] = 132,
  [SMALL_STATE(9)] = 148,
  [SMALL_STATE(10)] = 164,
  [SMALL_STATE(11)] = 180,
  [SMALL_STATE(12)] = 196,
  [SMALL_STATE(13)] = 212,
  [SMALL_STATE(14)] = 223,
  [SMALL_STATE(15)] = 240,
  [SMALL_STATE(16)] = 251,
  [SMALL_STATE(17)] = 262,
  [SMALL_STATE(18)] = 281,
  [SMALL_STATE(19)] = 291,
  [SMALL_STATE(20)] = 301,
  [SMALL_STATE(21)] = 311,
  [SMALL_STATE(22)] = 321,
  [SMALL_STATE(23)] = 331,
  [SMALL_STATE(24)] = 341,
  [SMALL_STATE(25)] = 351,
  [SMALL_STATE(26)] = 367,
  [SMALL_STATE(27)] = 377,
  [SMALL_STATE(28)] = 387,
  [SMALL_STATE(29)] = 397,
  [SMALL_STATE(30)] = 406,
  [SMALL_STATE(31)] = 419,
  [SMALL_STATE(32)] = 428,
  [SMALL_STATE(33)] = 437,
  [SMALL_STATE(34)] = 450,
  [SMALL_STATE(35)] = 459,
  [SMALL_STATE(36)] = 469,
  [SMALL_STATE(37)] = 479,
  [SMALL_STATE(38)] = 489,
  [SMALL_STATE(39)] = 499,
  [SMALL_STATE(40)] = 507,
  [SMALL_STATE(41)] = 514,
  [SMALL_STATE(42)] = 521,
  [SMALL_STATE(43)] = 525,
  [SMALL_STATE(44)] = 529,
  [SMALL_STATE(45)] = 533,
  [SMALL_STATE(46)] = 537,
  [SMALL_STATE(47)] = 541,
  [SMALL_STATE(48)] = 545,
  [SMALL_STATE(49)] = 549,
  [SMALL_STATE(50)] = 553,
  [SMALL_STATE(51)] = 557,
  [SMALL_STATE(52)] = 561,
  [SMALL_STATE(53)] = 565,
  [SMALL_STATE(54)] = 569,
  [SMALL_STATE(55)] = 573,
  [SMALL_STATE(56)] = 577,
  [SMALL_STATE(57)] = 581,
  [SMALL_STATE(58)] = 585,
  [SMALL_STATE(59)] = 589,
  [SMALL_STATE(60)] = 593,
  [SMALL_STATE(61)] = 597,
  [SMALL_STATE(62)] = 601,
  [SMALL_STATE(63)] = 605,
  [SMALL_STATE(64)] = 609,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction_and_location, 2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__instruction_and_location, 2),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disassembly_section, 4, .production_id = 1),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_disassembly_section, 4, .production_id = 1), SHIFT(42),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_disassembly_section, 4, .production_id = 1), SHIFT(64),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(44),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(52),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(62),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disassembly_section, 5, .production_id = 1),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_disassembly_section, 5, .production_id = 1), SHIFT(42),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_disassembly_section, 5, .production_id = 1), SHIFT(64),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_disassembly_section_repeat1, 2),
  [54] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_disassembly_section_repeat1, 2), SHIFT_REPEAT(42),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_disassembly_section_repeat1, 2), SHIFT_REPEAT(64),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_disassembly_section_repeat1, 2), SHIFT_REPEAT(51),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_location, 3),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_source_location, 3),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_with_label, 3),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_with_label, 3),
  [73] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction_and_location, 3),
  [79] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__instruction_and_location, 3),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_location, 5, .production_id = 2),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_location, 5, .production_id = 2),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__code_location, 2), SHIFT_REPEAT(30),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__code_location, 2),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__code_location, 2), SHIFT_REPEAT(31),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_location, 3, .production_id = 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_location, 3, .production_id = 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_offset, 5),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_offset, 5),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction_and_comment, 3),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__instruction_and_comment, 3),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_with_address, 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_with_address, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_objdump_comment, 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_objdump_comment, 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_line, 2),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_line, 2),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction_and_location, 4),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__instruction_and_location, 4),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_discriminator, 4),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_discriminator, 4),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_with_label, 4),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_with_label, 4),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset_line, 4),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset_line, 4),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_location, 4),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_source_location, 4),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym___code_location, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym___code_location, 3),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__code_location, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__code_location, 1),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disassembly_section_label, 3),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_disassembly_section_label, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 5),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_code_bytes, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_machine_code_bytes_repeat1, 2),
  [173] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_machine_code_bytes_repeat1, 2), SHIFT_REPEAT(38),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [220] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
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
