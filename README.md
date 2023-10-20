# tree-sitter-objdump
This library parses objdump text using
[tree-sitter](https://tree-sitter.github.io/tree-sitter) to produce
a light-weight grammar of the file.


![tree-sitter-objdump-highlights](https://github.com/ColinKennedy/tree-sitter-objdump/assets/10103049/184c535b-7a58-4726-82c1-d252e5174c15)


## Disclaimer
This repository's parsing rules are subject to change.


## Building + Using
### Neovim
Make sure you include the following somewhere in your `init.lua` file.

```lua
require("nvim-treesitter.configs").setup {
    ensure_installed = {"objdump"},
    parser_install_dir = installation_directory,
    highlight = { enable = true },

    -- More stuff
}
```


## Testing
### Unittests
- Install the [tree-sitter-cli](https://www.npmjs.com/package/tree-sitter-cli)
```sh
cd {root}
tree-sitter test
```

All tests should pass.


### Actual Objdump Files
The best way to test tree-sitter-usd is to parse Objdump files in-action.

A quick way to do that is to run `check.sh`


```sh
check.sh  # Searches the current directory
check.sh  /path/to/place
```

This outputs objdump text to `/tmp/objdump_files`

Then run

```sh
cat /tmp/objdumps | xargs -I{} sh -c 'tree-sitter parse {} > /dev/null || echo "{}"' > /tmp/fails
```

If all is going well, the output file `/tmp/fails` should be empty!
