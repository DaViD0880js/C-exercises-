#include <stdio.h>

int main (void) {
	
	
	float comprimento, largura, altura, volume;
	
	printf("\nDigite o valor do comprimento em cm:\n");
	scanf("%f", &comprimento);
	
	printf("\nDigite o valor da largura em cm:\n");
	scanf("%f", &largura);

	printf("\nDigite o valor da altura em cm:\n");
	scanf("%f", &altura);
	
	volume = comprimento * largura * altura;
	
	printf("O valor do volume da caixa eh %fcm3 ", volume);
	

  return 0;
}
