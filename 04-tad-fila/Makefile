.PHONY: clean

run: main
	./main

main: main.c fila.o
	gcc -o main main.c fila.o

fila.o: fila.c fila.h
	gcc -c fila.c

clean:
	rm -f main fila.o
