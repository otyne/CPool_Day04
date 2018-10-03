/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main.c
*/

#include "my.h"
#include <stdlib.h>
#include <stdio.h>

int main (char ac, char **av)
{
    int array[9] = {20, 21, 87, 67, 70, 81, 15, 10, 5};

    my_sort_int_array(array, 9);
    for (int i = 0; i != 9; i ++)
        printf(".%i.", array[i]);
}
