/*
** EPITECH PROJECT, 2022
** open_and_read.c
** File description:
** open and read file
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include "my.h"

int fs_open_file(char const *filepath)
{
    int res = 0;

    res = open(filepath, O_RDONLY);
    if (res == -1)
        return (84);
    else
        return (res);
}

int fs_understand_return_of_read(int fd, char *buffer, int size)
{
    int value = 0;

    value = read(fd, buffer, size);
    if (value == -1) {
        return (84);
    }
    if (value == 0) {
        return (84);
    }
    if (value < size) {
        return (84);
    }
    if (value == size)
        return (0);
}

int open_and_read(game_t *game, char **av)
{
    int fd = 0;
    int size_files = calc_size(av[1]);
    game->buff = malloc(sizeof(char) * (size_files + 1));
    fd = fs_open_file(av[1]);
    if (fd == 84)
        return 84;
    if (fs_understand_return_of_read(fd, game->buff, size_files) == 0)
        return 0;
    else
        return 84;
}
