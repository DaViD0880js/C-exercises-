#include <stdio.h>
#include <math.h>

int main (void) {

	int a, b, div, pot;
	
	printf("\nDigite um valor inteiro para A:\n");
	scanf("%i", &a);
	
	printf("\nDigite um valor inteiro para B:\n");
	scanf("%i", &b);
	
	div = a/b;
	pot = pow(div, 2);
	
	printf("\nO resultado do quadrado da divisao entre %i/%i = %i\n", a, b, pot);
	

  return 0;
}
