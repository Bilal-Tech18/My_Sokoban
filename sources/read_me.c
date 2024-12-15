/*
** EPITECH PROJECT, 2022
** read_me.c
** File description:
** read_me
*/

#include "my.h"

void read_me(void)
{
    my_putstr("USAGE\n     ./my_sokoban map\n");
    my_putstr("DESCRIPTION\n     map  file representing");
    my_putstr(" the warehouse map, containing '#'");
    my_putstr(" for walls,\n          'P' for the player, ");
    my_putstr("'X' for boxes and 'O' for storage locations.\n");
}
