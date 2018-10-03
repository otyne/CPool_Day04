/*
** EPITECH PROJECT, 2018
** my evil str
** File description:
** swap letters in a string
*/

#include "my.h"

char *my_evil_str(char *str)
{
    int i = 0;
    int end = my_strlen(str) - 1;
    char tmp;

    while (i < end) {
        tmp = str[i];
        str[i] = str[end];
        str[end] = tmp;
        i += 1;
        end -= 1;
    }
    return (str);
}
