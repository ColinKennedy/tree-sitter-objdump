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

        rules: {
            source: $ => repeat($._line),

            // TODO: Consider adding explicit terminator lines for each line
            _line: $ => choice(
                $.disassembly_section,
                $.header,
            ),

            header: $ => seq($.file_path, ":", "file format", $.identifier),

            disassembly_section: $ => seq(
                "Disassembly of section ",
                $.section_name,
                ":",
            ),

            // TODO: Support windows paths, later
            file_path: $ => choice(
                /[A-Za-z]:\\(?:[^\\]+\\)*[^\\]+/,
                /\/(?:[^/]+\/)*[^/]+/
            ),

            identifier: $ => /[^\n]+/,

            section_name: $ => /\.[^:]+/,
            // section_name: $ => /<[^>]*>/,
        }
    }
)
