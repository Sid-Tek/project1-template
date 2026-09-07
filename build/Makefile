# Part II: complete this Makefile.
# Requirements are given in the handout.

CC = gcc
CFLAGS = -Wall -Wextra -g

# TODO: default target 'stats'
stats.o: stats.c stats.h
	$(CC) $(CFLAGS) -c stats.c

# TODO: rules for main.o and stats.o with correct header dependencies
main.o: main.c stats.h 
	$(CC) $(CFLAGS) -c main.c

build: main.o stats.o
	$(CC) main.o stats.o -o build

# TODO: clean target
clean:
	rm -f main.o stats.o program

