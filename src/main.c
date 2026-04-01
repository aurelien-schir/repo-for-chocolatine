/*
** EPITECH PROJECT, 2025
** test-choco
** File description:
** main.c
*/

#include "my.h"

int main(int argc, char **argv)
{
    if (argc > 1 && argv[1][0] == '-'
        && argv[1][1] == '4' && argv[1][2] == '2') {
        write(1, "Vive la piscine !\n", my_strlen("Vive la piscine !\n"));
        return 0;
    }
    write(1, "Vive Epitech !\n", my_strlen("Vive Epitech !\n"));
    return 0;
}
