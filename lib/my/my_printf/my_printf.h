/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018
** File description:
** my_printf header file
*/

#ifndef MY_PRINTF_H
#   define MY_PRINTF_H

#include <stdarg.h>

/* like UNIX permissions weeeee */

#   define LEN_CHAR
#   define LEN_SHORT
#   define LEN_LONG
#   define LEN_LLONG

#   define FLAG_HASH
#   define FLAG_ZERO
#   define FLAG_LEFT
#   define FLAG_SPACE
#   define FLAG_SIGN
#   define FLAG_PRECISION

int my_printf(char const *fmt, ...);

int pstuff(char const *fmt, char const **args, va_list ap);

// flags.c
char *get_flag(char const *fmt, int *i);
unsigned int *count_flags(char const *fmt);
char **get_flags(char const *fmt);
int is_fmt(char const ch);
int is_numeral(char const ch);

#endif // MY_PRINTF_H
