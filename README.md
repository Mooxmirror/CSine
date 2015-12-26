# CSine [![Build status](https://travis-ci.org/mooxmirror/csine.svg)](https://travis-ci.org/mooxmirror/csine)
High-level data structure and algorithm library

--------------------------------------------------------------------------------

## Features
- Pragmatic APIs for common data structures
- Ready-for-production algorithms for manipulating data
- State of the art code quality and readability

## Build & Install
- Download the source code from the [Releases](https://github.com/Mooxmirror/csine/releases) page
- Run `./configure && make && make test`
- Use the generated `libcsine.a` library

## API Documentation
### Item
Header: `item.h`

function | arguments | description
-------- | --------- | -------------------------------------------
`item`   | `Value`   | Creates a lightweight wrapper for the value
`value`  | `Item`    | Returns the wrapped value

### Queue
Header: `queue.h`

function    | arguments     | description
----------- | ------------- | -----------------------------------------------
`queue`     | `n/a`         | Allocates memory for a new queue structure
`->destroy` | `Queue`       | Destroys the queue structure, deleting all data
`->append`  | `Queue, Item` | Appends a new item to the queue
`->shift`   | `Queue`       | Removes the next item and returns it
`->next`    | `Queue`       | Returns the next item
`->empty`   | `Queue`       | Checks and returns if the queue is empty
`->size`    | `Queue`       | Returns the size of the queue

### Stacks
Header: `stack.h`

function    | arguments     | description
----------- | ------------- | -----------------------------------------------
`stack`     | `n/a`         | Allocates memory for a new stack structure
`->destroy` | `Stack`       | Destroys the stack structure, deleting all data
`->push`    | `Stack, Item` | Pushes the value on the stack
`->pop`     | `Stack`       | Removes the top item and returns its value
`->empty`   | `Stack`       | Checks and returns if the stack is empty
`->size`    | `Stack`       | Calculates the size of the stack

### Vectors (dynamic sized arrays)
Header: `vector.h`

function    | arguments       | description
----------- | --------------- | ---------------------------------------------------------
`vector`    | `n/a`           | Allocates memory for a new vector structure
`->destroy` | `Vector`        | Destroys the vector structure, deleting all data
`->add`     | `Vector, Item`  | Adds a new item at the end of the vector
`->remove`  | `Vector, Index` | Removes the item at the specified position and returns it
`->get`     | `Vector, Index` | Returns the item at the specified position
`->empty`   | `Vector`        | Checks and returns if the vector is empty
`->size`    | `Vector`        | Returns the size of the vector
