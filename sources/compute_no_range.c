/*
** EPITECH PROJECT, 2019
** compute_no_range
** File description:
** compute_no_range
*/

#include "106bombyx.h"
#include <math.h>

void compute_no_range(char **av)
{
    if (!av[1] || !av[2])
        exit(MY_ERROR);

    long double x = strtold(av[1], NULL);
    long double k = strtold(av[2], NULL);
    double temp = 0;

    for (int i = 1; i <= 100; i++) {
        if (x < 0)
            x = 0;
        printf("%d %.2Lf\n", i, x);
        x = x * k * (1000 - x) / 1000;
    }
}
