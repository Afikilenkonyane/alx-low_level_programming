#!/bin/bash
gcc -Wall -Werror -Wextra -pedantic -fPIC *.c -shared -o liball.so
gcc -shared -o liball.so *.o
export LD_LIBRARY_PATH=.:$LD_LIBRARY_PATH
