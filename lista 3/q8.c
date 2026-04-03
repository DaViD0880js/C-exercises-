#include <stdio.h>
#include <locale.h>

int main (void) {
    setlocale(LC_ALL, "Portuguese");
    
	int x, maior = 0, menor = 9999;
	float somaIdade = 0, idades = 0;

    printf("--Calculando Média das Idades--\n");
    
    while (1) {
    	printf("\nDigite a idade de um indivíduo");
    	printf("\n(Digite 0 para encerrar): ");
    		
    	if(x != 0 && x < menor) {
    		menor = x;
		}
		if(x > maior) {
    		maior = x;
		}
    	somaIdade = somaIdade + x;
    	idades++;
    	
    	if(x == 0) {
    		idades = idades - 1;
    		printf("\nA média das idades é: %.2f", somaIdade/idades);
    		printf("\nA menor idade é: %i", menor);
    		printf("\nA maior idade é: %i", maior);
    	 break;
		} 	
	}
    return 0;
}
