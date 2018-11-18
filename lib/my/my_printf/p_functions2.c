/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018
** File description:
** modified functions for printf
*/

#include "../my.h"
#include "my_printf.h"

unsigned int p_dec(unsigned int flags, unsigned int width, \
        unsigned int precision, va_list arg)
{
    unsigned int chars = 0;

    flags &= ~F_HASH;
    chars += (flags & F_SPACE) ? my_putchar(' ') : 0;
    if (flags & F_LLONG)
        chars += p_putnbr(va_arg(arg, long long), "0123456789");
    else if (flags & F_LONG)
        chars += p_putnbr(va_arg(arg, long), "0123456789");
    else if (flags & F_CHAR)
        chars += p_putnbr((char) va_arg(arg, int), "0123456789");
    else if (flags & F_SHORT)
        chars += p_putnbr((short int) va_arg(arg, int), "0123456789");
    else
        chars += p_putnbr(va_arg(arg, int), "0123456789");
    return chars;
}

unsigned int p_udec(unsigned int flags, unsigned int width, \
        unsigned int precision, va_list arg)
{
    unsigned int chars = 0;

    flags &= ~F_HASH;
    if (flags & F_LLONG)
        chars += p_uputnbr(va_arg(arg, long long), "0123456789");
    else if (flags & F_LONG)
        chars += p_uputnbr(va_arg(arg, long), "0123456789");
    else if (flags & F_CHAR)
        chars += p_uputnbr((char) va_arg(arg, int), "0123456789");
    else if (flags & F_SHORT)
        chars += p_uputnbr((short int) va_arg(arg, int), "0123456789");
    else
        chars += p_uputnbr(va_arg(arg, int), "0123456789");
    return chars;
}

unsigned int p_hex(unsigned int flags, unsigned int width, \
        unsigned int precision, va_list arg)
{
    unsigned int chars = 0;

    flags &= ~F_HASH;
    if (flags & F_LLONG)
        chars += p_putnbr(va_arg(arg, long long), "0123456789abcdef");
    else if (flags & F_LONG)
        chars += p_putnbr(va_arg(arg, long), "0123456789abcdef");
    else if (flags & F_CHAR)
        chars += p_putnbr((char) va_arg(arg, int), "0123456789abcdef");
    else if (flags & F_SHORT)
        chars += p_putnbr((short int) va_arg(arg, int), "0123456789abcdef");
    else
        chars += p_putnbr(va_arg(arg, int), "0123456789abcdef");
    return chars;
}

unsigned int p_chex(unsigned int flags, unsigned int width, \
        unsigned int precision, va_list arg)
{
    unsigned int chars = 0;

    if (flags & F_LLONG)
        chars += p_putnbr(va_arg(arg, long long), "0123456789ABCDEF");
    else if (flags & F_LONG)
        chars += p_putnbr(va_arg(arg, long), "0123456789ABCDEF");
    else if (flags & F_CHAR)
        chars += p_putnbr((char) va_arg(arg, int), "0123456789ABCDEF");
    else if (flags & F_SHORT)
        chars += p_putnbr((short int) va_arg(arg, int), "0123456789ABCDEF");
    else
        chars += p_putnbr(va_arg(arg, int), "0123456789ABCDEF");
    return chars;
}

unsigned int p_oct(unsigned int flags, unsigned int width, \
        unsigned int precision, va_list arg)
{
    unsigned int chars = 0;

    if (flags & F_LLONG)
        chars += p_putnbr(va_arg(arg, long long), "01234567");
    else if (flags & F_LONG)
        chars += p_putnbr(va_arg(arg, long), "01234567");
    else if (flags & F_CHAR)
        chars += p_putnbr((char) va_arg(arg, int), "01234567");
    else if (flags & F_SHORT)
        chars += p_putnbr((short int) va_arg(arg, int), "01234567");
    else
        chars += p_putnbr(va_arg(arg, int), "01234567");
    return chars;
}
