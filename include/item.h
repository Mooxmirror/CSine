#ifndef _CSINE_ITEM_H
#define _CSINE_ITEM_H

typedef struct Item_object Item_object;
typedef Item_object* Item;

struct Item_object {
  void* data;
}

Item item(void*);
void* value(Item);

#endif
