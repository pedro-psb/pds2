#include "ponto.h"

int main(){
  Ponto origem = criar_ponto(0,0);
  Ponto a = criar_ponto(2,2);
  Ponto b = criar_ponto(4,9);
  Ponto c = criar_ponto(-4,-3);
  printf("dist(origem,a)=%f\n", calcular_distancia(origem,a));
  printf("dist(a,b)=%f\n", calcular_distancia(b,c));
  printf("dist(a,c)=%f\n", calcular_distancia(a,c));
  return 0;
}
