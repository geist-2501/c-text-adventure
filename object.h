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
} OBJECT;

extern OBJECT objs[];

#define field       (objs + 0)
#define cave        (objs + 1)
#define silver      (objs + 2)
#define gold        (objs + 3)
#define guard       (objs + 4)
#define player      (objs + 5)

#define endOfObjs   (objs + 6)


#endif //TEXT_ADVENTURE_OBJECT_H
