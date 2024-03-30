#include "circulo.h"
#include <stdio.h>

int main() {
  Circulo *circulo_a = circ_cria(0, 0, 10);
  Circulo *circulo_b = circ_cria(0, 0, 4);
  Circulo *circulo_c = circ_cria(1, 1, 4);

  printf("Raio(%s)=%f\n", "circulo_a", circ_raio(circulo_a));
  printf("Raio(%s)=%f\n", "circulo_b", circ_raio(circulo_b));
  printf("Raio(%s)=%f\n", "circulo_c", circ_raio(circulo_c));

  printf("Area(%s)=%f\n", "circulo_a", circ_area(circulo_a));
  printf("Area(%s)=%f\n", "circulo_b", circ_area(circulo_b));
  printf("Area(%s)=%f\n", "circulo_c", circ_area(circulo_c));

  printf("1=Verdadeiro, 0=Falso\n");
  printf("Concentricos(a,b)=%d\n", circ_concentricos(circulo_a, circulo_b));
  printf("Concentricos(b,c)=%d\n", circ_concentricos(circulo_b, circulo_c));

  circ_libera(circulo_a);
  circ_libera(circulo_b);
  return 0;
}
