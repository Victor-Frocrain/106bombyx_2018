/*
** EPITECH PROJECT, 2019
** compute_range.c
** File description:
** compute_range.c
*/

#include "106bombyx.h"

void compute_range(char **av)
{
    double n;
    int i0 = my_getnbr(av[2]);
    int i1 = my_getnbr(av[3]);
    double k = 1;

    for (double k = 1; k <= 4; k += 0.01) {
        n = strtod(av[1], NULL);
        for (int i = 1; i < i0; i++)
            n = n * k * ((1000 - n) / 1000);
        for (int i = i0; i <= i1; i++) {
            if (n < 0)
                n = 0;
            printf("%.2f %.2f\n", k, n);
            n = n * k * ((1000 - n) / 1000);
        }
    }
}
