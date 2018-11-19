/*
** EPITECH PROJECT, 2018
** CPool_infinadd_2018
** File description:
** count_digits tests
*/

/*
#include "my.h"
#include <criterion/criterion.h>

static int my_count_digits_rec(int n, int i)
{
    if (n < INT_MIN || n > INT_MAX) {
        write(2, "count_digits: number out of bounds\n", 35);
        return 84;
    }
    if (n / 10 != 0)
        return i + my_count_digits_rec(n / 10, i);
    else if (n >= 0)
        return 1;
    else
        return 0;
}

int my_count_digits(int n)
{
    return my_count_digits_rec((n >= 0) ? n : -n, 0);
}

Test(count_digits, negative)
{
    printf("%d\n", my_count_digits(-1234567890) );
    cr_assert(my_count_digits(-1234567890) == 10);
    cr_assert(my_count_digits(-1267890) == 7);
    cr_assert(my_count_digits(-1) == 1);
}

Test(count_digits, positive)
{
    cr_assert(my_count_digits(1234567890) == 10);
    cr_assert(my_count_digits(1267890) == 7);
    cr_assert(my_count_digits(1) == 1);
}

Test(count_digits, zero)
{
    cr_assert(my_count_digits(0) == 0);
}*/
