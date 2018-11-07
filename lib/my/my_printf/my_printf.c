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
    unsigned int i = 0;
    char **args = get_flags(fmt);

    va_start(ap, fmt);
    for (unsigned int i = 0; args[i]; i++)
        if (is_numeral(args[i][my_strlen(args[i]) - 1])) {
        }
    va_end(ap);
    return ap;
}


