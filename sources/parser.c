/*
** EPITECH PROJECT, 2019
** parser
** File description:
** parser
*/

#include "106bombyx.h"

bool is_digit(char *str)
{
    int i = 0;

    if (str[i] == '+')
        i++;
    for (; str[i]; i++)
        if (str[i] < '0' || str[i] > '9')
            return (false);
    return (true);
}

bool is_float(char *str, bool is_neg)
{
    int i = 0;
    bool is_flo = false;

    if (str[i] == '+' || (is_neg && str[i] == '-'))
        i++;
    for (; str[i]; i++) {
        if ((!(str[i] >= '0' && str[i] <= '9') && str[i] != '.')
            || (str[i] == '.' && is_flo))
            return (false);
        if (str[i] == '.')
            is_flo = true;
    }
    return (true);
}

bool parser(int ac, char **av)
{
    int k;

    if (ac != 3 && ac != 4)
        return (false);
    if (!is_float(av[1], false))
        return (false);
    if (ac == 3 && !is_float(av[2], true))
        return (false);
    if (ac == 3) {
        k = strtof(av[2], NULL);
        if (k < 1 || k > 4)
            return (false);
    }
    if (ac == 4 && ((!is_digit(av[2]) || !is_digit(av[3]))
        || (my_getnbr(av[2]) > my_getnbr(av[3]))))
        return (false);
    return (true);
}
