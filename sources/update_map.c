/*
** EPITECH PROJECT, 2022
** create_map.c
** File description:
** create map for the game
*/

#include "my.h"
#include "string.h"
#include <ncurses.h>

static int key_right(game_t *game, int key)
{
    if (game->map[game->y_player][game->x_player + 1] == 'X' &&
    game->map[game->y_player][game->x_player + 2] == 'O') {
        game->map[game->y_player][game->x_player] = ' ';
        game->map[game->y_player][game->x_player + 1] = 'P';
        game->map[game->y_player][game->x_player + 2] = 'X';
        game->x_player += 1;
        return 1;
    }
    if (game->map[game->y_player][game->x_player + 1] == 'X' &&
    game->map[game->y_player][game->x_player + 2] == ' ') {
        game->map[game->y_player][game->x_player] = ' ';
        game->map[game->y_player][game->x_player + 1] = 'P';
        game->map[game->y_player][game->x_player + 2] = 'X';
        game->x_player += 1;
        return 1;
    }
    return 0;
}

static int key_right_two(game_t *game, int key)
{
    if (game->map[game->y_player][game->x_player + 1] == 'O') {
        game->map[game->y_player][game->x_player] = ' ';
        game->map[game->y_player][game->x_player + 1] = 'P';
        game->x_player += 1;
        return 1;
    }
    if (game->map[game->y_player][game->x_player + 1] == ' ') {
        game->map[game->y_player][game->x_player] = ' ';
        game->map[game->y_player][game->x_player + 1] = 'P';
        game->x_player += 1;
        return 1;
    }
    return 0;
}

static int key_left(game_t *game, int key)
{
    if (game->map[game->y_player][game->x_player - 1] == 'X' &&
    game->map[game->y_player][game->x_player - 2] == 'O') {
        game->map[game->y_player][game->x_player] = ' ';
        game->map[game->y_player][game->x_player - 1] = 'P';
        game->map[game->y_player][game->x_player - 2] = 'X';
        game->x_player -= 1;
        return 1;
    }
    if (game->map[game->y_player][game->x_player - 1] == 'X' &&
    game->map[game->y_player][game->x_player - 2] == ' ') {
        game->map[game->y_player][game->x_player] = ' ';
        game->map[game->y_player][game->x_player - 1] = 'P';
        game->map[game->y_player][game->x_player - 2] = 'X';
        game->x_player -= 1;
        return 1;
    }
    return 0;
}

static int key_left_two(game_t *game, int key)
{
    if (game->map[game->y_player][game->x_player - 1] == 'O') {
        game->map[game->y_player][game->x_player] = ' ';
        game->map[game->y_player][game->x_player - 1] = 'P';
        game->x_player -= 1;
        return 1;
    }
    if (game->map[game->y_player][game->x_player - 1] == ' ') {
        game->map[game->y_player][game->x_player] = ' ';
        game->map[game->y_player][game->x_player - 1] = 'P';
        game->x_player -= 1;
        return 1;
    }
    return 0;
}

void update_map(game_t *game, int key)
{
    if (key == KEY_RIGHT &&
    game->map[game->y_player][game->x_player + 1] != '#') {
        if (!key_right(game, key))
            key_right_two(game, key);
    }
    if (key == KEY_LEFT &&
    game->map[game->y_player][game->x_player - 1] != '#') {
        if (!key_left(game, key))
            key_left_two(game, key);
    }
}
