/*
A Stack structure implementation
(c) 2015 mooxmirror
*/

#include "stack.h"

// Initializes a new empty stack.
Stack * Stack_create()
{
	// Allocate new stack memory
	Stack * stack_ptr = (Stack *) malloc(sizeof(Stack));
	
	// No memory available!
	if (stack_ptr == NULL) return;
	
	// Set first element to NULL
	stack_ptr->top = NULL;
	return stack_ptr;
}

// Frees the memory and destroys the reference.
void Stack_destroy(Stack * stack_ptr)
{
	// Get the first item
	Stack_item * item_ptr = stack_ptr->top;
	
	// Iterate till ...
	while (item_ptr != NULL) {
		// Get the next element
		Stack_item * next_ptr = item_ptr->next;
		
		// Clear the value pointer
		if (STACK_AUTOFREE) free(item_ptr->value);
		
		// Delete the current element
		free(item_ptr);
		
		// Set current element to next
		item_ptr = next_ptr;
	}
	// everything is deleted.
	free(stack_ptr);
}

// Peeks the top value from the stack. Does not remove the item.
Stack_value Stack_peek(Stack * stack_ptr)
{
	// Get the first item
	Stack_item * item_ptr = stack_ptr->top;
	
	// Return the value if it exists!
	if (item_ptr != NULL)
		return item_ptr->value;
	
	return STACK_VALUE_NULL;
}
// Pulls the top value from the stack. Removes the item.
Stack_value Stack_pull(Stack * stack_ptr)
{
	// Get the first element
	Stack_item * item_ptr = stack_ptr->top;
	
	// if the item exists!
	if (item_ptr != NULL)
	{
		// Get the value
		Stack_value value = item_ptr->value;
		
		// Save the next element
		Stack_item * tmp_ptr = item_ptr->next;
		
		// Take the current element from the top
		stack_ptr->top = tmp_ptr;
		
		// Delete it
		free(item_ptr);
		return value;
	}
	
	return STACK_VALUE_NULL;
}

// Puts the value onto the stack.
void Stack_push(Stack * stack_ptr, Stack_value value)
{
	// Get the first element
	Stack_item * item_ptr = stack_ptr->top;
	
	// Allocate a memory for the new item
	Stack_item * new_ptr = malloc(sizeof(Stack_item));

	// No memory!
	if (new_ptr == NULL) return;
	
	// Push the values
	new_ptr->value = value;
	new_ptr->next = item_ptr;
	
	// Put it on the top
	stack_ptr->top = new_ptr;
}

// Returns true if the top item is NULL.
bool Stack_empty(Stack * stack_ptr)
{
	return stack_ptr->top == NULL;
}