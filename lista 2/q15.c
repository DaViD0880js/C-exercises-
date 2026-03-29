#include <stdio.h>
#include <locale.h>

int main (void) {
    
    setlocale(LC_ALL, "Portuguese");
    
    int a, b, c, soma;
    
    printf("Digite 3 números inteiros com um espaçamento entre eles: ");
    scanf("%i %i %i", &a, &b, &c);
    
    soma = a+b+c;
    
    if(soma >= 100 ) {
    	printf("\nA soma: %i + %i + %i = %i", a, b, c, soma);
    	
	} else {
		printf("\nSoma menor que 100");
	}
    
    return 0;
}
