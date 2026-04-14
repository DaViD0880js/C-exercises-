#include <stdio.h>
#include <locale.h>

int main (void) {

    setlocale(LC_ALL, "Portuguese");

	int quant, numero =0 , maior = 0, n = 0, vezesLido = 1;

	printf("Insira quantos números irá digitar: ");
	scanf("%i", &quant);
	
	if(quant < 1) {
		printf("\nInsira uma quantidade válida\n");
		
	} else {
		while(n < quant) {
			printf("\nDigite um número: ");
			scanf("%i", &numero);
			
			if(numero > maior) {
				maior = numero;
			} 
			
			while(maior > numero) {
				vezesLido++;
			}
			n++;
		}
		printf("\nMaior número: %i\nVezes que foi lido: %i", maior, vezesLido);
	}
	
    return 0;
}
