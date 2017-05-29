CFLAGS = -Wall -Werror -MP -MMD -lm -lcurses
.PHONY: clean all deposit-calc test

all :
	make bin/project-calc

bin/project-calc : build/src/project.o build/src/func.o
	mkdir bin -p
	gcc  build/src/project.o build/src/func.o -o bin/project-calc $(CFLAGS)

build/src/project.o : src/project.c src/func.h
	mkdir build -p
	mkdir build/src -p
	gcc -c src/project.c -o build/src/project.o $(CFLAGS)

build/src/func.o : src/func.c src/func.h
	mkdir build -p
	mkdir build/src -p
	gcc -c src/func.c -o build/src/func.o $(CFLAGS)