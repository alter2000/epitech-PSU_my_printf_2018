/*
** EPITECH PROJECT, 2018
** CPool_Day07_2018
** File description:
** print nonprintables as hex values
*/

#include "my.h"

unsigned int my_showstr(char const *str)
{
    unsigned int i = 0;
    unsigned int c = 0;

    for (; str[i]; i++) {
        if (my_isprintable(str[i]))
            c += my_putchar(str[i]);
        else {
            my_putchar('\\');
            if (str[i] < 8)
                c += my_putchar('0');
            c += my_put_nbr_base(str[i], "01234567");
        }
    }
    return i + c;
}
