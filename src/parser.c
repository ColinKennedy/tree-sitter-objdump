#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 60
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 46
#define ALIAS_COUNT 1
#define TOKEN_COUNT 27
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
  sym_comment = 26,
  sym_source = 27,
  sym__line = 28,
  sym_header = 29,
  sym_disassembly_section = 30,
  sym_source_location = 31,
  sym_discriminator = 32,
  sym_offset_line = 33,
  sym_objdump_comment = 34,
  sym__comment_with_label = 35,
  sym__comment_with_address = 36,
  sym_code_location = 37,
  aux_sym__code_location = 38,
  sym___code_location = 39,
  sym_label_line = 40,
  sym_machine_code_bytes = 41,
  sym_file_offset = 42,
  sym_disassembly_section_label = 43,
  aux_sym_source_repeat1 = 44,
  aux_sym_machine_code_bytes_repeat1 = 45,
  alias_sym_section_address = 46,
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
  [sym_comment] = "comment",
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
  [sym_comment] = sym_comment,
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
      if (eof) ADVANCE(88);
      if (lookahead == '#') ADVANCE(97);
      if (lookahead == '(') ADVANCE(93);
      if (lookahead == ')') ADVANCE(95);
      if (lookahead == '+') ADVANCE(99);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == '0') ADVANCE(120);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == '>') ADVANCE(100);
      if (lookahead == 'D') ADVANCE(114);
      if (lookahead == 'F') ADVANCE(115);
      if (lookahead == 'O') ADVANCE(34);
      if (lookahead == '\\') SKIP(75)
      if (lookahead == 'd') ADVANCE(118);
      if (lookahead == 'f') ADVANCE(119);
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
      if (lookahead == '\n') SKIP(12)
      END_STATE();
    case 2:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '\r') SKIP(1)
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(18)
      END_STATE();
    case 4:
      if (lookahead == '\n') SKIP(18)
      if (lookahead == '\r') SKIP(3)
      END_STATE();
    case 5:
      if (lookahead == '\n') SKIP(19)
      END_STATE();
    case 6:
      if (lookahead == '\n') SKIP(19)
      if (lookahead == '\r') SKIP(5)
      END_STATE();
    case 7:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '#') ADVANCE(148);
      if (lookahead == '\\') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '<') ADVANCE(113);
      END_STATE();
    case 8:
      if (lookahead == '\n') SKIP(8)
      if (lookahead == '#') ADVANCE(146);
      if (lookahead == '\\') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(145);
      if (lookahead != 0) ADVANCE(146);
      END_STATE();
    case 9:
      if (lookahead == '\n') SKIP(16)
      END_STATE();
    case 10:
      if (lookahead == '\n') SKIP(16)
      if (lookahead == '\r') SKIP(9)
      END_STATE();
    case 11:
      if (lookahead == ' ') ADVANCE(130);
      END_STATE();
    case 12:
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '#') ADVANCE(148);
      if (lookahead == '(') ADVANCE(93);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == 'D') ADVANCE(117);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(12)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      if (lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 13:
      if (lookahead == ' ') ADVANCE(96);
      if (lookahead == '#') ADVANCE(148);
      if (lookahead == '(') ADVANCE(93);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == 'D') ADVANCE(116);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(96);
      if (lookahead == '\f' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(16)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      if (lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 14:
      if (lookahead == ' ') ADVANCE(96);
      if (lookahead == '#') ADVANCE(148);
      if (lookahead == '(') ADVANCE(93);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == 'D') ADVANCE(117);
      if (lookahead == '\\') SKIP(2)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(96);
      if (lookahead == '\f' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(12)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      if (lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 15:
      if (lookahead == ' ') ADVANCE(53);
      END_STATE();
    case 16:
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead == '#') ADVANCE(148);
      if (lookahead == '(') ADVANCE(93);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == 'D') ADVANCE(116);
      if (lookahead == '\\') SKIP(10)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(16)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      if (lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 17:
      if (lookahead == ' ') ADVANCE(62);
      END_STATE();
    case 18:
      if (lookahead == '#') ADVANCE(148);
      if (lookahead == '.') ADVANCE(73);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '<') ADVANCE(72);
      if (lookahead == 'F') ADVANCE(37);
      if (lookahead == 'O') ADVANCE(34);
      if (lookahead == '\\') SKIP(4)
      if (lookahead == 'd') ADVANCE(39);
      if (lookahead == 'f') ADVANCE(51);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(18)
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'E') ||
          ('a' <= lookahead && lookahead <= 'e')) ADVANCE(70);
      END_STATE();
    case 19:
      if (lookahead == '#') ADVANCE(148);
      if (lookahead == '\\') SKIP(6)
      if (lookahead == 'f') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(19)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(131);
      END_STATE();
    case 20:
      if (lookahead == '#') ADVANCE(103);
      if (lookahead == '+') ADVANCE(99);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == '>') ADVANCE(100);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(104);
      if (lookahead != 0) ADVANCE(105);
      END_STATE();
    case 21:
      if (lookahead == ':') ADVANCE(129);
      END_STATE();
    case 22:
      if (lookahead == '>') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(63);
      END_STATE();
    case 26:
      if (lookahead == 'b') ADVANCE(44);
      END_STATE();
    case 27:
      if (lookahead == 'c') ADVANCE(56);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(67);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(90);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(46);
      END_STATE();
    case 34:
      if (lookahead == 'f') ADVANCE(36);
      END_STATE();
    case 35:
      if (lookahead == 'f') ADVANCE(17);
      END_STATE();
    case 36:
      if (lookahead == 'f') ADVANCE(60);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(107);
      END_STATE();
    case 38:
      if (lookahead == 'i') ADVANCE(50);
      END_STATE();
    case 39:
      if (lookahead == 'i') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(107);
      END_STATE();
    case 40:
      if (lookahead == 'i') ADVANCE(48);
      END_STATE();
    case 41:
      if (lookahead == 'i') ADVANCE(52);
      END_STATE();
    case 42:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 43:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 44:
      if (lookahead == 'l') ADVANCE(68);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(30);
      END_STATE();
    case 46:
      if (lookahead == 'm') ADVANCE(26);
      END_STATE();
    case 47:
      if (lookahead == 'm') ADVANCE(23);
      END_STATE();
    case 48:
      if (lookahead == 'm') ADVANCE(38);
      END_STATE();
    case 49:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 50:
      if (lookahead == 'n') ADVANCE(24);
      END_STATE();
    case 51:
      if (lookahead == 'o') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(107);
      END_STATE();
    case 52:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 53:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 54:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 55:
      if (lookahead == 'r') ADVANCE(47);
      END_STATE();
    case 56:
      if (lookahead == 'r') ADVANCE(40);
      END_STATE();
    case 57:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 58:
      if (lookahead == 's') ADVANCE(25);
      END_STATE();
    case 59:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 60:
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 61:
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 62:
      if (lookahead == 's') ADVANCE(32);
      END_STATE();
    case 63:
      if (lookahead == 's') ADVANCE(61);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 66:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 67:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 68:
      if (lookahead == 'y') ADVANCE(15);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(107);
      END_STATE();
    case 71:
      if (lookahead == '+' ||
          ('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(132);
      END_STATE();
    case 72:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 73:
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(147);
      END_STATE();
    case 74:
      if (eof) ADVANCE(88);
      if (lookahead == '\n') SKIP(0)
      END_STATE();
    case 75:
      if (eof) ADVANCE(88);
      if (lookahead == '\n') SKIP(0)
      if (lookahead == '\r') SKIP(74)
      END_STATE();
    case 76:
      if (eof) ADVANCE(88);
      if (lookahead == '\n') SKIP(87)
      END_STATE();
    case 77:
      if (eof) ADVANCE(88);
      if (lookahead == '\n') SKIP(87)
      if (lookahead == '\r') SKIP(76)
      END_STATE();
    case 78:
      if (eof) ADVANCE(88);
      if (lookahead == '\n') SKIP(86)
      END_STATE();
    case 79:
      if (eof) ADVANCE(88);
      if (lookahead == '\n') SKIP(86)
      if (lookahead == '\r') SKIP(78)
      END_STATE();
    case 80:
      if (eof) ADVANCE(88);
      if (lookahead == '\n') SKIP(84)
      END_STATE();
    case 81:
      if (eof) ADVANCE(88);
      if (lookahead == '\n') SKIP(84)
      if (lookahead == '\r') SKIP(80)
      END_STATE();
    case 82:
      if (eof) ADVANCE(88);
      if (lookahead == '\n') SKIP(85)
      END_STATE();
    case 83:
      if (eof) ADVANCE(88);
      if (lookahead == '\n') SKIP(85)
      if (lookahead == '\r') SKIP(82)
      END_STATE();
    case 84:
      if (eof) ADVANCE(88);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead == '#') ADVANCE(148);
      if (lookahead == '(') ADVANCE(93);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == 'D') ADVANCE(117);
      if (lookahead == '\\') SKIP(81)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(84)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(126);
      if (lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 85:
      if (eof) ADVANCE(88);
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead == '#') ADVANCE(148);
      if (lookahead == '(') ADVANCE(93);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == 'D') ADVANCE(116);
      if (lookahead == '\\') SKIP(83)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(85)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      if (lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 86:
      if (eof) ADVANCE(88);
      if (lookahead == '#') ADVANCE(97);
      if (lookahead == '(') ADVANCE(93);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == 'D') ADVANCE(116);
      if (lookahead == '\\') SKIP(79)
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
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 87:
      if (eof) ADVANCE(88);
      if (lookahead == '#') ADVANCE(148);
      if (lookahead == '(') ADVANCE(93);
      if (lookahead == ')') ADVANCE(95);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead == '0') ADVANCE(121);
      if (lookahead == ':') ADVANCE(89);
      if (lookahead == '<') ADVANCE(98);
      if (lookahead == '>') ADVANCE(100);
      if (lookahead == 'D') ADVANCE(116);
      if (lookahead == '\\') SKIP(77)
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(87)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      if (lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_file);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_format);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_disassembly_section_token1);
      if (lookahead == '>') ADVANCE(92);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(22);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_discriminator);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_offset_line_token1);
      if (lookahead == ' ') ADVANCE(96);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(96);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_POUND);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(148);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym__code_location_token1);
      if (lookahead == '\n') ADVANCE(104);
      if (lookahead == '\r') ADVANCE(102);
      if (lookahead != 0 &&
          lookahead != '+' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(105);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym__code_location_token1);
      if (lookahead == '\n') ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '+' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(105);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym__code_location_token1);
      if (lookahead == '\n') ADVANCE(105);
      if (lookahead == '+' ||
          lookahead == '<' ||
          lookahead == '>') ADVANCE(148);
      if (lookahead != 0) ADVANCE(103);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym__code_location_token1);
      if (lookahead == '#') ADVANCE(103);
      if (lookahead == '\\') ADVANCE(101);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(104);
      if (lookahead != 0 &&
          lookahead != '+' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(105);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym__code_location_token1);
      if (lookahead != 0 &&
          lookahead != '+' &&
          lookahead != '<' &&
          lookahead != '>') ADVANCE(105);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(sym_hexadecimal);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(sym_byte);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(sym_byte);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_byte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_byte);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == '\r') ADVANCE(113);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<') ADVANCE(113);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead == '\\') ADVANCE(111);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(112);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<') ADVANCE(113);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_instruction);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '#' &&
          lookahead != '<') ADVANCE(113);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(58);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(125);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(139);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'i') ADVANCE(45);
      if (lookahead == 'o') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_address);
      if (lookahead == 'h' ||
          lookahead == 'x') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(127);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(108);
      if (('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
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
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(110);
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
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_address);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(143);
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
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == ' ') ADVANCE(53);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'a') ADVANCE(141);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'b') ADVANCE(137);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'e') ADVANCE(138);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'l') ADVANCE(142);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'm') ADVANCE(135);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 's') ADVANCE(134);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 's') ADVANCE(136);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 's') ADVANCE(140);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym__label_identifier);
      if (lookahead == 'y') ADVANCE(133);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym__label_identifier);
      if (('$' <= lookahead && lookahead <= ')') ||
          lookahead == '.' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('@' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\r') ADVANCE(146);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(146);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '#') ADVANCE(146);
      if (lookahead == '\\') ADVANCE(144);
      if (lookahead == '\t' ||
          lookahead == '\f' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(145);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(146);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(148);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 87},
  [2] = {.lex_state = 87},
  [3] = {.lex_state = 86},
  [4] = {.lex_state = 87},
  [5] = {.lex_state = 84},
  [6] = {.lex_state = 85},
  [7] = {.lex_state = 84},
  [8] = {.lex_state = 87},
  [9] = {.lex_state = 87},
  [10] = {.lex_state = 87},
  [11] = {.lex_state = 87},
  [12] = {.lex_state = 87},
  [13] = {.lex_state = 87},
  [14] = {.lex_state = 20},
  [15] = {.lex_state = 87},
  [16] = {.lex_state = 20},
  [17] = {.lex_state = 20},
  [18] = {.lex_state = 87},
  [19] = {.lex_state = 87},
  [20] = {.lex_state = 87},
  [21] = {.lex_state = 87},
  [22] = {.lex_state = 87},
  [23] = {.lex_state = 87},
  [24] = {.lex_state = 87},
  [25] = {.lex_state = 87},
  [26] = {.lex_state = 87},
  [27] = {.lex_state = 87},
  [28] = {.lex_state = 87},
  [29] = {.lex_state = 87},
  [30] = {.lex_state = 87},
  [31] = {.lex_state = 87},
  [32] = {.lex_state = 20},
  [33] = {.lex_state = 20},
  [34] = {.lex_state = 20},
  [35] = {.lex_state = 20},
  [36] = {.lex_state = 18},
  [37] = {.lex_state = 87},
  [38] = {.lex_state = 19},
  [39] = {.lex_state = 87},
  [40] = {.lex_state = 18},
  [41] = {.lex_state = 87},
  [42] = {.lex_state = 87},
  [43] = {.lex_state = 18},
  [44] = {.lex_state = 87},
  [45] = {.lex_state = 87},
  [46] = {.lex_state = 87},
  [47] = {.lex_state = 18},
  [48] = {.lex_state = 87},
  [49] = {.lex_state = 87},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 19},
  [52] = {.lex_state = 18},
  [53] = {.lex_state = 8},
  [54] = {.lex_state = 87},
  [55] = {.lex_state = 87},
  [56] = {.lex_state = 87},
  [57] = {.lex_state = 87},
  [58] = {.lex_state = 18},
  [59] = {.lex_state = 18},
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
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(17), 1,
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
  [29] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(23), 1,
      anon_sym_POUND,
    ACTIONS(25), 1,
      anon_sym_LT,
    STATE(9), 1,
      sym_code_location,
    ACTIONS(27), 2,
      sym_address,
      sym__label_identifier,
    STATE(25), 2,
      sym__comment_with_label,
      sym__comment_with_address,
    STATE(27), 2,
      sym_objdump_comment,
      sym_file_offset,
    ACTIONS(19), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [62] = 7,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(29), 1,
      ts_builtin_sym_end,
    ACTIONS(31), 1,
      sym_address,
    ACTIONS(34), 1,
      anon_sym_Disassemblyofsection,
    ACTIONS(37), 1,
      sym_file_path,
    ACTIONS(40), 1,
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
  [91] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(47), 1,
      sym_byte,
    STATE(5), 1,
      aux_sym_machine_code_bytes_repeat1,
    ACTIONS(43), 2,
      ts_builtin_sym_end,
      aux_sym_offset_line_token1,
    ACTIONS(45), 6,
      anon_sym_LPAREN,
      anon_sym_LT,
      sym_address,
      anon_sym_Disassemblyofsection,
      sym_file_path,
      sym__label_identifier,
  [113] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    ACTIONS(52), 1,
      anon_sym_LPAREN,
    ACTIONS(54), 1,
      aux_sym_offset_line_token1,
    ACTIONS(56), 1,
      anon_sym_LT,
    STATE(11), 1,
      sym_code_location,
    STATE(26), 1,
      sym_file_offset,
    ACTIONS(58), 4,
      sym_address,
      anon_sym_Disassemblyofsection,
      sym_file_path,
      sym__label_identifier,
  [141] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(64), 1,
      sym_byte,
    STATE(5), 1,
      aux_sym_machine_code_bytes_repeat1,
    ACTIONS(60), 2,
      ts_builtin_sym_end,
      aux_sym_offset_line_token1,
    ACTIONS(62), 6,
      anon_sym_LPAREN,
      anon_sym_LT,
      sym_address,
      anon_sym_Disassemblyofsection,
      sym_file_path,
      sym__label_identifier,
  [163] = 5,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    STATE(20), 1,
      sym_file_offset,
    ACTIONS(68), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(66), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [182] = 5,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    STATE(23), 1,
      sym_file_offset,
    ACTIONS(72), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(70), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [201] = 5,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(76), 1,
      anon_sym_LPAREN,
    STATE(31), 1,
      sym_discriminator,
    ACTIONS(78), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(74), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [220] = 5,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    STATE(30), 1,
      sym_file_offset,
    ACTIONS(82), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(80), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [239] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(86), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(84), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [253] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(90), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(88), 4,
      ts_builtin_sym_end,
      anon_sym_COLON,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [267] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(92), 1,
      anon_sym_LT,
    ACTIONS(97), 1,
      aux_sym__code_location_token1,
    STATE(14), 1,
      aux_sym__code_location,
    STATE(34), 1,
      sym___code_location,
    ACTIONS(95), 2,
      anon_sym_PLUS,
      anon_sym_GT,
  [287] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(102), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(100), 4,
      ts_builtin_sym_end,
      anon_sym_LPAREN,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [301] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_LT,
    ACTIONS(106), 1,
      anon_sym_PLUS,
    ACTIONS(108), 1,
      anon_sym_GT,
    ACTIONS(110), 1,
      aux_sym__code_location_token1,
    STATE(14), 1,
      aux_sym__code_location,
    STATE(34), 1,
      sym___code_location,
  [323] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_LT,
    ACTIONS(110), 1,
      aux_sym__code_location_token1,
    ACTIONS(112), 1,
      anon_sym_GT,
    STATE(14), 1,
      aux_sym__code_location,
    STATE(34), 1,
      sym___code_location,
  [342] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(116), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(114), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [355] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(120), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(118), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [368] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(124), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(122), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [381] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(128), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(126), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [394] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(132), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(130), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [407] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(136), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(134), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [420] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(140), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(138), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [433] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(144), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(142), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [446] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(82), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(80), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [459] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(72), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(70), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [472] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(148), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(146), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [485] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(152), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(150), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [498] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(27), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(19), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [511] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(156), 2,
      sym_address,
      sym__label_identifier,
    ACTIONS(154), 3,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      sym_file_path,
  [524] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_LT,
    ACTIONS(110), 1,
      aux_sym__code_location_token1,
    STATE(16), 1,
      aux_sym__code_location,
    STATE(34), 1,
      sym___code_location,
  [540] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 1,
      anon_sym_LT,
    ACTIONS(110), 1,
      aux_sym__code_location_token1,
    STATE(17), 1,
      aux_sym__code_location,
    STATE(34), 1,
      sym___code_location,
  [556] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(158), 4,
      anon_sym_LT,
      anon_sym_PLUS,
      anon_sym_GT,
      aux_sym__code_location_token1,
  [566] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 4,
      anon_sym_LT,
      anon_sym_PLUS,
      anon_sym_GT,
      aux_sym__code_location_token1,
  [576] = 4,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(162), 1,
      sym_byte,
    STATE(6), 1,
      sym_machine_code_bytes,
    STATE(7), 1,
      aux_sym_machine_code_bytes_repeat1,
  [589] = 4,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(21), 1,
      anon_sym_LPAREN,
    ACTIONS(164), 1,
      anon_sym_COLON,
    STATE(56), 1,
      sym_file_offset,
  [602] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(166), 1,
      anon_sym_file,
    ACTIONS(168), 1,
      sym_integer,
  [612] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(25), 1,
      anon_sym_LT,
    STATE(8), 1,
      sym_code_location,
  [622] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(170), 1,
      anon_sym_COLON,
    ACTIONS(172), 1,
      aux_sym_disassembly_section_token1,
  [632] = 3,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(174), 1,
      sym_hexadecimal,
    ACTIONS(176), 1,
      sym_address,
  [642] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(178), 1,
      ts_builtin_sym_end,
  [649] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(180), 1,
      anon_sym_Offset_COLON,
  [656] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(182), 1,
      anon_sym_COLON,
  [663] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(184), 1,
      sym_hexadecimal,
  [670] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(186), 1,
      sym_hexadecimal,
  [677] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(188), 1,
      anon_sym_discriminator,
  [684] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_RPAREN,
  [691] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(192), 1,
      anon_sym_RPAREN,
  [698] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      sym_instruction,
  [705] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(196), 1,
      sym_integer,
  [712] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(198), 1,
      anon_sym_format,
  [719] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 1,
      sym_identifier,
  [726] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_GT,
  [733] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(204), 1,
      anon_sym_COLON,
  [740] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(206), 1,
      anon_sym_COLON,
  [747] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(208), 1,
      anon_sym_COLON,
  [754] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(210), 1,
      sym_section_name,
  [761] = 2,
    ACTIONS(15), 1,
      sym_comment,
    ACTIONS(212), 1,
      anon_sym_File,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 29,
  [SMALL_STATE(4)] = 62,
  [SMALL_STATE(5)] = 91,
  [SMALL_STATE(6)] = 113,
  [SMALL_STATE(7)] = 141,
  [SMALL_STATE(8)] = 163,
  [SMALL_STATE(9)] = 182,
  [SMALL_STATE(10)] = 201,
  [SMALL_STATE(11)] = 220,
  [SMALL_STATE(12)] = 239,
  [SMALL_STATE(13)] = 253,
  [SMALL_STATE(14)] = 267,
  [SMALL_STATE(15)] = 287,
  [SMALL_STATE(16)] = 301,
  [SMALL_STATE(17)] = 323,
  [SMALL_STATE(18)] = 342,
  [SMALL_STATE(19)] = 355,
  [SMALL_STATE(20)] = 368,
  [SMALL_STATE(21)] = 381,
  [SMALL_STATE(22)] = 394,
  [SMALL_STATE(23)] = 407,
  [SMALL_STATE(24)] = 420,
  [SMALL_STATE(25)] = 433,
  [SMALL_STATE(26)] = 446,
  [SMALL_STATE(27)] = 459,
  [SMALL_STATE(28)] = 472,
  [SMALL_STATE(29)] = 485,
  [SMALL_STATE(30)] = 498,
  [SMALL_STATE(31)] = 511,
  [SMALL_STATE(32)] = 524,
  [SMALL_STATE(33)] = 540,
  [SMALL_STATE(34)] = 556,
  [SMALL_STATE(35)] = 566,
  [SMALL_STATE(36)] = 576,
  [SMALL_STATE(37)] = 589,
  [SMALL_STATE(38)] = 602,
  [SMALL_STATE(39)] = 612,
  [SMALL_STATE(40)] = 622,
  [SMALL_STATE(41)] = 632,
  [SMALL_STATE(42)] = 642,
  [SMALL_STATE(43)] = 649,
  [SMALL_STATE(44)] = 656,
  [SMALL_STATE(45)] = 663,
  [SMALL_STATE(46)] = 670,
  [SMALL_STATE(47)] = 677,
  [SMALL_STATE(48)] = 684,
  [SMALL_STATE(49)] = 691,
  [SMALL_STATE(50)] = 698,
  [SMALL_STATE(51)] = 705,
  [SMALL_STATE(52)] = 712,
  [SMALL_STATE(53)] = 719,
  [SMALL_STATE(54)] = 726,
  [SMALL_STATE(55)] = 733,
  [SMALL_STATE(56)] = 740,
  [SMALL_STATE(57)] = 747,
  [SMALL_STATE(58)] = 754,
  [SMALL_STATE(59)] = 761,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset_line, 5),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset_line, 5),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(40),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(58),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(57),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(55),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_machine_code_bytes_repeat1, 2),
  [45] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_machine_code_bytes_repeat1, 2),
  [47] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_machine_code_bytes_repeat1, 2), SHIFT_REPEAT(5),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset_line, 3),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [56] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset_line, 3),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_machine_code_bytes, 1),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_machine_code_bytes, 1),
  [64] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_with_label, 3),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_with_label, 3),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset_line, 6),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset_line, 6),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_location, 3),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_source_location, 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset_line, 4),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset_line, 4),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_location, 5, .production_id = 2),
  [86] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_location, 5, .production_id = 2),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_offset, 5),
  [90] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_offset, 5),
  [92] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__code_location, 2), SHIFT_REPEAT(33),
  [95] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__code_location, 2),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__code_location, 2), SHIFT_REPEAT(34),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_code_location, 3, .production_id = 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_code_location, 3, .production_id = 2),
  [104] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [110] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 5),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_header, 5),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disassembly_section, 3, .production_id = 1),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_disassembly_section, 3, .production_id = 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_with_label, 4),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_with_label, 4),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_discriminator, 4),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_discriminator, 4),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disassembly_section_label, 3),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_disassembly_section_label, 3),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_offset_line, 7),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_offset_line, 7),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__comment_with_address, 2),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__comment_with_address, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_objdump_comment, 1),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_objdump_comment, 1),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disassembly_section, 4, .production_id = 1),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_disassembly_section, 4, .production_id = 1),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label_line, 2),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label_line, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_location, 4),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_source_location, 4),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__code_location, 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym___code_location, 3),
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
