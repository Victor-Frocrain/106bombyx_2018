/*
** EPITECH PROJECT, 2019
** my_put_str.c
** File description:
** displays characters
*/

#include "my.h"

void my_putstr(char *str)
{
    for (int i = 0; str[i]; i++)
        my_putchar(str[i]);
}
