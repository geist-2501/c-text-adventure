//
// Created by blair on 18/09/2020.
//

#include "../include/move.h"

#include <stdio.h>

void moveObject(OBJECT *obj, OBJECT *to)
{
    if (obj == NULL)
    {
        // already handled.
    }
    else if (to == NULL)
    {
        printf("There is no-one to give that to.\n");
    }
    else if (obj->location == NULL)
    {
        printf("Are you serious? You're not that strong!\n");
    }
    else
    {
        if (to == player->location)
        {
            printf("You drop %s.\n", obj->description);
        }
        else if (to != player)
        {
            // For now, check if actor - which is only a guard.
            printf(to == guard ? "You give %s to %s.\n" : "You put %s in %s.\n", obj->description, to->description);
        }
        else if (obj->location == player->location)
        {
            printf("You pick up %s.\n", obj->description);
        }
        else
        {
            printf("You get %s from %s.\n", obj->description, obj->location->description);
        }

        obj->location = to;
    }

}
