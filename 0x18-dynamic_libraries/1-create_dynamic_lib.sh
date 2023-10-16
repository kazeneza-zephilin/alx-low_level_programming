#!/bin/bash
# collect all .c files in the current directory and compile into shared library.
gcc -fPIC *.c
gcc -shared -o liball.so *.o
