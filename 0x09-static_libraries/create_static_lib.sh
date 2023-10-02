#!/bin/bash
gcc -Wall -pedantic  -Wextra -c *.c
gcc -rc liball.a *.0
ranlib liball.a
