#include <stdio.h>

int main (void) {
	
	float dividendo, divisor, result;
	
	printf("Digite o numero que sera o dividendo\n\n(Use '.' caso seja decimal):");
	scanf("%f", &dividendo);
	
	printf("\nDigite o numero que sera o divisor:");
	scanf("%f", &divisor);
	
	result = dividendo/divisor;
	
	if(divisor == 0) {
		
		printf("\nNao e possivel realizar a divisao! (divisor = 0)");
	}
	else{
	
		printf("%f / %f = %f", dividendo, divisor, result);	
    }
    
  return 0;
}
//questao 5
