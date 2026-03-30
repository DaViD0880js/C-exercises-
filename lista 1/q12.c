#include <stdio.h>
#include <math.h>

int main (void) {
	
	int base, expoente, potencia;
	
	printf("\nDigite um numero inteiro para a base da potencia:\n");
	scanf("%i", &base);
	
	printf("\nDigite um numero inteiro para o expoente:\n");
	scanf("%i", &expoente);
	
	potencia = pow(base, expoente);
	
	printf("\nO valor de %i^%i = %i", base, expoente, potencia);

  return 0;
}
