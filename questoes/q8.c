#include <stdio.h>

int main (void) {

	float celsius, fahreinheit;
	
	printf("Informe o valor da temperatura (em Celsius):\n");
	scanf("%f", &celsius);
	
	fahreinheit = (celsius * 1.8) + 32;
	
	printf("A temperatura convertida em Fahreinheit = %f F", fahreinheit);
	

  return 0;
}
