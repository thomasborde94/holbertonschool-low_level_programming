#!/bin/bash
gcc -Wall -pedantic -Werrir -Wextra -c *.c
ar -rc liball.a *.o
