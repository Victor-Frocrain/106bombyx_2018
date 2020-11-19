/*
** EPITECH PROJECT, 2019
** my_strcat.c
** File description:
** Copy src in the end of str
*/

#include "my.h"

char *my_strcat(char *str, char *src)
{
    int length = my_strlen(str) + my_strlen(src);
    char *res = malloc(sizeof(char) * (length + 1));
    int i = 0;

    for (; str[i]; i++)
        res[i] = str[i];
    for (int j = 0; src[j]; j++) {
        res[i] = src[j];
        i++;
    }
    res[i] = 0;
    return (res);
}
