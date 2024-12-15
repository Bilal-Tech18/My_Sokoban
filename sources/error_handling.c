/*
** EPITECH PROJECT, 2022
** error_handling.c
** File description:
** error handling
*/

#include "my.h"
#include "string.h"

int no_map(int ac)
{
    if (ac != 2)
        return (84);
}

void init_variable(game_t *game)
{
    game->nbr_site = 0;
    game->nbr_box = 0;
    game->error = 0;
    game->nbr_p = 0;
}

void count_o_and_x(game_t *game, int y, int x)
{
    if (game->map[y][x] == 'O')
        game->nbr_site++;
    if (game->map[y][x] == 'X')
        game->nbr_box++;
    if (game->map[y][x] == 'P')
        game->nbr_p++;
}

int all_error(game_t *game)
{
    if (game->nbr_site != game->nbr_box)
        return 84;
    if (game->error != 0)
        return 84;
    if (game->nbr_p != 1)
        return 84;
}

void loop_for_error(game_t *game)
{
    for (int y = 0; game->map[y] != NULL; y++) {
        for (int x = 0; game->map[y][x] != '\0'; x++) {
            count_o_and_x(game, y, x);
            check_map_open(game, y, x);
        }
    }
}
