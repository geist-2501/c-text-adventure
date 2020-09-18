//
// Created by blair on 18/09/2020.
//

#include "object.h"

#ifndef TEXT_ADVENTURE_NOUN_H
#define TEXT_ADVENTURE_NOUN_H

extern OBJECT *getVisible(const char *intention, const char *noun);
extern OBJECT *getPossession(OBJECT *from, const char *verb, const char *noun);

#endif //TEXT_ADVENTURE_NOUN_H
