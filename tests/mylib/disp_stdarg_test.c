/*
** EPITECH PROJECT, 2018
** PSU_my_printf_bootstrap_2018
** File description:
** tests for sum_stdarg
*/

#include "my.h"
#include <criterion/criterion.h>
#include <criterion/redirect.h>

Test(disp_stdarg, chars)
{
    cr_redirect_stdout();
    disp_stdarg("ccccc", 'a', '\t', ',', '0', '\n');
    cr_expect_stdout_eq_str("a\n\t\n,\n0\n\n\n");
}

Test(disp_stdarg, nums)
{
    cr_redirect_stdout();
    disp_stdarg("iiiii", 1234, -1234, 0, 1, '0');
    cr_expect_stdout_eq_str("1234\n-1234\n0\n1\n48\n");
}

Test(disp_stdarg, mixed)
{
    cr_redirect_stdout();
    disp_stdarg("csiircs", 'a', "ayyyW", 12, -54321, '\t', "idk 	what");
    cr_expect_stdout_eq_str("a\nayyyW\n12\n-54321\n\t\nidk 	what\n");
}
