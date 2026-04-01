#include <stdio.h>
#include <locale.h>

int main (void) {
    
    setlocale(LC_ALL, "Portuguese");
    
    float salario, tempo, novoSalario;
    
    printf("--Cálculo de Bônus Salarial--\n");
    printf("\nDigite o valor do seu salário atual: ");
    scanf("%f", &salario);
    
    printf("\nDigite sua quantidade de anos de serviço na empresa XKW: ");
    scanf("%f", &tempo);
    
    if(salario <= 0 || tempo <= 0) {
    	printf("\nDigite valores válidos de salário e/ou tempo!");
    	  	
	} else {
    	if(tempo >= 5.0) {
    		novoSalario = 1.2 * salario;
    		printf("\nVocê recebeu um bônus e receberá R$%.2f", novoSalario);
    	
		} else {
			novoSalario = 1.1 * salario;
			printf("\nVocê recebeu um bônus e receberá R$%.2f", novoSalario);
		}		
	}
    
    return 0;
}
