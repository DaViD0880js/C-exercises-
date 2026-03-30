#include <stdio.h>
#include <locale.h>

int main (void) {
    
    setlocale(LC_ALL, "Portuguese");
    
    float lado1, lado2, lado3;
    
    printf("\n\nDigite o valor do primeiro lado do triângulo: ");
    scanf("%f", &lado1);
    
    printf("\n\nDigite o valor do segundo lado do triângulo: ");
    scanf("%f", &lado2);
    
    printf("\n\nDigite o valor do terceiro lado do triângulo: ");
    scanf("%f", &lado3);
    
    if (lado3 > lado1 + lado2 || lado2 > lado1 + lado3 || lado1 > lado3 + lado2) {
		printf("\n\nNão é possível formar um triângulo\n");
		
	} else if(lado1 == lado2 && lado2 == lado3) {
		printf("\n\nO triângulo é equilátero\n");
		
	} else if(lado1 == lado2 || lado2 == lado3 || lado1 == lado3) {
		printf("\nO triângulo é isósceles\n");
		
	} else {
		printf("\nO triângulo é escaleno\n");
	}
    
    return 0;
}
