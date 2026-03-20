#include <stdio.h>

int main (void) {
	
	int numero, resto2, resto3;
	
	printf("\nDigite um numero inteiro:\n");
	scanf("%i", &numero);
	
	resto2 = numero%2;
	resto3 = numero%3;
	
	printf("\nO resto da divisao de %i por 2 = %i\n\nO resto da divisao de %i por 3 = %i\n ", numero, resto2, numero, resto3);

  return 0;
}
//q15
