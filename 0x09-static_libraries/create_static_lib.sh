#!/bin/bash
gcc -c -Wall -Wextra -Werror -pendantic *.c && ar -rc liball.a *.o
