#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 13
#define LARGE_STATE_COUNT 4
#define SYMBOL_COUNT 14
#define ALIAS_COUNT 0
#define TOKEN_COUNT 8
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_COLON = 1,
  anon_sym_fileformat = 2,
  anon_sym_Disassemblyofsection = 3,
  aux_sym_file_path_token1 = 4,
  aux_sym_file_path_token2 = 5,
  sym_identifier = 6,
  sym_section_name = 7,
  sym_source = 8,
  sym__line = 9,
  sym_header = 10,
  sym_disassembly_section = 11,
  sym_file_path = 12,
  aux_sym_source_repeat1 = 13,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_COLON] = ":",
  [anon_sym_fileformat] = "file format",
  [anon_sym_Disassemblyofsection] = "Disassembly of section ",
  [aux_sym_file_path_token1] = "file_path_token1",
  [aux_sym_file_path_token2] = "file_path_token2",
  [sym_identifier] = "identifier",
  [sym_section_name] = "section_name",
  [sym_source] = "source",
  [sym__line] = "_line",
  [sym_header] = "header",
  [sym_disassembly_section] = "disassembly_section",
  [sym_file_path] = "file_path",
  [aux_sym_source_repeat1] = "source_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_fileformat] = anon_sym_fileformat,
  [anon_sym_Disassemblyofsection] = anon_sym_Disassemblyofsection,
  [aux_sym_file_path_token1] = aux_sym_file_path_token1,
  [aux_sym_file_path_token2] = aux_sym_file_path_token2,
  [sym_identifier] = sym_identifier,
  [sym_section_name] = sym_section_name,
  [sym_source] = sym_source,
  [sym__line] = sym__line,
  [sym_header] = sym_header,
  [sym_disassembly_section] = sym_disassembly_section,
  [sym_file_path] = sym_file_path,
  [aux_sym_source_repeat1] = aux_sym_source_repeat1,
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
  [anon_sym_fileformat] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Disassemblyofsection] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_file_path_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_file_path_token2] = {
    .visible = false,
    .named = false,
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
  [sym_file_path] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(39);
      if (lookahead == '.') ADVANCE(37);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == ':') ADVANCE(40);
      if (lookahead == 'D') ADVANCE(7);
      if (lookahead == 'f') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(6);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(1)
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0) ADVANCE(46);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(17);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(42);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(27);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(32);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == 'i') ADVANCE(29);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == 'i') ADVANCE(20);
      END_STATE();
    case 9:
      if (lookahead == '\\') ADVANCE(38);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(33);
      END_STATE();
    case 11:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 12:
      if (lookahead == 'b') ADVANCE(21);
      END_STATE();
    case 13:
      if (lookahead == 'c') ADVANCE(34);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(2);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(22);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == 'f') ADVANCE(25);
      END_STATE();
    case 18:
      if (lookahead == 'f') ADVANCE(5);
      END_STATE();
    case 19:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(14);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(35);
      END_STATE();
    case 22:
      if (lookahead == 'm') ADVANCE(12);
      END_STATE();
    case 23:
      if (lookahead == 'm') ADVANCE(10);
      END_STATE();
    case 24:
      if (lookahead == 'n') ADVANCE(3);
      END_STATE();
    case 25:
      if (lookahead == 'o') ADVANCE(28);
      END_STATE();
    case 26:
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 27:
      if (lookahead == 'o') ADVANCE(18);
      END_STATE();
    case 28:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 29:
      if (lookahead == 's') ADVANCE(11);
      END_STATE();
    case 30:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 31:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 32:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 33:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 34:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 35:
      if (lookahead == 'y') ADVANCE(4);
      END_STATE();
    case 36:
      if (lookahead != 0 &&
          lookahead != '/') ADVANCE(44);
      END_STATE();
    case 37:
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(47);
      END_STATE();
    case 38:
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(43);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(anon_sym_fileformat);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(anon_sym_Disassemblyofsection);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_file_path_token1);
      if (lookahead == '\\') ADVANCE(38);
      if (lookahead != 0) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_file_path_token2);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead != 0) ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_section_name);
      if (lookahead != 0 &&
          lookahead != ':') ADVANCE(47);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_fileformat] = ACTIONS(1),
    [anon_sym_Disassemblyofsection] = ACTIONS(1),
    [aux_sym_file_path_token1] = ACTIONS(1),
    [aux_sym_file_path_token2] = ACTIONS(1),
    [sym_section_name] = ACTIONS(1),
  },
  [1] = {
    [sym_source] = STATE(8),
    [sym__line] = STATE(2),
    [sym_header] = STATE(2),
    [sym_disassembly_section] = STATE(2),
    [sym_file_path] = STATE(9),
    [aux_sym_source_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_Disassemblyofsection] = ACTIONS(5),
    [aux_sym_file_path_token1] = ACTIONS(7),
    [aux_sym_file_path_token2] = ACTIONS(7),
  },
  [2] = {
    [sym__line] = STATE(3),
    [sym_header] = STATE(3),
    [sym_disassembly_section] = STATE(3),
    [sym_file_path] = STATE(9),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_Disassemblyofsection] = ACTIONS(5),
    [aux_sym_file_path_token1] = ACTIONS(7),
    [aux_sym_file_path_token2] = ACTIONS(7),
  },
  [3] = {
    [sym__line] = STATE(3),
    [sym_header] = STATE(3),
    [sym_disassembly_section] = STATE(3),
    [sym_file_path] = STATE(9),
    [aux_sym_source_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(11),
    [anon_sym_Disassemblyofsection] = ACTIONS(13),
    [aux_sym_file_path_token1] = ACTIONS(16),
    [aux_sym_file_path_token2] = ACTIONS(16),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 1,
    ACTIONS(19), 4,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      aux_sym_file_path_token1,
      aux_sym_file_path_token2,
  [7] = 1,
    ACTIONS(21), 4,
      ts_builtin_sym_end,
      anon_sym_Disassemblyofsection,
      aux_sym_file_path_token1,
      aux_sym_file_path_token2,
  [14] = 1,
    ACTIONS(23), 1,
      sym_section_name,
  [18] = 1,
    ACTIONS(25), 1,
      anon_sym_COLON,
  [22] = 1,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
  [26] = 1,
    ACTIONS(29), 1,
      anon_sym_COLON,
  [30] = 1,
    ACTIONS(31), 1,
      anon_sym_COLON,
  [34] = 1,
    ACTIONS(33), 1,
      anon_sym_fileformat,
  [38] = 1,
    ACTIONS(35), 1,
      sym_identifier,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(4)] = 0,
  [SMALL_STATE(5)] = 7,
  [SMALL_STATE(6)] = 14,
  [SMALL_STATE(7)] = 18,
  [SMALL_STATE(8)] = 22,
  [SMALL_STATE(9)] = 26,
  [SMALL_STATE(10)] = 30,
  [SMALL_STATE(11)] = 34,
  [SMALL_STATE(12)] = 38,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2),
  [13] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(6),
  [16] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_repeat1, 2), SHIFT_REPEAT(7),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_disassembly_section, 3),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_header, 4),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_path, 1),
  [27] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
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
