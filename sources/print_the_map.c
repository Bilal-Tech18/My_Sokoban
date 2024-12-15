/*
** EPITECH PROJECT, 2022
** print_the_map.c
** File description:
** print my map
*/

#include "my.h"
#include "ncurses.h"
#include "string.h"

void print_the_map(game_t *game)
{
    int key = 0;
    int height = 0;
    int width = 0;
    int len = 0;

    for (; game->map[len] != NULL; len++);
    getmaxyx(stdscr, height, width);
    for (int i = 0; game->map[i] != NULL; i++, len--) {
        mvprintw(height / 2 - len, (width - my_strlen(game->map[0])) / 2,
        "%s\n", game->map[i]);
    }
}
