i#!/bin/bash
gcc -Wall -pedantic -werror -wextra -c *.c
ar -rc liball.a *.o
