/*
** EPITECH PROJECT, 2018
** PSU_my_printf_bootstrap_2018
** File description:
** tests for sum_stdarg
*/

#include "my.h"
#include <criterion/criterion.h>

Test(sum_stdarg, i_one)
{
    cr_expect(sum_stdarg(1, 3, "one", "three", "hwatt") == 13);
    cr_expect(sum_stdarg(1, 3, "", "empty string", "hwatt") == 17);
    cr_expect(sum_stdarg(1, 0, "asd") == 0);
}

Test(sum_stdarg, i_zero)
{
    cr_expect(sum_stdarg(0, 3, 21, 25, -4) == 42);
    cr_expect(sum_stdarg(0, 3, 1, 2, 3, 5, 10) == 6);
    cr_expect(sum_stdarg(0, 0, 1, 2, 3, 5, 10) == 0);
}
