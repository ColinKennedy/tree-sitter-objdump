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

        // extras: $ => [
        //     $.comment,
        //     /[\s\f\uFEFF\u2060\u200B]|\\\r?\n/
        // ],

        rules: {
            source: $ => repeat($._line),

            // TODO: Consider adding explicit terminator lines for each line
            _line: $ => choice(
                $.disassembly_section_label,
                $.source_location,
                $.offset_line,
                // $.comment,
                $.label_line,
                $.disassembly_section,
                $.header,
            ),

            header: $ => seq($.file_path, ":", "file", "format", $.identifier),

            disassembly_section: $ => seq(
                alias($.address, $.section_address),
                alias(/<.+>/, $.identifier),
                optional($.file_offset),
                ":",
            ),

            source_location: $ => seq(
                $.file_path,
                ":",
                $.integer,  // The file's line number
                optional($.discriminator),
            ),

            discriminator: $ => seq("(", "discriminator", $.integer, ")"),

            offset_line: $ => seq(
                $.address,
                ":",
                $.machine_code_bytes,
                choice(
                    seq(
                        / \s+/,
                        $.instruction,
                        alias(
                            choice($._comment_with_address, $._comment_with_label),
                            $.comment
                        )
                    ),
                    seq(
                        optional(seq(/ \s+/, $.instruction)),
                        optional($.code_location),
                        optional($.file_offset),
                    )
                ),
            ),

            _comment_with_label: $ => seq("#", /\w+/, $.code_location, optional($.file_offset)),
            _comment_with_address: $ => seq("#", $.hexadecimal),

            // Working?
            // code_location: $ => prec.left(4,
            //     seq(
            //         "<",
            //         alias($._code_location, $.identifier),
            //         optional(seq("+", $.hexadecimal)),
            //         ">",
            //     ),
            // ),

            // _code_location: $ => prec.left(
            //     2,
            //     repeat1(seq(/[^>+]+/, optional($._code_location), optional(">"))),
            // ),

            // Getting closer but still doesn't work
            // _code_location: $ => prec.left(
            //     2,
            //     repeat1(seq(/[^>]+/, optional($._code_location), optional(">"))),
            // ),

            // code_location: $ => prec.left(4,
            //     seq(
            //         "<",
            //         alias($._code_location, $.identifier),
            //         optional(seq("+", $.hexadecimal)),
            //         ">",
            //     ),
            // ),
            //
            // _code_location: $ => prec.left(
            //     2,
            //     repeat1(choice(/[^<>]+/, $.code_location)),
            // ),

            // // WORKS!?
            // code_location: $ => alias($.__code_location, $.identifier),
            //
            // _code_location: $ => prec.left(
            //     2,
            //     repeat1(choice(/[^<>]+/, $.__code_location)),
            // ),
            //
            // __code_location: $ => seq(
            //     "<",
            //     $._code_location,
            //     optional(seq("+", $.hexadecimal)),
            //     ">",
            // ),

            code_location: $ => seq(
                "<",
                alias($._code_location, $.identifier),
                optional(seq("+", $.hexadecimal)),
                ">",
            ),
            _code_location: $ => repeat1(choice(/[^<>+]+/, $.__code_location)),
            __code_location: $ => seq("<", $._code_location, ">"),

            // Works moderately well
            // _code_location: $ => seq(
            //     /[^<+]+/,
            //     optional(seq("<", optional($._code_location), ">")),
            // ),

            // Not sure if works
            // _code_location: $ => seq(
            //     optional("<"),
            //     /[^<]*/,
            //     $._code_location,
            //     /[^>]*/,
            //     optional(">"),
            // ),

            label_line: $ => seq(alias($._label_identifier, $.label), ":"),

            hexadecimal: $ => /0[xh][0-9a-fA-F]+/,
            byte: $ => /[0-9a-fA-F]{2}/,
            machine_code_bytes: $ => repeat1($.byte),
            instruction: $ => /[^\n<#]+/,

            address: $ => /[0-9a-fA-F]+/,

            file_offset: $ => seq("(", "File", "Offset:", $.hexadecimal, ")"),

            disassembly_section_label: $ => seq(
                "Disassembly of section ",
                $.section_name,
                ":",
            ),

            integer: $ => /\d+/,

            // TODO: Support windows paths, later. Also make sure Linux paths work
            file_path: $ => /\/[\/\w\-\.\+]+/,

            _label_identifier: $ => /[A-Za-z.@_][A-Za-z0-9.@_$-\(\)]*/,  // Test this, later
            identifier: $ => /[^\n]+/,

            section_name: $ => /\.[^:]+/,

            // comment: $ => token(seq("#", /.*/)),  // Objdump writes comments with #
        }
    }
)
