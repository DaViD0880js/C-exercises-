#include <stdio.h>

int main (void) {

	float celsius, fahreinheit;
	
	printf("Informe o valor da temperatura (em Celsius):\n");
	scanf("%f", &celsius);
	
	fahreinheit = (celsius * 1.8) + 32;
	
	printf("A temperatura em Fahreinheit eh %f", fahreinheit);
	

  return 0;
}
