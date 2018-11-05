/*
** EPITECH PROJECT, 2018
** PSU_my_printf_bootstrap_2018
** File description:
** display vararg types
*/

#include "my.h"

int disp_stdarg(char *s, ...)
{
    va_list ap;

    va_start(ap, s);
    while (*s)
        switch (*s++) {
            case 'c': my_putchar((char) va_arg(ap, int));
                my_putchar('\n');
                break;
            case 's': my_putstr(va_arg(ap, char *));
                my_putchar('\n');
                break;
            case 'i': my_put_nbr(va_arg(ap, int));
                my_putchar('\n');
                break;
            default: break;
        }
    va_end(ap);
    return 0;
}
