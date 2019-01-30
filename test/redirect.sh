#!/usr/bin/env bash
set -o pipefail

if [[ $# -eq 3 ]]; then
        $1 | tee $2
elif [[ $# -eq 4 ]]; then
    $1 $2 | tee $3
else
    echo "Invalid number of arguments $#"
    exit 2
fi