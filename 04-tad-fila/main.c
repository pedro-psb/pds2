#include "fila.h"
#include <stdio.h>

int main() {
  printf("Criando fila.\n");
  Fila *fila = fila_cria();

  printf("Inserindo %d\n", fila_insere(fila, 1));
  printf("Inserindo %d\n", fila_insere(fila, 2));
  printf("Inserindo %d\n", fila_insere(fila, 3));
  printf("Imprimindo fila: ");
  fila_imprime(fila);

  printf("Retirando %d\n", fila_remove(fila));
  printf("Retirando %d\n", fila_remove(fila));
  printf("Imprimindo fila: ");
  fila_imprime(fila);

  printf("Retirando %d\n", fila_remove(fila));
  printf("Imprimindo fila: ");
  fila_imprime(fila);

  printf("Liberando fila\n.");
  fila_libera(fila);
  return 0;
}
