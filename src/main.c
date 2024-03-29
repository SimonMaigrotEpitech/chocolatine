/*
** EPITECH PROJECT, 2023
** chocolatine
** File description:
** main.c
*/

#include "my.h"

int manage_errors(int argc, char **argv)
{
    if (argc != 1 || argv == NULL)
        return KO;
    return OK;
}

int main(const int argc, char **argv)
{
    return manage_errors(argc, argv);
}
