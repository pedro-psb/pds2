#include "pilha.h"
#include <stdio.h>

int main() {
  printf("Inicializando pilha\n");
  Pilha *novaPilha = pilhaCria();
  pilhaPush(novaPilha, 5);
  pilhaPush(novaPilha, 6);
  pilhaPush(novaPilha, 1);
  pilhaPush(novaPilha, 9);
  pilhaPush(novaPilha, 8);

  pilhaImprime(novaPilha);
  printf("--------------\n");
  while (!pilhaVazia(novaPilha)) {
    printf("popped: %d\n", pilhaPop(novaPilha));
  }

  printf("Liberando Pilha\n");
  pilhaLibera(novaPilha);
  return 0;
}
