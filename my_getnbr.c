/*
** EPITECH PROJECT, 2018
** my get nbr 
** File description:
** get the number in a string
*/

#include <limits.h>

static int get_sign(char const **str)
{
    int mul = 1;
    
    while (*str[0] == '-' || *str[0] == '+') {
        if (*str[0] == '-')
            mul *= -1;
        *str += 1;
    }
    return (mul);
}

int my_getnbr(char const *str)
{
    int mul = get_sign(&str);
    int ret = 0;
    int i = 0;

    while (str[i] >= '0'  && str[i] <= '9') {
        if (mul == 1 && (INT_MAX / 10 <= ret && INT_MAX % 10 < str[i] - '0'))
            return (0);
        else if (mul == -1 &&
                (INT_MIN / -10 <= ret && INT_MIN % 10 * -1 < str[i] - '0'))
            return (0);
        else
            ret = ret * 10 + str[i] - '0';            
        i += 1;
    }
    return (ret * mul);
}
