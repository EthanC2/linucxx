#!/bin/bash
set -eu

if [[ $(id -u) -ne 0 ]]; then
    >&2 echo "fatal: cannot install to /usr/include without root permissions"
    exit 1
fi

cp -r ./include /usr/include/linucxx
