//
// Created by blair on 18/09/2020.
//

#include "inventory.h"

#include <stdio.h>
#include "object.h"
#include "misc.h"
#include "noun.h"
#include "move.h"

void executeGet(const char *noun)
{
    OBJECT *obj = getVisible("what you want to get", noun);
    if (obj == NULL)
    {
        // already handled.
    }
    else if (obj == player || obj == guard)
    {
        printf("You should not be doing that to %s!\n", obj->description);
    }
    else if (obj->location == player)
    {
        printf("You already have %s.\n", obj->description);
    }
    else if (obj->location == guard)
    {
        printf("Ask should ask %s nicely first.\n", obj->location->description);
    }
    else
    {
        moveObject(obj, player);
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




