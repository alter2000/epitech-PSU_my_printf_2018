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

#define FLAG_HASH      (1U <<  0U)
#define FLAG_ZERO      (1U <<  1U)
#define FLAG_LEFT      (1U <<  2U)
#define FLAG_SPACE     (1U <<  3U)
#define FLAG_PLUS      (1U <<  4U)
#define FLAG_UPPER     (1U <<  5U)
#define FLAG_CHAR      (1U <<  6U)
#define FLAG_SHORT     (1U <<  7U)
#define FLAG_LONG      (1U <<  8U)
#define FLAG_LONG_LONG (1U <<  9U)
#define FLAG_PRECISION (1U << 10U)

// my_printf.c
int my_printf(char const *fmt, ...);

int pstuff(char const *fmt, char *buf, char const **args, va_list ap);

// flags.c
char *get_flag(char const *fmt, int *i);
unsigned int *count_flags(char const *fmt);
char **get_flags(char const *fmt);
int is_fmt(char const ch);
int is_numeral(char const ch);

#endif // MY_PRINTF_H
