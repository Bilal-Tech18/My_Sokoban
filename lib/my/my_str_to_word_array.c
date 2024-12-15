/*
** EPITECH PROJECT, 2021
** my_str_to_word_array.c
** File description:
** my_str_to_word_array
*/

#include <unistd.h>
#include <sys/types.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>

void my_putchar(char c);
int my_strlen(char const *str);

int verif(char c)
{
    if (c == '\t' || c == '\n' || c == '\0')
        return (1);
    return (0);
}

int count_word(char const *str)
{
    int count_word = 0;
    int i = 0;

    for (; str[i] != '\0'; i++) {
        if (str[i] == '\t' || str[i] == '\n')
            i++;
        if (verif(str[i]) == 0 && verif(str[i + 1]) == 1)
            count_word++;
    }
    count_word++;
    return (count_word);
}

char **size_array(char const *str)
{
    int i = 0;
    int c = 0;
    int y = 0;
    char **array = malloc(sizeof(char *) * count_word(str));

    for (; str[i] == '\n' || str[i] == '\t'; i++);
    for (; str[i] != '\0' && y != count_word(str); i++) {
        if (verif(str[i]) == 0)
            c++;
        else if (verif(str[i - 1]) == 0) {
            array[y] = malloc(sizeof(char) * (c + 1));
            c = 0;
            y++;
        }
    }
    if (verif(str[i]) == 1 && y != count_word(str)) {
        array[y] = malloc(sizeof(char) * (c + 1));
        y++;
    }
    return (array);
}

char **my_str_to_word_array(char const *str)
{
    int i = 0;
    int x = 0;
    int y = 0;
    char **array = size_array(str);

    for (; str[i] == '\n' || str[i] == '\t'; i++);
    for (; str[i] != '\0'; i++) {
        if (verif(str[i]) == 1) {
            array[y][x] = '\0';
            if (verif(str[i + 1]) == 0) {
                y++;
                x = 0;
            }
        } else {
            array[y][x] = str[i];
            x++;
        }
    }
    array[y][x] = '\0';
    array[y + 1] = NULL;
    return (array);
}
