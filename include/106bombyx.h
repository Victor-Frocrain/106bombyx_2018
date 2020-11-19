/*
** EPITECH PROJECT, 2018
** 106bombyx.h
** File description:
** 106bombyx.h
*/

#ifndef BOMBYX_H_
#define BOMBYX_H_

#include "my.h"
#include "my_printf.h"
#include "get_next_line.h"

#define USAGE ("sources/README")

int bombyx(int ac, char **av);
bool parser(int ac, char **av);
void compute_no_range(char **av);
void compute_range(char **av);

#endif /* 106BOMBYX_H_ */
