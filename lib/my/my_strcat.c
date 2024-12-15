/*
** EPITECH PROJECT, 2021
** my_strcat
** File description:
** ??
*/

#include <stdlib.h>

int my_strlen(char const *str);

char *my_strcat(char *dest, char const *src)
{
    int i = 0;
    int a = 0;
    char *str = malloc(sizeof(char) * (my_strlen(dest) + my_strlen(src) + 1));

    for (; dest[i] != '\0'; i++)
        str[i] = dest[i];
    for (; src[a] != '\0'; i++) {
        str[i] = src[a];
        a++;
    }
    str[i] = '\0';
    return (str);
}
