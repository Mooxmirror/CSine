/*
A Stack structure implementation
(c) 2015 mooxmirror
*/

#include "stack.h"

/*
Initializes a new empty stack.
*/
Stack * Stack_create()
{
	Stack * s = (Stack *) malloc(sizeof(Stack));
	s->top = NULL;
	return s;
}

/*
Frees the memory and destroys the reference.
*/
void Stack_destroy(Stack * s)
{
	Stack_item * current = s->top;
	while (current != NULL) {
		Stack_item * next = current->next;
		free(current);
		current = next;
	}
	free(s);
}

/*
Peeks the top value from the stack. Does not remove the item.
*/
Stack_value Stack_peek(Stack * s)
{
	Stack_item * top = s->top;
	if (top != NULL)
		return top->value;
	
	return STACK_VALUE_NULL;
}
/*
Pulls the top value from the stack. Removes the item.
*/
Stack_value Stack_pull(Stack * s)
{
	Stack_item * top = s->top;
	
	if (top != NULL)
	{
		Stack_value value = top->value;
		Stack_item * tmp = top->next;
		s->top = tmp;
		free(top);
		
		return value;
	}
	
	return STACK_VALUE_NULL;
}

/*
Puts the value onto the stack.
*/
void Stack_put(Stack * s, Stack_value value)
{
	Stack_item * top = s->top;
	Stack_item * next = malloc(sizeof(Stack_item));
	next->value = value;
	next->next = top;
	s->top = next;
}

/*
Returns true if the top item is NULL.
*/
bool Stack_empty(Stack * s)
{
	return s->top == NULL;
}