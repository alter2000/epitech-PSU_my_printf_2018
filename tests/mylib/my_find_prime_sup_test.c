/*
** EPITECH PROJECT, 2018
** mylib
** File description:
** find next prime tests
*/

#include "my.h"
#include <criterion/criterion.h>

Test(find_prime_sup, positive)
{
    cr_expect(my_find_prime_sup(1) == 2);
    cr_expect(my_find_prime_sup(4) == 5);
    cr_expect(my_find_prime_sup(9) == 11);
}
