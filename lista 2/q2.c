#include <stdio.h>
#include <locale.h>

int main (void) {
    
    setlocale(LC_ALL, "Portuguese");
    
    int semana;
    
    printf("\nDigite um número inteiro de 1 a 7: " );
    scanf("%i", &semana);
    
    switch (semana) {
    	
    	case 1:
    		printf("\n\nSegunda-feira\n");
    	break;
    	
    	case 2:
    		printf("\n\nTerça-feira\n");
    	break;
    	
    	case 3:
    		printf("\n\nQuarta-feira\n");
    	break;
    	
    	case 4:
    		printf("\n\nQuinta-feira\n");
    	break;
    	
    	case 5:
    		printf("\n\nSexta-feira\n");
    	break;
    	
    	case 6:
    		printf("\n\nSábado\n");
    	break;
    	
    	case 7:
    		printf("\n\nDomingo\n");
    	break;
    	
    	default:
    		printf("\nO valor digitado precisa ser um número inteiro entre 1 e 7!\n");
	}
    
    return 0;
}
