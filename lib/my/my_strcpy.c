/*
** EPITECH PROJECT, 2022
** my_strcpy.c
** File description:
** copy a str
*/

char *my_strcpy(char *dest, char *src)
{
    int i = 0;

    while (src[i])
        dest[i] = src[i++];
    dest[i] = '\0';
    return (dest);
}
