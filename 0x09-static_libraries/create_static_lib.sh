#!/bin/bash
gcc _wall -Werror -Wextra -pendantic -c *.c
ar -rc liball.a *.o
