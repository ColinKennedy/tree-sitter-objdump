#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 54
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 40
#define ALIAS_COUNT 1
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
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
  anon_sym_LT = 9,
  aux_sym_code_location_token1 = 10,
  anon_sym_PLUS = 11,
  anon_sym_GT = 12,
  sym_hexadecimal = 13,
  sym_byte = 14,
  sym_instruction = 15,
  sym_address = 16,
  anon_sym_File = 17,
  anon_sym_Offset_COLON = 18,
  anon_sym_Disassemblyofsection = 19,
  sym_integer = 20,
  sym_file_path = 21,
  sym__label_identifier = 22,
  sym_identifier = 23,
  sym_section_name = 24,
  sym_comment = 25,
  sym_source = 26,
  sym__line = 27,
  sym_header = 28,
  sym_disassembly_section = 29,
  sym_source_location = 30,
  sym_discriminator = 31,
  sym_offset_line = 32,
  sym_code_location = 33,
  sym_label_line = 34,
  sym_machine_code_bytes = 35,
  sym_file_offset = 36,
  sym_disassembly_section_label = 37,
  aux_sym_source_repeat1 = 38,
  aux_sym_machine_code_bytes_repeat1 = 39,
  alias_sym_section_address = 40,
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
  [anon_sym_LT] = "<",
  [aux_sym_code_location_token1] = "identifier",
  [anon_sym_PLUS] = "+",
  [anon_sym_GT] = ">",
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
  [sym_comment] = "comment",
  [sym_source] = "source",
  [sym__line] = "_line",
  [sym_header] = "header",
  [sym_disassembly_section] = "disassembly_section",
  [sym_source_location] = "source_location",
  [sym_discriminator] = "discriminator",
  [sym_offset_line] = "offset_line",
  [sym_code_location] = "code_location",
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
  [anon_sym_LT] = anon_sym_LT,
  [aux_sym_code_location_token1] = sym_identifier,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_GT] = anon_sym_GT,
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
  [sym_comment] = sym_comment,
  [sym_source] = sym_source,
  [sym__line] = sym__line,
  [sym_header] = sym_header,
  [sym_disassembly_section] = sym_disassembly_section,
  [sym_source_location] = sym_source_location,
  [sym_discriminator] = sym_discriminator,
  [sym_offset_line] = sym_offset_line,
  [sym_code_location] = sym_code_location,
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
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_code_location_token1] = {
    .visible = true,
    .named = true,
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
  [sym_comment] = {
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
  [46] = 15,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 42,
  [51] = 35,
  [52] = 39,
  [53] = 30,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(89);
      if (lookahead == '#') ADVANCE(152);
      if (lookahead == '(') ADVANCE(94);
      if (lookahead == ')') ADVANCE(96);
      if (lookahead == '+') ADVANCE(105);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '0') ADVANCE(123);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == '>') ADVANCE(106);
      if (lookahead == 'D') ADVANCE(117);
      if (lookahead == 'F') ADVANCE(118);
      if (lookahead == 'O') ADVANCE(35);
      if (lookahead == '\\') SKIP(76)
      if (lookahead == 'd') ADVANCE(121);
      if (lookahead == 'f') ADVANCE(122);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(126);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(124);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(18)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(3)
      if (lookahead == '#') ADVANCE(115);
      if (lookahead == '/') ADVANCE(114);
      if (lookahead == '\\') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(116);
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(4)
      if (lookahead == '#') ADVANCE(150);
      if (lookahead == '/') ADVANCE(149);
      if (lookahead == '\\') ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(148);
      if (lookahead != 0) ADVANCE(150);
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(10)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(15)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(15)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(132);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '#') ADVANCE(152);
      if (lookahead == '(') ADVANCE(94);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == 'D') ADVANCE(120);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      if (lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(97);
      if (lookahead == '#') ADVANCE(152);
      if (lookahead == '(') ADVANCE(94);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == 'D') ADVANCE(119);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(15)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      if (lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(97);
      if (lookahead == '#') ADVANCE(152);
      if (lookahead == '(') ADVANCE(94);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == 'D') ADVANCE(120);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      if (lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(54);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(12);
      if (lookahead == '#') ADVANCE(152);
      if (lookahead == '(') ADVANCE(94);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == 'D') ADVANCE(120);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      if (lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(16);
      if (lookahead == '#') ADVANCE(152);
      if (lookahead == '(') ADVANCE(94);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == 'D') ADVANCE(119);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(15)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      if (lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead == '#') ADVANCE(152);
      if (lookahead == '(') ADVANCE(94);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == 'D') ADVANCE(119);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(15)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      if (lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(63);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(152);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == 'f') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(18)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(101);
      if (lookahead == '/') ADVANCE(103);
      if (lookahead == '\\') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '+' &&
          lookahead != '>') ADVANCE(104);
      END_STATE();
    case 20:
      if (lookahead == '/') ADVANCE(152);
      END_STATE();
    case 21:
      if (lookahead == '/') ADVANCE(134);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 22:
      if (lookahead == ':') ADVANCE(131);
      END_STATE();
    case 23:
      if (lookahead == '>') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 27:
      if (lookahead == 'b') ADVANCE(45);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(57);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(68);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(91);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 35:
      if (lookahead == 'f') ADVANCE(37);
      END_STATE();
    case 36:
      if (lookahead == 'f') ADVANCE(17);
      END_STATE();
    case 37:
      if (lookahead == 'f') ADVANCE(61);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(53);
      END_STATE();
    case 43:
      if (lookahead == 'i') ADVANCE(46);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(69);
      END_STATE();
    case 46:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 47:
      if (lookahead == 'm') ADVANCE(27);
      END_STATE();
    case 48:
      if (lookahead == 'm') ADVANCE(24);
      END_STATE();
    case 49:
      if (lookahead == 'm') ADVANCE(39);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 51:
      if (lookahead == 'n') ADVANCE(25);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(50);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 55:
      if (lookahead == 'o') ADVANCE(58);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 58:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 60:
      if (lookahead == 's') ADVANCE(28);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(34);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 64:
      if (lookahead == 's') ADVANCE(62);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(22);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(55);
      END_STATE();
    case 68:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 69:
      if (lookahead == 'y') ADVANCE(13);
      END_STATE();
    case 70:
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(107);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      END_STATE();
    case 73:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 74:
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(151);
      END_STATE();
    case 75:
      if (eof) ADVANCE(89);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 76:
      if (eof) ADVANCE(89);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(75)
      END_STATE();
    case 77:
      if (eof) ADVANCE(89);
      if (lookahead == '\n') SKIP(88)
      END_STATE();
    case 78:
      if (eof) ADVANCE(89);
      if (lookahead == '\n') SKIP(88)
      if (lookahead == '\r') SKIP(77)
      END_STATE();
    case 79:
      if (eof) ADVANCE(89);
      if (lookahead == '\n') SKIP(85)
      END_STATE();
    case 80:
      if (eof) ADVANCE(89);
      if (lookahead == '\n') SKIP(85)
      if (lookahead == '\r') SKIP(79)
      END_STATE();
    case 81:
      if (eof) ADVANCE(89);
      if (lookahead == '\n') SKIP(87)
      END_STATE();
    case 82:
      if (eof) ADVANCE(89);
      if (lookahead == '\n') SKIP(87)
      if (lookahead == '\r') SKIP(81)
      END_STATE();
    case 83:
      if (eof) ADVANCE(89);
      if (lookahead == '\n') SKIP(86)
      END_STATE();
    case 84:
      if (eof) ADVANCE(89);
      if (lookahead == '\n') SKIP(86)
      if (lookahead == '\r') SKIP(83)
      END_STATE();
    case 85:
      if (eof) ADVANCE(89);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '#') ADVANCE(152);
      if (lookahead == '(') ADVANCE(94);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == 'D') ADVANCE(120);
      if (lookahead == '\\') SKIP(80)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(85)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(128);
      if (lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 86:
      if (eof) ADVANCE(89);
      if (lookahead == ' ') ADVANCE(16);
      if (lookahead == '#') ADVANCE(152);
      if (lookahead == '(') ADVANCE(94);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == 'D') ADVANCE(119);
      if (lookahead == '\\') SKIP(84)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(86)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      if (lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 87:
      if (eof) ADVANCE(89);
      if (lookahead == '#') ADVANCE(152);
      if (lookahead == '(') ADVANCE(94);
      if (lookahead == ')') ADVANCE(96);
      if (lookahead == '+') ADVANCE(105);
      if (lookahead == '.') ADVANCE(74);
      if (lookahead == '/') ADVANCE(20);
      if (lookahead == '0') ADVANCE(70);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '<') ADVANCE(73);
      if (lookahead == '>') ADVANCE(106);
      if (lookahead == 'F') ADVANCE(38);
      if (lookahead == 'O') ADVANCE(35);
      if (lookahead == '\\') SKIP(82)
      if (lookahead == 'd') ADVANCE(40);
      if (lookahead == 'f') ADVANCE(52);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(87)
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(72);
      END_STATE();
    case 88:
      if (eof) ADVANCE(89);
      if (lookahead == '#') ADVANCE(152);
      if (lookahead == '(') ADVANCE(94);
      if (lookahead == '/') ADVANCE(21);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == 'D') ADVANCE(119);
      if (lookahead == '\\') SKIP(78)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(88)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      if (lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_disassembly_section_token1);
      if (lookahead == '>') ADVANCE(93);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(23);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_discriminator);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_offset_line_token1);
      if (lookahead == ' ') ADVANCE(97);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_code_location_token1);
      if (lookahead == '\n') ADVANCE(102);
      if (lookahead == '\r') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '+' &&
          lookahead != '>') ADVANCE(104);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_code_location_token1);
      if (lookahead == '\n') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '+' &&
          lookahead != '>') ADVANCE(104);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_code_location_token1);
      if (lookahead == '\n') ADVANCE(104);
      if (lookahead == '+' ||
          lookahead == '>') ADVANCE(152);
      if (lookahead != 0) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_code_location_token1);
      if (lookahead == '#') ADVANCE(101);
      if (lookahead == '/') ADVANCE(103);
      if (lookahead == '\\') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '+' &&
          lookahead != '>') ADVANCE(104);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_code_location_token1);
      if (lookahead == '/') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '+' &&
          lookahead != '>') ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_code_location_token1);
      if (lookahead != 0 &&
          lookahead != '+' &&
          lookahead != '>') ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(107);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_byte);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_byte);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(129);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_byte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_byte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(129);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == '\r') ADVANCE(116);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<') ADVANCE(116);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == '#') ADVANCE(115);
      if (lookahead == '/') ADVANCE(114);
      if (lookahead == '\\') ADVANCE(112);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<') ADVANCE(116);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == '/') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<') ADVANCE(116);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == '<') ADVANCE(152);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<') ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(142);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(46);
      if (lookahead == 'o') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(109);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(129);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(129);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_File);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_Offset_COLON);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_Disassemblyofsection);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(152);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == ' ') ADVANCE(54);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'a') ADVANCE(144);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'b') ADVANCE(140);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'e') ADVANCE(141);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'l') ADVANCE(145);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'm') ADVANCE(138);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 's') ADVANCE(137);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 's') ADVANCE(139);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 's') ADVANCE(143);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'y') ADVANCE(136);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym__label_identifier);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\r') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(150);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(150);
      if (lookahead == '/') ADVANCE(149);
      if (lookahead == '\\') ADVANCE(147);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(150);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(150);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(151);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(152);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 88},
  [2] = {.lex_state = 88},
  [3] = {.lex_state = 88},
  [4] = {.lex_state = 85},
  [5] = {.lex_state = 86},
  [6] = {.lex_state = 85},
  [7] = {.lex_state = 88},
  [8] = {.lex_state = 88},
  [9] = {.lex_state = 88},
  [10] = {.lex_state = 88},
  [11] = {.lex_state = 88},
  [12] = {.lex_state = 88},
  [13] = {.lex_state = 88},
  [14] = {.lex_state = 88},
  [15] = {.lex_state = 88},
  [16] = {.lex_state = 88},
  [17] = {.lex_state = 88},
  [18] = {.lex_state = 88},
  [19] = {.lex_state = 88},
  [20] = {.lex_state = 88},
  [21] = {.lex_state = 88},
  [22] = {.lex_state = 88},
  [23] = {.lex_state = 88},
  [24] = {.lex_state = 88},
  [25] = {.lex_state = 87},
  [26] = {.lex_state = 87},
  [27] = {.lex_state = 87},
  [28] = {.lex_state = 18},
  [29] = {.lex_state = 87},
  [30] = {.lex_state = 87},
  [31] = {.lex_state = 87},
  [32] = {.lex_state = 3},
  [33] = {.lex_state = 87},
  [34] = {.lex_state = 87},
  [35] = {.lex_state = 87},
  [36] = {.lex_state = 87},
  [37] = {.lex_state = 18},
  [38] = {.lex_state = 87},
  [39] = {.lex_state = 87},
  [40] = {.lex_state = 87},
  [41] = {.lex_state = 87},
  [42] = {.lex_state = 87},
  [43] = {.lex_state = 87},
  [44] = {.lex_state = 4},
  [45] = {.lex_state = 87},
  [46] = {.lex_state = 87},
  [47] = {.lex_state = 19},
  [48] = {.lex_state = 87},
  [49] = {.lex_state = 87},
  [50] = {.lex_state = 87},
  [51] = {.lex_state = 87},
  [52] = {.lex_state = 87},
  [53] = {.lex_state = 87},
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
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_source] = STATE(33),
    [sym__line] = STATE(3),
    [sym_header] = STATE(3),
    [sym_disassembly_section] = STATE(3),
    [sym_source_location] = STATE(3),
    [sym_offset_line] = STATE(3),
    [sym_label_line] = STATE(3),
    [sym_disassembly_section_label] = STATE(3),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym_address] = ACTIONS(7),
    [anon_sym_Disassemblyofsection] = ACTIONS(9),
    [sym_file_path] = ACTIONS(11),
    [sym__label_identifier] = ACTIONS(13),
    [sym_comment] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      sym_address,
    ACTIONS(22), 1,
      anon_sym_Disassemblyofsection,
    ACTIONS(25), 1,
      sym_file_path,
    ACTIONS(28), 1,
      sym__label_identifier,
    ACTIONS(31), 1,
      sym_comment,
    STATE(2), 8,
      sym__line,
      sym_header,
      sym_disassembly_section,
      sym_source_location,
      sym_offset_line,
      sym_label_line,
      sym_disassembly_section_label,
      aux_sym_source_repeat1,
  [29] = 7,
    ACTIONS(7), 1,
      sym_address,
    ACTIONS(9), 1,
      anon_sym_Disassemblyofsection,
    ACTIONS(11), 1,
      sym_file_path,
    ACTIONS(13), 1,
      sym__label_identifier,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
    ACTIONS(36), 1,
      sym_comment,
    STATE(2), 8,
      sym__line,
      sym_header,
      sym_disassembly_section,
      sym_source_location,
      sym_offset_line,
      sym_label_line,
      sym_disassembly_section_label,
      aux_sym_source_repeat1,
  [58] = 4,
    ACTIONS(42), 1,
      sym_byte,
    STATE(4), 1,
      aux_sym_machine_code_bytes_repeat1,
    ACTIONS(38), 2,
      ts_builtin_sym_end,
      aux_sym_offset_line_token1,
    ACTIONS(40), 7,
      anon_sym_LPAREN,
      anon_sym_LT,
      sym_address,
      anon_sym_Disassemblyofsection,
      sym_file_path,
      sym__label_identifier,
      sym_comment,
  [78] = 7,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(47), 1,
      anon_sym_LPAREN,
    ACTIONS(49), 1,
      aux_sym_offset_line_token1,
    ACTIONS(51), 1,
      anon_sym_LT,
    STATE(9), 1,
      sym_code_location,
    STATE(13), 1,
      sym_file_offset,
    ACTIONS(53), 5,
      sym_address,
      anon_sym_Disassemblyofsection,
      sym_file_path,
      sym__label_identifier,
      sym_comment,
  [104] = 4,
    ACTIONS(59), 1,
      sym_byte,
    STATE(4), 1,
      aux_sym_machine_code_bytes_repeat1,
    ACTIONS(55), 2,
      ts_builtin_sym_end,
      aux_sym_offset_line_token1,
    ACTIONS(57), 7,
      anon_sym_LPAREN,
      anon_sym_LT,
      sym_address,
      anon_sym_Disassemblyofsection,
      sym_file_path,
      sym__label_identifier,
      sym_comment,
  [124] = 6,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    ACTIONS(65), 1,
      anon_sym_LT,
    STATE(8), 1,
      sym_code_location,
    STATE(19), 1,
      sym_file_offset,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(67), 4,
      sym_address,
      sym_file_path,
      sym__label_identifier,
      sym_comment,
  [147] = 4,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    STATE(14), 1,
      sym_file_offset,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(71), 4,
      sym_address,
      sym_file_path,
      sym__label_identifier,
      sym_comment,
  [164] = 4,
    ACTIONS(63), 1,
      anon_sym_LPAREN,
    STATE(22), 1,
      sym_file_offset,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(75), 4,
      sym_address,
      sym_file_path,
      sym__label_identifier,
      sym_comment,
  [181] = 4,
    ACTIONS(79), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym_discriminator,
    ACTIONS(77), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(81), 4,
      sym_address,
      sym_file_path,
      sym__label_identifier,
      sym_comment,
  [198] = 2,
    ACTIONS(83), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_Disassemblyofsection,
    ACTIONS(85), 4,
      sym_address,
      sym_file_path,
      sym__label_identifier,
      sym_comment,
  [210] = 2,
    ACTIONS(87), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_Disassemblyofsection,
    ACTIONS(89), 4,
      sym_address,
      sym_file_path,
      sym__label_identifier,
      sym_comment,
  [222] = 2,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(75), 4,
      sym_address,
      sym_file_path,
      sym__label_identifier,
      sym_comment,
  [233] = 2,
    ACTIONS(91), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(93), 4,
      sym_address,
      sym_file_path,
      sym__label_identifier,
      sym_comment,
  [244] = 2,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(97), 4,
      sym_address,
      sym_file_path,
      sym__label_identifier,
      sym_comment,
  [255] = 2,
    ACTIONS(99), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(101), 4,
      sym_address,
      sym_file_path,
      sym__label_identifier,
      sym_comment,
  [266] = 2,
    ACTIONS(103), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(105), 4,
      sym_address,
      sym_file_path,
      sym__label_identifier,
      sym_comment,
  [277] = 2,
    ACTIONS(107), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(109), 4,
      sym_address,
      sym_file_path,
      sym__label_identifier,
      sym_comment,
  [288] = 2,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(71), 4,
      sym_address,
      sym_file_path,
      sym__label_identifier,
      sym_comment,
  [299] = 2,
    ACTIONS(111), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(113), 4,
      sym_address,
      sym_file_path,
      sym__label_identifier,
      sym_comment,
  [310] = 2,
    ACTIONS(115), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(117), 4,
      sym_address,
      sym_file_path,
      sym__label_identifier,
      sym_comment,
  [321] = 2,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(67), 4,
      sym_address,
      sym_file_path,
      sym__label_identifier,
      sym_comment,
  [332] = 2,
    ACTIONS(119), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(121), 4,
      sym_address,
      sym_file_path,
      sym__label_identifier,
      sym_comment,
  [343] = 2,
    ACTIONS(123), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(125), 4,
      sym_address,
      sym_file_path,
      sym__label_identifier,
      sym_comment,
  [354] = 4,
    ACTIONS(127), 1,
      sym_byte,
    ACTIONS(129), 1,
      sym_comment,
    STATE(5), 1,
      sym_machine_code_bytes,
    STATE(6), 1,
      aux_sym_machine_code_bytes_repeat1,
  [367] = 4,
    ACTIONS(129), 1,
      sym_comment,
    ACTIONS(131), 1,
      anon_sym_COLON,
    ACTIONS(133), 1,
      anon_sym_LPAREN,
    STATE(36), 1,
      sym_file_offset,
  [380] = 3,
    ACTIONS(129), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_PLUS,
    ACTIONS(137), 1,
      anon_sym_GT,
  [390] = 3,
    ACTIONS(129), 1,
      sym_comment,
    ACTIONS(139), 1,
      anon_sym_file,
    ACTIONS(141), 1,
      sym_integer,
  [400] = 3,
    ACTIONS(129), 1,
      sym_comment,
    ACTIONS(143), 1,
      anon_sym_COLON,
    ACTIONS(145), 1,
      aux_sym_disassembly_section_token1,
  [410] = 2,
    ACTIONS(129), 1,
      sym_comment,
    ACTIONS(147), 1,
      anon_sym_File,
  [417] = 2,
    ACTIONS(129), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_COLON,
  [424] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(151), 1,
      sym_instruction,
  [431] = 2,
    ACTIONS(129), 1,
      sym_comment,
    ACTIONS(153), 1,
      ts_builtin_sym_end,
  [438] = 2,
    ACTIONS(129), 1,
      sym_comment,
    ACTIONS(155), 1,
      anon_sym_format,
  [445] = 2,
    ACTIONS(129), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym_hexadecimal,
  [452] = 2,
    ACTIONS(129), 1,
      sym_comment,
    ACTIONS(159), 1,
      anon_sym_COLON,
  [459] = 2,
    ACTIONS(129), 1,
      sym_comment,
    ACTIONS(161), 1,
      sym_integer,
  [466] = 2,
    ACTIONS(129), 1,
      sym_comment,
    ACTIONS(163), 1,
      anon_sym_COLON,
  [473] = 2,
    ACTIONS(129), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_Offset_COLON,
  [480] = 2,
    ACTIONS(129), 1,
      sym_comment,
    ACTIONS(167), 1,
      sym_hexadecimal,
  [487] = 2,
    ACTIONS(129), 1,
      sym_comment,
    ACTIONS(169), 1,
      anon_sym_discriminator,
  [494] = 2,
    ACTIONS(129), 1,
      sym_comment,
    ACTIONS(171), 1,
      anon_sym_RPAREN,
  [501] = 2,
    ACTIONS(129), 1,
      sym_comment,
    ACTIONS(173), 1,
      anon_sym_RPAREN,
  [508] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(175), 1,
      sym_identifier,
  [515] = 2,
    ACTIONS(129), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_GT,
  [522] = 2,
    ACTIONS(95), 1,
      anon_sym_COLON,
    ACTIONS(129), 1,
      sym_comment,
  [529] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 1,
      aux_sym_code_location_token1,
  [536] = 2,
    ACTIONS(129), 1,
      sym_comment,
    ACTIONS(181), 1,
      sym_section_name,
  [543] = 2,
    ACTIONS(129), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_COLON,
  [550] = 2,
    ACTIONS(129), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_RPAREN,
  [557] = 2,
    ACTIONS(129), 1,
      sym_comment,
    ACTIONS(187), 1,
      sym_hexadecimal,
  [564] = 2,
    ACTIONS(129), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_Offset_COLON,
  [571] = 2,
    ACTIONS(129), 1,
      sym_comment,
    ACTIONS(191), 1,
      anon_sym_File,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 58,
  [SMALL_STATE(5)] = 78,
  [SMALL_STATE(6)] = 104,
  [SMALL_STATE(7)] = 124,
  [SMALL_STATE(8)] = 147,
  [SMALL_STATE(9)] = 164,
  [SMALL_STATE(10)] = 181,
  [SMALL_STATE(11)] = 198,
  [SMALL_STATE(12)] = 210,
  [SMALL_STATE(13)] = 222,
  [SMALL_STATE(14)] = 233,
  [SMALL_STATE(15)] = 244,
  [SMALL_STATE(16)] = 255,
  [SMALL_STATE(17)] = 266,
  [SMALL_STATE(18)] = 277,
  [SMALL_STATE(19)] = 288,
  [SMALL_STATE(20)] = 299,
  [SMALL_STATE(21)] = 310,
  [SMALL_STATE(22)] = 321,
  [SMALL_STATE(23)] = 332,
  [SMALL_STATE(24)] = 343,
  [SMALL_STATE(25)] = 354,
  [SMALL_STATE(26)] = 367,
  [SMALL_STATE(27)] = 380,
  [SMALL_STATE(28)] = 390,
  [SMALL_STATE(29)] = 400,
  [SMALL_STATE(30)] = 410,
  [SMALL_STATE(31)] = 417,
  [SMALL_STATE(32)] = 424,
  [SMALL_STATE(33)] = 431,
  [SMALL_STATE(34)] = 438,
  [SMALL_STATE(35)] = 445,
  [SMALL_STATE(36)] = 452,
  [SMALL_STATE(37)] = 459,
  [SMALL_STATE(38)] = 466,
  [SMALL_STATE(39)] = 473,
  [SMALL_STATE(40)] = 480,
  [SMALL_STATE(41)] = 487,
  [SMALL_STATE(42)] = 494,
  [SMALL_STATE(43)] = 501,
  [SMALL_STATE(44)] = 508,
  [SMALL_STATE(45)] = 515,
  [SMALL_STATE(46)] = 522,
  [SMALL_STATE(47)] = 529,
  [SMALL_STATE(48)] = 536,
  [SMALL_STATE(49)] = 543,
  [SMALL_STATE(50)] = 550,
  [SMALL_STATE(51)] = 557,
  [SMALL_STATE(52)] = 564,
  [SMALL_STATE(53)] = 571,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(29),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(48),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(31),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(38),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(2),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [36] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_machine_code_bytes_repeat1, 2),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_machine_code_bytes_repeat1, 2),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_machine_code_bytes_repeat1, 2), SHIFT_REPEAT(4),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset_line, 3),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [53] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset_line, 3),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_code_bytes, 1),
  [57] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_machine_code_bytes, 1),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset_line, 5),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset_line, 5),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset_line, 6),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset_line, 6),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset_line, 4),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset_line, 4),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_location, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_source_location, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_location, 5),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_location, 5),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_location, 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_location, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset_line, 7),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset_line, 7),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_offset, 5),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_offset, 5),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_discriminator, 4),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_discriminator, 4),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_line, 2),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_line, 2),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disassembly_section, 3, .production_id = 1),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_disassembly_section, 3, .production_id = 1),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 5),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disassembly_section_label, 3),
  [117] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_disassembly_section_label, 3),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_location, 4),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_source_location, 4),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disassembly_section, 4, .production_id = 1),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_disassembly_section, 4, .production_id = 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [153] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
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
