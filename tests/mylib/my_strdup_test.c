/*
** EPITECH PROJECT, 2018
** mylib
** File description:
** strdup tests
*/

#include "my.h"
#include <criterion/criterion.h>

Test(strdup, idk)
{
    cr_expect_str_eq(my_strdup("123"), "123");
    cr_expect_str_eq(my_strdup("abs"), "abs");
    cr_expect_str_eq(my_strdup("m"), "m");
    cr_expect_str_eq(my_strdup(""), "");
}
