#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 59
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 42
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
  anon_sym_LT = 9,
  anon_sym_PLUS = 10,
  anon_sym_GT = 11,
  aux_sym__code_location_token1 = 12,
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
  aux_sym__code_location = 34,
  sym___code_location = 35,
  sym_label_line = 36,
  sym_machine_code_bytes = 37,
  sym_file_offset = 38,
  sym_disassembly_section_label = 39,
  aux_sym_source_repeat1 = 40,
  aux_sym_machine_code_bytes_repeat1 = 41,
  alias_sym_section_address = 42,
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
  [sym_comment] = "comment",
  [sym_source] = "source",
  [sym__line] = "_line",
  [sym_header] = "header",
  [sym_disassembly_section] = "disassembly_section",
  [sym_source_location] = "source_location",
  [sym_discriminator] = "discriminator",
  [sym_offset_line] = "offset_line",
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
  [sym_comment] = sym_comment,
  [sym_source] = sym_source,
  [sym__line] = sym__line,
  [sym_header] = sym_header,
  [sym_disassembly_section] = sym_disassembly_section,
  [sym_source_location] = sym_source_location,
  [sym_discriminator] = sym_discriminator,
  [sym_offset_line] = sym_offset_line,
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
  [51] = 17,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 46,
  [56] = 38,
  [57] = 54,
  [58] = 52,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(87);
      if (lookahead == '#') ADVANCE(150);
      if (lookahead == '(') ADVANCE(92);
      if (lookahead == ')') ADVANCE(94);
      if (lookahead == '+') ADVANCE(97);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '0') ADVANCE(121);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == '<') ADVANCE(96);
      if (lookahead == '>') ADVANCE(98);
      if (lookahead == 'D') ADVANCE(115);
      if (lookahead == 'F') ADVANCE(116);
      if (lookahead == 'O') ADVANCE(33);
      if (lookahead == '\\') SKIP(74)
      if (lookahead == 'd') ADVANCE(119);
      if (lookahead == 'f') ADVANCE(120);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(0)
      if (('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(124);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(122);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(10)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(10)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(16)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(5)
      if (lookahead == '#') ADVANCE(113);
      if (lookahead == '/') ADVANCE(112);
      if (lookahead == '\\') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(114);
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(6)
      if (lookahead == '#') ADVANCE(148);
      if (lookahead == '/') ADVANCE(147);
      if (lookahead == '\\') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(146);
      if (lookahead != 0) ADVANCE(148);
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(14)
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '\r') SKIP(7)
      END_STATE();
    case 9:
      if (lookahead == ' ') ADVANCE(130);
      END_STATE();
    case 10:
      if (lookahead == ' ') ADVANCE(12);
      if (lookahead == '#') ADVANCE(150);
      if (lookahead == '(') ADVANCE(92);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '<') ADVANCE(96);
      if (lookahead == 'D') ADVANCE(118);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      if (lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(95);
      if (lookahead == '#') ADVANCE(150);
      if (lookahead == '(') ADVANCE(92);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '<') ADVANCE(96);
      if (lookahead == 'D') ADVANCE(117);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(95);
      if (lookahead == '\f' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(14)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      if (lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(95);
      if (lookahead == '#') ADVANCE(150);
      if (lookahead == '(') ADVANCE(92);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '<') ADVANCE(96);
      if (lookahead == 'D') ADVANCE(118);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(95);
      if (lookahead == '\f' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(10)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      if (lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(52);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead == '#') ADVANCE(150);
      if (lookahead == '(') ADVANCE(92);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '<') ADVANCE(96);
      if (lookahead == 'D') ADVANCE(117);
      if (lookahead == '\\') SKIP(8)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(14)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      if (lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(61);
      END_STATE();
    case 16:
      if (lookahead == '#') ADVANCE(150);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'f') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(16)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 17:
      if (lookahead == '#') ADVANCE(101);
      if (lookahead == '+') ADVANCE(97);
      if (lookahead == '/') ADVANCE(103);
      if (lookahead == '<') ADVANCE(96);
      if (lookahead == '>') ADVANCE(98);
      if (lookahead == '\\') ADVANCE(99);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(102);
      if (lookahead != 0) ADVANCE(104);
      END_STATE();
    case 18:
      if (lookahead == '/') ADVANCE(150);
      END_STATE();
    case 19:
      if (lookahead == '/') ADVANCE(132);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 20:
      if (lookahead == ':') ADVANCE(129);
      END_STATE();
    case 21:
      if (lookahead == '>') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(64);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(62);
      END_STATE();
    case 25:
      if (lookahead == 'b') ADVANCE(43);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(55);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(66);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(89);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 33:
      if (lookahead == 'f') ADVANCE(35);
      END_STATE();
    case 34:
      if (lookahead == 'f') ADVANCE(15);
      END_STATE();
    case 35:
      if (lookahead == 'f') ADVANCE(59);
      END_STATE();
    case 36:
      if (lookahead == 'i') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(49);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(47);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(51);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(44);
      END_STATE();
    case 42:
      if (lookahead == 'l') ADVANCE(28);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(67);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 45:
      if (lookahead == 'm') ADVANCE(25);
      END_STATE();
    case 46:
      if (lookahead == 'm') ADVANCE(22);
      END_STATE();
    case 47:
      if (lookahead == 'm') ADVANCE(37);
      END_STATE();
    case 48:
      if (lookahead == 'n') ADVANCE(9);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 50:
      if (lookahead == 'o') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(93);
      END_STATE();
    case 57:
      if (lookahead == 's') ADVANCE(24);
      END_STATE();
    case 58:
      if (lookahead == 's') ADVANCE(26);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 60:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(60);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(20);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(90);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 67:
      if (lookahead == 'y') ADVANCE(13);
      END_STATE();
    case 68:
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 71:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 72:
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 73:
      if (eof) ADVANCE(87);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 74:
      if (eof) ADVANCE(87);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(73)
      END_STATE();
    case 75:
      if (eof) ADVANCE(87);
      if (lookahead == '\n') SKIP(86)
      END_STATE();
    case 76:
      if (eof) ADVANCE(87);
      if (lookahead == '\n') SKIP(86)
      if (lookahead == '\r') SKIP(75)
      END_STATE();
    case 77:
      if (eof) ADVANCE(87);
      if (lookahead == '\n') SKIP(83)
      END_STATE();
    case 78:
      if (eof) ADVANCE(87);
      if (lookahead == '\n') SKIP(83)
      if (lookahead == '\r') SKIP(77)
      END_STATE();
    case 79:
      if (eof) ADVANCE(87);
      if (lookahead == '\n') SKIP(85)
      END_STATE();
    case 80:
      if (eof) ADVANCE(87);
      if (lookahead == '\n') SKIP(85)
      if (lookahead == '\r') SKIP(79)
      END_STATE();
    case 81:
      if (eof) ADVANCE(87);
      if (lookahead == '\n') SKIP(84)
      END_STATE();
    case 82:
      if (eof) ADVANCE(87);
      if (lookahead == '\n') SKIP(84)
      if (lookahead == '\r') SKIP(81)
      END_STATE();
    case 83:
      if (eof) ADVANCE(87);
      if (lookahead == ' ') ADVANCE(12);
      if (lookahead == '#') ADVANCE(150);
      if (lookahead == '(') ADVANCE(92);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '<') ADVANCE(96);
      if (lookahead == 'D') ADVANCE(118);
      if (lookahead == '\\') SKIP(78)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(83)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      if (lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 84:
      if (eof) ADVANCE(87);
      if (lookahead == ' ') ADVANCE(11);
      if (lookahead == '#') ADVANCE(150);
      if (lookahead == '(') ADVANCE(92);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '<') ADVANCE(96);
      if (lookahead == 'D') ADVANCE(117);
      if (lookahead == '\\') SKIP(82)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(84)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      if (lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 85:
      if (eof) ADVANCE(87);
      if (lookahead == '#') ADVANCE(150);
      if (lookahead == '(') ADVANCE(92);
      if (lookahead == ')') ADVANCE(94);
      if (lookahead == '.') ADVANCE(72);
      if (lookahead == '/') ADVANCE(18);
      if (lookahead == '0') ADVANCE(68);
      if (lookahead == ':') ADVANCE(88);
      if (lookahead == '<') ADVANCE(71);
      if (lookahead == '>') ADVANCE(98);
      if (lookahead == 'F') ADVANCE(36);
      if (lookahead == 'O') ADVANCE(33);
      if (lookahead == '\\') SKIP(80)
      if (lookahead == 'd') ADVANCE(38);
      if (lookahead == 'f') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(85)
      if (('1' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(70);
      END_STATE();
    case 86:
      if (eof) ADVANCE(87);
      if (lookahead == '#') ADVANCE(150);
      if (lookahead == '(') ADVANCE(92);
      if (lookahead == '/') ADVANCE(19);
      if (lookahead == '<') ADVANCE(96);
      if (lookahead == 'D') ADVANCE(117);
      if (lookahead == '\\') SKIP(76)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(86)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      if (lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_disassembly_section_token1);
      if (lookahead == '>') ADVANCE(91);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(21);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_discriminator);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_offset_line_token1);
      if (lookahead == ' ') ADVANCE(95);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(95);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym__code_location_token1);
      if (lookahead == '\n') ADVANCE(102);
      if (lookahead == '\r') ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '+' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(104);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym__code_location_token1);
      if (lookahead == '\n') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '+' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(104);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym__code_location_token1);
      if (lookahead == '\n') ADVANCE(104);
      if (lookahead == '+' ||
          lookahead == '<' ||
          lookahead == '>') ADVANCE(150);
      if (lookahead != 0) ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym__code_location_token1);
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
          lookahead != '<' &&
          lookahead != '>') ADVANCE(104);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym__code_location_token1);
      if (lookahead == '/') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '+' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(104);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym__code_location_token1);
      if (lookahead != 0 &&
          lookahead != '+' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(104);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(sym_hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_byte);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_byte);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_byte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_byte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == '\r') ADVANCE(114);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<') ADVANCE(114);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == '#') ADVANCE(113);
      if (lookahead == '/') ADVANCE(112);
      if (lookahead == '\\') ADVANCE(110);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<') ADVANCE(114);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == '/') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<') ADVANCE(114);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == '<') ADVANCE(150);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '<') ADVANCE(114);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(140);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(44);
      if (lookahead == 'o') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(108);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_File);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_Offset_COLON);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_Disassemblyofsection);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_integer);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(150);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_file_path);
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == ' ') ADVANCE(52);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'a') ADVANCE(142);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'b') ADVANCE(138);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'e') ADVANCE(139);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'l') ADVANCE(143);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'm') ADVANCE(136);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 's') ADVANCE(135);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 's') ADVANCE(137);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 's') ADVANCE(141);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'y') ADVANCE(134);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym__label_identifier);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\r') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(148);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(148);
      if (lookahead == '/') ADVANCE(147);
      if (lookahead == '\\') ADVANCE(145);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(148);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '/') ADVANCE(148);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(148);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(149);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(150);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 86},
  [2] = {.lex_state = 86},
  [3] = {.lex_state = 86},
  [4] = {.lex_state = 83},
  [5] = {.lex_state = 83},
  [6] = {.lex_state = 84},
  [7] = {.lex_state = 86},
  [8] = {.lex_state = 86},
  [9] = {.lex_state = 86},
  [10] = {.lex_state = 86},
  [11] = {.lex_state = 86},
  [12] = {.lex_state = 17},
  [13] = {.lex_state = 86},
  [14] = {.lex_state = 17},
  [15] = {.lex_state = 17},
  [16] = {.lex_state = 86},
  [17] = {.lex_state = 86},
  [18] = {.lex_state = 86},
  [19] = {.lex_state = 86},
  [20] = {.lex_state = 86},
  [21] = {.lex_state = 86},
  [22] = {.lex_state = 86},
  [23] = {.lex_state = 86},
  [24] = {.lex_state = 86},
  [25] = {.lex_state = 86},
  [26] = {.lex_state = 86},
  [27] = {.lex_state = 86},
  [28] = {.lex_state = 17},
  [29] = {.lex_state = 17},
  [30] = {.lex_state = 17},
  [31] = {.lex_state = 17},
  [32] = {.lex_state = 85},
  [33] = {.lex_state = 85},
  [34] = {.lex_state = 85},
  [35] = {.lex_state = 16},
  [36] = {.lex_state = 85},
  [37] = {.lex_state = 85},
  [38] = {.lex_state = 85},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 16},
  [41] = {.lex_state = 85},
  [42] = {.lex_state = 85},
  [43] = {.lex_state = 85},
  [44] = {.lex_state = 85},
  [45] = {.lex_state = 85},
  [46] = {.lex_state = 85},
  [47] = {.lex_state = 85},
  [48] = {.lex_state = 85},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 85},
  [51] = {.lex_state = 85},
  [52] = {.lex_state = 85},
  [53] = {.lex_state = 85},
  [54] = {.lex_state = 85},
  [55] = {.lex_state = 85},
  [56] = {.lex_state = 85},
  [57] = {.lex_state = 85},
  [58] = {.lex_state = 85},
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
    [sym_source] = STATE(42),
    [sym__line] = STATE(2),
    [sym_header] = STATE(2),
    [sym_disassembly_section] = STATE(2),
    [sym_source_location] = STATE(2),
    [sym_offset_line] = STATE(2),
    [sym_label_line] = STATE(2),
    [sym_disassembly_section_label] = STATE(2),
    [aux_sym_source_repeat1] = STATE(2),
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
    ACTIONS(7), 1,
      sym_address,
    ACTIONS(9), 1,
      anon_sym_Disassemblyofsection,
    ACTIONS(11), 1,
      sym_file_path,
    ACTIONS(13), 1,
      sym__label_identifier,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      sym_comment,
    STATE(3), 8,
      sym__line,
      sym_header,
      sym_disassembly_section,
      sym_source_location,
      sym_offset_line,
      sym_label_line,
      sym_disassembly_section_label,
      aux_sym_source_repeat1,
  [29] = 7,
    ACTIONS(21), 1,
      ts_builtin_sym_end,
    ACTIONS(23), 1,
      sym_address,
    ACTIONS(26), 1,
      anon_sym_Disassemblyofsection,
    ACTIONS(29), 1,
      sym_file_path,
    ACTIONS(32), 1,
      sym__label_identifier,
    ACTIONS(35), 1,
      sym_comment,
    STATE(3), 8,
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
    STATE(5), 1,
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
  [78] = 4,
    ACTIONS(48), 1,
      sym_byte,
    STATE(5), 1,
      aux_sym_machine_code_bytes_repeat1,
    ACTIONS(44), 2,
      ts_builtin_sym_end,
      aux_sym_offset_line_token1,
    ACTIONS(46), 7,
      anon_sym_LPAREN,
      anon_sym_LT,
      sym_address,
      anon_sym_Disassemblyofsection,
      sym_file_path,
      sym__label_identifier,
      sym_comment,
  [98] = 7,
    ACTIONS(51), 1,
      ts_builtin_sym_end,
    ACTIONS(53), 1,
      anon_sym_LPAREN,
    ACTIONS(55), 1,
      aux_sym_offset_line_token1,
    ACTIONS(57), 1,
      anon_sym_LT,
    STATE(9), 1,
      sym_code_location,
    STATE(26), 1,
      sym_file_offset,
    ACTIONS(59), 5,
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
    STATE(23), 1,
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
    STATE(21), 1,
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
    STATE(16), 1,
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
    STATE(25), 1,
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
  [210] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_LT,
    ACTIONS(92), 1,
      aux_sym__code_location_token1,
    STATE(12), 1,
      aux_sym__code_location,
    STATE(28), 1,
      sym___code_location,
    ACTIONS(90), 2,
      anon_sym_PLUS,
      anon_sym_GT,
  [230] = 2,
    ACTIONS(95), 3,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_Disassemblyofsection,
    ACTIONS(97), 4,
      sym_address,
      sym_file_path,
      sym__label_identifier,
      sym_comment,
  [242] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_LT,
    ACTIONS(101), 1,
      anon_sym_PLUS,
    ACTIONS(103), 1,
      anon_sym_GT,
    ACTIONS(105), 1,
      aux_sym__code_location_token1,
    STATE(12), 1,
      aux_sym__code_location,
    STATE(28), 1,
      sym___code_location,
  [264] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_LT,
    ACTIONS(105), 1,
      aux_sym__code_location_token1,
    ACTIONS(107), 1,
      anon_sym_GT,
    STATE(12), 1,
      aux_sym__code_location,
    STATE(28), 1,
      sym___code_location,
  [283] = 2,
    ACTIONS(61), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(67), 4,
      sym_address,
      sym_file_path,
      sym__label_identifier,
      sym_comment,
  [294] = 2,
    ACTIONS(109), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(111), 4,
      sym_address,
      sym_file_path,
      sym__label_identifier,
      sym_comment,
  [305] = 2,
    ACTIONS(113), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(115), 4,
      sym_address,
      sym_file_path,
      sym__label_identifier,
      sym_comment,
  [316] = 2,
    ACTIONS(117), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(119), 4,
      sym_address,
      sym_file_path,
      sym__label_identifier,
      sym_comment,
  [327] = 2,
    ACTIONS(121), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(123), 4,
      sym_address,
      sym_file_path,
      sym__label_identifier,
      sym_comment,
  [338] = 2,
    ACTIONS(125), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(127), 4,
      sym_address,
      sym_file_path,
      sym__label_identifier,
      sym_comment,
  [349] = 2,
    ACTIONS(129), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(131), 4,
      sym_address,
      sym_file_path,
      sym__label_identifier,
      sym_comment,
  [360] = 2,
    ACTIONS(69), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(71), 4,
      sym_address,
      sym_file_path,
      sym__label_identifier,
      sym_comment,
  [371] = 2,
    ACTIONS(133), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(135), 4,
      sym_address,
      sym_file_path,
      sym__label_identifier,
      sym_comment,
  [382] = 2,
    ACTIONS(137), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(139), 4,
      sym_address,
      sym_file_path,
      sym__label_identifier,
      sym_comment,
  [393] = 2,
    ACTIONS(73), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(75), 4,
      sym_address,
      sym_file_path,
      sym__label_identifier,
      sym_comment,
  [404] = 2,
    ACTIONS(141), 2,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
    ACTIONS(143), 4,
      sym_address,
      sym_file_path,
      sym__label_identifier,
      sym_comment,
  [415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 4,
      anon_sym_LT,
      anon_sym_PLUS,
      anon_sym_GT,
      aux_sym__code_location_token1,
  [425] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(147), 4,
      anon_sym_LT,
      anon_sym_PLUS,
      anon_sym_GT,
      aux_sym__code_location_token1,
  [435] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_LT,
    ACTIONS(105), 1,
      aux_sym__code_location_token1,
    STATE(15), 1,
      aux_sym__code_location,
    STATE(28), 1,
      sym___code_location,
  [451] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 1,
      anon_sym_LT,
    ACTIONS(105), 1,
      aux_sym__code_location_token1,
    STATE(14), 1,
      aux_sym__code_location,
    STATE(28), 1,
      sym___code_location,
  [467] = 4,
    ACTIONS(149), 1,
      anon_sym_COLON,
    ACTIONS(151), 1,
      anon_sym_LPAREN,
    ACTIONS(153), 1,
      sym_comment,
    STATE(48), 1,
      sym_file_offset,
  [480] = 4,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(155), 1,
      sym_byte,
    STATE(4), 1,
      aux_sym_machine_code_bytes_repeat1,
    STATE(6), 1,
      sym_machine_code_bytes,
  [493] = 3,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(157), 1,
      anon_sym_COLON,
    ACTIONS(159), 1,
      aux_sym_disassembly_section_token1,
  [503] = 3,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(161), 1,
      anon_sym_file,
    ACTIONS(163), 1,
      sym_integer,
  [513] = 2,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(165), 1,
      anon_sym_COLON,
  [520] = 2,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(167), 1,
      anon_sym_RPAREN,
  [527] = 2,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(169), 1,
      sym_hexadecimal,
  [534] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(171), 1,
      sym_instruction,
  [541] = 2,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(173), 1,
      sym_integer,
  [548] = 2,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(175), 1,
      anon_sym_format,
  [555] = 2,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(177), 1,
      ts_builtin_sym_end,
  [562] = 2,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(179), 1,
      sym_hexadecimal,
  [569] = 2,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_COLON,
  [576] = 2,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(183), 1,
      anon_sym_discriminator,
  [583] = 2,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(185), 1,
      anon_sym_RPAREN,
  [590] = 2,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(187), 1,
      anon_sym_COLON,
  [597] = 2,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(189), 1,
      anon_sym_COLON,
  [604] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(191), 1,
      sym_identifier,
  [611] = 2,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(193), 1,
      anon_sym_GT,
  [618] = 2,
    ACTIONS(109), 1,
      anon_sym_COLON,
    ACTIONS(153), 1,
      sym_comment,
  [625] = 2,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(195), 1,
      anon_sym_File,
  [632] = 2,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(197), 1,
      sym_section_name,
  [639] = 2,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(199), 1,
      anon_sym_Offset_COLON,
  [646] = 2,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(201), 1,
      anon_sym_RPAREN,
  [653] = 2,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(203), 1,
      sym_hexadecimal,
  [660] = 2,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(205), 1,
      anon_sym_Offset_COLON,
  [667] = 2,
    ACTIONS(153), 1,
      sym_comment,
    ACTIONS(207), 1,
      anon_sym_File,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 58,
  [SMALL_STATE(5)] = 78,
  [SMALL_STATE(6)] = 98,
  [SMALL_STATE(7)] = 124,
  [SMALL_STATE(8)] = 147,
  [SMALL_STATE(9)] = 164,
  [SMALL_STATE(10)] = 181,
  [SMALL_STATE(11)] = 198,
  [SMALL_STATE(12)] = 210,
  [SMALL_STATE(13)] = 230,
  [SMALL_STATE(14)] = 242,
  [SMALL_STATE(15)] = 264,
  [SMALL_STATE(16)] = 283,
  [SMALL_STATE(17)] = 294,
  [SMALL_STATE(18)] = 305,
  [SMALL_STATE(19)] = 316,
  [SMALL_STATE(20)] = 327,
  [SMALL_STATE(21)] = 338,
  [SMALL_STATE(22)] = 349,
  [SMALL_STATE(23)] = 360,
  [SMALL_STATE(24)] = 371,
  [SMALL_STATE(25)] = 382,
  [SMALL_STATE(26)] = 393,
  [SMALL_STATE(27)] = 404,
  [SMALL_STATE(28)] = 415,
  [SMALL_STATE(29)] = 425,
  [SMALL_STATE(30)] = 435,
  [SMALL_STATE(31)] = 451,
  [SMALL_STATE(32)] = 467,
  [SMALL_STATE(33)] = 480,
  [SMALL_STATE(34)] = 493,
  [SMALL_STATE(35)] = 503,
  [SMALL_STATE(36)] = 513,
  [SMALL_STATE(37)] = 520,
  [SMALL_STATE(38)] = 527,
  [SMALL_STATE(39)] = 534,
  [SMALL_STATE(40)] = 541,
  [SMALL_STATE(41)] = 548,
  [SMALL_STATE(42)] = 555,
  [SMALL_STATE(43)] = 562,
  [SMALL_STATE(44)] = 569,
  [SMALL_STATE(45)] = 576,
  [SMALL_STATE(46)] = 583,
  [SMALL_STATE(47)] = 590,
  [SMALL_STATE(48)] = 597,
  [SMALL_STATE(49)] = 604,
  [SMALL_STATE(50)] = 611,
  [SMALL_STATE(51)] = 618,
  [SMALL_STATE(52)] = 625,
  [SMALL_STATE(53)] = 632,
  [SMALL_STATE(54)] = 639,
  [SMALL_STATE(55)] = 646,
  [SMALL_STATE(56)] = 653,
  [SMALL_STATE(57)] = 660,
  [SMALL_STATE(58)] = 667,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(34),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(53),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(36),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(44),
  [35] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(3),
  [38] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_code_bytes, 1),
  [40] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_machine_code_bytes, 1),
  [42] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_machine_code_bytes_repeat1, 2),
  [46] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_machine_code_bytes_repeat1, 2),
  [48] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_machine_code_bytes_repeat1, 2), SHIFT_REPEAT(5),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset_line, 3),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset_line, 3),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset_line, 5),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset_line, 5),
  [69] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset_line, 6),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset_line, 6),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset_line, 4),
  [75] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset_line, 4),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_location, 3),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_source_location, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_location, 5, .production_id = 2),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_location, 5, .production_id = 2),
  [87] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__code_location, 2), SHIFT_REPEAT(30),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__code_location, 2),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__code_location, 2), SHIFT_REPEAT(28),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_location, 3, .production_id = 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_location, 3, .production_id = 2),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_offset, 5),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_offset, 5),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_line, 2),
  [115] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_line, 2),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disassembly_section, 3, .production_id = 1),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_disassembly_section, 3, .production_id = 1),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_discriminator, 4),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_discriminator, 4),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset_line, 7),
  [127] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset_line, 7),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disassembly_section_label, 3),
  [131] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_disassembly_section_label, 3),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 5),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_location, 4),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_source_location, 4),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disassembly_section, 4, .production_id = 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_disassembly_section, 4, .production_id = 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__code_location, 1),
  [147] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym___code_location, 3),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [163] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [165] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [171] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [177] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [187] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
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
