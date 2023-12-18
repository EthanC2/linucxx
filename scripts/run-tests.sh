#!/bin/bash

tests=$(find ../tests -type f)

for test in ${tests[@]}; do
    file=${test#../tests/}
    file=${file%.cpp}

    errors=$(g++ $test && ./a.out 2>&1)

    if [[ -n "$errors" ]]; then
	>&2 echo "[$file] failed test: "
	echo $errors
    fi

    rm ./a.out
done
