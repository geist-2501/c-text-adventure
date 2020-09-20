//
// Created by blair on 18/09/2020.
//

#include <stdio.h>
#include <string.h>
#include "../include/location.h"
#include "../include/object.h"
#include "../include/misc.h"
#include "../include/noun.h"

void executeLook(const char *noun)
{
    if (noun != NULL && strcmp(noun, "around") == 0)
    {
        printf("You are in %s.\n", player->location->description);
        listObjectsAtLocation(player->location);
    }
    else
    {
        printf("I don't understand what you want me to look at.\n");
    }
}

void executeGo(const char *noun)
{
    OBJECT *obj = getVisible("where you want to go", noun);
    switch (getDistance(player, obj))
    {
        case distOverThere:
            printf("OK.\n");
            player->location = obj;
            executeLook("around");
            break;
        case distNotHere:
            printf("You don't see any %s here.", noun);
            break;
        case distUnknownObject:
            // Already handled by getVisible.
            break;
        default:
            if (obj->destination != NULL)
            {
                printf("OK.\n");
                player->location = obj->destination;
                executeLook("around");
            }
            else
            {
                printf("You can't get much closer than this.\n");
            }
    }

}
