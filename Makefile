# Compiler to use
CC=g++

prog: hello.o
	$(CC) -o prog hello.o

hello.o: hello.cpp hello.h
	$(CC) -c hello.cpp -o hello.o

clean:
	rm -rf *o hello