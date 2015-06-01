/*
A linked list implementation
(c) 2015 mooxmirror
*/

#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include <stdlib.h>
#include <stdbool.h>

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
}

List  * 		List_create();
void			List_destroy(List * l);

unsigned		List_add(List * l, List_value value);
List_value		List_get(List * l, unsigned index);
void			List_set(List * l, unsigned index);
void			List_remove(List * l, unsigned index);

unsigned		List_size(List * l);
bool			List_empty(List * l);
unsigned		List_find(List * l, List_value value);

#endif