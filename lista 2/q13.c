#include <stdio.h>
#include <locale.h>

int main (void) {
    
    setlocale(LC_ALL, "Portuguese");
    
    int numero;
    
    printf("Digite um número inteiro: ");
    scanf("%i", &numero);
    
    if (!(numero > 3)) {
    	printf("\n%i não é maior que 3", numero);
	}
    
    return 0;
}
