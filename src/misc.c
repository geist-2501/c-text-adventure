//
// Created by blair on 18/09/2020.
//

#include "../include/misc.h"
#include <stdio.h>

int listObjectsAtLocation(OBJECT *location)
{
    int count = 0;
    OBJECT *obj;
    for (obj = objs; obj < endOfObjs; obj++)
    {
        if (obj != player && obj->location == location)
        {
            if (count++ == 0)
            {
                printf("You see:\n");
            }

            printf("%s\n", obj->description);
        }
    }

    return count;
}

OBJECT *actorHere(void)
{
    OBJECT *obj = NULL;
    for(obj = objs; obj < endOfObjs; obj++)
    {
        if (obj->location == player->location && obj == guard)
        {
            return obj;
        }
    }

    return NULL;
}

OBJECT *getPassage(OBJECT *from, OBJECT *to)
{
    OBJECT* obj;
    for (obj = objs; obj < endOfObjs; obj++)
    {
        if (obj->location == from && obj->destination == to)
        {
            return obj;
        }
    }

    return NULL;
}
