#include <stdio.h>
#include <locale.h>

int main (void) {
    
    setlocale(LC_ALL, "Portuguese");
    
    float valor, parcelas, salario;
    
    printf("Digite o valor do empréstimo: ");
    scanf("%f", &valor);
    
    printf("\nDigite a quantidade de parcelas: ");
    scanf("%f", &parcelas);
    
    printf("\nDigite o valor do seu salário: ");
    scanf("%f", &salario);
    
    if(valor<=0 || parcelas<=0 || salario<=0) {
    	printf("\nDigite valores válidos para os requisitos\n");
    	
	} else if(valor/parcelas > 0.3 * salario){
		printf("\nEmpréstimo recusado\n");
		
	} else {
		printf("\nEmpréstimo aprovado\n");
	}
		
    return 0;
}
