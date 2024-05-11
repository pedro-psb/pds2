#!/bin/bash
cd acessorios-cpp/
g++ -c *.cpp 
cd ../core-simulador-cpp
g++ -c *.cpp 
cd ../personagens-cpp
g++ -c *.cpp 
cd ..
g++ principal/main.cpp acessorios-cpp/*.o core-simulador-cpp/*.o personagens-cpp/*.o -o saida
