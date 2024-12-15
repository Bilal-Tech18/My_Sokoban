/*
** EPITECH PROJECT, 2022
** loop_in_main.c
** File description:
** this loop make the game
*/

#include "my.h"
#include "ncurses.h"
#include <unistd.h>

int loop_in_game(game_t *game, int key)
{
    while (key != 'q' && key != 27) {
        update_map(game, key);
        update_map_two(game, key);
        loop_for_o(game);
        print_the_map(game);
        if (!loop_for_count_o(game)) {
            print_the_map(game);
            refresh();
            clear();
            return 0;
        }
        if (loop_for_lose(game) == 0) {
            print_the_map(game);
            refresh();
            clear();
            return 1;
        }
        key = getch();
    }
    return 0;
}
