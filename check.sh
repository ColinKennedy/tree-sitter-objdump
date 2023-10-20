#!/usr/bin/env bash

directory=${1:-$PWD}
$($(find $directory -type f -executable | xargs -I{} sh -c "file -i '{}' \; | grep  'x-executable; charset=binary'" 2> /dev/null) | cut -d: -f1 | sed "s:^\.::" | xargs du | sort -n | awk '{print $2}'`)

for file in $files
do
    output=/tmp/objdump_files/file_`basename $file`.cppdump

    if [ -e $output ]
    then
        continue
    fi

    echo "Processing $file"
    objdump "$file" --disassemble-all --demangle=auto --line-numbers --disassemble-zeroes -M intel > $output
done
