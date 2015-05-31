/*
A stack structure implementation
(c) 2015 mooxmirror
*/

#ifndef STACK_H
#define STACK_H

#include <stdlib.h>
#include <stdio.h>

#define STACK_TYPE int
#define STACK_VALUE_NULL 0

typedef struct Stack Stack;
typedef struct Stack_item Stack_item;
typedef STACK_TYPE Stack_value;

struct Stack
{
	Stack_item * top;
};
struct Stack_item
{
	Stack_value value;
	Stack_item * next;
};

Stack * 	Stack_create();
void		Stack_destroy(Stack * s);
Stack_value 	Stack_peek(Stack * s);
Stack_value 	Stack_pull(Stack * s);
void 		Stack_put(Stack * s, Stack_value v);
int		Stack_empty(Stack * s);

#endif