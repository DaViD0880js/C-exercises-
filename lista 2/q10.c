#include <stdio.h>
#include <locale.h>
#include <math.h>

int main (void) {
    
    setlocale(LC_ALL, "Portuguese");
    
    float a, b, c, delta, raiz1, raiz2;
    
    printf("--Calculando Equações de Segundo Grau--\n\n");
    printf("Digite o valor do coefiente A, que multiplica x^2: ");
    scanf("%f", &a);
    
    if(a == 0) {
    	printf("\nDigite um valor válido para o coeficiente A");
    	
	} else {
		printf("\n\nDigite o valor do coeficiente B, que multiplica x: ");
    	scanf("%f", &b);
    
    	printf("\n\nDigite o valor do termo independente C: ");
    	scanf("%f", &c);
    
    	delta = (b*b) - (4.0 * a * c);
    
    	if(delta < 0) {
    		printf("\nAs raízes serão números complexos imaginários");
    	
		} else {
			raiz1 = (-b + sqrt(delta)) / (2.0 * a);
			raiz2 = (-b - sqrt(delta)) /  (2.0 * a);
			printf("\nAs raízes da equação são: [%.2f, %.2f]", raiz1, raiz2);
		}
	}

    return 0;
}
