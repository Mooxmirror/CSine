# Compiler
CC=clang
# Compiler flags
CFLAGS=-I ./include -std=c11 -Wall
CFLAGS_LIB=-I ./include -std=c11 -c

all: lib examples

lib: linked_list.o stack.o
	ar rcs libcsine.a linked_list.o stack.o

examples: lib
	$(CC) $(CFLAGS) -o examples/list_example.out examples/list_example.c libcsine.a

linked_list.o:
	$(CC) $(CFLAGS_LIB) src/linked_list.c -o linked_list.o

stack.o:
	$(CC) $(CFLAGS_LIB) src/stack.c -o stack.o
	
clean:
	rm *.o libcsine.a examples/list_example.out
