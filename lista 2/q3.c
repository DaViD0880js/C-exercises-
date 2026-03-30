#include <stdio.h>
#include <locale.h>

int main (void) {
    
    setlocale(LC_ALL, "Portuguese");
    
    float produto, valorTotal;
    int regiao;
    
    printf("\nDigite o valor do produto a ser importado em reais: ");
    scanf("%f", &produto);
    
    if(produto <= 0) {
    	printf("\nDigite um valor válido\n");
    	
	} else {
		printf("\nTabela de países e seus respectivos fretes e códigos:");
    	printf("\n\nEstados Unidos (R$60,00) => 1\nFrança (R$ 75,50) => 2");
    	printf("\nMéxico (R$50) => 3\nArgentina (R$27,35) => 4");
    	printf("\nChina R$(80) => 5\n");
    
    	printf("\nDigite o código do país para importação: ");
    	scanf("%i", &regiao);
    
    	switch (regiao) {
    	
    		case 1:
    			valorTotal = produto + 60;
    			printf("\nO valor total do produto é: %.2f\n", valorTotal);
    		break;
    	
    		case 2:
    			valorTotal = produto + 75.5;
    			printf("\nO valor total do produto é: %.2f\n", valorTotal);
    		break;
    	
    		case 3:
    			valorTotal = produto + 50;
    			printf("\nO valor total do produto é: %.2f\n", valorTotal);
    		break;
    	
    		case 4:
    			valorTotal = produto + 27.35;
    			printf("\nO valor total do produto é: %.2f\n", valorTotal);
    		break;
    	
    		case 5:
    			valorTotal = produto + 80;
    			printf("\nO valor total do produto é: %.2f\n", valorTotal);
    		break;
    	
    		default: 
				printf("\nO código do país precisa ser entre 1 e 5!\n");
		}
	}
    
    return 0;
}
