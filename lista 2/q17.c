#include <stdio.h>
#include <locale.h>

int main (void) {
    
    setlocale(LC_ALL, "Portuguese");
    
    float altura, peso;
    int sexo;
    
    printf("Digite o valor da sua altura em metros: ");
    scanf("%f", &altura);
    
    printf("\nDigite seu sexo (1 para feminino ou 2 para masculino): ");
    scanf("%i", &sexo);
    
    switch(sexo) {
    	case 1:
    		peso = 62.1 * altura - 44.7;
    		
    		printf("\nSeu peso ideal seria de %.2fkg\n", peso);
    	break;
    		
    	case 2:
    		peso = 72.7 * altura - 58.0;
    		
    		printf("\nSeu peso ideal seria de %.2fkg\n", peso);	
    	break;
    		
    	default: printf("\nDigite o valor correto para o seu sexo!\n");
	}
    
    return 0;
}
