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
    unsigned long long int val = 0;

    if (flags & F_LLONG)
        val = va_arg(arg, long long);
    else if (flags & F_LONG)
        val = va_arg(arg, long);
    else if (flags & F_CHAR)
        val = (char) va_arg(arg, int);
    else if (flags & F_SHORT)
        val = (short int) va_arg(arg, int);
    else
        val = va_arg(arg, int);
    if (flags & F_SPACE && val > 0)
        chars += my_putstr(" ");
    if (flags & F_PLUS && val > 0)
        chars += my_putstr("+");
    chars += p_putnbr(val, "0123456789");
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
    unsigned long long int val = 0;

    if (flags & F_LLONG)
        val = va_arg(arg, long long);
    else if (flags & F_LONG)
        val = va_arg(arg, long);
    else if (flags & F_CHAR)
        val = (char) va_arg(arg, int);
    else if (flags & F_SHORT)
        val = (short int) va_arg(arg, int);
    else
        val = va_arg(arg, int);
    if (flags & F_HASH)
        chars += my_putstr("0x");
    chars += p_putnbr(val, "0123456789abcdef");
    return chars;
}

unsigned int p_chex(unsigned int flags, unsigned int width, \
        unsigned int precision, va_list arg)
{
    unsigned int chars = 0;
    unsigned long long int val = 0;

    if (flags & F_LLONG)
        val = va_arg(arg, long long);
    else if (flags & F_LONG)
        val = va_arg(arg, long);
    else if (flags & F_CHAR)
        val = (char) va_arg(arg, int);
    else if (flags & F_SHORT)
        val = (short int) va_arg(arg, int);
    else
        val = va_arg(arg, int);
    if (flags & F_HASH)
        chars += my_putstr("0X");
    chars += p_putnbr(val, "0123456789abcdef");
    return chars;
}

unsigned int p_oct(unsigned int flags, unsigned int width, \
        unsigned int precision, va_list arg)
{
    unsigned int chars = 0;
    unsigned long long int val = 0;

    if (flags & F_LLONG)
        val = va_arg(arg, long long);
    else if (flags & F_LONG)
        val = va_arg(arg, long);
    else if (flags & F_CHAR)
        val = (char) va_arg(arg, int);
    else if (flags & F_SHORT)
        val = (short int) va_arg(arg, int);
    else
        val = va_arg(arg, int);
    if (flags & F_HASH && val == 0)
        chars += my_putstr("0");
    chars += p_putnbr(val, "01234567");
    return chars;
}
