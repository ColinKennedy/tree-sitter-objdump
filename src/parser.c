#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 76
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 55
#define ALIAS_COUNT 1
#define TOKEN_COUNT 35
#define EXTERNAL_TOKEN_COUNT 4
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  anon_sym_DOT_DOT_DOT = 1,
  anon_sym_COLON = 2,
  anon_sym_file = 3,
  anon_sym_format = 4,
  aux_sym_disassembly_section_token1 = 5,
  anon_sym_LPAREN = 6,
  anon_sym_discriminator = 7,
  anon_sym_RPAREN = 8,
  aux_sym_memory_offset_token1 = 9,
  sym_instruction = 10,
  sym_bad_instruction = 11,
  anon_sym_POUND = 12,
  anon_sym_SEMI = 13,
  aux_sym__comment_with_label_token1 = 14,
  anon_sym_COMMA = 15,
  anon_sym_LT = 16,
  anon_sym_PLUS = 17,
  anon_sym_GT = 18,
  sym_hexadecimal = 19,
  sym_byte = 20,
  anon_sym_SPACE = 21,
  sym_address = 22,
  anon_sym_File = 23,
  anon_sym_Offset_COLON = 24,
  anon_sym_Disassemblyofsection = 25,
  sym_integer = 26,
  sym_file_path = 27,
  sym__label_identifier = 28,
  sym_identifier = 29,
  sym__section_name = 30,
  sym_code_identifier = 31,
  sym_raw_data = 32,
  sym__whitespace_no_newline = 33,
  sym__error_sentinel = 34,
  sym_source = 35,
  sym__line = 36,
  sym_header = 37,
  sym_disassembly_section = 38,
  sym_source_location = 39,
  sym_discriminator = 40,
  sym_memory_offset = 41,
  sym__instruction_and_comment = 42,
  sym__instruction_and_location = 43,
  sym_comment = 44,
  sym__comment_with_label = 45,
  sym__comment_with_address = 46,
  sym_code_location = 47,
  sym_label_line = 48,
  sym_machine_code_bytes = 49,
  sym_file_offset = 50,
  sym_disassembly_section_label = 51,
  aux_sym_source_repeat1 = 52,
  aux_sym_disassembly_section_repeat1 = 53,
  aux_sym_machine_code_bytes_repeat1 = 54,
  alias_sym_section_address = 55,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_DOT_DOT_DOT] = "...",
  [anon_sym_COLON] = ":",
  [anon_sym_file] = "file",
  [anon_sym_format] = "format",
  [aux_sym_disassembly_section_token1] = "identifier",
  [anon_sym_LPAREN] = "(",
  [anon_sym_discriminator] = "discriminator",
  [anon_sym_RPAREN] = ")",
  [aux_sym_memory_offset_token1] = "memory_offset_token1",
  [sym_instruction] = "instruction",
  [sym_bad_instruction] = "bad_instruction",
  [anon_sym_POUND] = "#",
  [anon_sym_SEMI] = ";",
  [aux_sym__comment_with_label_token1] = "instruction",
  [anon_sym_COMMA] = ",",
  [anon_sym_LT] = "<",
  [anon_sym_PLUS] = "+",
  [anon_sym_GT] = ">",
  [sym_hexadecimal] = "hexadecimal",
  [sym_byte] = "byte",
  [anon_sym_SPACE] = " ",
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
  [sym_raw_data] = "raw_data",
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
  [anon_sym_DOT_DOT_DOT] = anon_sym_DOT_DOT_DOT,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_file] = anon_sym_file,
  [anon_sym_format] = anon_sym_format,
  [aux_sym_disassembly_section_token1] = sym_identifier,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_discriminator] = anon_sym_discriminator,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_memory_offset_token1] = aux_sym_memory_offset_token1,
  [sym_instruction] = sym_instruction,
  [sym_bad_instruction] = sym_bad_instruction,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym__comment_with_label_token1] = sym_instruction,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_GT] = anon_sym_GT,
  [sym_hexadecimal] = sym_hexadecimal,
  [sym_byte] = sym_byte,
  [anon_sym_SPACE] = anon_sym_SPACE,
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
  [sym_raw_data] = sym_raw_data,
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
  [anon_sym_DOT_DOT_DOT] = {
    .visible = true,
    .named = false,
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
  [sym_bad_instruction] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__comment_with_label_token1] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
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
  [anon_sym_SPACE] = {
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
  [sym_raw_data] = {
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
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  switch (state) {
    case 0:
      if (eof) ADVANCE(73);
      if (lookahead == '#') ADVANCE(93);
      if (lookahead == '(') ADVANCE(80);
      if (lookahead == ')') ADVANCE(82);
      if (lookahead == '+') ADVANCE(101);
      if (lookahead == ',') ADVANCE(98);
      if (lookahead == '.') ADVANCE(9);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == ';') ADVANCE(94);
      if (lookahead == '<') ADVANCE(100);
      if (lookahead == '>') ADVANCE(102);
      if (lookahead == 'D') ADVANCE(108);
      if (lookahead == 'F') ADVANCE(109);
      if (lookahead == 'O') ADVANCE(25);
      if (lookahead == 'd') ADVANCE(111);
      if (lookahead == 'f') ADVANCE(112);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(116);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '(') ADVANCE(88);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != ';' &&
          lookahead != '<') ADVANCE(91);
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(2);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(138);
      if (lookahead != 0) ADVANCE(139);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(121);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(43);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(52);
      END_STATE();
    case 6:
      if (lookahead == '(') ADVANCE(80);
      if (lookahead == '0') ADVANCE(113);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(6);
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      END_STATE();
    case 7:
      if (lookahead == '-') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 8:
      if (lookahead == '.') ADVANCE(74);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(8);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == '<') ADVANCE(70);
      if (lookahead == '@') ADVANCE(137);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(136);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(114);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(120);
      END_STATE();
    case 12:
      if (lookahead == '>') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 13:
      if (lookahead == 'F') ADVANCE(28);
      if (lookahead == 'd') ADVANCE(30);
      if (lookahead == 'f') ADVANCE(33);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 14:
      if (lookahead == 'a') ADVANCE(55);
      END_STATE();
    case 15:
      if (lookahead == 'a') ADVANCE(56);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 17:
      if (lookahead == 'b') ADVANCE(35);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(46);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 20:
      if (lookahead == 'e') ADVANCE(119);
      END_STATE();
    case 21:
      if (lookahead == 'e') ADVANCE(77);
      END_STATE();
    case 22:
      if (lookahead == 'e') ADVANCE(54);
      END_STATE();
    case 23:
      if (lookahead == 'e') ADVANCE(19);
      END_STATE();
    case 24:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 25:
      if (lookahead == 'f') ADVANCE(27);
      END_STATE();
    case 26:
      if (lookahead == 'f') ADVANCE(5);
      END_STATE();
    case 27:
      if (lookahead == 'f') ADVANCE(50);
      END_STATE();
    case 28:
      if (lookahead == 'i') ADVANCE(34);
      END_STATE();
    case 29:
      if (lookahead == 'i') ADVANCE(41);
      END_STATE();
    case 30:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 31:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(42);
      END_STATE();
    case 33:
      if (lookahead == 'i') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 35:
      if (lookahead == 'l') ADVANCE(58);
      END_STATE();
    case 36:
      if (lookahead == 'l') ADVANCE(21);
      END_STATE();
    case 37:
      if (lookahead == 'm') ADVANCE(17);
      END_STATE();
    case 38:
      if (lookahead == 'm') ADVANCE(14);
      END_STATE();
    case 39:
      if (lookahead == 'm') ADVANCE(29);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(3);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(15);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(40);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(26);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 45:
      if (lookahead == 'r') ADVANCE(38);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(31);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(81);
      END_STATE();
    case 48:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 49:
      if (lookahead == 's') ADVANCE(18);
      END_STATE();
    case 50:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 52:
      if (lookahead == 's') ADVANCE(23);
      END_STATE();
    case 53:
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(11);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(78);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 58:
      if (lookahead == 'y') ADVANCE(4);
      END_STATE();
    case 59:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      END_STATE();
    case 60:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(97);
      END_STATE();
    case 61:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(141);
      END_STATE();
    case 62:
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(116);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(71);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(104);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(67);
      END_STATE();
    case 70:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 71:
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(97);
      END_STATE();
    case 72:
      if (eof) ADVANCE(73);
      if (lookahead == '#') ADVANCE(93);
      if (lookahead == '(') ADVANCE(80);
      if (lookahead == ')') ADVANCE(82);
      if (lookahead == '.') ADVANCE(125);
      if (lookahead == ':') ADVANCE(76);
      if (lookahead == ';') ADVANCE(94);
      if (lookahead == '<') ADVANCE(99);
      if (lookahead == '@') ADVANCE(137);
      if (lookahead == 'D') ADVANCE(110);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/')) ADVANCE(136);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(72);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(117);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(114);
      if (('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_DOT);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(136);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '@') ADVANCE(137);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_disassembly_section_token1);
      if (lookahead == '>') ADVANCE(79);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_discriminator);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_memory_offset_token1);
      if (lookahead == ' ') ADVANCE(107);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_memory_offset_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == '(') ADVANCE(88);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(85);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '<') ADVANCE(91);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == ')') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '<') ADVANCE(91);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == 'a') ADVANCE(89);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '<') ADVANCE(91);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == 'b') ADVANCE(87);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '<') ADVANCE(91);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead == 'd') ADVANCE(86);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '<') ADVANCE(91);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == '#') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(90);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '<') ADVANCE(91);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '<') ADVANCE(91);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_bad_instruction);
      if (lookahead == '#') ADVANCE(7);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != ';' &&
          lookahead != '<') ADVANCE(91);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym__comment_with_label_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(97);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym__comment_with_label_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(97);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym__comment_with_label_token1);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(12);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_byte);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_byte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_byte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(68);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(anon_sym_SPACE);
      if (lookahead == ' ') ADVANCE(107);
      if (('\t' <= lookahead && lookahead <= '\r')) ADVANCE(83);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(131);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(136);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '@') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(114);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(136);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '@') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(114);
      if (lookahead == '.' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(115);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(117);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/') ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(96);
      if (lookahead != 0 &&
          lookahead != ',') ADVANCE(97);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(anon_sym_File);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(anon_sym_Offset_COLON);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_Disassemblyofsection);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == ' ') ADVANCE(43);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(136);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '@') ADVANCE(137);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == '.') ADVANCE(75);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/')) ADVANCE(136);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '@') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '/')) ADVANCE(136);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '@') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == 'a') ADVANCE(133);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(136);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '@') ADVANCE(137);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == 'b') ADVANCE(129);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(136);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '@') ADVANCE(137);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == 'e') ADVANCE(130);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(136);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '@') ADVANCE(137);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == 'l') ADVANCE(134);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(136);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '@') ADVANCE(137);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == 'm') ADVANCE(127);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(136);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '@') ADVANCE(137);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == 's') ADVANCE(126);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(136);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '@') ADVANCE(137);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == 's') ADVANCE(128);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(136);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '@') ADVANCE(137);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == 's') ADVANCE(132);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(136);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '@') ADVANCE(137);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == 'y') ADVANCE(123);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(136);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '@') ADVANCE(137);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == '+' ||
          lookahead == '-' ||
          lookahead == '/') ADVANCE(136);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '@') ADVANCE(137);
      if (('.' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__label_identifier);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(137);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\t' ||
          (11 <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(138);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(139);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__section_name);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(140);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(141);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__section_name);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(141);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 72},
  [2] = {.lex_state = 72},
  [3] = {.lex_state = 72},
  [4] = {.lex_state = 72},
  [5] = {.lex_state = 72},
  [6] = {.lex_state = 72},
  [7] = {.lex_state = 72},
  [8] = {.lex_state = 72},
  [9] = {.lex_state = 72},
  [10] = {.lex_state = 72},
  [11] = {.lex_state = 72},
  [12] = {.lex_state = 72},
  [13] = {.lex_state = 72},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 72},
  [17] = {.lex_state = 72},
  [18] = {.lex_state = 72},
  [19] = {.lex_state = 72},
  [20] = {.lex_state = 72},
  [21] = {.lex_state = 72},
  [22] = {.lex_state = 72},
  [23] = {.lex_state = 72},
  [24] = {.lex_state = 72},
  [25] = {.lex_state = 72},
  [26] = {.lex_state = 72},
  [27] = {.lex_state = 72},
  [28] = {.lex_state = 72},
  [29] = {.lex_state = 72},
  [30] = {.lex_state = 72},
  [31] = {.lex_state = 72},
  [32] = {.lex_state = 83, .external_lex_state = 2},
  [33] = {.lex_state = 83, .external_lex_state = 2},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 83, .external_lex_state = 2},
  [36] = {.lex_state = 83, .external_lex_state = 2},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 84, .external_lex_state = 2},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 72},
  [43] = {.lex_state = 10},
  [44] = {.lex_state = 72},
  [45] = {.lex_state = 13},
  [46] = {.lex_state = 59},
  [47] = {.lex_state = 72},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 62},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 13},
  [54] = {.lex_state = 0, .external_lex_state = 3},
  [55] = {.lex_state = 13},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 6},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 72},
  [64] = {.lex_state = 13},
  [65] = {.lex_state = 13},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 61},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 59},
  [73] = {.lex_state = 13},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_file] = ACTIONS(1),
    [anon_sym_format] = ACTIONS(1),
    [aux_sym_disassembly_section_token1] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_discriminator] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [sym_address] = ACTIONS(1),
    [anon_sym_File] = ACTIONS(1),
    [anon_sym_Offset_COLON] = ACTIONS(1),
    [anon_sym_Disassemblyofsection] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_code_identifier] = ACTIONS(1),
    [sym_raw_data] = ACTIONS(1),
    [sym__whitespace_no_newline] = ACTIONS(1),
    [sym__error_sentinel] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(57),
    [sym__line] = STATE(2),
    [sym_header] = STATE(2),
    [sym_disassembly_section] = STATE(2),
    [sym_source_location] = STATE(2),
    [sym_memory_offset] = STATE(2),
    [sym_label_line] = STATE(2),
    [sym_disassembly_section_label] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_DOT_DOT_DOT] = ACTIONS(5),
    [sym_address] = ACTIONS(7),
    [anon_sym_Disassemblyofsection] = ACTIONS(9),
    [sym_file_path] = ACTIONS(11),
    [sym__label_identifier] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(7), 1,
      sym_address,
    ACTIONS(9), 1,
      anon_sym_Disassemblyofsection,
    ACTIONS(11), 1,
      sym_file_path,
    ACTIONS(13), 1,
      sym__label_identifier,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      anon_sym_DOT_DOT_DOT,
    STATE(3), 8,
      sym__line,
      sym_header,
      sym_disassembly_section,
      sym_source_location,
      sym_memory_offset,
      sym_label_line,
      sym_disassembly_section_label,
      aux_sym_source_repeat1,
  [29] = 7,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(24), 1,
      sym_address,
    ACTIONS(27), 1,
      anon_sym_Disassemblyofsection,
    ACTIONS(30), 1,
      sym_file_path,
    ACTIONS(33), 1,
      sym__label_identifier,
    STATE(3), 8,
      sym__line,
      sym_header,
      sym_disassembly_section,
      sym_source_location,
      sym_memory_offset,
      sym_label_line,
      sym_disassembly_section_label,
      aux_sym_source_repeat1,
  [58] = 8,
    ACTIONS(40), 1,
      anon_sym_LPAREN,
    ACTIONS(44), 1,
      anon_sym_LT,
    STATE(12), 1,
      sym_code_location,
    STATE(18), 1,
      sym_file_offset,
    STATE(19), 1,
      sym_comment,
    ACTIONS(36), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(42), 2,
      anon_sym_POUND,
      anon_sym_SEMI,
    ACTIONS(38), 4,
      anon_sym_DOT_DOT_DOT,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [88] = 6,
    ACTIONS(48), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(50), 1,
      sym_address,
    ACTIONS(53), 1,
      sym_file_path,
    ACTIONS(56), 1,
      sym__label_identifier,
    ACTIONS(46), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    STATE(6), 4,
      sym_source_location,
      sym_memory_offset,
      sym_label_line,
      aux_sym_disassembly_section_repeat1,
  [111] = 6,
    ACTIONS(61), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(63), 1,
      sym_address,
    ACTIONS(66), 1,
      sym_file_path,
    ACTIONS(69), 1,
      sym__label_identifier,
    ACTIONS(59), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    STATE(6), 4,
      sym_source_location,
      sym_memory_offset,
      sym_label_line,
      aux_sym_disassembly_section_repeat1,
  [134] = 6,
    ACTIONS(74), 1,
      anon_sym_DOT_DOT_DOT,
    ACTIONS(76), 1,
      sym_address,
    ACTIONS(79), 1,
      sym_file_path,
    ACTIONS(82), 1,
      sym__label_identifier,
    ACTIONS(72), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    STATE(6), 4,
      sym_source_location,
      sym_memory_offset,
      sym_label_line,
      aux_sym_disassembly_section_repeat1,
  [157] = 2,
    ACTIONS(85), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_Disassemblyofsection,
    ACTIONS(87), 4,
      anon_sym_DOT_DOT_DOT,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [170] = 2,
    ACTIONS(89), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_Disassemblyofsection,
    ACTIONS(91), 4,
      anon_sym_DOT_DOT_DOT,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [183] = 4,
    ACTIONS(40), 1,
      anon_sym_LPAREN,
    STATE(30), 1,
      sym_file_offset,
    ACTIONS(93), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(95), 4,
      anon_sym_DOT_DOT_DOT,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [200] = 2,
    ACTIONS(97), 4,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_RPAREN,
      anon_sym_Disassemblyofsection,
    ACTIONS(99), 4,
      anon_sym_DOT_DOT_DOT,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [213] = 4,
    ACTIONS(40), 1,
      anon_sym_LPAREN,
    STATE(17), 1,
      sym_file_offset,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(103), 4,
      anon_sym_DOT_DOT_DOT,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [230] = 4,
    ACTIONS(109), 1,
      anon_sym_LPAREN,
    STATE(29), 1,
      sym_discriminator,
    ACTIONS(105), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(107), 4,
      anon_sym_DOT_DOT_DOT,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [247] = 4,
    ACTIONS(13), 1,
      sym__label_identifier,
    ACTIONS(111), 1,
      sym_address,
    ACTIONS(113), 1,
      sym_file_path,
    STATE(7), 4,
      sym_source_location,
      sym_memory_offset,
      sym_label_line,
      aux_sym_disassembly_section_repeat1,
  [263] = 4,
    ACTIONS(13), 1,
      sym__label_identifier,
    ACTIONS(111), 1,
      sym_address,
    ACTIONS(113), 1,
      sym_file_path,
    STATE(5), 4,
      sym_source_location,
      sym_memory_offset,
      sym_label_line,
      aux_sym_disassembly_section_repeat1,
  [279] = 2,
    ACTIONS(115), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(117), 4,
      anon_sym_DOT_DOT_DOT,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [290] = 2,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(121), 4,
      anon_sym_DOT_DOT_DOT,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [301] = 2,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(103), 4,
      anon_sym_DOT_DOT_DOT,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [312] = 2,
    ACTIONS(123), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(125), 4,
      anon_sym_DOT_DOT_DOT,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [323] = 2,
    ACTIONS(127), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(129), 4,
      anon_sym_DOT_DOT_DOT,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [334] = 2,
    ACTIONS(131), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(133), 4,
      anon_sym_DOT_DOT_DOT,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [345] = 2,
    ACTIONS(135), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(137), 4,
      anon_sym_DOT_DOT_DOT,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [356] = 2,
    ACTIONS(139), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(141), 4,
      anon_sym_DOT_DOT_DOT,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [367] = 2,
    ACTIONS(143), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(145), 4,
      anon_sym_DOT_DOT_DOT,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [378] = 2,
    ACTIONS(147), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(149), 4,
      anon_sym_DOT_DOT_DOT,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [389] = 2,
    ACTIONS(151), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(153), 4,
      anon_sym_DOT_DOT_DOT,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [400] = 2,
    ACTIONS(155), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(157), 4,
      anon_sym_DOT_DOT_DOT,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [411] = 2,
    ACTIONS(159), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(161), 4,
      anon_sym_DOT_DOT_DOT,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [422] = 2,
    ACTIONS(163), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(165), 4,
      anon_sym_DOT_DOT_DOT,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [433] = 2,
    ACTIONS(167), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(169), 4,
      anon_sym_DOT_DOT_DOT,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [444] = 2,
    ACTIONS(171), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(173), 4,
      anon_sym_DOT_DOT_DOT,
      sym_address,
      sym_file_path,
      sym__label_identifier,
  [455] = 4,
    ACTIONS(175), 1,
      aux_sym_memory_offset_token1,
    ACTIONS(177), 1,
      anon_sym_SPACE,
    STATE(32), 1,
      aux_sym_machine_code_bytes_repeat1,
    ACTIONS(180), 2,
      sym_raw_data,
      sym__whitespace_no_newline,
  [469] = 4,
    ACTIONS(182), 1,
      aux_sym_memory_offset_token1,
    ACTIONS(184), 1,
      anon_sym_SPACE,
    STATE(32), 1,
      aux_sym_machine_code_bytes_repeat1,
    ACTIONS(186), 2,
      sym_raw_data,
      sym__whitespace_no_newline,
  [483] = 4,
    ACTIONS(188), 1,
      anon_sym_LPAREN,
    ACTIONS(190), 1,
      sym_hexadecimal,
    ACTIONS(192), 1,
      sym_address,
    STATE(24), 2,
      sym__comment_with_label,
      sym__comment_with_address,
  [497] = 4,
    ACTIONS(184), 1,
      anon_sym_SPACE,
    ACTIONS(194), 1,
      aux_sym_memory_offset_token1,
    STATE(33), 1,
      aux_sym_machine_code_bytes_repeat1,
    ACTIONS(196), 2,
      sym_raw_data,
      sym__whitespace_no_newline,
  [511] = 2,
    ACTIONS(175), 2,
      aux_sym_memory_offset_token1,
      anon_sym_SPACE,
    ACTIONS(180), 2,
      sym_raw_data,
      sym__whitespace_no_newline,
  [520] = 3,
    ACTIONS(198), 1,
      sym_instruction,
    ACTIONS(200), 1,
      sym_bad_instruction,
    STATE(27), 2,
      sym__instruction_and_comment,
      sym__instruction_and_location,
  [531] = 3,
    ACTIONS(40), 1,
      anon_sym_LPAREN,
    ACTIONS(202), 1,
      anon_sym_RPAREN,
    STATE(69), 1,
      sym_file_offset,
  [541] = 3,
    ACTIONS(40), 1,
      anon_sym_LPAREN,
    ACTIONS(204), 1,
      anon_sym_RPAREN,
    STATE(74), 1,
      sym_file_offset,
  [551] = 2,
    ACTIONS(206), 1,
      aux_sym_memory_offset_token1,
    ACTIONS(208), 2,
      sym_raw_data,
      sym__whitespace_no_newline,
  [559] = 3,
    ACTIONS(40), 1,
      anon_sym_LPAREN,
    ACTIONS(210), 1,
      anon_sym_COLON,
    STATE(75), 1,
      sym_file_offset,
  [569] = 2,
    ACTIONS(44), 1,
      anon_sym_LT,
    STATE(39), 1,
      sym_code_location,
  [576] = 2,
    ACTIONS(212), 1,
      anon_sym_COLON,
    ACTIONS(214), 1,
      aux_sym_disassembly_section_token1,
  [583] = 2,
    ACTIONS(44), 1,
      anon_sym_LT,
    STATE(38), 1,
      sym_code_location,
  [590] = 2,
    ACTIONS(216), 1,
      anon_sym_file,
    ACTIONS(218), 1,
      sym_integer,
  [597] = 2,
    ACTIONS(220), 1,
      sym_byte,
    STATE(40), 1,
      sym_machine_code_bytes,
  [604] = 2,
    ACTIONS(44), 1,
      anon_sym_LT,
    STATE(10), 1,
      sym_code_location,
  [611] = 2,
    ACTIONS(222), 1,
      anon_sym_PLUS,
    ACTIONS(224), 1,
      anon_sym_GT,
  [618] = 2,
    ACTIONS(226), 1,
      aux_sym__comment_with_label_token1,
    ACTIONS(228), 1,
      sym_address,
  [625] = 1,
    ACTIONS(230), 1,
      sym_identifier,
  [629] = 1,
    ACTIONS(232), 1,
      anon_sym_RPAREN,
  [633] = 1,
    ACTIONS(234), 1,
      anon_sym_RPAREN,
  [637] = 1,
    ACTIONS(236), 1,
      anon_sym_File,
  [641] = 1,
    ACTIONS(238), 1,
      sym_code_identifier,
  [645] = 1,
    ACTIONS(240), 1,
      sym_integer,
  [649] = 1,
    ACTIONS(242), 1,
      anon_sym_COLON,
  [653] = 1,
    ACTIONS(244), 1,
      ts_builtin_sym_end,
  [657] = 1,
    ACTIONS(246), 1,
      anon_sym_COMMA,
  [661] = 1,
    ACTIONS(248), 1,
      sym_hexadecimal,
  [665] = 1,
    ACTIONS(250), 1,
      anon_sym_COLON,
  [669] = 1,
    ACTIONS(252), 1,
      sym_hexadecimal,
  [673] = 1,
    ACTIONS(254), 1,
      anon_sym_COLON,
  [677] = 1,
    ACTIONS(256), 1,
      sym_address,
  [681] = 1,
    ACTIONS(218), 1,
      sym_integer,
  [685] = 1,
    ACTIONS(258), 1,
      anon_sym_discriminator,
  [689] = 1,
    ACTIONS(260), 1,
      anon_sym_GT,
  [693] = 1,
    ACTIONS(262), 1,
      anon_sym_Offset_COLON,
  [697] = 1,
    ACTIONS(264), 1,
      anon_sym_COLON,
  [701] = 1,
    ACTIONS(266), 1,
      anon_sym_RPAREN,
  [705] = 1,
    ACTIONS(268), 1,
      sym__section_name,
  [709] = 1,
    ACTIONS(212), 1,
      anon_sym_COLON,
  [713] = 1,
    ACTIONS(270), 1,
      sym_byte,
  [717] = 1,
    ACTIONS(272), 1,
      anon_sym_format,
  [721] = 1,
    ACTIONS(274), 1,
      anon_sym_RPAREN,
  [725] = 1,
    ACTIONS(276), 1,
      anon_sym_COLON,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 58,
  [SMALL_STATE(5)] = 88,
  [SMALL_STATE(6)] = 111,
  [SMALL_STATE(7)] = 134,
  [SMALL_STATE(8)] = 157,
  [SMALL_STATE(9)] = 170,
  [SMALL_STATE(10)] = 183,
  [SMALL_STATE(11)] = 200,
  [SMALL_STATE(12)] = 213,
  [SMALL_STATE(13)] = 230,
  [SMALL_STATE(14)] = 247,
  [SMALL_STATE(15)] = 263,
  [SMALL_STATE(16)] = 279,
  [SMALL_STATE(17)] = 290,
  [SMALL_STATE(18)] = 301,
  [SMALL_STATE(19)] = 312,
  [SMALL_STATE(20)] = 323,
  [SMALL_STATE(21)] = 334,
  [SMALL_STATE(22)] = 345,
  [SMALL_STATE(23)] = 356,
  [SMALL_STATE(24)] = 367,
  [SMALL_STATE(25)] = 378,
  [SMALL_STATE(26)] = 389,
  [SMALL_STATE(27)] = 400,
  [SMALL_STATE(28)] = 411,
  [SMALL_STATE(29)] = 422,
  [SMALL_STATE(30)] = 433,
  [SMALL_STATE(31)] = 444,
  [SMALL_STATE(32)] = 455,
  [SMALL_STATE(33)] = 469,
  [SMALL_STATE(34)] = 483,
  [SMALL_STATE(35)] = 497,
  [SMALL_STATE(36)] = 511,
  [SMALL_STATE(37)] = 520,
  [SMALL_STATE(38)] = 531,
  [SMALL_STATE(39)] = 541,
  [SMALL_STATE(40)] = 551,
  [SMALL_STATE(41)] = 559,
  [SMALL_STATE(42)] = 569,
  [SMALL_STATE(43)] = 576,
  [SMALL_STATE(44)] = 583,
  [SMALL_STATE(45)] = 590,
  [SMALL_STATE(46)] = 597,
  [SMALL_STATE(47)] = 604,
  [SMALL_STATE(48)] = 611,
  [SMALL_STATE(49)] = 618,
  [SMALL_STATE(50)] = 625,
  [SMALL_STATE(51)] = 629,
  [SMALL_STATE(52)] = 633,
  [SMALL_STATE(53)] = 637,
  [SMALL_STATE(54)] = 641,
  [SMALL_STATE(55)] = 645,
  [SMALL_STATE(56)] = 649,
  [SMALL_STATE(57)] = 653,
  [SMALL_STATE(58)] = 657,
  [SMALL_STATE(59)] = 661,
  [SMALL_STATE(60)] = 665,
  [SMALL_STATE(61)] = 669,
  [SMALL_STATE(62)] = 673,
  [SMALL_STATE(63)] = 677,
  [SMALL_STATE(64)] = 681,
  [SMALL_STATE(65)] = 685,
  [SMALL_STATE(66)] = 689,
  [SMALL_STATE(67)] = 693,
  [SMALL_STATE(68)] = 697,
  [SMALL_STATE(69)] = 701,
  [SMALL_STATE(70)] = 705,
  [SMALL_STATE(71)] = 709,
  [SMALL_STATE(72)] = 713,
  [SMALL_STATE(73)] = 717,
  [SMALL_STATE(74)] = 721,
  [SMALL_STATE(75)] = 725,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(3),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(43),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(70),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(62),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(60),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction_and_location, 1),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__instruction_and_location, 1),
  [40] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disassembly_section, 5, .production_id = 1),
  [48] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_disassembly_section, 5, .production_id = 1),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_disassembly_section, 5, .production_id = 1), SHIFT(71),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_disassembly_section, 5, .production_id = 1), SHIFT(68),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_disassembly_section, 5, .production_id = 1), SHIFT(60),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_disassembly_section_repeat1, 2),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_disassembly_section_repeat1, 2),
  [63] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_disassembly_section_repeat1, 2), SHIFT_REPEAT(71),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_disassembly_section_repeat1, 2), SHIFT_REPEAT(68),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_disassembly_section_repeat1, 2), SHIFT_REPEAT(60),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disassembly_section, 4, .production_id = 1),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_disassembly_section, 4, .production_id = 1),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_disassembly_section, 4, .production_id = 1), SHIFT(71),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_disassembly_section, 4, .production_id = 1), SHIFT(68),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_disassembly_section, 4, .production_id = 1), SHIFT(60),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_location, 5),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_location, 5),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_location, 3),
  [91] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_location, 3),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_with_label, 2),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_with_label, 2),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_offset, 5),
  [99] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_offset, 5),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction_and_location, 2),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__instruction_and_location, 2),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_location, 3),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_source_location, 3),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_discriminator, 4),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_discriminator, 4),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction_and_location, 3),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__instruction_and_location, 3),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__instruction_and_comment, 2),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__instruction_and_comment, 2),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_with_label, 7),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_with_label, 7),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_with_label, 6),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_with_label, 6),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disassembly_section_label, 3),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_disassembly_section_label, 3),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_with_label, 5),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_with_label, 5),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 5),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory_offset, 4),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memory_offset, 4),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_memory_offset, 5),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_memory_offset, 5),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_with_label, 4),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_with_label, 4),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_location, 4),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_source_location, 4),
  [167] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_with_label, 3),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_with_label, 3),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_line, 2),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_line, 2),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_machine_code_bytes_repeat1, 2),
  [177] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_machine_code_bytes_repeat1, 2), SHIFT_REPEAT(72),
  [180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_machine_code_bytes_repeat1, 2),
  [182] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_machine_code_bytes, 2),
  [184] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_code_bytes, 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [192] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_machine_code_bytes, 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_code_bytes, 1),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [200] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [228] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [244] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_code_identifier = 0,
  ts_external_token_raw_data = 1,
  ts_external_token__whitespace_no_newline = 2,
  ts_external_token__error_sentinel = 3,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_code_identifier] = sym_code_identifier,
  [ts_external_token_raw_data] = sym_raw_data,
  [ts_external_token__whitespace_no_newline] = sym__whitespace_no_newline,
  [ts_external_token__error_sentinel] = sym__error_sentinel,
};

static const bool ts_external_scanner_states[4][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_code_identifier] = true,
    [ts_external_token_raw_data] = true,
    [ts_external_token__whitespace_no_newline] = true,
    [ts_external_token__error_sentinel] = true,
  },
  [2] = {
    [ts_external_token_raw_data] = true,
    [ts_external_token__whitespace_no_newline] = true,
  },
  [3] = {
    [ts_external_token_code_identifier] = true,
  },
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
