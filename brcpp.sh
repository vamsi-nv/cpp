#!/bin/bash

# Exit if any command fails
set -e

# Check if filename is provided
if [ $# -lt 1 ]; then
  echo "Usage: $0 <cpp_file> [program_args...]"
  exit 1
fi

# Input C++ file (first argument)
CPP_FILE=$1
# Remove .cpp extension and get program name
BASENAME=$(basename "$CPP_FILE" .cpp)
# Output directory
OUT_DIR="bin"
# Output executable path
OUT_FILE="$OUT_DIR/$BASENAME.exe"

# Create bin/ folder if it doesn't exist
mkdir -p "$OUT_DIR"

echo "Compiling $CPP_FILE..."
g++ "$CPP_FILE" -o "$OUT_FILE"

echo "Build complete: $OUT_FILE"
echo "Running $BASENAME..."
echo "===OUTPUT==="

# Run the program with any extra args
shift
"$OUT_FILE" "$@"
