/*
** EPITECH PROJECT, 2019
** my_strlen.c
** File description:
** Count str size
*/

#include "my.h"

int my_strlen(char *str)
{
    int i = 0;

    for (; str[i]; i++);
    return (i);
}
