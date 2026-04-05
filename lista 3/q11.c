#include <stdio.h>
#include <locale.h>

int main (void) {
    
    setlocale(LC_ALL, "Portuguese");
    
    int x = 0, y = 0, pares = 0, impares = 0;
    
    printf("--Números pares--\n");
    
    while (x <= 40) {
    	if(x%2 == 0) {
    		pares = pares + x;
    		printf("%i, ", x);
		}
		x++;
	}
	printf("\nSoma dos números pares: %i", pares);
	
	printf("\n\n--Números Ímpares--\n");

	while (y <= 40) {
		if(!(y%2 == 0)) {
			impares = impares + y;
			printf("%i, ", y);
		}
		y++;
	}
	printf("\nSoma dos números ímpares: %i", impares);
	
    return 0;
}
