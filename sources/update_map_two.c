/*
** EPITECH PROJECT, 2022
** create_map.c
** File description:
** create map for the game
*/

#include "my.h"
#include "string.h"
#include <ncurses.h>

static int key_up(game_t *game, int key)
{
    if (game->map[game->y_player - 1][game->x_player] == 'X' &&
    game->map[game->y_player - 2][game->x_player] == 'O') {
        game->map[game->y_player][game->x_player] = ' ';
        game->map[game->y_player - 2][game->x_player] = 'X';
        game->map[game->y_player - 1][game->x_player] = 'P';
        game->y_player -= 1;
        return 1;
    }
    if (game->map[game->y_player - 1][game->x_player] == ' ') {
        game->map[game->y_player][game->x_player] = ' ';
        game->map[game->y_player - 1][game->x_player] = 'P';
        game->y_player -= 1;
        return 1;
    }
    return 0;
}

static int key_up_two(game_t *game, int key)
{
    if (game->map[game->y_player - 1][game->x_player] == 'O') {
        game->map[game->y_player][game->x_player] = ' ';
        game->map[game->y_player - 1][game->x_player] = 'P';
        game->y_player -= 1;
        return 1;
    }
    if (game->map[game->y_player - 1][game->x_player] == 'X' &&
    game->map[game->y_player - 2][game->x_player] == ' ') {
        game->map[game->y_player][game->x_player] = ' ';
        game->map[game->y_player - 2][game->x_player] = 'X';
        game->map[game->y_player - 1][game->x_player] = 'P';
        game->y_player -= 1;
        return 1;
    }
    return 0;
}

static int key_down(game_t *game, int key)
{
    if (game->map[game->y_player + 1][game->x_player] == 'X' &&
    game->map[game->y_player + 2][game->x_player] == 'O') {
        game->map[game->y_player][game->x_player] = ' ';
        game->map[game->y_player + 2][game->x_player] = 'X';
        game->map[game->y_player + 1][game->x_player] = 'P';
        game->y_player += 1;
        return 1;
    }
    if (game->map[game->y_player + 1][game->x_player] == ' ') {
        game->map[game->y_player][game->x_player] = ' ';
        game->map[game->y_player + 1][game->x_player] = 'P';
        game->y_player += 1;
        return 1;
    }
    return 0;
}

static int key_down_two(game_t *game, int key)
{
    if (game->map[game->y_player + 1][game->x_player] == 'O') {
        game->map[game->y_player][game->x_player] = ' ';
        game->map[game->y_player + 1][game->x_player] = 'P';
        game->y_player += 1;
        return 1;
    }
    if (game->map[game->y_player + 1][game->x_player] == 'X' &&
    game->map[game->y_player + 2][game->x_player] == ' ') {
        game->map[game->y_player][game->x_player] = ' ';
        game->map[game->y_player + 2][game->x_player] = 'X';
        game->map[game->y_player + 1][game->x_player] = 'P';
        game->y_player += 1;
        return 1;
    }
    return 0;
}

void update_map_two(game_t *game, int key)
{
    if (key == KEY_UP &&
    game->map[game->y_player - 1][game->x_player] != '#') {
        if (!key_up(game, key))
            key_up_two(game, key);
    }
    if (key == KEY_DOWN &&
    game->map[game->y_player + 1][game->x_player] != '#') {
        if (!key_down(game, key))
            key_down_two(game, key);
    }
}
