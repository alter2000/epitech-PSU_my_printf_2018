/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018
** File description:
** my_printf main file
*/

#include "my.h"
#include "my_printf.h"

int my_printf(char const *fmt, ...)
{
    va_list ap;
    char **args = get_flags(fmt);
    int chars = 0;
    char *buf = 0;

    while (!buf)
        buf = malloc(sizeof(char) * 9999999);
    while (*fmt)
        *buf++ = *fmt++;
    va_start(ap, fmt);
    chars = pstuff(fmt, buf, args, ap);
    va_end(ap);
    return chars;
}

int pstuff(char const *fmt, char *buf, char const **args, va_list ap)
{
    
}

int eval_flags(char const *fmt)
{
    int i = 0;
    unsigned int flags = 0U;

    do {
        switch (*fmt) {
            case '#':
                flags |= FLAG_HASH;
                fmt++;
                i = 1;
                break;
            case '0':
                flags |= FLAG_ZERO;
                fmt++;
                i = 1;
                break;
            case '-':
                flags |= FLAG_LEFT;
                fmt++;
                i = 1;
                break;
            case '+':
                flags |= FLAG_SIGN;
                fmt++;
                i = 1;
                break;
            case ' ':
                flags |= FLAG_SPACE;
                fmt++;
                i = 1;
                break;
            default:
                i = 0;
                break;
        }
    } while (i);
    return flags;
}
