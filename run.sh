#!/bin/bash
# Simple build and run script for C++ competitive programming

# Detect the file name from the first argument
FILE=${1:-solution.cpp}
OUT_FILE="${FILE%.*}"

# Compilation flags
# -Wall: Enable all warnings
# -Wextra: Enable extra warnings
# -O2: Enable optimization level 2
# -std=c++17: Use C++17 standard

g++ -Wall -Wextra -O2 -std=c++17 "$FILE" -o "$OUT_FILE"

if [ $? -eq 0 ]; then
    echo "Compilation successful!"
    
    # Check if there's an input file
    if [ -f "input.txt" ]; then
        echo "Running with input from input.txt:"
        echo "-------------------------------"
        time ./"$OUT_FILE" < input.txt
    else
        echo "Running program:"
        echo "-------------------------------"
        time ./"$OUT_FILE"
    fi
else
    echo "Compilation failed!"
fi
