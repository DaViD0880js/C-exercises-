#include <stdio.h>
#include <locale.h>

int main (void) {
    
    setlocale(LC_ALL, "Portuguese");
    
    float quantia, valor;
    
    printf("Digite quantas maçãs deseja comprar :");
    scanf("%f", &quantia);
    
    if(quantia <= 0) {
    	printf("\nDigite uma quantia válida de maçãs!\n");
    	
	} else if(quantia < 12) {
		valor = quantia * 0.3;
		
		printf("\nO valor total das maças será de R$%.2f\n", valor);

	} else {
		valor = quantia * 0.25;
		
		printf("\nO valor total das maçãs será de R$%.2f\n", valor);
	}
    
    return 0;
}
