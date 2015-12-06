# Compiler
CC=gcc
# Compiler flags
CFLAGS=-I ./include -std=c11 -Wall
CFLAGS_LIB=-I ./include -std=c11 -c

all: lib

lib: queue.o stack.o vector.o
	ar rcs libcsine.a queue.o stack.o vector.o

test: lib

examples: lib

queue.o:
	$(CC) $(CFLAGS_LIB) src/queue.c -o queue.o

stack.o:
	$(CC) $(CFLAGS_LIB) src/stack.c -o stack.o

vector.o:
	$(CC) $(CFLAGS_LIB) src/vector.c -o vector.o

clean:
	rm *.o libcsine.a
