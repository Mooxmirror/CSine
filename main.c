#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

void print_list(List * list_ptr)
{
	unsigned size = List_size(list_ptr);
	for (unsigned index = 0u; index < size; index++)
	{
		printf("%d, ", List_get(list_ptr, index));
	}
	puts("\n");
}

int main(void)
{
	List * list_ptr = List_create();
	
	List_add(list_ptr, 23);
	print_list(list_ptr);
	printf("Added: %d\n", List_add(list_ptr, 28));
	print_list(list_ptr);
	List_add(list_ptr, 48);
	print_list(list_ptr);
	
	List_set(list_ptr, 1, 39);
	print_list(list_ptr);
	List_add(list_ptr, 98);
	print_list(list_ptr);
	List_remove(list_ptr, 2);
	print_list(list_ptr);
	
	List_destroy(list_ptr);
	return 0;
}
