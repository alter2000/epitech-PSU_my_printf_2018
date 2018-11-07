/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018
** File description:
** my_printf main file
*/

#include "my.h"

int my_printf(char const *fmt, ...)
{
    va_list ap;
    char **args = get_flags(fmt);
    int chars = 0;

    va_start(ap, fmt);
    chars = pstuff(fmt, args, ap);
    va_end(ap);
    return chars;
}

int pstuff(char const *fmt, char const **args, va_list ap)
{
    while (*fmt)
        if (*fmt != '%')
            my_putchar(*(fmt++));
        else
            fmt++;
    
}
