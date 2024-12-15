/*
** EPITECH PROJECT, 2022
** my_strncmp.c
** File description:
** my_strncmp
*/

int my_strncmp(char const *str1, char const *str2, int a)
{
    long i = 0;

    while (str1[i] == str2[i] && str1[i] && str2[i] && i < a) {
        i = i + 1;
    }
    if ((str1[i] == '\0' && str2[i] == '\0') || i == a) {
        return (0);
    } else if (str1[i] > str2[i])
        return (1);
    else
        return (-1);
}
