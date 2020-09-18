//
// Created by blair on 18/09/2020.
//

#include <stdio.h>
#include <string.h>
#include "location.h"
#include "object.h"
#include "misc.h"
#include "noun.h"

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
    if (obj == NULL)
    {
        // Already handled.
    }
    else if (obj->location == NULL && obj != player->location)
    {
        printf("OK.\n");
        player->location = obj;
        executeLook("around");
    }
    else
    {
        printf("Already there.\n");
    }

}
