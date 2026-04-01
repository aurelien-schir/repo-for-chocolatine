/*
** EPITECH PROJECT, 2025
** test-choco
** File description:
** my_strlen.c
*/

int my_strlen(char const *string)
{
    int len = 0;

    while (string[len] != 0) {
        len++;
    }
    return len;
}
