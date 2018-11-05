/*
** EPITECH PROJECT, 2018
** mylib
** File description:
** tests file for err.c
*/

#include <criterion/criterion.h>
#include "my.h"

Test(my_err, empty, .exit_code = 0)
{
    errb("");
}

Test(my_err, nonempty, .exit_code = 84)
{
    errb("lol idk");
}
