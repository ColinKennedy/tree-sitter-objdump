#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 63
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 49
#define ALIAS_COUNT 1
#define TOKEN_COUNT 29
#define EXTERNAL_TOKEN_COUNT 3
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
  aux_sym_memory_offset_token1 = 8,
  sym_instruction = 9,
  anon_sym_POUND = 10,
  anon_sym_LT = 11,
  anon_sym_PLUS = 12,
  anon_sym_GT = 13,
  sym_hexadecimal = 14,
  sym_byte = 15,
  anon_sym_ = 16,
  sym_address = 17,
  anon_sym_File = 18,
  anon_sym_Offset_COLON = 19,
  anon_sym_Disassemblyofsection = 20,
  sym_integer = 21,
  sym_file_path = 22,
  sym__label_identifier = 23,
  sym_identifier = 24,
  sym__section_name = 25,
  sym_code_identifier = 26,
  sym__whitespace_no_newline = 27,
  sym__error_sentinel = 28,
  sym_source = 29,
  sym__line = 30,
  sym_header = 31,
  sym_disassembly_section = 32,
  sym_source_location = 33,
  sym_discriminator = 34,
  sym_memory_offset = 35,
  sym__instruction_and_comment = 36,
  sym__instruction_and_location = 37,
  sym_comment = 38,
  sym__comment_with_label = 39,
  sym__comment_with_address = 40,
  sym_code_location = 41,
  sym_label_line = 42,
  sym_machine_code_bytes = 43,
  sym_file_offset = 44,
  sym_disassembly_section_label = 45,
  aux_sym_source_repeat1 = 46,
  aux_sym_disassembly_section_repeat1 = 47,
  aux_sym_machine_code_bytes_repeat1 = 48,
  alias_sym_section_address = 49,
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
  [aux_sym_memory_offset_token1] = "memory_offset_token1",
  [sym_instruction] = "instruction",
  [anon_sym_POUND] = "#",
  [anon_sym_LT] = "<",
  [anon_sym_PLUS] = "+",
  [anon_sym_GT] = ">",
  [sym_hexadecimal] = "hexadecimal",
  [sym_byte] = "byte",
  [anon_sym_] = " ",
  [sym_address] = "address",
  [anon_sym_File] = "File",
  [anon_sym_Offset_COLON] = "Offset:",
  [anon_sym_Disassemblyofsection] = "Disassembly of section ",
  [sym_integer] = "integer",
  [sym_file_path] = "file_path",
  [sym__label_identifier] = "label",
  [sym_identifier] = "identifier",
  [sym__section_name] = "identifier",
  [sym_code_identifier] = "identifier",
  [sym__whitespace_no_newline] = "_whitespace_no_newline",
  [sym__error_sentinel] = "_error_sentinel",
  [sym_source] = "source",
  [sym__line] = "_line",
  [sym_header] = "header",
  [sym_disassembly_section] = "disassembly_section",
  [sym_source_location] = "source_location",
  [sym_discriminator] = "discriminator",
  [sym_memory_offset] = "memory_offset",
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
  [aux_sym_memory_offset_token1] = aux_sym_memory_offset_token1,
  [sym_instruction] = sym_instruction,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_GT] = anon_sym_GT,
  [sym_hexadecimal] = sym_hexadecimal,
  [sym_byte] = sym_byte,
  [anon_sym_] = anon_sym_,
  [sym_address] = sym_address,
  [anon_sym_File] = anon_sym_File,
  [anon_sym_Offset_COLON] = anon_sym_Offset_COLON,
  [anon_sym_Disassemblyofsection] = anon_sym_Disassemblyofsection,
  [sym_integer] = sym_integer,
  [sym_file_path] = sym_file_path,
  [sym__label_identifier] = sym__label_identifier,
  [sym_identifier] = sym_identifier,
  [sym__section_name] = sym_identifier,
  [sym_code_identifier] = sym_identifier,
  [sym__whitespace_no_newline] = sym__whitespace_no_newline,
  [sym__error_sentinel] = sym__error_sentinel,
  [sym_source] = sym_source,
  [sym__line] = sym__line,
  [sym_header] = sym_header,
  [sym_disassembly_section] = sym_disassembly_section,
  [sym_source_location] = sym_source_location,
  [sym_discriminator] = sym_discriminator,
  [sym_memory_offset] = sym_memory_offset,
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
  [aux_sym_memory_offset_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
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
  [sym__section_name] = {
    .visible = true,
    .named = true,
  },
  [sym_code_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym__whitespace_no_newline] = {
    .visible = false,
    .named = true,
  },
  [sym__error_sentinel] = {
    .visible = false,
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
  [sym_memory_offset] = {
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
  [62] = 62,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(63);
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == '(') ADVANCE(68);
      if (lookahead == ')') ADVANCE(70);
      if (lookahead == '+') ADVANCE(78);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == '<') ADVANCE(77);
      if (lookahead == '>') ADVANCE(79);
      if (lookahead == 'D') ADVANCE(83);
      if (lookahead == 'F') ADVANCE(84);
      if (lookahead == 'O') ADVANCE(22);
      if (lookahead == 'd') ADVANCE(86);
      if (lookahead == 'f') ADVANCE(87);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '#' &&
          lookahead != '<') ADVANCE(74);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(110);
      if (lookahead != 0) ADVANCE(111);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(95);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(42);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(51);
      END_STATE();
    case 6:
      if (lookahead == '0') ADVANCE(88);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6)
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == '<') ADVANCE(61);
      if (lookahead == '@') ADVANCE(109);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(7)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(94);
      END_STATE();
    case 9:
      if (lookahead == '>') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 10:
      if (lookahead == 'F') ADVANCE(26);
      if (lookahead == 'd') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(40);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(60);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(54);
      END_STATE();
    case 12:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 13:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 14:
      if (lookahead == 'b') ADVANCE(33);
      END_STATE();
    case 15:
      if (lookahead == 'c') ADVANCE(45);
      END_STATE();
    case 16:
      if (lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 18:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 19:
      if (lookahead == 'e') ADVANCE(53);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(16);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(35);
      END_STATE();
    case 22:
      if (lookahead == 'f') ADVANCE(24);
      END_STATE();
    case 23:
      if (lookahead == 'f') ADVANCE(5);
      END_STATE();
    case 24:
      if (lookahead == 'f') ADVANCE(49);
      END_STATE();
    case 25:
      if (lookahead == 'f') ADVANCE(31);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(25)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 26:
      if (lookahead == 'i') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 27:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(37);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 32:
      if (lookahead == 'l') ADVANCE(17);
      END_STATE();
    case 33:
      if (lookahead == 'l') ADVANCE(57);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(18);
      END_STATE();
    case 35:
      if (lookahead == 'm') ADVANCE(14);
      END_STATE();
    case 36:
      if (lookahead == 'm') ADVANCE(11);
      END_STATE();
    case 37:
      if (lookahead == 'm') ADVANCE(27);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(3);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(81);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(38);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(23);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 44:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(29);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(69);
      END_STATE();
    case 47:
      if (lookahead == 's') ADVANCE(13);
      END_STATE();
    case 48:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 49:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 50:
      if (lookahead == 's') ADVANCE(21);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(20);
      END_STATE();
    case 52:
      if (lookahead == 's') ADVANCE(50);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(8);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 57:
      if (lookahead == 'y') ADVANCE(4);
      END_STATE();
    case 58:
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(113);
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
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 62:
      if (eof) ADVANCE(63);
      if (lookahead == '#') ADVANCE(75);
      if (lookahead == '(') ADVANCE(68);
      if (lookahead == ':') ADVANCE(64);
      if (lookahead == '<') ADVANCE(76);
      if (lookahead == '@') ADVANCE(109);
      if (lookahead == 'D') ADVANCE(85);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(108);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(62)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(aux_sym_disassembly_section_token1);
      if (lookahead == '>') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_discriminator);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_memory_offset_token1);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_memory_offset_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(73);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<') ADVANCE(74);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<') ADVANCE(74);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(9);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_GT);
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
      ACCEPT_TOKEN(anon_sym_);
      if (lookahead == ' ') ADVANCE(82);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(71);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(32);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(103);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(108);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '@') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(34);
      if (lookahead == 'o') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(108);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '@') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(89);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(92);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_File);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_Offset_COLON);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_Disassemblyofsection);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == ' ') ADVANCE(42);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(108);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '@') ADVANCE(109);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == 'a') ADVANCE(105);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(108);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '@') ADVANCE(109);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == 'b') ADVANCE(101);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(108);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '@') ADVANCE(109);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == 'e') ADVANCE(102);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(108);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '@') ADVANCE(109);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == 'l') ADVANCE(106);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(108);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '@') ADVANCE(109);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == 'm') ADVANCE(99);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(108);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '@') ADVANCE(109);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == 's') ADVANCE(98);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(108);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '@') ADVANCE(109);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == 's') ADVANCE(100);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(108);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '@') ADVANCE(109);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == 's') ADVANCE(104);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(108);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '@') ADVANCE(109);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == 'y') ADVANCE(97);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(108);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '@') ADVANCE(109);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(108);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '@') ADVANCE(109);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym__label_identifier);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(111);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym__section_name);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(113);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym__section_name);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(113);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 62},
  [2] = {.lex_state = 62},
  [3] = {.lex_state = 62},
  [4] = {.lex_state = 62},
  [5] = {.lex_state = 62},
  [6] = {.lex_state = 62},
  [7] = {.lex_state = 62},
  [8] = {.lex_state = 62},
  [9] = {.lex_state = 7},
  [10] = {.lex_state = 62},
  [11] = {.lex_state = 62},
  [12] = {.lex_state = 7},
  [13] = {.lex_state = 62},
  [14] = {.lex_state = 62},
  [15] = {.lex_state = 62},
  [16] = {.lex_state = 62},
  [17] = {.lex_state = 62},
  [18] = {.lex_state = 62},
  [19] = {.lex_state = 62},
  [20] = {.lex_state = 62},
  [21] = {.lex_state = 62},
  [22] = {.lex_state = 62},
  [23] = {.lex_state = 62},
  [24] = {.lex_state = 62},
  [25] = {.lex_state = 62},
  [26] = {.lex_state = 62},
  [27] = {.lex_state = 62},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 71, .external_lex_state = 2},
  [30] = {.lex_state = 71, .external_lex_state = 2},
  [31] = {.lex_state = 71, .external_lex_state = 2},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 71, .external_lex_state = 2},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 72, .external_lex_state = 2},
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 10},
  [39] = {.lex_state = 25},
  [40] = {.lex_state = 62},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 25},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0, .external_lex_state = 3},
  [46] = {.lex_state = 10},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 10},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 10},
  [52] = {.lex_state = 10},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 25},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 58},
};

