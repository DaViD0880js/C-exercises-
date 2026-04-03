#include <stdio.h>
#include <locale.h>

int main(void) {

    setlocale(LC_ALL, "Portuguese");

    int x, y, maior, menor, soma = 0, mult = 1;

    printf("Digite um número inteiro: ");
    scanf("%i", &x);

    printf("\nDigite outro número inteiro: ");
    scanf("%i", &y);
    
    if(x > y) {
    	maior = x;
    	menor = y;
    	
	} else {
		maior = y;
		menor =x;
		
	}
	
	while (menor <= maior){
		if(menor%2 == 0) {
			soma = menor + soma;
			
		} else {
			mult = menor*mult;
		}
		
		menor++;
	}
	
	printf("\nA soma dos pares entre %i e %i = %i\n", x, y, soma);
	printf("A multiplicação dos ímpares entre %i e %i = %i\n",x, y, mult);

    return 0;
}



