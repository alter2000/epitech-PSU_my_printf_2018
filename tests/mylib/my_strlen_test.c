/*
** EPITECH PROJECT, 2018
** mylib
** File description:
** strlen tests
*/

#include "my.h"
#include <criterion/criterion.h>

Test(strlen, idk)
{
    cr_expect(my_strlen("123") == 3);
    cr_expect(my_strlen("abs") == 3);
    cr_expect(my_strlen("m") == 1);
    cr_expect(my_strlen("") == 0);
}
