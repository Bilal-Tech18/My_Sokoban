/*
** EPITECH PROJECT, 2022
** for_the_lose.c
** File description:
** for the lose
*/

#include "my.h"
#include "string.h"

void condition_lose(game_t *game, int y, int x)
{
    if (game->map[y][x] == 'X' && game->map[y - 1][x] == '#' &&
    game->map[y][x + 1] == '#')
        game->nbr_x--;
    if (game->map[y][x] == 'X' && game->map[y - 1][x] == '#' &&
    game->map[y][x - 1] == '#')
        game->nbr_x--;
    if (game->map[y][x] == 'X' && game->map[y + 1][x] == '#' &&
    game->map[y][x - 1] == '#')
        game->nbr_x--;
    if (game->map[y][x] == 'X' && game->map[y + 1][x] == '#' &&
    game->map[y][x + 1] == '#')
        game->nbr_x--;
}

int loop_for_lose(game_t *game)
{
    game->nbr_x = game->nbr_box;
    for (int y = 0; game->map[y] != NULL; y++) {
        for (int x = 0; game->map[y][x] != '\0'; x++) {
            condition_lose(game, y, x);
        }
    }
    if (game->nbr_x == 0)
        return 0;
    else
        return 1;
}
