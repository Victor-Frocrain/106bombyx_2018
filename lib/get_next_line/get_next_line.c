/*
** EPITECH PROJECT, 2019
** get_next_line.c
** File description:
** get_next_line
*/

#include "get_next_line.h"

bool loop_condition(char *str)
{
    int j = 0;

    for (; str[j] && str[j] != '\n'; j++);
    if (str[j] == '\n')
        return (false);
    return (true);
}

int calc_mem(char *memory, int type)
{
    int i = READ_SIZE;

    if (type == 0) {
        if (memory && loop_condition(memory))
            i = READ_SIZE + calc_mem(memory, 2);
        if (memory && !loop_condition(memory))
            i = calc_mem(memory, 2);
        return (i);
    }
    i = 0;
    for (; memory[i]; i++);
    return (i);
}

char *fill_str(char *str, char *memory, int mem, int fd)
{
    int i = 1;

    if (loop_condition(str))
        i = read(fd, str + (mem - READ_SIZE), READ_SIZE);
    if (i <= 0 && (!memory || calc_mem(memory, 2) == 0))
        return (NULL);
    while (loop_condition(str) && i > 0) {
        mem += READ_SIZE;
        str = my_realloc(str, mem);
        i = read(fd, str + (mem - READ_SIZE), READ_SIZE);
    }
    str[mem - READ_SIZE + i] = 0;
    return (str);
}

char *my_realloc(char *str, int mem)
{
    char *realloc = malloc(sizeof(char) * mem + 1);
    int i = 0;

    if (!realloc)
        return (NULL);
    for (; str && str[i] && i < mem; i++)
        realloc[i] = str[i];
    realloc[i] = 0;
    return (realloc);
}

char *get_next_line(int fd)
{
    static char *memory = NULL;
    char *str = malloc(sizeof(char) * calc_mem(memory, 0));
    int j;

    if (memory && str)
        for (int w = 0; memory[w]; w++)
            str[w] = memory[w];
    if (str && loop_condition(str))
        str = fill_str(str, memory, calc_mem(memory, 0), fd);
    for (j = 0; str && str[j] && str[j] != '\n'; j++);
    memory = NULL;
    if (str && str[j] == '\n') {
        str[j++] = 0;
        memory = my_realloc(memory, calc_mem(str + j, 2));
        for (int w = 0; str[j]; j++) {
            memory[w++] = str[j];
            str[j] = 0;
        }
    }
    return (str);
}
