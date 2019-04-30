/*
** EPITECH PROJECT, 2019
** my_rpg
** File description:
** quest system
*/

#include "my_rpg.h"

void quest(game_t *game, object_t *obj)
{
    if (obj->quest == 1)
        sfRenderWindow_drawSprite(game->window, obj[37].spr, NULL);
    if (obj->quest == 3)
        sfRenderWindow_drawSprite(game->window, obj[38].spr, NULL);
    if (obj->quest == 5)
        sfRenderWindow_drawSprite(game->window, obj[39].spr, NULL);
    //printf("x = %d\n | y = %d\n", game->pos_x, game->pos_y);
}

void dialogue(game_t *game, object_t *obj)
{
    if (obj->quest == 2)
        sfRenderWindow_drawSprite(game->window, obj[40].spr, NULL);
    if (game->pos_x == 27 && game->pos_y == 94
        && sfKeyboard_isKeyPressed(sfKeyE) && obj->quest == 2)
        obj->quest = 3;
    if (game->pos_x == 19 && game->pos_y == 47
        && sfKeyboard_isKeyPressed(sfKeyE) && obj->quest == 4)
        obj->quest = 5;
    if (obj->quest == 4)
        sfRenderWindow_drawSprite(game->window, obj[41].spr, NULL);
}
