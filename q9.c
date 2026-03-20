#include <stdio.h>

int main (void) {
	
	
	float comprimento, largura, altura, volume;
	
	printf("\nDigite o valor respectivo do comprimento, largura e altura, com um espaco entre os valores:\n");
	scanf("%f %f %f", &comprimento, &largura, &altura);
	
	volume = comprimento * largura * altura;
	
	printf("O valor do volume da caixa eh %fcm3 ", volume);
	

  return 0;
}
