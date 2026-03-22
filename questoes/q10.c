#include <stdio.h>

int main (void) {

  float distancia, tempo, velocidadeM;

  printf("\nDigite a distancia percorrida pelo projetil em km:\n");
  scanf("%f", &distancia);

  printf("\nDigite o tempo percorrido pelo projetil em minutos:\n");
  scanf("%f", &tempo);

  velocidadeM = (distancia * 1000) / (tempo * 60);

  printf("\nO valor da velocidade media do projetil = %fm/s\n", velocidadeM);

  return 0;
  
}
