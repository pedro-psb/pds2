#!/bin/bash

mkdir -p out
gcc -c pilha.c -o out/pilha.o
gcc main.c out/pilha.o -o out/teste
./out/teste
