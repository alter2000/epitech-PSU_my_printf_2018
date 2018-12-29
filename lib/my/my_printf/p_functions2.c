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
    if (flags & F_LONG)
        val = va_arg(arg, long);
    if (flags & F_CHAR)
        val = (char) va_arg(arg, int);
    if (flags & F_SHORT)
        val = (short int) va_arg(arg, int);
    if (!(flags & F_LLONG) && !(flags & F_LONG) \
            && !(flags & F_CHAR) && !(flags & F_SHORT))
        val = va_arg(arg, int);
    chars += (flags & F_SPACE && val > 0) ? my_putstr(" ") : 0;
    chars += (flags & F_PLUS && val > 0) ? my_putstr("+") : 0;
    chars += p_putnbr(val, "0123456789");
    return chars;
}

unsigned int p_udec(unsigned int flags, unsigned int width, \
        unsigned int precision, va_list arg)
{
    flags &= ~F_HASH;
    if (flags & F_LLONG)
        return p_uputnbr(va_arg(arg, long long), "0123456789");
    if (flags & F_LONG)
        return p_uputnbr(va_arg(arg, long), "0123456789");
    if (flags & F_CHAR)
        return p_uputnbr((char) va_arg(arg, int), "0123456789");
    if (flags & F_SHORT)
        return p_uputnbr((short int)va_arg(arg, int), "0123456789");
    if (!(flags & F_LLONG) && !(flags & F_LONG) \
            && !(flags & F_CHAR) && !(flags & F_SHORT))
        return p_uputnbr(va_arg(arg, int), "0123456789");
    return p_uputnbr(va_arg(arg, int), "0123456789");
}

unsigned int p_hex(unsigned int flags, unsigned int width, \
        unsigned int precision, va_list arg)
{
    unsigned int chars = 0;
    unsigned long long int val = 0;

    if (flags & F_LLONG)
        val = va_arg(arg, long long);
    if (flags & F_LONG)
        val = va_arg(arg, long);
    if (flags & F_CHAR)
        val = (char) va_arg(arg, int);
    if (flags & F_SHORT)
        val = (short int) va_arg(arg, int);
    if (!(flags & F_LLONG) && !(flags & F_LONG) \
            && !(flags & F_CHAR) && !(flags & F_SHORT))
        val = va_arg(arg, int);
    chars += (flags & F_HASH) ? my_putstr("0x") : 0;
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
    if (flags & F_LONG)
        val = va_arg(arg, long);
    if (flags & F_CHAR)
        val = (char) va_arg(arg, int);
    if (flags & F_SHORT)
        val = (short int) va_arg(arg, int);
    if (!(flags & F_LLONG) && !(flags & F_LONG) \
            && !(flags & F_CHAR) && !(flags & F_SHORT))
        val = va_arg(arg, int);
    chars += (flags & F_HASH) ? my_putstr("0X") : 0;
    chars += p_putnbr(val, "0123456789ABCDEF");
    return chars;
}

unsigned int p_oct(unsigned int flags, unsigned int width, \
        unsigned int precision, va_list arg)
{
    unsigned int chars = 0;
    unsigned long long int val = 0;


    if (flags & F_LLONG)
        val = va_arg(arg, long long);
    if (flags & F_LONG)
        val = va_arg(arg, long);
    if (flags & F_CHAR)
        val = (char) va_arg(arg, int);
    if (flags & F_SHORT)
        val = (short int) va_arg(arg, int);
    if (!(flags & F_LLONG) && !(flags & F_LONG) \
            && !(flags & F_CHAR) && !(flags & F_SHORT))
        val = va_arg(arg, int);
    chars += my_putstr("0");
    chars += p_putnbr(val, "01234567");
    return chars;
}
