#include <stdio.h>
#include <locale.h>
#include <math.h>

int main (void) {
    
    setlocale(LC_ALL, "Portuguese");
    
    int numero, quant = 0, checkPrimo = 2, pares = 0, impares =0, primos= 0, ehPrimo = 1;
    
    while(quant < 5) {
    	printf("\nDigite um número: ");
    	scanf("%i", &numero);
    	
    	if(numero%2 == 0) {
    		pares++;
    		
		} else {
			impares++;
		}
		
		if(numero > 1) {
			while(checkPrimo <= (numero/2)) {
			
			if (numero%checkPrimo == 0){
				ehPrimo = 0;
				
			}
			checkPrimo++;
		}
		
		if (ehPrimo == 1 || numero == 1) {
				primos++;
			} 
		}
		
		quant++;
		
	}
    
    printf("\n\nPares: %i\nÍmpares: %i\nPrimos: %i", pares, impares, primos);
    
    
    return 0;
}
