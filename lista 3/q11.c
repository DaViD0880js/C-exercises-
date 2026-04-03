#include <stdio.h>
#include <locale.h>

int main (void) {
    
    setlocale(LC_ALL, "Portuguese");
    
    int x = 0, pares = 0, impares = 0;
    
    while (x <= 40) {
    	if(x%2 == 0) {
    		pares = pares + x;
    		
		} else {
			impares = impares + x;
		}
		x++;
	}
	
	printf("Soma dos 20 primeiros números pares: %i\n", pares);
	printf("\nSoma dos 20 primeiros números ímpares: %i", impares);
    
    return 0;
}
