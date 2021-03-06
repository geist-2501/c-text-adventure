//
// Created by blair on 18/09/2020.
//

#include "../include/inventory.h"

#include <stdio.h>
#include "../include/object.h"
#include "../include/misc.h"
#include "../include/noun.h"
#include "../include/move.h"

void executeGet(const char *noun)
{
    OBJECT *obj = getVisible("what you want to get", noun);

    switch (getDistance(player, obj))
    {
        case distSelf:
            printf("You should not be doing that to %s!\n", obj->description);
            break;
        case distHeld:
            printf("You already have %s.\n", obj->description);
            break;
        case distOverThere:
            printf("Too far away, move closer.\n");
            break;
        case distUnknownObject:
            // Already handled by getVisible()
            break;
        default:
            if (obj->location == guard)
            {
                printf("Ask should ask %s nicely first.\n", obj->location->description);
            }
            else
            {
                moveObject(obj, player);
            }
    }
}

void executeDrop(const char *noun)
{
    moveObject(getPossession(player, "drop", noun), player->location);
}

void executeAsk(const char *noun)
{
    moveObject(getPossession(actorHere(), "ask", noun), player);
}

void executeGive(const char *noun)
{
    moveObject(getPossession(player, "give", noun), actorHere());
}

void executeInventory(void)
{
    if (listObjectsAtLocation(player) == 0)
    {
        printf("You are empty-handed.");
    }
}




