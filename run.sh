#!/bin/bash
if [ -z "$1" ]; then
    echo "❌ Usage: ./run.sh ruta/al/script.c"
    exit 1
fi

SOURCE="$1"

if [ ! -f "$SOURCE" ]; then
    echo "❌ File not found: $SOURCE"
    exit 1
fi

DIR=$(dirname "$SOURCE")
BASE=$(basename "$SOURCE" .c)
RELATIVE_DIR=$(realpath --relative-to="$PWD" "$DIR")
OUT_DIR="target/$RELATIVE_DIR"
OUT_FILE="$OUT_DIR/$BASE"

# Create output directory if it doesn't exist
mkdir -p "$OUT_DIR"

# Compile with clang
echo "🛠️  Compiling '$SOURCE' -> '$OUT_FILE'..."
clang "$SOURCE" -o "$OUT_FILE"


# Verify if compilation was successful
if [ $? -ne 0 ]; then
    echo "❌ Error while compiling '$SOURCE'"
    exit 1
fi

# Execute the compiled file
echo -e "🚀 Executing '$OUT_FILE'...\n"
"$OUT_FILE"