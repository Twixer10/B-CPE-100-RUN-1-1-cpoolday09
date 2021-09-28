/*
** EPITECH PROJECT, 2020
** MY PARAMS TO ARRAY
** File description:
** NO DESCRIPTION FOUND
*/

#include <stdlib.h>
#include "./include/my.h"

struct info_param *my_params_to_array(int ac , char **av)
{
    int i = 0;
    struct info_param **truc;
    truc = malloc(sizeof(struct info_param));
    
    if (truc == NULL)
        return (0);
    while (av[i])
    {
        truc[i]->malloc(sizeof(struct info_param));
        truc[i]->length = my_strlen(av[i]);
        truc[i]->str = av[i];
        truc[i]->copy = my_strcpy(truc[i]->copy, av[i]);
        truc[i]->word_array = my_str_to_word_array(av[i]);
        i = i + 1;
    }
    return (*truc);
}
