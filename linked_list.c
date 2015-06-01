#include "linked_list.h"

List * List_create()
{
	List * l = (List *) malloc(sizeof(List));
	l->first = NULL;
	l->size = 0;
	return l;
}

void * List_destroy(List * l)
{
	List_item * current = l->first;
	while (current != NULL)
	{
		List_item * next = current->next;
		free(current);
		current = next;
	}
	free(l);
}

unsigned List_add(List * l, List_value value)
{
	List_item * current = l->first;
	List_item * next = malloc(sizeof(List_item));
	next->value = value;
	next->next = NULL;
	
	if (current == NULL)
		current = next;
	else
	{
		while (current->next != NULL)
			current = current->next;
		current->next = next;
	}
	
	l->size++;
}

List_value List_get(List * l, unsigned index)
{
	List_item * current = l->first;
	for (unsigned i = 0u; i < index; i++)
	{
		if (current == NULL)
			return LIST_VALUE_NULL;
		current = current->next;
	}
		
	return current->value;
}

void List_set(List * l, unsigned index)
{
	List_item * current = l->first;
	for (unsigned i = 0u; i < index; i++)
	{
		if (current == NULL)
			return;
		current = current->next;
	}
	current->value = index;
}

void List_remove(List * l, unsigned index)
{
	List_item * previous = l->first;
	if (previous == NULL) return;
	else if (index == 0u)
	{
		previous = NULL;
		l->size--;
		return;
	}
	
	List_item * next = previous->next;
	
	for (unsigned i = 0u; i < index; i++)
	{
		if (current == NULL) break;
	}
	
	// TODO: Finish this function
	
	l->size--;
}

unsigned List_size(List * l, unsigned index)
{
	
}

bool List_empty(List * l)
{
	
}

unsigned List_find(List * l, List_value value)
{
	
}