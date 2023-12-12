#!/bin/bash
set -e

headers=$(find ../lib -type f)

for header in ${headers[@]}; do
    filename=${header#../lib/}
    filename=${filename%.hpp}

    if [[ ! -f "../examples/$filename.cpp" ]]; then
	echo "[$filename] missing example"
    fi

    if [[ ! -f "../docs/$filename.md" ]]; then
	echo "[$filename] missing documentation"
    fi
done

echo -e "\nChecked directory structure for ${#headers[@]} library headers"
