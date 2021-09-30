all: pointers.o
	gcc -o main.exe pointers.o

pointers.o: pointers.c
	gcc -c pointers.c

run: 
	./main.exe
