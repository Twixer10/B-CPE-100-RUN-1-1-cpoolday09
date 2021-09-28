/*
** EPITECH PROJECT, 2020
** GET COLOR
** File description:
** NO DESCRIPTION FOUND
*/

int get_color(unsigned char red, unsigned char green, unsigned char blue)
{
    return (((red & 255) << 16) |
            ((green & 255) << 8) |
            ((blue & 255) << 0));
}
