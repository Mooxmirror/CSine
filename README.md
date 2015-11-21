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
### Queue
Header: `queue.h`

| function        | arguments             | description                                               |
|-----------------|-----------------------|-----------------------------------------------------------|
| `Queue_create`  | `n/a`                 | Allocates memory for a new queue structure                |
| `Queue_destroy` | `Queue`                | Destroys the queue structure, deleting all data           |
| `Queue_append`     | `Queue, Value`         | Appends a new item to the queue                            |
| `Queue_shift`   | `Queue`                | Removes the next item and returns it              |
| `Queue_next`    | `Queue`                | Returns the next item                        |
| `Queue_empty`   | `Queue`                | Checks and returns if the queue is empty                   |
| `Queue_size`    | `Queue`                | Returns the size of the queue                           |

### Stacks
| function        | arguments             | description                                               |
|-----------------|-----------------------|-----------------------------------------------------------|
| `Stack_create`  | `n/a`                 | Allocates memory for a new stack structure          |
| `Stack_destroy` | `Stack`                | Destroys the stack structure, deleting all data            |
| `Stack_push`    | `Stack, Value`         | Pushes the value on the stack                             |
| `Stack_pop`     | `Stack`                | Removes the top item and returns its value                |
| `Stack_empty`    | `Stack`               | Checks and returns if the stack is empty                  |
| `Stack_size`     | `Stack`               | Calculates the size of the stack                          |

### Arrays (dynamic size)
| function        | arguments             | description                                               |
|-----------------|-------------------------|----------------------------------------------------------|
| `Array_create`  | `n/a`       | Allocates memory for a new array structure |
| `Array_destroy` | `Array`| Destroys the array structure, deleting all data |
| `Array_add` | `Array, Value` | Adds a new item at the end of the array |
| `Array_remove` | `Array, Index` | Removes the item at the specified position and returns it |
| `Array_get` | `Array, Index` | Returns the item at the specified position |
| `Array_empty` | `Array` | Checks and returns if the array is empty |
| `Array_size` | `Array` | Returns the size of the array |
