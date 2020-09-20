//
// Created by blair on 18/09/2020.
//

#ifndef TEXT_ADVENTURE_OBJECT_H
#define TEXT_ADVENTURE_OBJECT_H

typedef struct object
{
    const char *description;
    const char *tag;
    struct object *location;
    struct object *destination;
} OBJECT;

extern OBJECT objs[];

#define field       (objs + 0)
#define cave        (objs + 1)
#define silver      (objs + 2)
#define gold        (objs + 3)
#define guard       (objs + 4)
#define player      (objs + 5)
#define intoCave    (objs + 6)
#define exitCave    (objs + 7)

#define endOfObjs   (objs + 8)


#endif //TEXT_ADVENTURE_OBJECT_H
