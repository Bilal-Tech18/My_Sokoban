/*
** EPITECH PROJECT, 2022
** fo_the_win.c
** File description:
** fo_the_win
*/

#include "my.h"
#include "string.h"

static int count_o(game_t *game, int y, int x)
{
    if (game->map_init[y][x] == 'O' && game->map[y][x] != 'X')
        game->nbr_site++;
    return 0;
}

int loop_for_count_o(game_t *game)
{
    game->nbr_site = 0;
    for (int y = 0; game->map[y] != NULL; y++) {
        for (int x = 0; game->map[y][x] != '\0'; x++) {
            count_o(game, y, x);
        }
    }
    if (game->nbr_site == 0)
        return 0;
    else
        return 1;
}
