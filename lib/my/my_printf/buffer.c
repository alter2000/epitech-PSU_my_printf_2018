/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018
** File description:
** buffer filling functions from libmy
*/

#include "../my.h"
#include "my_printf.h"

ptrdiff_t buf_putnbr(char *buf, int n, char const *base)
{
    int b = my_strlen(base);

    if (n < INT_MIN + b + 1 || n > INT_MAX - b - 1) {
        write(2, "buf_putnbr: out of bounds\n", 23);
        return 0;
    }
    if (n < 0) {
        *(++buf) = '-';
        buf_putnbr(++buf, -n, base);
    }
    if (n > b - 1) {
        buf_putnbr(++buf, n / b, base);
        buf_putnbr(++buf, n % b, base);
    }
    if (n >= 0 && n < b)
        *(++buf) = base[n];
    return buf;
}
