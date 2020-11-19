/*
** EPITECH PROJECT, 2019
** my_strcpy.c
** File description:
** Copy the string in other allocation space
*/

#include "my.h"

char *my_strcpy(char *src)
{
    char *res = malloc(sizeof(char) * (my_strlen(src) + 1));

    for (int i = 0; src[i]; i++)
        res[i] = src[i];
    res[my_strlen(src)] = 0;
    return (res);
}
