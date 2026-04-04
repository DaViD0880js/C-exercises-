#include <stdio.h>
#include <locale.h>

int main (void) {
    
    setlocale(LC_ALL, "Portuguese");
    
    int numero, menor = 2147483647, maior = 0;
    
    do {
    	printf("\nDigite números INTEIROS (negativo para encerrar): ");
    	scanf("%i", &numero);
    	
    	if(numero > maior) {
    		maior = numero;
		}
		
		if(numero < menor && numero >= 0) {
			menor = numero;
		}
    	
	} while (numero >= 0);
    
    printf("\nMaior número: %i\nMenor número: %i", maior, menor);
    
    return 0;
}
