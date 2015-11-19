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

| function        | arguments             | description                                               |
|-----------------|-----------------------|-----------------------------------------------------------|
| `List_create`   | `n/a`                 | Allocates memory for a new linked list structure          |
| `List_destroy`  | `List`                | Destroys the list structure, deleting all data            |
| `List_add`     | `List, Value`          | Appends the value to the list                             |
| `List_shift`    | `List`                | Removes the first item and returns its value              |
| `List_remove`   | `List, Index`         | Removed the item at the position `index`                  |
| `List_set`      | `List, Index, Value`  | Sets the item at position `index` to the specified value  |
| `List_get`      | `List, Index`         | Returns the value of the element at position `index`      |
| `List_empty`    | `List`                | Checks and returns if the list is empty                   |
| `List_size`     | `List`                | Calculates the size of the list                           |

### Stacks
| function        | arguments             | description                                               |
|-----------------|-----------------------|-----------------------------------------------------------|
| `Stack_create`  | `n/a`                 | Allocates memory for a new linked list structure          |
| `Stack_destroy` | `List`                | Destroys the list structure, deleting all data            |
| `Stack_push`    | `List, Value`         | Pushes the value on the stack                             |
| `Stack_pop`     | `List`                | Removes the top item and returns its value                |
| `Stack_empty`    | `List`               | Checks and returns if the stack is empty                  |
| `Stack_size`     | `List`               | Calculates the size of the stack                          |
