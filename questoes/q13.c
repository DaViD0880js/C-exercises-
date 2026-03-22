#include <stdio.h>

int main (void) {
	
	float medidaPes, medidaM;
	
	printf("\nDigite o valor da medida em pes:\n");
	scanf("%f", &medidaPes);
	
	medidaM = 0.3048 * medidaPes;
	
	printf("\nO valor da medida convertido em metros = %fm\n", medidaM);
	

  return 0;
}
