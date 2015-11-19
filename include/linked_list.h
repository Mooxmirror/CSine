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

typedef struct 	List_struct	List_struct;
typedef 	List_struct *	List;
typedef struct 	List_item 	List_item;
typedef		LIST_TYPE	List_value;

struct List_struct
{
	List_item * head;
	unsigned size;
};

struct List_item
{
	List_value value;
	List_item * next;
};

List 			List_create();
void			List_destroy(List list);

unsigned		List_push(List list, List_value value);
List_value		List_pop(List list);

void			List_remove(List list, unsigned index);
List_value		List_get(List list, unsigned index);
void			List_set(List list, unsigned index, List_value item_value);

unsigned		List_size(List list);
bool			List_empty(List list);

#endif
