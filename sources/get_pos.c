/*
** EPITECH PROJECT, 2022
** get_pos.c
** File description:
** get positions of player and box
*/

#include "my.h"
#include "string.h"

static void player_pos_conditions(game_t *game, int y, int x)
{
    if (game->map[y][x] == 'P') {
        game->y_player = y;
        game->x_player = x;
    }
}

void all_pos(game_t *game)
{
    for (int y = 0; game->map[y] != NULL; y++) {
        for (int x = 0; game->map[y][x] != '\0'; x++) {
            player_pos_conditions(game, y, x);
        }
    }
}
