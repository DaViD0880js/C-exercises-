#include <stdio.h>
#include <locale.h>

int main (void) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int mes;
	
	printf("\nDigite um número inteiro entre 1 - 12: ");
	scanf("%i", &mes);
	
	switch(mes) {
		
		case 1:
			printf("\nO primeiro mês é Janeiro\n");
		break;
		
		case 2:
			printf("\nO segundo mês é Fevereiro\n");
		break;
		
		case 3:
			printf("\nO terceiro mês é Março\n");
		break;
		
		case 4:
			printf("\nO quarto mês é Abril\n");
		break;
		
		case 5:
			printf("\nO quinto mês é Maio\n");
		break;
		
		case 6:
			printf("\nO sexto mês é Junho\n");
		break;
		
		case 7:
			printf("\nO sétimo mês é Julho\n");
		break;
		
		case 8:
			printf("\nO oitavo mês é Agosto\n");
		break;
		
		case 9:
			printf("\nO nono mês é Setembro\n");
		break;
		
		case 10:
			printf("\nO décimo mês é Outubro\n");
		break;
		
		case 11:
			printf("\nO décimo primeiro mês é Novembro\n");
		break;
		
		case 12:
			printf("\nO décimo segundo mês é Dezembro\n");
		break;
		
		default: 
			printf("\nO valor digitado precisa ser um número inteiro entre 1 e 12 !\n");
	}
	
	return 0;
}
