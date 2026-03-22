#include <stdio.h>

int main (void) {

float a, b, soma;

  printf("Digite um numero qualquer\n\n(Caso seja decimal, use ''.'' para dividir as casas):\n");
  scanf("%f", &a);

  printf("\n\nDigite outro numero qualquer:\n");
  scanf("%f", &b);
  
  soma = a + b;
  
  printf("\n%f + %f = %f\n", a, b, soma);

  return 0;
}
//questao 4
