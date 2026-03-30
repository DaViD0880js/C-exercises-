#include <stdio.h>

int main (void) {

float numero1, numero2, numero3, soma, media;

  printf("Informe 3 numeros com um unico espaco entre eles:\n");
  scanf("%f %f %f", &numero1, &numero2, &numero3);
  
  soma = numero1 + numero2 + numero3;
  
  media = soma/3;
  
  printf("\nA media eh: %f", media);
  //questao 6


  return 0;
}