enum {
  ts_external_token_code_identifier = 0,
  ts_external_token__whitespace_no_newline = 1,
  ts_external_token__error_sentinel = 2,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_code_identifier] = sym_code_identifier,
  [ts_external_token__whitespace_no_newline] = sym__whitespace_no_newline,
  [ts_external_token__error_sentinel] = sym__error_sentinel,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_code_identifier] = true,
    [ts_external_token__whitespace_no_newline] = true,
    [ts_external_token__error_sentinel] = true,
  },
  [2] = {
    [ts_external_token__whitespace_no_newline] = true,
  },
  [3] = {
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
    [sym_address] = ACTIONS(1),
    [anon_sym_File] = ACTIONS(1),
    [anon_sym_Offset_COLON] = ACTIONS(1),
    [anon_sym_Disassemblyofsection] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_code_identifier] = ACTIONS(1),
    [sym__whitespace_no_newline] = ACTIONS(1),
    [sym__error_sentinel] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(57),
    [sym__line] = STATE(3),
    [sym_header] = STATE(3),
    [sym_disassembly_section] = STATE(3),
    [sym_source_location] = STATE(3),
    [sym_memory_offset] = STATE(3),
    [sym_label_line] = STATE(3),
    [sym_disassembly_section_label] = STATE(3),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [sym_address] = ACTIONS(5),
    [anon_sym_Disassemblyofsection] = ACTIONS(7),
    [sym_file_path] = ACTIONS(9),
    [sym__label_identifier] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      sym_address,
    ACTIONS(18), 1,
      anon_sym_Disassemblyofsection,
    ACTIONS(21), 1,
      sym_file_path,
    ACTIONS(24), 1,
      sym__label_identifier,
    STATE(2), 8,
      sym__line,
      sym_header,
      sym_disassembly_section,
      sym_source_location,
      sym_memory_offset,
      sym_label_line,
      sym_disassembly_section_label,
      aux_sym_source_repeat1,
  [26] = 6,
    ACTIONS(5), 1,
      sym_address,
    ACTIONS(7), 1,
      anon_sym_Disassemblyofsection,
    ACTIONS(9), 1,
      sym_file_path,
    ACTIONS(11), 1,
      sym__label_identifier,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    STATE(2), 8,
      sym__line,
      sym_header,
      sym_disassembly_section,
      sym_source_location,
      sym_memory_offset,
      sym_label_line,
      sym_disassembly_section_label,
      aux_sym_source_repeat1,
  [52] = 8,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(33), 1,
      anon_sym_POUND,
    ACTIONS(35), 1,
      anon_sym_LT,
    STATE(8), 1,
      sym_code_location,
    STATE(18), 1,
      sym_file_offset,
    STATE(20), 1,
      sym_comment,
    ACTIONS(29), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(37), 3,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [80] = 5,
    ACTIONS(41), 1,
      sym_address,
    ACTIONS(44), 1,
      sym_file_path,
    ACTIONS(47), 1,
      sym__label_identifier,
    ACTIONS(39), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    STATE(5), 4,
      sym_source_location,
      sym_memory_offset,
      sym_label_line,
      aux_sym_disassembly_section_repeat1,
  [100] = 5,
    ACTIONS(52), 1,
      sym_address,
    ACTIONS(55), 1,
      sym_file_path,
    ACTIONS(58), 1,
      sym__label_identifier,
    ACTIONS(50), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    STATE(5), 4,
      sym_source_location,
      sym_memory_offset,
      sym_label_line,
      aux_sym_disassembly_section_repeat1,
  [120] = 5,
    ACTIONS(63), 1,
      sym_address,
    ACTIONS(66), 1,
      sym_file_path,
    ACTIONS(69), 1,
      sym__label_identifier,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    STATE(5), 4,
      sym_source_location,
      sym_memory_offset,
      sym_label_line,
      aux_sym_disassembly_section_repeat1,
  [140] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    STATE(16), 1,
      sym_file_offset,
    ACTIONS(72), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(74), 3,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [156] = 4,
    ACTIONS(11), 1,
      sym__label_identifier,
    ACTIONS(76), 1,
      sym_address,
    ACTIONS(78), 1,
      sym_file_path,
    STATE(7), 4,
      sym_source_location,
      sym_memory_offset,
      sym_label_line,
      aux_sym_disassembly_section_repeat1,
  [172] = 4,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    STATE(26), 1,
      sym_file_offset,
    ACTIONS(80), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(82), 3,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [188] = 4,
    ACTIONS(86), 1,
      anon_sym_LPAREN,
    STATE(27), 1,
      sym_discriminator,
    ACTIONS(84), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(88), 3,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [204] = 4,
    ACTIONS(11), 1,
      sym__label_identifier,
    ACTIONS(76), 1,
      sym_address,
    ACTIONS(78), 1,
      sym_file_path,
    STATE(6), 4,
      sym_source_location,
      sym_memory_offset,
      sym_label_line,
      aux_sym_disassembly_section_repeat1,
  [220] = 2,
    ACTIONS(90), 3,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_Disassemblyofsection,
    ACTIONS(92), 3,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [231] = 2,
    ACTIONS(94), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_Disassemblyofsection,
    ACTIONS(96), 3,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [242] = 2,
    ACTIONS(98), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_Disassemblyofsection,
    ACTIONS(100), 3,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [253] = 2,
    ACTIONS(102), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(104), 3,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [263] = 2,
    ACTIONS(106), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(108), 3,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [273] = 2,
    ACTIONS(72), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(74), 3,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [283] = 2,
    ACTIONS(110), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(112), 3,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [293] = 2,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(116), 3,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [303] = 2,
    ACTIONS(118), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(120), 3,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [313] = 2,
    ACTIONS(122), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(124), 3,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [323] = 2,
    ACTIONS(126), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(128), 3,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [333] = 2,
    ACTIONS(130), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(132), 3,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [343] = 2,
    ACTIONS(134), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(136), 3,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [353] = 2,
    ACTIONS(138), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(140), 3,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [363] = 2,
    ACTIONS(142), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(144), 3,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [373] = 3,
    ACTIONS(146), 1,
      sym_hexadecimal,
    ACTIONS(148), 1,
      sym_address,
    STATE(17), 2,
      sym__comment_with_label,
      sym__comment_with_address,
  [384] = 4,
    ACTIONS(150), 1,
      aux_sym_memory_offset_token1,
    ACTIONS(152), 1,
      anon_sym_,
    ACTIONS(155), 1,
      sym__whitespace_no_newline,
    STATE(29), 1,
      aux_sym_machine_code_bytes_repeat1,
  [397] = 4,
    ACTIONS(157), 1,
      aux_sym_memory_offset_token1,
    ACTIONS(159), 1,
      anon_sym_,
    ACTIONS(161), 1,
      sym__whitespace_no_newline,
    STATE(31), 1,
      aux_sym_machine_code_bytes_repeat1,
  [410] = 4,
    ACTIONS(159), 1,
      anon_sym_,
    ACTIONS(163), 1,
      aux_sym_memory_offset_token1,
    ACTIONS(165), 1,
      sym__whitespace_no_newline,
    STATE(29), 1,
      aux_sym_machine_code_bytes_repeat1,
  [423] = 3,
    ACTIONS(31), 1,
      anon_sym_LPAREN,
    ACTIONS(167), 1,
      anon_sym_COLON,
    STATE(44), 1,
      sym_file_offset,
  [433] = 2,
    ACTIONS(169), 1,
      sym_instruction,
    STATE(24), 2,
      sym__instruction_and_comment,
      sym__instruction_and_location,
  [441] = 2,
    ACTIONS(155), 1,
      sym__whitespace_no_newline,
    ACTIONS(150), 2,
      aux_sym_memory_offset_token1,
      anon_sym_,
  [449] = 2,
    ACTIONS(171), 1,
      anon_sym_PLUS,
    ACTIONS(173), 1,
      anon_sym_GT,
  [456] = 2,
    ACTIONS(175), 1,
      aux_sym_memory_offset_token1,
    ACTIONS(177), 1,
      sym__whitespace_no_newline,
  [463] = 2,
    ACTIONS(179), 1,
      anon_sym_COLON,
    ACTIONS(181), 1,
      aux_sym_disassembly_section_token1,
  [470] = 2,
    ACTIONS(183), 1,
      sym_byte,
    STATE(36), 1,
      sym_machine_code_bytes,
  [477] = 2,
    ACTIONS(185), 1,
      anon_sym_file,
    ACTIONS(187), 1,
      sym_integer,
  [484] = 2,
    ACTIONS(35), 1,
      anon_sym_LT,
    STATE(10), 1,
      sym_code_location,
  [491] = 1,
    ACTIONS(189), 1,
      anon_sym_Offset_COLON,
  [495] = 1,
    ACTIONS(191), 1,
      sym_hexadecimal,
  [499] = 1,
    ACTIONS(193), 1,
      sym_integer,
  [503] = 1,
    ACTIONS(195), 1,
      anon_sym_COLON,
  [507] = 1,
    ACTIONS(197), 1,
      sym_code_identifier,
  [511] = 1,
    ACTIONS(199), 1,
      anon_sym_File,
  [515] = 1,
    ACTIONS(179), 1,
      anon_sym_COLON,
  [519] = 1,
    ACTIONS(201), 1,
      anon_sym_discriminator,
  [523] = 1,
    ACTIONS(203), 1,
      anon_sym_RPAREN,
  [527] = 1,
    ACTIONS(205), 1,
      anon_sym_RPAREN,
  [531] = 1,
    ACTIONS(207), 1,
      sym_byte,
  [535] = 1,
    ACTIONS(209), 1,
      anon_sym_format,
  [539] = 1,
    ACTIONS(211), 1,
      anon_sym_COLON,
  [543] = 1,
    ACTIONS(213), 1,
      anon_sym_COLON,
  [547] = 1,
    ACTIONS(215), 1,
      sym_identifier,
  [551] = 1,
    ACTIONS(187), 1,
      sym_integer,
  [555] = 1,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
  [559] = 1,
    ACTIONS(219), 1,
      sym_hexadecimal,
  [563] = 1,
    ACTIONS(221), 1,
      anon_sym_COLON,
  [567] = 1,
    ACTIONS(223), 1,
      anon_sym_COLON,
  [571] = 1,
    ACTIONS(225), 1,
      anon_sym_GT,
  [575] = 1,
    ACTIONS(227), 1,
      sym__section_name,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 26,
  [SMALL_STATE(4)] = 52,
  [SMALL_STATE(5)] = 80,
  [SMALL_STATE(6)] = 100,
  [SMALL_STATE(7)] = 120,
  [SMALL_STATE(8)] = 140,
  [SMALL_STATE(9)] = 156,
  [SMALL_STATE(10)] = 172,
  [SMALL_STATE(11)] = 188,
  [SMALL_STATE(12)] = 204,
  [SMALL_STATE(13)] = 220,
  [SMALL_STATE(14)] = 231,
  [SMALL_STATE(15)] = 242,
  [SMALL_STATE(16)] = 253,
  [SMALL_STATE(17)] = 263,
  [SMALL_STATE(18)] = 273,
  [SMALL_STATE(19)] = 283,
  [SMALL_STATE(20)] = 293,
  [SMALL_STATE(21)] = 303,
  [SMALL_STATE(22)] = 313,
  [SMALL_STATE(23)] = 323,
  [SMALL_STATE(24)] = 333,
  [SMALL_STATE(25)] = 343,
  [SMALL_STATE(26)] = 353,
  [SMALL_STATE(27)] = 363,
  [SMALL_STATE(28)] = 373,
  [SMALL_STATE(29)] = 384,
  [SMALL_STATE(30)] = 397,
  [SMALL_STATE(31)] = 410,
  [SMALL_STATE(32)] = 423,
  [SMALL_STATE(33)] = 433,
  [SMALL_STATE(34)] = 441,
  [SMALL_STATE(35)] = 449,
  [SMALL_STATE(36)] = 456,
  [SMALL_STATE(37)] = 463,
  [SMALL_STATE(38)] = 470,
  [SMALL_STATE(39)] = 477,
  [SMALL_STATE(40)] = 484,
  [SMALL_STATE(41)] = 491,
  [SMALL_STATE(42)] = 495,
  [SMALL_STATE(43)] = 499,
  [SMALL_STATE(44)] = 503,
  [SMALL_STATE(45)] = 507,
  [SMALL_STATE(46)] = 511,
  [SMALL_STATE(47)] = 515,
  [SMALL_STATE(48)] = 519,
  [SMALL_STATE(49)] = 523,
  [SMALL_STATE(50)] = 527,
  [SMALL_STATE(51)] = 531,
  [SMALL_STATE(52)] = 535,
  [SMALL_STATE(53)] = 539,
  [SMALL_STATE(54)] = 543,
  [SMALL_STATE(55)] = 547,
  [SMALL_STATE(56)] = 551,
  [SMALL_STATE(57)] = 555,
  [SMALL_STATE(58)] = 559,
  [SMALL_STATE(59)] = 563,
  [SMALL_STATE(60)] = 567,
  [SMALL_STATE(61)] = 571,
  [SMALL_STATE(62)] = 575,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(37),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(62),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(60),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(59),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction_and_location, 1),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [37] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__instruction_and_location, 1),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_disassembly_section_repeat1, 2),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_disassembly_section_repeat1, 2), SHIFT_REPEAT(47),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_disassembly_section_repeat1, 2), SHIFT_REPEAT(53),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_disassembly_section_repeat1, 2), SHIFT_REPEAT(59),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disassembly_section, 5, .production_id = 1),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_disassembly_section, 5, .production_id = 1), SHIFT(47),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_disassembly_section, 5, .production_id = 1), SHIFT(53),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_disassembly_section, 5, .production_id = 1), SHIFT(59),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disassembly_section, 4, .production_id = 1),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_disassembly_section, 4, .production_id = 1), SHIFT(47),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_disassembly_section, 4, .production_id = 1), SHIFT(53),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_disassembly_section, 4, .production_id = 1), SHIFT(59),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction_and_location, 2),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__instruction_and_location, 2),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [78] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_with_label, 2),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_with_label, 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_location, 3),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_source_location, 3),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_offset, 5),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_offset, 5),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_location, 5),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_location, 5),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_location, 3),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_location, 3),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction_and_location, 3),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__instruction_and_location, 3),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_line, 2),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_line, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction_and_comment, 2),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__instruction_and_comment, 2),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_discriminator, 4),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_discriminator, 4),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 5),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disassembly_section_label, 3),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_disassembly_section_label, 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory_offset, 5),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memory_offset, 5),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory_offset, 4),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memory_offset, 4),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_with_label, 3),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_with_label, 3),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_location, 4),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_source_location, 4),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_machine_code_bytes_repeat1, 2),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_machine_code_bytes_repeat1, 2), SHIFT_REPEAT(51),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_machine_code_bytes_repeat1, 2),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_machine_code_bytes, 1),
  [159] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_code_bytes, 1),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_machine_code_bytes, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_code_bytes, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [211] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [217] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [221] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [223] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [225] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [227] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
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
