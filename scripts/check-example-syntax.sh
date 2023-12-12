#!/bin/bash
set -e

examples=$(find ../examples/ -type f -name '*.cpp')

for example in ${examples[@]}; do
    output=$(g++ -Wextra -Wall -Werror -fsyntax-only -DDEBUG $example)
    if [[ -n "$output" ]]; then
	>&2 echo "syntax errors in file '$example'"
	echo "$output"
    fi
done

echo -e "Checked syntax for ${#examples[@]} programs"
