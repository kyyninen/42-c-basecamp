#!/bin/sh
gcc -c -Wall -Wextra -Werror *.c
ar rc libft.a *.o
ranlib libft.a