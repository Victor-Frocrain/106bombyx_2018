/*
** EPITECH PROJECT, 2019
** my_strncpy.c
** File description:
** Copy [x1 ; x2] from str in other allocated space
*/

#include "my.h"

char *my_strncpy(char *str, int x1, int x2)
{
    char *res = malloc(sizeof(char) * my_strlen(str));

    if (x1 > x2) {
        free(res);
        return (NULL);
    }
    for (int i = 0; str[x1] && x1 < x2; x1++) {
        res[i] = str[x1];
        i++;
    }
    res[my_strlen(str)] = 0;
    return (res);
}
