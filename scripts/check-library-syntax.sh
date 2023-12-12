#!/bin/bash
headers=$(find ../lib/ -type f -name '*.hpp')

for header in ${headers[@]}; do
    output=$(g++ -Wextra -Wall -fsyntax-only -DDEBUG $header)

    echo -n "Checking syntax for library header '$header'..."

	

    if [[ -n "$output" ]]; then
	echo 'OK'
    else
	echo 'ERROR'
	echo "$output"
    fi
done

echo -e "Checked syntax for ${#headers[@]} library headers"
