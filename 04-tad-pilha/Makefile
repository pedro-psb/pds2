.PHONY: clean

run: main
	./main

main: main.c pilha.o
	gcc -o main main.c pilha.o

pilha.o: pilha.c
	gcc -c pilha.c

clean:
	rm -f main pilha.o
