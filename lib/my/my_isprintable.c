/*
** EPITECH PROJECT, 2018
** CPool_Day07_2018
** File description:
** check if string contains only printable chars
*/

#include "my.h"

int my_isprintable(char const ch)
{
    return (ch < 32 || ch > 126) ? 0 : 1;
}
