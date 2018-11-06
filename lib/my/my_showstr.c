/*
** EPITECH PROJECT, 2018
** CPool_Day07_2018
** File description:
** print nonprintables as hex values
*/

#include "my.h"

void my_showstr(char const *str)
{
    for (unsigned int i = 0; str[i]; i++) {
        if (my_isprintable(str[i]))
            my_putchar(str[i]);
        else {
            my_putchar('\\');
            if (str[i] < 16)
                my_putchar('0');
            my_put_nbr_base(str[i], "0123456789abcdef");
        }
    }
}
/*
int my_put_nbr_base(int n, char const *base)
{
    int i = my_strlen(base);
    int leftovers = 0;

    if (i <= 1)
        return n;
    leftovers %= i;
    if (leftovers < 0)
        leftovers *= -1;
    if (n / i == 0) {
        if (n < 0)
            my_putchar('-');
        my_putchar(base[leftovers]);
        return n;
    }
    my_put_nbr_base(n / i, base);
    my_putchar(base[leftovers]);
    return n;
}*/

int my_put_nbr_base(int nb, char const *base)
{
    int b = my_strlen(base);

    if (nb < INT_MIN + b + 1 || nb > INT_MAX - b - 1) {
        write(2, "put_nbr: out of bounds\n", 26);
        return 0;
    }
    if (nb < 0) {
        my_putchar('-');
        my_put_nbr_base(-nb, base);
    }
    if (nb > b - 1) {
        my_put_nbr_base(nb / b, base);
        my_put_nbr_base(nb % b, base);
        return 0;
    }
    if (nb >= 0 && nb < b)
        my_putchar(base[nb]);
    return 0;
}
