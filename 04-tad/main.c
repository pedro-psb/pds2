#include "circulo.h"
#include "pilha.h"
#include <stdio.h>

int main() {
  // Testar circulo

  // Testar pilha
  Pilha *p = pilha_cria();

  // enche a pilha

  // esvazia a pilha
  while (!pilha_vazia(p)) {
    printf("%d ", pilha_pop(p));
  }
  printf("\n");

  return 0;
}
