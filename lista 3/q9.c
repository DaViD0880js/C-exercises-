#include <stdio.h>
#include <locale.h>

int main (void) {
    
    setlocale(LC_ALL, "Portuguese");
    
    int escolha, check;
    float velocidade, conversao;
    
    do {
    	printf("\n--Tabela para conversão de velocidades:--\n");
    	printf("\nKm/h para M/s = Digite 1\n");
    	printf("M/s para Km/h = Digite 2\n");
    	printf("\nDigite 0 para encerrar\n");
    	scanf("%i", &escolha);
    	
    	if(escolha == 0) {
			printf("\nPrograma encerrado\n");
			check = 0;
		} else {
			check = 1;
			
			switch(escolha) {
				
			case 1:
				printf("\nDigite o valor da velocidade em km/h: ");
				scanf("%f", &velocidade);
				
				conversao = velocidade/3.6;
				
				printf("\nValor convertido para m/s -> %.2f\n\n", conversao);
			break;
			
			case 2:
				printf("\nDigite o valor da velocidade em m/s: ");
				scanf("%f", &velocidade);
				
				conversao = velocidade*3.6;
				
				printf("\nValor convertido para km/h -> %.2f\n\n", conversao);
			break;
			
			default:
				printf("\nDigite somente 1 ou 2 (0 para encerrar)\n");
			}
		}
    	
	} while (check > 0);
	
    return 0;
}
