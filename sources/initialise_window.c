/*
** EPITECH PROJECT, 2022
** initialise_window.c
** File description:
** initialise a window
*/

#include "my.h"
#include "ncurses.h"
#include "string.h"
#include <stdlib.h>

void create_window(game_t *game, char **av)
{
    initscr();
    noecho();
    all_pos(game);
    keypad(stdscr, TRUE);
}
