/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018
** File description:
** my_printf main file
*/

#include "../my.h"
#include "my_printf.h"

int my_printf(char const *fmt, ...)
{
    va_list ap;
    int chars = 0;
    char *buf = 0;

    while (!buf)
        buf = malloc(sizeof(char) * 9999999);
    va_start(ap, fmt);
    pstuff(fmt, buf, ap);
    va_end(ap);
    free(buf);
    return chars;
}

char *pstuff(char const *fmt, char *buf, va_list ap)
{
    unsigned int flags = 0U;
    unsigned int width;
    unsigned int precision;
    unsigned int pos = 0U;
    unsigned char check = 0U;

    while (*fmt) {
        if (*fmt != '%') {
            buf[pos++] = *fmt++;
            continue;
        } else
            fmt++;
        do {
            check = set_flags(*fmt, flags);
            fmt += check;
        } while (check);
        width = my_isdigit(*fmt) ? my_atoi(&fmt) : 0;
        if (*fmt == '.') {
            flags |= F_PREC;
            if (my_isdigit(*(++fmt)))
                precision = my_atoi(&fmt);
        }
        fmt = set_length(fmt, &flags);
        fix_flags(&flags);
        fill_buffer(buf, fmt, flags, width, precision, ap);
    }
}

void fill_buffer(char const *buf, char const *fmt, unsigned int flags, \
        unsigned int width, unsigned int prec, va_list ap)
{
    char *base;

    switch (*fmt) {
        case 'd':
        case 'i':
        case 'u':
            base = "0123456789";
            flags = (flags & F_HASH) ? flags & ~F_HASH : flags & F_HASH;
        case 'x':
            base = "0123456789abcdef";
        case 'X':
            base = "0123456789ABCDEF";
        case 'o':
            base = "01234567";
        case 'b':
            base = "01";
            break;
        case 's':
            break;
        default: break;
    }
    if ((*fmt != 'i') && (*fmt != 'd'))
        flags &= ~(F_PLUS | F_SPACE);
}
