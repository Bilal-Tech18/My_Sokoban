/*
** EPITECH PROJECT, 2022
** create_map.c
** File description:
** create my map
*/

#include "my.h"

int create_map(game_t *game, char **av)
{
    if (open_and_read(game, av) == 84)
        return 84;
    game->map = my_str_to_word_array(game->buff);
    game->map_init = my_str_to_word_array(game->buff);
    init_variable(game);
    loop_for_error(game);
    map_open(game);
    return 0;
}
