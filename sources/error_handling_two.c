/*
** EPITECH PROJECT, 2022
** error_handling_two.c
** File description:
** error handling
*/

#include "my.h"
#include "string.h"

void check_map_open(game_t *game, int y, int x)
{
    int len_y = 0;
    int len_x = 0;

    for (; game->map[len_y]; len_y++);
    if (game->map[0][x] != '#' || game->map[y][0] != '#')
        game->error++;
    if (game->map[len_y - 1][x] != '#')
        game->error++;
}

void check_the_o(game_t *game, int y, int x)
{
    if (game->map_init[y][x] == 'O' && game->map[y][x] == ' ')
        game->map[y][x] = 'O';
}

void loop_for_o(game_t *game)
{
    for (int y = 0; game->map[y] != NULL; y++) {
        for (int x = 0; game->map[y][x] != '\0'; x++) {
            check_the_o(game, y, x);
        }
    }
}

void map_open(game_t *game)
{
    for (int i = 0; game->buff[i] != '\0'; i++) {
        if (game->buff[i] == '\n' && game->buff[i - 1] != '#')
            game->error++;
    }
}
