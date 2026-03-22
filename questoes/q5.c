#include <stdio.h>

int main (void) {
	
	float dividendo, divisor, result;
	
	printf("Digite o numero inteiro que sera o dividendo:\n");
	scanf("%f", &dividendo);
	
	printf("\nDigite o numero inteiro que sera o divisor:");
	scanf("%f", &divisor);
	
	result = dividendo/divisor;
	
	if(divisor == 0) {
		
		printf("\nNao e possivel realizar a divisao! (divisor = 0)");
	}
	else{
	
		printf("\n%f / %f = %f", dividendo, divisor, result);	
    }
    
  return 0;
}
//questao 5
