#ifndef _CSINE_QUEUE_H
#define _CSINE_QUEUE_H

#include <stdbool.h>
#include "item.h"

typedef struct Queue_object Queue_object;
typedef Queue_object* Queue;

struct Queue_object {
  void *(destroy)(Queue);
  void *(append)(Queue, Item);
  Item *(shift)(Queue);
  Item *(next)(Queue);
  bool *(empty)(Queue);
  int *(size)(Queue);
};

Queue queue();
void Queue_destroy(Queue);
void Queue_append(Queue, Item);
Item Queue_shift(Queue);
Item Queue_next(Queue);
bool Queue_empty(Queue);
int Queue_size(Queue);

#endif
