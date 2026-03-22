#include <stdio.h>

int main (void) {

float primeiroN, segundoN, soma;

  printf("Digite um numero qualquer\n\n(Caso o numero seja decimal, use ''.''):\n");
  scanf("%f", &primeiroN);

  printf("\n\nDigite outro numero qualquer:\n");
  scanf("%f", &segundoN);
  
  
  soma = primeiroN + segundoN;
  
  printf("\n%f + %f = %f\n", primeiroN, segundoN, soma);

  return 0;
}
//questao 4
