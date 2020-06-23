/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018
** File description:
** modified functions for printf
*/

#include "../my.h"
#include "my_printf.h"

unsigned int p_uputnbr(unsigned long long int n, char const * const base)
{
    int b = my_strlen(base);
    unsigned int digits = 0;

    if (n < 0) {
        my_putchar('-');
        digits += my_put_nbr_base(-n, base);
    } else if (n > b - 1) {
        digits += my_put_nbr_base(n / b, base);
        digits += my_put_nbr_base(n % b, base);
    } else {
        my_putchar(base[n]);
        ++digits;
    }
    return digits;
}

unsigned int p_putnbr(long long int n, char const * const base)
{
    int b = my_strlen(base);
    unsigned int digits = 0;

    if (n < INT_MIN || n > INT_MAX) {
        write(2, "put_nbr: out of bounds\n", 23);
        return 0;
    }
    if (n < 0) {
        my_putchar('-');
        digits += my_put_nbr_base(-n, base);
    } else if (n > b - 1) {
        digits += my_put_nbr_base(n / b, base);
        digits += my_put_nbr_base(n % b, base);
    } else {
        my_putchar(base[n]);
        ++digits;
    }
    return digits;
}

unsigned int p_showstr(char const *str)
{
    unsigned int i = 0;
    unsigned int c = 0;

    for (; str && str[i]; i++) {
        if (my_isprintable(str[i]))
            c += my_putchar(str[i]);
        else {
            my_putchar('\\');
            if (str[i] < 16)
                c += my_putchar('0');
            c += my_put_nbr_base(str[i], "01234567");
        }
    }
    return c;
}

unsigned int p_showptr(long long int p)
{
    unsigned int c = 0;

    if (!p)
        c += my_putstr("(nil)");
    else {
        c += my_putstr("0x");
        c += my_put_nbr_base(p, "0123456789abcdef");
    }
    return c;
}

unsigned int p_putstr(char const *s, unsigned int flags)
{
    if (flags & F_SPACE && !s)
        return my_putchar(' ');
    return my_putstr(s);
}
