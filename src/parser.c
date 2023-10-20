#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 62
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 48
#define ALIAS_COUNT 1
#define TOKEN_COUNT 28
#define EXTERNAL_TOKEN_COUNT 1
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
  aux_sym_offset_line_token1 = 8,
  aux_sym__instruction_and_comment_token1 = 9,
  anon_sym_POUND = 10,
  anon_sym_LT = 11,
  anon_sym_PLUS = 12,
  anon_sym_GT = 13,
  sym_hexadecimal = 14,
  sym_byte = 15,
  anon_sym_ = 16,
  sym_instruction = 17,
  sym_address = 18,
  anon_sym_File = 19,
  anon_sym_Offset_COLON = 20,
  anon_sym_Disassemblyofsection = 21,
  sym_integer = 22,
  sym_file_path = 23,
  sym__label_identifier = 24,
  sym_identifier = 25,
  sym_section_name = 26,
  sym_code_identifier = 27,
  sym_source = 28,
  sym__line = 29,
  sym_header = 30,
  sym_disassembly_section = 31,
  sym_source_location = 32,
  sym_discriminator = 33,
  sym_offset_line = 34,
  sym__instruction_and_comment = 35,
  sym__instruction_and_location = 36,
  sym_comment = 37,
  sym__comment_with_label = 38,
  sym__comment_with_address = 39,
  sym_code_location = 40,
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
  [aux_sym_offset_line_token1] = "offset_line_token1",
  [aux_sym__instruction_and_comment_token1] = "_instruction_and_comment_token1",
  [anon_sym_POUND] = "#",
  [anon_sym_LT] = "<",
  [anon_sym_PLUS] = "+",
  [anon_sym_GT] = ">",
  [sym_hexadecimal] = "hexadecimal",
  [sym_byte] = "byte",
  [anon_sym_] = " ",
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
  [sym_code_identifier] = "identifier",
  [sym_source] = "source",
  [sym__line] = "_line",
  [sym_header] = "header",
  [sym_disassembly_section] = "disassembly_section",
  [sym_source_location] = "source_location",
  [sym_discriminator] = "discriminator",
  [sym_offset_line] = "offset_line",
  [sym__instruction_and_comment] = "_instruction_and_comment",
  [sym__instruction_and_location] = "_instruction_and_location",
  [sym_comment] = "comment",
  [sym__comment_with_label] = "_comment_with_label",
  [sym__comment_with_address] = "_comment_with_address",
  [sym_code_location] = "code_location",
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
  [aux_sym_offset_line_token1] = aux_sym_offset_line_token1,
  [aux_sym__instruction_and_comment_token1] = aux_sym__instruction_and_comment_token1,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_GT] = anon_sym_GT,
  [sym_hexadecimal] = sym_hexadecimal,
  [sym_byte] = sym_byte,
  [anon_sym_] = anon_sym_,
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
  [sym_code_identifier] = sym_identifier,
  [sym_source] = sym_source,
  [sym__line] = sym__line,
  [sym_header] = sym_header,
  [sym_disassembly_section] = sym_disassembly_section,
  [sym_source_location] = sym_source_location,
  [sym_discriminator] = sym_discriminator,
  [sym_offset_line] = sym_offset_line,
  [sym__instruction_and_comment] = sym__instruction_and_comment,
  [sym__instruction_and_location] = sym__instruction_and_location,
  [sym_comment] = sym_comment,
  [sym__comment_with_label] = sym__comment_with_label,
  [sym__comment_with_address] = sym__comment_with_address,
  [sym_code_location] = sym_code_location,
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
  [aux_sym_offset_line_token1] = {
    .visible = false,
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
  [sym_hexadecimal] = {
    .visible = true,
    .named = true,
  },
  [sym_byte] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_] = {
    .visible = true,
    .named = false,
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
  [sym_code_identifier] = {
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
  [sym_comment] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(68);
      if (lookahead == '#') ADVANCE(83);
      if (lookahead == '(') ADVANCE(73);
      if (lookahead == ')') ADVANCE(75);
      if (lookahead == '+') ADVANCE(86);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '0') ADVANCE(103);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == '<') ADVANCE(85);
      if (lookahead == '>') ADVANCE(87);
      if (lookahead == 'D') ADVANCE(97);
      if (lookahead == 'F') ADVANCE(98);
      if (lookahead == 'O') ADVANCE(24);
      if (lookahead == 'd') ADVANCE(101);
      if (lookahead == 'f') ADVANCE(102);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(109);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(107);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == ' ') ADVANCE(81);
      if (lookahead == '@') ADVANCE(129);
      if (lookahead == 'D') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(81);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == ' ') ADVANCE(81);
      if (lookahead == '@') ADVANCE(129);
      if (lookahead == 'D') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(81);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(130);
      if (lookahead != 0) ADVANCE(131);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '<') ADVANCE(96);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(115);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(42);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(51);
      END_STATE();
    case 8:
      if (lookahead == '0') ADVANCE(58);
      if (lookahead == 'F') ADVANCE(27);
      if (lookahead == 'd') ADVANCE(29);
      if (lookahead == 'f') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(8)
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(61);
      END_STATE();
    case 9:
      if (lookahead == '0') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(9)
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(112);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(114);
      END_STATE();
    case 11:
      if (lookahead == '<') ADVANCE(62);
      if (lookahead == '@') ADVANCE(129);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(11)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
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
      if (lookahead == 'e') ADVANCE(113);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(40);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
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
      if (lookahead == 'n') ADVANCE(5);
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
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      END_STATE();
    case 59:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(59)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 60:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 61:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      END_STATE();
    case 62:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 63:
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(132);
      END_STATE();
    case 64:
      if (eof) ADVANCE(68);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == ' ') ADVANCE(2);
      if (lookahead == '@') ADVANCE(129);
      if (lookahead == 'D') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(64)
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 65:
      if (eof) ADVANCE(68);
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == ' ') ADVANCE(94);
      if (lookahead == '@') ADVANCE(129);
      if (lookahead == 'D') ADVANCE(100);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(65)
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 66:
      if (eof) ADVANCE(68);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == ' ') ADVANCE(1);
      if (lookahead == '@') ADVANCE(129);
      if (lookahead == 'D') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\r') SKIP(66)
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(128);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 67:
      if (eof) ADVANCE(68);
      if (lookahead == '#') ADVANCE(83);
      if (lookahead == '(') ADVANCE(73);
      if (lookahead == ':') ADVANCE(69);
      if (lookahead == '<') ADVANCE(84);
      if (lookahead == '@') ADVANCE(129);
      if (lookahead == 'D') ADVANCE(99);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(128);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(67)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(110);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(127);
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
          lookahead != '\n') ADVANCE(12);
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
      ACCEPT_TOKEN(aux_sym_offset_line_token1);
      if (lookahead == '\n') ADVANCE(76);
      if (lookahead == ' ') ADVANCE(2);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_offset_line_token1);
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == ' ') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(81);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_offset_line_token1);
      if (lookahead == '\n') ADVANCE(78);
      if (lookahead == ' ') ADVANCE(94);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_offset_line_token1);
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == ' ') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(82);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_offset_line_token1);
      if (lookahead == '\n') ADVANCE(80);
      if (lookahead == ' ') ADVANCE(1);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym__instruction_and_comment_token1);
      if (lookahead == '\n') ADVANCE(77);
      if (lookahead == ' ') ADVANCE(81);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym__instruction_and_comment_token1);
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == ' ') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(88);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_byte);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_byte);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(128);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '@') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_byte);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(112);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_byte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_byte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(112);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == '\n') ADVANCE(79);
      if (lookahead == ' ') ADVANCE(94);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(82);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(95);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<') ADVANCE(96);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<') ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(123);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(128);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '@') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(123);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(128);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '@') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(35);
      if (lookahead == 'o') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(112);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(128);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '@') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(128);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '@') ADVANCE(129);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(90);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(91);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(112);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(93);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(112);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(anon_sym_File);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(anon_sym_Offset_COLON);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(anon_sym_Disassemblyofsection);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == ' ') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(128);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '@') ADVANCE(129);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == 'a') ADVANCE(125);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(128);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '@') ADVANCE(129);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == 'b') ADVANCE(121);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(128);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '@') ADVANCE(129);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == 'e') ADVANCE(122);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(128);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '@') ADVANCE(129);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == 'l') ADVANCE(126);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(128);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '@') ADVANCE(129);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == 'm') ADVANCE(119);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(128);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '@') ADVANCE(129);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == 's') ADVANCE(118);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(128);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '@') ADVANCE(129);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == 's') ADVANCE(120);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(128);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '@') ADVANCE(129);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == 's') ADVANCE(124);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(128);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '@') ADVANCE(129);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == 'y') ADVANCE(117);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(128);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '@') ADVANCE(129);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(128);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '@') ADVANCE(129);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(128);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym__label_identifier);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(130);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(131);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(132);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 67},
  [2] = {.lex_state = 67},
  [3] = {.lex_state = 64},
  [4] = {.lex_state = 67},
  [5] = {.lex_state = 67},
  [6] = {.lex_state = 67},
  [7] = {.lex_state = 64},
  [8] = {.lex_state = 66},
  [9] = {.lex_state = 67},
  [10] = {.lex_state = 65},
  [11] = {.lex_state = 67},
  [12] = {.lex_state = 64},
  [13] = {.lex_state = 67},
  [14] = {.lex_state = 11},
  [15] = {.lex_state = 67},
  [16] = {.lex_state = 67},
  [17] = {.lex_state = 11},
  [18] = {.lex_state = 67},
  [19] = {.lex_state = 67},
  [20] = {.lex_state = 67},
  [21] = {.lex_state = 67},
  [22] = {.lex_state = 67},
  [23] = {.lex_state = 67},
  [24] = {.lex_state = 67},
  [25] = {.lex_state = 67},
  [26] = {.lex_state = 67},
  [27] = {.lex_state = 67},
  [28] = {.lex_state = 67},
  [29] = {.lex_state = 67},
  [30] = {.lex_state = 67},
  [31] = {.lex_state = 67},
  [32] = {.lex_state = 67},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 9},
  [36] = {.lex_state = 67},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 8},
  [41] = {.lex_state = 59},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 59},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0, .external_lex_state = 1},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 8},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 8},
  [50] = {.lex_state = 8},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 4},
  [53] = {.lex_state = 11},
  [54] = {.lex_state = 8},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 8},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
};

