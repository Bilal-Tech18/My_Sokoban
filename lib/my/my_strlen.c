/*
** EPITECH PROJECT, 2021
** my_strlen
** File description:
** returns_the_number_of_characters_found
*/

#include <unistd.h>

int my_strlen(char const *str)
{
    int z = 0;
    while (str[z] != '\0') {
        z = z + 1;
    }
    return (z);
}
