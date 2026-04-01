#include <stdio.h>
#include <locale.h>

int main (void) {
    
    setlocale(LC_ALL, "Portuguese");
    
    int numero;
    
    printf("Digite um número inteiro qualquer: ");
	scanf("%i", &numero);
	
	if(numero * 2 > 30) {
		printf("\n%i multiplicado por 2 = %i", numero, numero*2);
	}
    
    return 0;
}
