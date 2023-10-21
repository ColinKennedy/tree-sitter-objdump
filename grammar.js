// Copyright (C) 2023 Colin Kennedy
// This file is part of tree-sitter-asm-intel <https://github.com/ColinKennedy/tree-sitter-asm-intel>.
//
// tree-sitter-asm-intel is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.
//
// tree-sitter-asm-intel is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//
// You should have received a copy of the GNU General Public License
// along with tree-sitter-asm-intel, see <http://www.gnu.org/licenses/>.


module.exports = grammar(
    {
        name: "objdump",

        conflicts: $=> [
            [$.disassembly_section],
        ],

        externals: $ => [
            $.code_identifier,
            $.instruction,
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
                    seq(
                        /[^\n]/,
                        choice($._instruction_and_comment, $._instruction_and_location),
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

            comment: $ => seq(
                "#",
                choice(
                    $._comment_with_address,
                    $._comment_with_label,
                ),
            ),

            _comment_with_label: $ => seq($.address, $.code_location, optional($.file_offset)),
            _comment_with_address: $ => $.hexadecimal,

            code_location: $ => seq(
                "<",
                alias($.code_identifier, $.identifier),
                optional(seq("+", $.hexadecimal)),
                ">",
            ),

            label_line: $ => seq(alias($._label_identifier, $.label), ":"),

            hexadecimal: $ => /0[xh][0-9a-fA-F]+/,
            byte: $ => /[0-9a-fA-F]{2}/,
            machine_code_bytes: $ => space_separated1($.byte),

            address: $ => /[0-9a-fA-F]+/,

            file_offset: $ => seq("(", "File", "Offset:", $.hexadecimal, ")"),

            disassembly_section_label: $ => seq(
                "Disassembly of section ",
                alias($._section_name, $.identifier),
                ":",
            ),

            integer: $ => /\d+/,

            // TODO: Support windows paths, later. Also make sure Linux paths work
            file_path: $ => /[\/\w\-\.\+]+/,

            _label_identifier: $ => /[A-Za-z.@_][A-Za-z0-9.@_$-\(\)]*/,  // Test this, later
            identifier: $ => /[^\n]+/,

            _section_name: $ => /\.[^:]+/,
        }
    }
)


function space_separated1(rule) {
    return seq(rule, repeat(seq(" ", rule)));
}
