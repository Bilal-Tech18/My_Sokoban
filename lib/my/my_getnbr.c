/*
** EPITECH PROJECT, 2021
** my_getnbr
** File description:
** ??
*/

int my_getnbr(char *str)
{
    int res = 0;
    int neg = 1;
    int i = 0;

    while (str[i] == '-' || str[i] == '+') {
        if (str[i] == '-')
            neg *= -1;
        i++;
    }
    while (str[i] >= '0' && str[i] <= '9') {
        res = res * 10;
        res += str[i] - '0';
        i++;
    }
    return (res * neg);
}
