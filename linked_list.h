/*
A linked list implementation
(c) 2015 mooxmirror
*/

#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdlib.h>
#include <stdbool.h>

#ifndef LIST_AUTOFREE
#define LIST_AUTOFREE false
#endif

#ifndef LIST_TYPE
#define LIST_TYPE int
#endif

#define LIST_VALUE_NULL 0

typedef struct 	List		List;
typedef struct 	List_item 	List_item;
typedef			LIST_TYPE	List_value;

struct List
{
	List_item * first;
	unsigned size;
};

struct List_item
{
	List_value value;
	List_item * next;
};

List * 			List_create();
void			List_destroy(List * list_ptr);

unsigned		List_add(List * list_ptr, List_value value);
void			List_remove(List * list_ptr, unsigned index);

List_value		List_get(List * list_ptr, unsigned index);
void			List_set(List * list_ptr, unsigned index, List_value item_value);

unsigned		List_size(List * list_ptr);
bool			List_empty(List * list_ptr);

#endif