# libmatematica

Biblioteca com funções básica de matemática.

## Como executar

O arquivo `build-and-executa.sh` automatiza o buildar, linkar e executar.

Você também pode executar os passos manualmente:

```bash
# cria um diretorio limpo para receber os produtos da compilação
mkdir -p out
rm -rf out/*

# compila a biblioteca como objeto
gcc -c src/matematica.c -o out/matematica.o

# compila o programa principal e linka com a biblioteca
gcc src/main.c out/matematica.o -o out/main -lm

# executa o programa principal
./out/main
```
