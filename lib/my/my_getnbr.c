/*
** EPITECH PROJECT, 2019
** lol
** File description:
** lolilil
*/

int my_getnbr(char const *str)
{
    int i;
    int n;

    i = 0;
    n = 0;
    if (str[0] == '-' && str[1] != '\0')
        i++;
    while (str[i] != '\0')
    {
        if ((str[i] < '0' || str[i] > '9'))
            my_error("There must be only numbers in the string");
            n = n + str[i] - 48;
            n = n * 10;
            i++;
    }
    n /= 10;
    if (str[0] == '-') {
        return (-1 * n);
        else
            return (n);

    }
}
