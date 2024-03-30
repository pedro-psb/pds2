#include "fila.h"
#include <stdio.h>
#include <stdlib.h>

typedef struct _Node {
  int valor;
  Node *anterior;
} Node;

typedef struct _Fila {
  Node *inicio;
  Node *fim;
} Fila;

Fila *fila_cria() {
  Fila *fila = malloc(sizeof(Fila));
  if (fila == NULL) {
    printf("Error alocar memoria para fila.\n");
  }
  fila->inicio = NULL;
  fila->fim = NULL;
  return fila;
}

int fila_insere(Fila *fila, int valor) {
  // criar elemento
  Node *node = malloc(sizeof(Node));
  node->anterior =
      NULL; /* como o nó vai entrar no final, não há ninguem antes */
  node->valor = valor;

  if (fila_vazia(fila)) {
    fila->inicio = node; /* inicio é o primeiro nó */
    fila->fim = node;    /* fim tb é o primeiro nó */
  } else {
    fila->fim->anterior =
        node;         /* antigo fim aponta para o novo nó que entrou no fim */
    fila->fim = node; /* fim aponta para novo nó */
  }
  return valor;
}

int fila_remove(Fila *fila) {
  if (fila_vazia(fila)) {
    printf("A fila está vazia, não há como retirar elementos.\n");
    exit(1);
  }

  Node *antigo_inicio = fila->inicio; /* salva referencia */
  int valor = antigo_inicio->valor;
  if (fila->inicio == fila->fim) {
    fila->inicio = NULL;
    fila->fim = NULL;
  } else {
    fila->inicio = fila->inicio->anterior;
  }
  free(antigo_inicio);
  return valor;
}

void fila_imprime(Fila *fila) {
  Node *node_atual = fila->inicio;
  while (node_atual != NULL) {
    printf("%d ", node_atual->valor);
    node_atual = node_atual->anterior;
  }
  printf("\n");
}

int fila_vazia(Fila *fila) {
  return (fila->inicio == NULL && fila->fim == NULL);
}

void fila_libera(Fila *fila) {
  while (!fila_vazia(fila)) {
    fila_remove(fila);
  }
  free(fila);
}
