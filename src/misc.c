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
        if (getDistance(player, obj) == distHere && obj == guard)
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

DISTANCE getDistance(OBJECT *from, OBJECT *to)
{
    return to == NULL ? distUnknownObject :
           to == from ? distSelf :
           to->location == from ? distHeld :
           to == from->location ? distLocation :
           to->location == from->location ? distHere :
           getPassage(from->location, to) != NULL ? distNotHere :
           to->location == NULL ? distNotHere :
           to->location->location == from ? distHeldContained :
           to->location->location == from->location ? distHereContained :
           distNotHere;
}
