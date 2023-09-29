#!/bin/bash
for file in *.c; do
	if [ -f "$sile" ]; then
		gcc -c "$file" -o "${file%.c}.o"
	fi
done
