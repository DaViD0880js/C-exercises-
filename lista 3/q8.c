#include <stdio.h>
#include <locale.h>

int main (void) {
    setlocale(LC_ALL, "Portuguese");
    
	int idade, n = 1, maior = 0, menor = 9999;
	float somaIdades = 0, quant = 0;

    printf("--Calculando Média das Idades--\n");
    
    do {
    	printf("\nDigite a idade de um indivíduo");
    	printf("\n(Digite 0 para encerrar): ");
    	scanf("%i", &idade);
			
    	if(idade != 0 && idade < menor) {
    		menor = idade;
		}
		
		if(idade > maior) {
    		maior = idade;
		}
		
    	somaIdades = somaIdades + idade;
    	
    	if(idade == 0) {
    		printf("\nA média das idades é: %.2f", somaIdades/quant);
    		printf("\nA menor idade é: %i", menor);
    		printf("\nA maior idade é: %i", maior);
    	 	n++;
		}
		quant++;
		
	} while (n == 1);
	
    return 0;
}