enum {
  ts_external_token_code_identifier = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_code_identifier] = sym_code_identifier,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_code_identifier] = true,
  },
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
    [sym_section_name] = ACTIONS(1),
    [sym_code_identifier] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(58),
    [sym__line] = STATE(5),
    [sym_header] = STATE(5),
    [sym_disassembly_section] = STATE(5),
    [sym_disassembly_section_label] = STATE(5),
    [aux_sym_source_repeat1] = STATE(5),
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
    STATE(15), 1,
      sym_code_location,
    STATE(25), 1,
      sym_comment,
    STATE(27), 1,
      sym_file_offset,
    ACTIONS(11), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    STATE(21), 2,
      sym__comment_with_label,
      sym__comment_with_address,
    ACTIONS(19), 3,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [32] = 4,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      sym_byte,
    STATE(3), 1,
      aux_sym_machine_code_bytes_repeat1,
    ACTIONS(23), 6,
      aux_sym_offset_line_token1,
      aux_sym__instruction_and_comment_token1,
      sym_address,
      anon_sym_Disassemblyofsection,
      sym_file_path,
      sym__label_identifier,
  [50] = 5,
    ACTIONS(30), 1,
      sym_address,
    ACTIONS(33), 1,
      sym_file_path,
    ACTIONS(36), 1,
      sym__label_identifier,
    ACTIONS(28), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    STATE(6), 4,
      sym_source_location,
      sym_offset_line,
      sym_label_line,
      aux_sym_disassembly_section_repeat1,
  [70] = 5,
    ACTIONS(5), 1,
      sym_address,
    ACTIONS(7), 1,
      anon_sym_Disassemblyofsection,
    ACTIONS(9), 1,
      sym_file_path,
    ACTIONS(38), 1,
      ts_builtin_sym_end,
    STATE(9), 5,
      sym__line,
      sym_header,
      sym_disassembly_section,
      sym_disassembly_section_label,
      aux_sym_source_repeat1,
  [90] = 5,
    ACTIONS(42), 1,
      sym_address,
    ACTIONS(45), 1,
      sym_file_path,
    ACTIONS(48), 1,
      sym__label_identifier,
    ACTIONS(40), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    STATE(6), 4,
      sym_source_location,
      sym_offset_line,
      sym_label_line,
      aux_sym_disassembly_section_repeat1,
  [110] = 4,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 1,
      sym_byte,
    STATE(3), 1,
      aux_sym_machine_code_bytes_repeat1,
    ACTIONS(53), 6,
      aux_sym_offset_line_token1,
      aux_sym__instruction_and_comment_token1,
      sym_address,
      anon_sym_Disassemblyofsection,
      sym_file_path,
      sym__label_identifier,
  [128] = 5,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 1,
      aux_sym_offset_line_token1,
    ACTIONS(61), 1,
      aux_sym__instruction_and_comment_token1,
    STATE(26), 2,
      sym__instruction_and_comment,
      sym__instruction_and_location,
    ACTIONS(63), 4,
      sym_address,
      anon_sym_Disassemblyofsection,
      sym_file_path,
      sym__label_identifier,
  [148] = 5,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 1,
      sym_address,
    ACTIONS(70), 1,
      anon_sym_Disassemblyofsection,
    ACTIONS(73), 1,
      sym_file_path,
    STATE(9), 5,
      sym__line,
      sym_header,
      sym_disassembly_section,
      sym_disassembly_section_label,
      aux_sym_source_repeat1,
  [168] = 3,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
    ACTIONS(80), 1,
      anon_sym_,
    ACTIONS(78), 7,
      aux_sym_offset_line_token1,
      aux_sym__instruction_and_comment_token1,
      sym_byte,
      sym_address,
      anon_sym_Disassemblyofsection,
      sym_file_path,
      sym__label_identifier,
  [184] = 5,
    ACTIONS(36), 1,
      sym__label_identifier,
    ACTIONS(84), 1,
      sym_address,
    ACTIONS(87), 1,
      sym_file_path,
    ACTIONS(82), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    STATE(6), 4,
      sym_source_location,
      sym_offset_line,
      sym_label_line,
      aux_sym_disassembly_section_repeat1,
  [204] = 2,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 7,
      aux_sym_offset_line_token1,
      aux_sym__instruction_and_comment_token1,
      sym_byte,
      sym_address,
      anon_sym_Disassemblyofsection,
      sym_file_path,
      sym__label_identifier,
  [217] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym_file_offset,
    ACTIONS(90), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(92), 3,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [233] = 4,
    ACTIONS(36), 1,
      sym__label_identifier,
    ACTIONS(94), 1,
      sym_address,
    ACTIONS(96), 1,
      sym_file_path,
    STATE(4), 4,
      sym_source_location,
      sym_offset_line,
      sym_label_line,
      aux_sym_disassembly_section_repeat1,
  [249] = 4,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    STATE(29), 1,
      sym_file_offset,
    ACTIONS(98), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(100), 3,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [265] = 4,
    ACTIONS(104), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym_discriminator,
    ACTIONS(102), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(106), 3,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [281] = 4,
    ACTIONS(36), 1,
      sym__label_identifier,
    ACTIONS(94), 1,
      sym_address,
    ACTIONS(96), 1,
      sym_file_path,
    STATE(11), 4,
      sym_source_location,
      sym_offset_line,
      sym_label_line,
      aux_sym_disassembly_section_repeat1,
  [297] = 2,
    ACTIONS(108), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_Disassemblyofsection,
    ACTIONS(110), 3,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [308] = 2,
    ACTIONS(112), 3,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_Disassemblyofsection,
    ACTIONS(114), 3,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [319] = 2,
    ACTIONS(116), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_Disassemblyofsection,
    ACTIONS(118), 3,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [330] = 2,
    ACTIONS(120), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(122), 3,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [340] = 2,
    ACTIONS(124), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(126), 3,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [350] = 2,
    ACTIONS(128), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(130), 3,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [360] = 2,
    ACTIONS(132), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(134), 3,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [370] = 2,
    ACTIONS(136), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(138), 3,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [380] = 2,
    ACTIONS(140), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(142), 3,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [390] = 2,
    ACTIONS(98), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(100), 3,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [400] = 2,
    ACTIONS(144), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(146), 3,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [410] = 2,
    ACTIONS(148), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(150), 3,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [420] = 2,
    ACTIONS(152), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(154), 3,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [430] = 2,
    ACTIONS(156), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(158), 2,
      sym_address,
      sym_file_path,
  [439] = 2,
    ACTIONS(160), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(162), 2,
      sym_address,
      sym_file_path,
  [448] = 3,
    ACTIONS(164), 1,
      sym_byte,
    STATE(7), 1,
      aux_sym_machine_code_bytes_repeat1,
    STATE(8), 1,
      sym_machine_code_bytes,
  [458] = 3,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(166), 1,
      anon_sym_COLON,
    STATE(51), 1,
      sym_file_offset,
  [468] = 2,
    ACTIONS(168), 1,
      sym_hexadecimal,
    ACTIONS(170), 1,
      sym_address,
  [475] = 2,
    ACTIONS(17), 1,
      anon_sym_LT,
    STATE(13), 1,
      sym_code_location,
  [482] = 2,
    ACTIONS(172), 1,
      anon_sym_PLUS,
    ACTIONS(174), 1,
      anon_sym_GT,
  [489] = 1,
    ACTIONS(176), 1,
      anon_sym_COLON,
  [493] = 1,
    ACTIONS(178), 1,
      anon_sym_COLON,
  [497] = 1,
    ACTIONS(180), 1,
      sym_hexadecimal,
  [501] = 1,
    ACTIONS(182), 1,
      sym_integer,
  [505] = 1,
    ACTIONS(184), 1,
      sym_identifier,
  [509] = 1,
    ACTIONS(186), 1,
      sym_integer,
  [513] = 1,
    ACTIONS(188), 1,
      anon_sym_Offset_COLON,
  [517] = 1,
    ACTIONS(190), 1,
      sym_code_identifier,
  [521] = 1,
    ACTIONS(192), 1,
      anon_sym_COLON,
  [525] = 1,
    ACTIONS(194), 1,
      anon_sym_format,
  [529] = 1,
    ACTIONS(196), 1,
      anon_sym_COLON,
  [533] = 1,
    ACTIONS(198), 1,
      anon_sym_discriminator,
  [537] = 1,
    ACTIONS(200), 1,
      anon_sym_file,
  [541] = 1,
    ACTIONS(202), 1,
      anon_sym_COLON,
  [545] = 1,
    ACTIONS(204), 1,
      sym_instruction,
  [549] = 1,
    ACTIONS(206), 1,
      aux_sym_disassembly_section_token1,
  [553] = 1,
    ACTIONS(208), 1,
      anon_sym_File,
  [557] = 1,
    ACTIONS(210), 1,
      anon_sym_RPAREN,
  [561] = 1,
    ACTIONS(212), 1,
      anon_sym_COLON,
  [565] = 1,
    ACTIONS(214), 1,
      sym_hexadecimal,
  [569] = 1,
    ACTIONS(216), 1,
      ts_builtin_sym_end,
  [573] = 1,
    ACTIONS(218), 1,
      anon_sym_RPAREN,
  [577] = 1,
    ACTIONS(220), 1,
      anon_sym_GT,
  [581] = 1,
    ACTIONS(222), 1,
      sym_section_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 32,
  [SMALL_STATE(4)] = 50,
  [SMALL_STATE(5)] = 70,
  [SMALL_STATE(6)] = 90,
  [SMALL_STATE(7)] = 110,
  [SMALL_STATE(8)] = 128,
  [SMALL_STATE(9)] = 148,
  [SMALL_STATE(10)] = 168,
  [SMALL_STATE(11)] = 184,
  [SMALL_STATE(12)] = 204,
  [SMALL_STATE(13)] = 217,
  [SMALL_STATE(14)] = 233,
  [SMALL_STATE(15)] = 249,
  [SMALL_STATE(16)] = 265,
  [SMALL_STATE(17)] = 281,
  [SMALL_STATE(18)] = 297,
  [SMALL_STATE(19)] = 308,
  [SMALL_STATE(20)] = 319,
  [SMALL_STATE(21)] = 330,
  [SMALL_STATE(22)] = 340,
  [SMALL_STATE(23)] = 350,
  [SMALL_STATE(24)] = 360,
  [SMALL_STATE(25)] = 370,
  [SMALL_STATE(26)] = 380,
  [SMALL_STATE(27)] = 390,
  [SMALL_STATE(28)] = 400,
  [SMALL_STATE(29)] = 410,
  [SMALL_STATE(30)] = 420,
  [SMALL_STATE(31)] = 430,
  [SMALL_STATE(32)] = 439,
  [SMALL_STATE(33)] = 448,
  [SMALL_STATE(34)] = 458,
  [SMALL_STATE(35)] = 468,
  [SMALL_STATE(36)] = 475,
  [SMALL_STATE(37)] = 482,
  [SMALL_STATE(38)] = 489,
  [SMALL_STATE(39)] = 493,
  [SMALL_STATE(40)] = 497,
  [SMALL_STATE(41)] = 501,
  [SMALL_STATE(42)] = 505,
  [SMALL_STATE(43)] = 509,
  [SMALL_STATE(44)] = 513,
  [SMALL_STATE(45)] = 517,
  [SMALL_STATE(46)] = 521,
  [SMALL_STATE(47)] = 525,
  [SMALL_STATE(48)] = 529,
  [SMALL_STATE(49)] = 533,
  [SMALL_STATE(50)] = 537,
  [SMALL_STATE(51)] = 541,
  [SMALL_STATE(52)] = 545,
  [SMALL_STATE(53)] = 549,
  [SMALL_STATE(54)] = 553,
  [SMALL_STATE(55)] = 557,
  [SMALL_STATE(56)] = 561,
  [SMALL_STATE(57)] = 565,
  [SMALL_STATE(58)] = 569,
  [SMALL_STATE(59)] = 573,
  [SMALL_STATE(60)] = 577,
  [SMALL_STATE(61)] = 581,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction_and_location, 2),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [19] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__instruction_and_location, 2),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_machine_code_bytes_repeat1, 2),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_machine_code_bytes_repeat1, 2),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_machine_code_bytes_repeat1, 2), SHIFT_REPEAT(10),
  [28] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disassembly_section, 4, .production_id = 1),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_disassembly_section, 4, .production_id = 1), SHIFT(38),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_disassembly_section, 4, .production_id = 1), SHIFT(39),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_disassembly_section_repeat1, 2),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_disassembly_section_repeat1, 2), SHIFT_REPEAT(38),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_disassembly_section_repeat1, 2), SHIFT_REPEAT(39),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_disassembly_section_repeat1, 2), SHIFT_REPEAT(46),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_code_bytes, 1),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_machine_code_bytes, 1),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset_line, 3),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [61] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [63] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset_line, 3),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(53),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(61),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(48),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_machine_code_bytes_repeat1, 1),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_machine_code_bytes_repeat1, 1),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disassembly_section, 5, .production_id = 1),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_disassembly_section, 5, .production_id = 1), SHIFT(38),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_disassembly_section, 5, .production_id = 1), SHIFT(39),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_with_label, 3),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_with_label, 3),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction_and_location, 3),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__instruction_and_location, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_location, 3),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_source_location, 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_location, 5),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_location, 5),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_offset, 5),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_offset, 5),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_location, 3),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_location, 3),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_with_label, 4),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_with_label, 4),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_location, 4),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_source_location, 4),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_line, 2),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_line, 2),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction_and_comment, 3),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__instruction_and_comment, 3),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset_line, 4),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset_line, 4),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_with_address, 2),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_with_address, 2),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction_and_location, 4),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__instruction_and_location, 4),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_discriminator, 4),
  [154] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_discriminator, 4),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disassembly_section_label, 3),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_disassembly_section_label, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5),
  [162] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 5),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [216] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_objdump_external_scanner_create(void);
void tree_sitter_objdump_external_scanner_destroy(void *);
bool tree_sitter_objdump_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_objdump_external_scanner_serialize(void *, char *);
void tree_sitter_objdump_external_scanner_deserialize(void *, const char *, unsigned);

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
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_objdump_external_scanner_create,
      tree_sitter_objdump_external_scanner_destroy,
      tree_sitter_objdump_external_scanner_scan,
      tree_sitter_objdump_external_scanner_serialize,
      tree_sitter_objdump_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
