/*
** EPITECH PROJECT, 2022
** calc_size_file.c
** File description:
** calc size of a file
*/

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int calc_size(char const *buff)
{
    struct stat buf;

    if (stat(buff, &buf) == -1)
        return -1;
    return (ssize_t)buf.st_size;
}
