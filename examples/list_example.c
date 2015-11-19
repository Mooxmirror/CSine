#include <stdio.h>

#define LIST_AUTOFREE false
#define LIST_TYPE int

#include "linked_list.h"

int main(void) {
	List my_list = List_create();
	
	for (int i = 0; i < 10; i++) {
		List_push(my_list, i);
		printf("Pushed %d to list\n", i);
	}

	printf("Removing from list ...\n");
	while (!List_empty(my_list)) {
		printf("Removed %d from list\n", List_pop(my_list));
	}

	printf("Done.\n");
	List_destroy(my_list);
	return 0;
}
