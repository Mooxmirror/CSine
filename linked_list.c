#include "linked_list.h"

// Creates a new list
List * List_create()
{
	// Allocates the memory
	List * list_ptr = (List *) malloc(sizeof(List));
	
	// ERROR: Out of memory
	if (list_ptr == NULL) return NULL;
	
	// Sets the first element to NULL
	list_ptr->first = NULL;
	return list_ptr;
}

// Destroys the list and all memory allocations associated with it
void List_destroy(List * list_ptr)
{
	// Find first list  item
	List_item * item_ptr = list_ptr->first;
	// Iterate through list till everything is deleted
	while (item_ptr != NULL)
	{
		// Find next element and store it
		List_item * next_ptr = item_ptr->next;
		
		// Free the data if defined
		if (LIST_AUTOFREE) free(item_ptr->value);
		
		// Delete the current element
		free(item_ptr);
		// And set current element to next
		item_ptr = next_ptr;
	}
	// Delete the structure
	free(list_ptr);
}

// Adds the item to the list
unsigned List_add(List * list_ptr, List_value item_value)
{
	// Get the first item of the list
	List_item * item_ptr = list_ptr->first;
	
	// Allocate memory for new list item
	List_item * next_ptr = malloc(sizeof(List_item));
	
	// TODO: Out of memory !
	if (next_ptr == NULL) return 0u;
	
	// Initialize the values
	next_ptr->value = item_value;
	next_ptr->next = NULL;
	
	// if the list is empty ...
	if (item_ptr == NULL)
	{
		list_ptr->first = next_ptr;
		return 0u;
	}
	
	unsigned index = 1u;
	// Iterate till the end of the list
	while (item_ptr->next != NULL)
	{
		item_ptr = item_ptr->next;
		index++;
	}
	// Add item to the list
	item_ptr->next = next_ptr;
		
	return index;
}

// Returns the value of the list item
List_value List_get(List * list_ptr, unsigned index)
{
	// Get the first element of the list
	List_item * item_ptr = list_ptr->first;
	
	// Iterate until ...
	for (unsigned i = 0u; i < index; i++)
	{
		// if the index is larger than the list size
		if (item_ptr == NULL)
			// TODO: Cancel and return null
			return LIST_VALUE_NULL;
		item_ptr = item_ptr->next;
	}
	
	// ... the value is found!
	return item_ptr->value;
}

// Sets a specific item of the list to the defined value
void List_set(List * list_ptr, unsigned index, List_value item_value)
{
	// Get the first element
	List_item * item_ptr = list_ptr->first;
	
	// Iterate until ...
	for (unsigned i = 0u; i < index; i++)
	{
		// if the index is larger than the list size
		if (item_ptr == NULL)
			// TODO: Cancel and return
			return;
		item_ptr = item_ptr->next;
	}
	
	// the index is reached!
	item_ptr->value = item_value;
}

// Removes an item from the list
void List_remove(List * list_ptr, unsigned index)
{
	// Get the current item
	List_item * item_ptr = list_ptr->first;
	List_item * prev_ptr = NULL;
	
	// Iterate till ...
	for (unsigned i = 0u; i < index; i++)
	{
		// Cancel if the list size is smaller than the requested index
		if (item_ptr == NULL) return;
		prev_ptr = item_ptr;
		item_ptr = item_ptr->next;
	}
	// the item is found
	prev_ptr->next = item_ptr->next;
	
	// delete the item
	if (LIST_AUTOFREE) free(item_ptr->value);
	
	// delete the structure
	free(item_ptr);
}

// Calculates the size by iterating though it
unsigned List_size(List * list_ptr)
{
	// get the first item
	List_item * item_ptr = list_ptr->first;
	
	unsigned size = 0u;
	
	// Iterate till ...
	while (item_ptr != NULL)
	{
		size++;
		item_ptr = item_ptr->next;
	}
	// the end of the list is reached!
	return size;
}

// Returns if the list is empty
bool List_empty(List * list_ptr)
{
	return list_ptr->first == NULL;
}