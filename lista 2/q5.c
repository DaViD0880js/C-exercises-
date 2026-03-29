#include <stdio.h>
#include <locale.h>

int main (void) {
    
    setlocale(LC_ALL, "Portuguese");
    
    int numero;
    
    printf("\nDigite um número INTEIRO: ");
    scanf("%i", &numero);
    
    if(numero%2 == 0) {
    	printf("\nO número %i é par\n", numero);
    	
	} else {
		printf("\nO número %i é ímpar\n", numero);
	}
    
    return 0;
}
