#!/bin/bash
gcc -Wall -pedantic -Werror -Wextra -c *.c
ar -rc create_static_lib.a *.o