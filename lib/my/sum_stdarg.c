/*
** EPITECH PROJECT, 2018
** PSU_my_printf_bootstrap_2018
** File description:
** show sum of nb varargs (if i==0) or strlen (if i==1)
*/

#include "my.h"

int sum_stdarg(int i, int nb, ...)
{
    va_list ap;
    int res = 0;

    va_start(ap, nb);
    switch (i) {
        case 0:
            for (; nb > 0; nb--)
                res += va_arg(ap, int);
            break;
        case 1:
            for (; nb > 0; nb--)
                res += my_strlen(va_arg(ap, char *));
            break;
        default:
            break;
    }
    va_end(ap);
    return res;
}
