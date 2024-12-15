/*
** EPITECH PROJECT, 2022
** my_strcmp.c
** File description:
** compare two str
*/

long my_strcmp(char const *str1, char const *str2)
{
    long i = 0;
    long k = 0;

    while (str1[i] != '\0')
        i++;
    while ((str1[k] == str2[k]) && (str2[k] != '\0'))
        k++;
    if (i == k)
        return (1);
    else
        return (0);
}
