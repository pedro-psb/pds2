#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

Pilha *pilhaCria() {
  Pilha *novaPilha = malloc(sizeof(Pilha));
  novaPilha->topo = NULL;
  return novaPilha;
}

void pilhaPush(Pilha *pilha, int valor) {
  Elemento *novoItem = malloc(sizeof(Elemento));
  if (novoItem == NULL) {
    printf("Erro: falha na alocação de memória\n");
    exit(1);
  }

  novoItem->valor = valor;
  novoItem->anterior = pilha->topo;
  pilha->topo = novoItem;
}

int pilhaVazia(Pilha *pilha) { return (pilha->topo == NULL); }

int pilhaPop(Pilha *pilha) {
  if (pilhaVazia(pilha)) {
    printf("Pilha vazia\n");
    exit(1);
  }
  // salva antiga pilha (para nao perder referencia a ele)
  Elemento *antigoTopo = pilha->topo;
  int valorAntigoTopo = antigoTopo->valor;

  // atualiza topo
  pilha->topo = antigoTopo->anterior;

  // libera elemento antigo
  free(antigoTopo);
  return valorAntigoTopo;
}

void pilhaLibera(Pilha *pilha) {
  Elemento *libera = pilha->topo;
  Elemento *aux;
  while (libera != NULL) {
    aux = libera->anterior;
    free(libera);
    libera = aux;
  }
  free(pilha);
}

void pilhaImprime(Pilha *pilha) {
  Elemento *aux;
  for (aux = pilha->topo; aux != NULL; aux = aux->anterior) {
    printf("%d\n", aux->valor);
  }
}
