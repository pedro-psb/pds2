#include <math.h>
#include "ponto.h"

Ponto criar_ponto(float x, float y) {
  Ponto ponto;
  ponto.x = x;
  ponto.y = y;
  return ponto;
}

float calcular_distancia(Ponto a, Ponto b) {
  float distancia = sqrt(pow(a.x - b.x, 2) + pow(a.y - b.y, 2));
  return distancia;
}
