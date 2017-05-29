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
test :
	make bin/project-test
	bin/project-test

bin/project-test : build/test/main.o build/test/func-test.o
	@echo "Making binary"
	@gcc build/test/main.o build/test/func.o build/test/func-test.o -o bin/project-test $(CFLAGS)

build/test/main.o : src/func.h test/main.c
	@echo "Making main.o"
	mkdir build -p
	mkdir build/test -p
	@gcc -I thirdparty -c test/main.c -o build/test/main.o $(CFLAGS)
	@gcc -c src/func.c -o build/test/func.o $(CFLAGS) 

build/test/func-test.o : src/func.h test/func-test.c
	mkdir build -p
	mkdir build/test -p
	echo "Making func-test.o"
	gcc -c -I thirdparty test/func-test.c -o build/test/func-test.o $(CFLAGS)

build/test/func.o : src/func.h src/func.c
	mkdir build -p
	mkdir build/test -p
	@echo "Making func.o"
	@gcc -c src/func.c -o build/test/func.o $(CFLAGS)