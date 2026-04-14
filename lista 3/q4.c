#include <stdio.h>
#include <locale.h>

int main (void) {
    
    setlocale(LC_ALL, "Portuguese");
    
    int nmrDigitado, numero, contador = 1, checkPrimo, pares = 0, impares = 0, primos = 0;
    
    printf("-- Checagem de 10 Números --\n");
    
    while(contador < 11) {
    	printf("\nDigite o %i° número: ", contador);
    	scanf("%i", &nmrDigitado);
    	
    	if(nmrDigitado%2 == 0) {
    		pares++;
		} else {
			impares++;
		}
		
		if(nmrDigitado == 2 || nmrDigitado == 3) {
			primos++;
			
		} else {
			numero = nmrDigitado;
			checkPrimo = 0;
			
			while(numero > 0) {
				if(nmrDigitado%numero == 0) {
					checkPrimo++;
				}
				numero--;
			}
			
			if(checkPrimo == 2) {
				primos++;
			}
		}
		contador++;
	}
    printf("\n\nPares: %i\nÍmpares: %i\nPrimos: %i", pares, impares, primos);
    
    return 0;
}
