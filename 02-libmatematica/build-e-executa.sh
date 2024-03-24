#!/bin/bash

mkdir -p out
rm -rf out/*
gcc -c src/matematica.c -o out/matematica.o
gcc src/main.c out/matematica.o -o out/main -lm
./out/main
