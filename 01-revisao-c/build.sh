#!/bin/bash

mkdir -p out
# Compila objeto da biblioteca
gcc -c ponto.c -o out/ponto.o
# Compila e Vincula
gcc ponto.c main.c -o out/main -lm
# Executa programa final
./out/main
