/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018
** File description:
** modified functions for printf
*/

#include "../my.h"
#include "my_printf.h"

unsigned int p_bin(unsigned int flags, unsigned int width, \
        unsigned int precision, va_list arg)
{
    unsigned int chars = 0;

    flags &= ~F_HASH;
    if (flags & F_LLONG)
        chars += p_putnbr(va_arg(arg, long long), "01");
    else if (flags & F_LONG)
        chars += p_putnbr(va_arg(arg, long), "01");
    else if (flags & F_CHAR)
        chars += p_putnbr((char) va_arg(arg, int), "01");
    else if (flags & F_SHORT)
        chars += p_putnbr((short int) va_arg(arg, int), "01");
    else
        chars += p_putnbr(va_arg(arg, int), "01");
    return chars;
}
