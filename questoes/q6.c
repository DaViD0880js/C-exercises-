#include <stdio.h>

int main (void) {

float numero1, numero2, numero3, soma, media;

  printf("Informe um numero qualquer:\n");
  scanf("%f", &numero1);

  printf("\nInforme um segundo numero:\n");
  scanf("%f", &numero2);

  printf("\nInforme um terceiro numero:\n");
  scanf("%f", &numero3);
  
  soma = numero1 + numero2 + numero3;
  
  media = soma/3;
  
  printf("\nA media aritmetica entre os 3 numeros = %f\n", media);
  //questao 6


  return 0;
}
