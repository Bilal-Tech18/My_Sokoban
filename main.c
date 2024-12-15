/*
** EPITECH PROJECT, 2022
** main.c
** File description:
** main.c
*/

#include "include/my.h"
#include "ncurses.h"
#include "string.h"
#include <stdlib.h>

int main(int ac, char **av)
{
    game_t game;
    int key = 0;

    if (no_map(ac) == 84) {
        return (84);
    }
    if (av[1][0] == '-' && av[1][1] == 'h') {
        read_me();
        return (0);
    }
    create_map(&game, av);
    if (all_error(&game) == 84)
        return (84);
    create_window(&game, av);
    if (!loop_in_game(&game, key)) {
        endwin();
        return 0;
    } else {
        endwin();
        return 1;
    }
}
