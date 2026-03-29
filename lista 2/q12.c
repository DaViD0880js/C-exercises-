#include <stdio.h>
#include <locale.h>

int main (void) {
    
    setlocale(LC_ALL, "Portuguese");
    
    int a, b, c, d, variavel;
    
    printf("--Valores Divisíveis por 2 e 3--\n\n");
    printf("Digite 4 números inteiros com um espaço entre eles");
    printf("\n(Exemplo: 1 2 3 4): ");
    scanf("%i %i %i %i", &a, &b, &c, &d);
    
    if(a%2 == 0 && a%3 == 0) {
    	printf("\n%i é divisível por 2 e 3\n", a);
	} 
	
	if(b%2 == 0 && b%3 == 0) {
    	printf("\n%i é divisível por 2 e 3\n", b);
	}
	 
	if(c%2 == 0 && c%3 == 0) {
    	printf("\n%i é divisível por 2 e 3\n", c);
	} 
	
	if(d%2 == 0 && d%3 == 0) {
    	printf("\n%i é divisível por 2 e 3\n", d);
	} 
    
    return 0;
}

    //else {
	//	variavel++;
	//}
