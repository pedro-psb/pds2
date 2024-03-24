#include "matematica.h"
#include <stdio.h>
#define M_PI 3.141592653589793238462643383279502884L

int main() {
  printf("seno(PI)=%f\n", calcular_seno(M_PI));
  printf("cos(PI)=%f\n", calcular_cosseno(M_PI));
  printf("tan(PI)=%f\n", calcular_tangente(M_PI));
  printf("seno(PI/2)=%f\n", calcular_seno(M_PI / 2));
  printf("cos(PI/2)=%f\n", calcular_cosseno(M_PI / 2));
  printf("tan(PI/2)=%f\n", calcular_tangente(M_PI / 2));
  printf("seno(PI/2)=%f\n", calcular_seno(M_PI / 8));
  printf("cos(PI/2)=%f\n", calcular_cosseno(M_PI / 8));
  printf("tan(PI/2)=%f\n", calcular_tangente(M_PI / 8));
  return 0;
}
