#include "circulo.h"
#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159265358979323846

typedef struct _Circulo {
  float x;
  float y;
  float raio;
} Circulo;

Circulo *circ_cria(float x, float y, float r) {
  Circulo *c = malloc(sizeof(Circulo));
  if (c == NULL) {
    printf("Erro ao alocar memoria para Circulo.\n");
    exit(0);
  }
  c->x = x;
  c->y = y;
  c->raio = r;
  return c;
}

void circ_libera(Circulo *c) {
  // libera
  free(c);
}

float circ_area(Circulo *c) {
  // retorna area
  return PI * (c->raio * c->raio);
}

int circ_concentricos(Circulo *c1, Circulo *c2) {
  return (c1->x == c2->x && c1->y == c2->y);
}

float circ_raio(Circulo *c) {
  // retorna raio
  return c->raio;
}
