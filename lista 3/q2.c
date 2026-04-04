#include <stdio.h>
#include <locale.h>

int main (void) {
    
    setlocale(LC_ALL, "Portuguese");
    
    int x = 1;
    
    printf("Números pares entre 1 e 100\n\n");
    
    while(x <= 100) {
    	if(x%2 == 0) {
    		printf("\n%i é par\n", x);
		}
		x++;
	}
    
    return 0;
}
