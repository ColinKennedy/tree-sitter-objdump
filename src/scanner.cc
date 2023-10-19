#include <tree_sitter/parser.h>

#include <stdio.h>
#include <cwctype>

enum TokenType {
    CODE_IDENTIFIER,
};

extern "C" {

void* tree_sitter_objdump_external_scanner_create() {}


void tree_sitter_objdump_external_scanner_deserialize(
  void *payload,
  const char *buffer,
  unsigned length
)
{
}


void tree_sitter_objdump_external_scanner_destroy(void *payload) {}


bool tree_sitter_objdump_external_scanner_scan(
  void *payload,
  TSLexer *lexer,
  const bool *valid_symbols
)
{
    unsigned int offset_counter = 0;
    bool possibly_in_next_token = false;
    char next_token_text[] = "(FileOffset:";
    unsigned int const size = sizeof(next_token_text) / sizeof(char);

    while (true)
    {
        lexer->advance(lexer, false);

        if (std::iswspace(lexer->lookahead))
        {
            // We could be in the token or just having exited it. Just keep trying
            continue;
        }

        if (!possibly_in_next_token)
        {
            if (lexer->lookahead == '(')
            {
                possibly_in_next_token = true;
                ++offset_counter;

                continue;
            }
        }
        else if (lexer->lookahead == next_token_text[offset_counter])
        {
            if (offset_counter >= size)
            {
                lexer->result_symbol = CODE_IDENTIFIER;
                return true;
            }

            ++offset_counter;

            continue;
        }
        else
        {
            possibly_in_next_token = false;

            continue;
        }

        switch (lexer->lookahead)
        {
            case '\n':
                // The end of the token wasn't found so it cannot be a code identifier
                return false;
            case '>':
                // We might have reached the end. Or it could be some kind of
                // C++ operator>>() signature. Not sure which, just yet
                //
                lexer->mark_end(lexer);

                continue;
            case '+':
                // We might have reached the end. Or it could be some kind of
                // C++ operator+() signature. Not sure which, just yet
                //
                lexer->mark_end(lexer);

                continue;
        }

        if (lexer->lookahead == '\n' || lexer->eof(lexer)) {
            return false;
        }
    }

    return false;
}


unsigned tree_sitter_objdump_external_scanner_serialize(void *payload, char *buffer)
{
    return 0;
}

}
