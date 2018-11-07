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

int eval_len(char const *fmt)
{
    int i = 0;
    unsigned int len = 0U;

    do {
    } while (i);
    return len;
}

