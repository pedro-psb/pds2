.PHONY: clean

run: main
	./main

main: main.c circulo.o
	gcc -o main main.c circulo.o

ciculo.o: circulo.c circulo.h
	gcc -c circulo.c

clean:
	rm -f main circulo.o
