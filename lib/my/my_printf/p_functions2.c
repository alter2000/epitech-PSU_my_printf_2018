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

    START_BITMASK_SWITCH(flags)
    {
        case F_LLONG: val = va_arg(arg, long long);
                    break;
        case F_LONG: val = va_arg(arg, long);
                    break;
        case F_CHAR: val = (char) va_arg(arg, int);
                    break;
        case F_SHORT: val = (short int) va_arg(arg, int);
                    break;
        default: val = va_arg(arg, int);
                    break;
    }
    chars += (flags & F_SPACE && val > 0) ? my_putstr(" ") : 0;
    chars += (flags & F_PLUS && val > 0) ? my_putstr("+") : 0;
    chars += p_putnbr(val, "0123456789");
    return chars;
}

unsigned int p_udec(unsigned int flags, unsigned int width, \
        unsigned int precision, va_list arg)
{
    unsigned int c = 0;

    flags &= ~F_HASH;
    START_BITMASK_SWITCH(flags)
    {
        case F_LLONG: c += p_uputnbr(va_arg(arg, long long), "0123456789");
                    break;
        case F_LONG: c += p_uputnbr(va_arg(arg, long), "0123456789");
                    break;
        case F_CHAR: c += p_uputnbr((char) va_arg(arg, int), "0123456789");
                    break;
        case F_SHORT: c += p_uputnbr((short int)va_arg(arg, int), "0123456789");
                    break;
        default: c += p_uputnbr(va_arg(arg, int), "0123456789");
                    break;
    }
    return c;
}

unsigned int p_hex(unsigned int flags, unsigned int width, \
        unsigned int precision, va_list arg)
{
    unsigned int chars = 0;
    unsigned long long int val = 0;

    START_BITMASK_SWITCH(flags)
    {
        case F_LLONG: val = va_arg(arg, long long);
                    break;
        case F_LONG: val = va_arg(arg, long);
                    break;
        case F_CHAR: val = (char) va_arg(arg, int);
                    break;
        case F_SHORT: val = (short int) va_arg(arg, int);
                    break;
        default: val = va_arg(arg, int);
                    break;
    }
    chars += (flags & F_HASH) ? my_putstr("0x") : 0;
    chars += p_putnbr(val, "0123456789abcdef");
    return chars;
}

unsigned int p_chex(unsigned int flags, unsigned int width, \
        unsigned int precision, va_list arg)
{
    unsigned int chars = 0;
    unsigned long long int val = 0;

    START_BITMASK_SWITCH(flags)
    {
        case F_LLONG: val = va_arg(arg, long long);
                    break;
        case F_LONG: val = va_arg(arg, long);
                    break;
        case F_CHAR: val = (char) va_arg(arg, int);
                    break;
        case F_SHORT: val = (short int) va_arg(arg, int);
                    break;
        default: val = va_arg(arg, int);
                    break;
    }
    chars += (flags & F_HASH) ? my_putstr("0X") : 0;
    chars += p_putnbr(val, "0123456789ABCDEF");
    return chars;
}

unsigned int p_oct(unsigned int flags, unsigned int width, \
        unsigned int precision, va_list arg)
{
    unsigned int chars = 0;
    unsigned long long int val = 0;

    START_BITMASK_SWITCH(flags)
    {
        case F_LLONG: val = va_arg(arg, long long);
                    break;
        case F_LONG: val = va_arg(arg, long);
                    break;
        case F_CHAR: val = (char) va_arg(arg, int);
                    break;
        case F_SHORT: val = (short int) va_arg(arg, int);
                    break;
        default: val = va_arg(arg, int);
                    break;
    }
    chars += my_putstr("0");
    chars += p_putnbr(val, "01234567");
    return chars;
}
