#!/bin/bash
set -e

headers=$(find ../lib -type f)

for header in ${headers[@]}; do
    file=${header#../lib/}
    file=${file%.hpp}

    if [[ ! -f "../examples/$file.cpp" ]]; then
	echo "[$file] missing example"
    fi

    if [[ ! -f "../docs/$file.md" ]]; then
	echo "[$file] missing documentation"
    fi

    if [[ ! -f "../tests/$file.cpp" ]]; then
	echo "[$file] missing tests"
    fi
done

echo -e "\nChecked directory structure for ${#headers[@]} library headers"
