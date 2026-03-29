#include <stdio.h>
#include <locale.h>

int main (void) {
    
    setlocale(LC_ALL, "Portuguese");
    
    float numero1, numero2, numero3;
    
    printf("\nDigite um número: ");
    scanf("%f", &numero1);
    
    printf("\n\nDigite um segundo número: ");
    scanf("%f", &numero2);
    
    printf("\n\nDigite um terceiro número: ");
    scanf("%f", &numero3);
    
    if(numero1 == numero2 == numero3) {
		
		printf("\n\n%.2f - %.2f - %.2f\n", numero3, numero2, numero1);
	
	} else if(numero1 >= numero2 && numero2 >= numero3 ) {
    	
    	printf("\n\n%.2f - %.2f - %.2f\n", numero3, numero2, numero1);
    	
	} else if(numero3 >= numero2 && numero2 >= numero1) {
		
		printf("\n\n%.2f - %.2f - %.2f\n", numero1, numero2, numero3);
		
	} else if(numero2 >= numero1 && numero1 >= numero3) {
    	
    	printf("\n\n%.2f - %.2f - %.2f\n", numero3, numero1, numero2);
    	
	} else if(numero2 >= numero3 && numero3 >= numero1) {
		
		printf("\n\n%.2f - %.2f - %.2f\n", numero1, numero3, numero2);
		
	} else if(numero1 >= numero3 && numero3 >= numero2) {
		
		printf("\n\n%.2f - %.2f - %.2f\n", numero2, numero3, numero1);
		
	} else {
		
		printf("\n\n%.2f - %.2f - %.2f\n",numero2, numero1, numero3);
	}
    
    return 0;
}
