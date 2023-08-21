#!/bin/bash

# Compile all .c files in the current directory into object files
for source_file in *.c; do
    if [ -f "$source_file" ]; then
        object_file="${source_file%.c}.o"
        gcc -Wall -Werror -Wextra -pedantic -fPIC -c "$source_file" -o "$object_file"
        if [ $? -ne 0 ]; then
            echo "Compilation failed for $source_file"
            exit 1
        fi
    fi
done

# Create the dynamic library (liball.so) from the object files
gcc -shared -o liball.so *.o

# Clean up the temporary object files
rm -f *.o

echo "Dynamic library liball.so created successfully."
