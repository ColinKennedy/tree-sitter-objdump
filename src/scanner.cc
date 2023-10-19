#include <tree_sitter/parser.h>

#include <stdio.h>
#include <cwctype>

enum TokenType {
    CODE_IDENTIFIER,
};

extern "C" {

bool is_hexadecimal_character(char character)
{
    switch (character)
    {
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
        case 'A':
        case 'B':
        case 'C':
        case 'D':
        case 'E':
        case 'F':
        case 'a':
        case 'b':
        case 'c':
        case 'd':
        case 'e':
        case 'f':
        case 'h':
        case 'x':
            return true;
        default:
            return false;
    }
}

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
    unsigned int offset_counter = -1;
    bool has_hexadecimal_data = false;
    bool possibly_in_next_hexadecimal_token = false;
    bool possibly_in_next_file_offset_token = false;
    char next_token_text[] = "(FileOffset:";
    unsigned int const size = (sizeof(next_token_text) / sizeof(char) - 1);

    while (true)
    {
        lexer->advance(lexer, false);

        if (lexer->lookahead == '\n' || lexer->eof(lexer)) {
            lexer->result_symbol = CODE_IDENTIFIER;

            return true;
        }

        if (lexer->lookahead != '\n' && std::iswspace(lexer->lookahead))
        {
            // We could be in the token or just having exited it. Just keep trying
            continue;
        }

        if (possibly_in_next_hexadecimal_token)
        {
            if (is_hexadecimal_character(lexer->lookahead))
            {
                has_hexadecimal_data = true;
            }
            else
            {
                // Reached the end of the (possibly) hexadecimal data
                possibly_in_next_hexadecimal_token = false;
            }
        }

        if (!possibly_in_next_file_offset_token)
        {
            if (lexer->lookahead == '(')
            {
                possibly_in_next_file_offset_token = true;
                ++offset_counter;

                continue;
            }
        }
        else if (lexer->lookahead == next_token_text[offset_counter])
        {
            if (offset_counter + 1 >= size)
            {
                lexer->result_symbol = CODE_IDENTIFIER;

                return true;
            }

            ++offset_counter;

            continue;
        }
        else
        {
            possibly_in_next_file_offset_token = false;

            continue;
        }

        switch (lexer->lookahead)
        {
            case '\n':
                // The end of the token wasn't found so it cannot be a code identifier
                return false;
            case '>':
                if (!has_hexadecimal_data && !possibly_in_next_hexadecimal_token)
                {
                    // We might have reached the end. Or it could be some kind of
                    // C++ operator>>() signature. Not sure which, just yet
                    //
                    lexer->mark_end(lexer);
                }

                continue;
            case '+':
                // We might have reached the end. Or it could be some kind of
                // C++ operator+() signature. Not sure which, just yet
                //
                lexer->mark_end(lexer);

                possibly_in_next_hexadecimal_token = true;

                continue;
        }
    }

    return false;
}


unsigned tree_sitter_objdump_external_scanner_serialize(void *payload, char *buffer)
{
    return 0;
}

}
