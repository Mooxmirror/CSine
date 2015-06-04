# Compiler
CC=gcc
# Hey!, I am comment number 2. I want to say that CFLAGS will be the
# options I'll pass to the compiler.
CFLAGS=-I ./include -std=c99 -c

all: csine

csine: linked_list.o stack.o
	ar rcs libcsine.a linked_list.o stack.o

linked_list.o:
	$(CC) $(CFLAGS) src/linked_list.c -o linked_list.o

stack.o:
	$(CC) $(CFLAGS) src/stack.c -o stack.o
	
clean:
	rm *.o libcsine.a