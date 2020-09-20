//
// Created by blair on 18/09/2020.
//

#include "object.h"

#ifndef TEXT_ADVENTURE_MISC_H
#define TEXT_ADVENTURE_MISC_H

typedef enum
{
    distSelf,
    distHeld,
    distHeldContained,
    distLocation,
    distHere,
    distHereContained,
    distOverThere,
    distNotHere,
    distUnknownObject
} DISTANCE;

extern int listObjectsAtLocation(OBJECT *location);
extern OBJECT *actorHere(void);
extern OBJECT *getPassage(OBJECT *from, OBJECT *to);
extern DISTANCE getDistance(OBJECT *from, OBJECT *to);

#endif //TEXT_ADVENTURE_MISC_H
