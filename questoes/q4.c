#include <stdio.h>

int main (void) {

float primeiroN, segundoN, soma;

  printf("Digite 2 numeros com um unico espaço entre eles\n\n(Caso algum numero seja decimal, use ''.''):");
  scanf("%f %f", &primeiroN, &segundoN);
  
  
  soma = primeiroN + segundoN;
  
  printf("\n%f + %f = %f\n", primeiroN, segundoN, soma);

  return 0;
}
//questao 4
