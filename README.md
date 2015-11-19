# ![Logo](http://i.imgur.com/L86x7i1.png)

## Features
- Pragmatic APIs for common data structures
- Ready-for-production algorithms for manipulating data
- State of the art code quality and readability

## How to use
- Download the source code from the [Releases](https://github.com/Mooxmirror/CSine/releases) page
- Run `make` command
- Use the generated `libcsine.a` library

## API Documentation
### Linked List
Header: `linked_list.h`

| function | arguments | description |
|----------|-----------|-------------|
| `List_create` | `n/a` | Allocates memory for a new linked list structure |
| `List_destroy` | `List * list_ptr` | Destroys the list structure, deleting all data |
| `List_add` | `List * list_ptr, List_value value` | Appends the value to the list |
| `List_remove` | `List * list_ptr, unsigned index` | Removed the item at the position `index` |
| `List_set` | `List * list_ptr, unsigned index, List_value value` | Sets the item at position `index` to the specified value |
| `List_get` | `List * list_ptr, unsigned index` | Returns the value of the element at position `index`|
| `List_empty` | `List * list_ptr` | Checks and returns if the list is empty |
| `List_size` | `List * list_ptr` | Calculates the size of the list |
