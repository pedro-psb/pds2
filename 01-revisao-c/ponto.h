#include <stdio.h>


typedef struct {
  float x;
  float y;
} Ponto;

/**
 * Criar estrutura Ponto com coordenadas x,y
 *
 * @param x: Coordenada x
 * @param y: Coordenada y
 * @return: Uma estrutura de Ponto
 */
Ponto criar_ponto(float x, float y);


/**
 * Criar estrutura Ponto com coordenadas x,y
 *
 * @param a: O primeiro ponto
 * @param b: O segundo ponto
 * @return: A distancia entre os dois pontos
 */
float calcular_distancia(Ponto a, Ponto b);
