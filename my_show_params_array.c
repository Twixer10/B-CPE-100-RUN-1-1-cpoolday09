/*
** EPITECH PROJECT, 2020
** MY SHOW PARAMS ARRAY
** File description:
** NO DESCRIPTION FOUND
*/

#include <unistd.h>
#include "./include/my.h"

int my_show_param_array(struct info_param const *par)
{
    int i = 0;

    while (par[i]->str) {
        my_putstr(par[i]->lenght);
        my_putchar('\n');
        my_put_nbr(par[i]->str);
        my_putchar('\n');
        my_putstr(par[i]->copy);
        my_putchar('\n')
        my_show_word_array(par[i]->word_array);
        my_putchar('\n');
        i = i + 1;
    }
    return (0);
}
