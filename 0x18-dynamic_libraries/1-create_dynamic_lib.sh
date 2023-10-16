#!/bin/bash
# collect all .c files in the current directory and compile into shared library.
c_files =$(ls *.c)
gcc -shared -fPIC -o liball.so $c_files
