/*
** EPITECH PROJECT, 2023
** chocolatine
** File description:
** unit_tests.c
*/

#include "my.h"

Test(check_basic_test, should_return_zero)
{
    int argc = 0;
    char **argv = NULL;

    cr_assert(manage_errors(argc, argv) == 0, "Error cases for main function");
}

