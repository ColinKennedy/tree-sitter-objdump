// Copyright (C) 2023 Colin Kennedy
// This file is part of tree-sitter-objdump <https://github.com/ColinKennedy/tree-sitter-objdump>.
//
// tree-sitter-objdump is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// tree-sitter-objdump is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with tree-sitter-objdump, see <http://www.gnu.org/licenses/>.


module.exports = grammar(
    {
        name: "objdump",

        conflicts: $=> [
            [$.disassembly_section],
        ],

        externals: $ => [
            $.code_identifier,
            $.raw_data,
            $._whitespace_no_newline,
            $._error_sentinel,
        ],

        rules: {
            source: $ => repeat($._line),

            _line: $ => choice(
                $.disassembly_section_label,
                $.disassembly_section,
                $.header,

                // These values are technically not "correct" to a objdump log
                // but are frequently helpful for debugging / viewing text in
                // isolation.
                //
                $.label_line,
                $.memory_offset,
                $.source_location,
                '...',
            ),

            header: $ => seq($.file_path, ":", "file", "format", $.identifier),

            disassembly_section: $ => seq(
                alias($.address, $.section_address),
                alias(/<.+>/, $.identifier),
                optional($.file_offset),
                ":",
                repeat1(choice($.memory_offset, $.source_location, $.label_line)),
            ),

            source_location: $ => seq(
                $.file_path,
                ":",
                $.integer,  // The file's line number
                optional($.discriminator),
            ),

            discriminator: $ => seq("(", "discriminator", $.integer, ")"),

            memory_offset: $ => seq(
                $.address,
                ":",
                $.machine_code_bytes,
                choice(
                    $._whitespace_no_newline,
                    $.raw_data,
                    seq(
                        /\s*/,
                        choice(
                            $._instruction_and_comment,
                            $._instruction_and_location,
                            $.bad_instruction,
                        ),
                    )
                ),
            ),

            _instruction_and_comment: $ => seq(
                $.instruction,
                $.comment,
            ),
            _instruction_and_location: $ => prec.left(
                2,
                seq(
                    $.instruction,
                    optional($.code_location),
                    optional($.file_offset),
                )
            ),
            instruction: _ => /([^\n#;<]|#-?\d+)+/,
            bad_instruction: _ => "(bad)",

            comment: $ => seq(
                choice("#", ';'),
                choice(
                    $._comment_with_address,
                    $._comment_with_label,
                ),
            ),

            _comment_with_label: $ => choice(
                seq(
                  '(',
                  optional(seq(alias(/[^\d,][^,]+/, $.instruction), ',')),
                  $.address,
                  $.code_location,
                  optional($.file_offset),
                  ')'
                ),
                seq($.address, $.code_location, optional($.file_offset)),
            ),
            _comment_with_address: $ => $.hexadecimal,

            code_location: $ => seq(
                "<",
                alias($.code_identifier, $.identifier),
                optional(seq("+", $.hexadecimal)),
                ">",
            ),

            label_line: $ => seq(alias($._label_identifier, $.label), ":"),

            hexadecimal: _ => /0[xh][0-9a-fA-F]+/,
            byte: _ => /[0-9a-fA-F]{2}|[0-9a-fA-F]{4}|[0-9a-fA-F]{8}/,
            machine_code_bytes: $ => space_separated1($.byte),

            address: _ => /[0-9a-fA-F]+/,

            file_offset: $ => seq("(", "File", "Offset:", $.hexadecimal, ")"),

            disassembly_section_label: $ => seq(
                "Disassembly of section ",
                alias($._section_name, $.identifier),
                ":",
            ),

            integer: _ => /\d+/,

            // TODO: Support windows paths, later. Also make sure Linux paths work
            file_path: _ => /[\/\w\-\.\+]+/,

            _label_identifier: _ => /[A-Za-z.@_][A-Za-z0-9.@_$-\(\)]*/,  // Test this, later
            identifier: _ => /[^\n]+/,

            _section_name: _ => /[^:]+/,
        }
    }
)


function space_separated1(rule) {
    return seq(rule, repeat(seq(" ", rule)));
}
