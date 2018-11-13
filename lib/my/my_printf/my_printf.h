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
#define F_HASH  (1U <<  0U)
#define F_ZERO  (1U <<  1U)
#define F_LEFT  (1U <<  2U)
#define F_SPACE (1U <<  3U)
#define F_PLUS  (1U <<  4U)

#define F_UPPER (1U <<  5U)
#define F_CHAR  (1U <<  6U)
#define F_SHORT (1U <<  7U)
#define F_LONG  (1U <<  8U)
#define F_LLONG (1U <<  9U)
#define F_PREC  (1U << 10U)

// my_printf.c
int my_printf(char const *, ...);

char *pstuff(char const*, char *, va_list);
void fill_buffer(char const *, char const *, unsigned int, \
        unsigned int, unsigned int, va_list);

char *set_length(char const*, unsigned int *);
int set_flags(char, unsigned int *);
void fix_flags(unsigned int *flags);

#endif // MY_PRINTF_H
