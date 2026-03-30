#include <stdio.h>
#include <locale.h>

int main (void) {
    
    setlocale(LC_ALL, "Portuguese");
    
    float numero1, numero2, numero3, maiorNum;
    
    printf("Digite 3 números com um espaço entre eles");
    printf("\n(Exemplo: 1 2,5 3 ): ");
    scanf("%f %f %f", &numero1, &numero2, &numero3);
    
    maiorNum = numero1;
    
    if(numero2 >= maiorNum) {
    	maiorNum = numero2;
	}
	
	if (numero3 >= numero2) {
		maiorNum = numero3;
	}
	
	printf("\nO maior número é %.2f\n", maiorNum);
		
    return 0;
}
