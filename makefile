main: main.o doublylinkedlist.o 
	gcc -o main doublylinkedlist.o main.o 
main.o: main.c doublylinkedlist.h
	gcc -c main.c
doublylinkedlist.o: doublylinkedlist.c doublylinkedlist.h
	gcc -c doublylinkedlist.c doublylinkedlist.h