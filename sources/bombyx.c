/*
** EPITECH PROJECT, 2019
** bombyx.c
** File description:
** bombyx.c
*/

#include "106bombyx.h"

int display_usage(char *filepath, int ret)
{
    int fd = open(filepath, O_RDONLY);
    char *str;

    if (fd < 0)
        return (MY_ERROR);
    str = get_next_line(fd);
    while (str) {
        my_printf("%s\n", str);
        free(str);
        str = get_next_line(fd);
    }
    return (ret);
}

int bombyx(int ac, char **av)
{
    if (av[1] && my_strcmp(av[1], "-h"))
        return (display_usage(USAGE, MY_SUCCESS));
    if (!parser(ac, av))
        return (MY_ERROR);
    if (ac == 3)
        compute_no_range(av);
    else
        compute_range(av);
    return (MY_SUCCESS);
}
