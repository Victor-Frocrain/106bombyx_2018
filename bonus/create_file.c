/*
** EPITECH PROJECT, 2019
** create_file
** File description:
** create_file
*/

#include "106bombyx.h"

void write_file(int fd, int i, float x)
{
    
}

int create_file(char *str)
{
    int fd = open(str, O_CREAT | O_RDWX);

    if (fd < 0)
        return (-1);
    return (fd);
}
