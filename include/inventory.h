//
// Created by blair on 18/09/2020.
//

#ifndef TEXT_ADVENTURE_INVENTORY_H
#define TEXT_ADVENTURE_INVENTORY_H

extern void executeGet(const char *noun);
extern void executeDrop(const char *noun);
extern void executeAsk(const char *noun);
extern void executeGive(const char *noun);
extern void executeInventory(void);

#endif //TEXT_ADVENTURE_INVENTORY_H
