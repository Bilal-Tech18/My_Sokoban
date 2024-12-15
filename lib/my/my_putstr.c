/*
** EPITECH PROJECT, 2021
** my_putstr
** File description:
** ??
*/

#include <unistd.h>

int my_putchar(char c);

int my_putstr(char const *str)
{
    int z = 0;
    while (str[z] != '\0') {
        my_putchar(str[z]);
        z = z + 1;
    }
}
