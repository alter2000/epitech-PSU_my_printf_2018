/*
** EPITECH PROJECT, 2018
** PSU_my_printf_2018
** File description:
** flag consumption funcs
*/

char *get_flag(char *const *fmt, int *i)
{
    char *flag = my_bzero(malloc(12), 12);

    for (; *fmt[*i]; i++)
        if (*fmt[*i] == '%')
            for (unsigned int j = 0; !is_fmt(*fmt[*i]); j++, *i++)
                flag[j] = *fmt[*i];
    return flag;
}

unsigned int *count_flags(char const *fmt)
{
    unsigned int f = 0;

    for (unsigned int i = 0; fmt[i]; i++)
        f += (fmt[i] == '%' && fmt[i + 1] != '%');
    return f;
}

char **get_flags(char const *fmt)
{
    unsigned int fno = count_flags(fmt);
    unsigned int j = 0;
    char **flags = my_bzero(malloc(fno + 1), fno + 1);

    for (unsigned int i = 0; fmt[i]; i++)
        if (fmt[i] == '%')
            flags[i] = get_flag(fmt, j);
    return flags;
}

int is_fmt(char const ch)
{
    if (ch == 'd' || ch == 'i' || ch == 'u' || ch == 'o' || ch == 'x' \
        || ch == 'X' || ch == 'c' || ch == 's' || ch == 'p')
        return 1;
    return 0;
}

int is_numeral(char const ch)
{
    if (ch == 'd' || ch == 'i' || ch == 'u' || ch == 'o' || ch == 'x' \
        || ch == 'X')
        return 1;
    return 0;
}
