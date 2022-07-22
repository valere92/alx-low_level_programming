#!/bin/bash
gcc -c -Wall -Werror -Wextra *.c | ar -rc liball *.o | ranlib liball 
printf "\n"
