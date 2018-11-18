/*
** EPITECH PROJECT, 2018
** CPool_Day04_2018
** File description:
** put string in stdout
*/

#include "my.h"

long long int my_putstr(char const *str)
{
    long long int i = 0;

    if (!str || !*str)
        return 0;
    while (str[i])
        my_putchar(str[i++]);
    return i;
}
