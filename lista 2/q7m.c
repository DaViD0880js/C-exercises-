#include <stdio.h>
#include <locale.h>

int main() {
	
    setlocale(LC_ALL, "Portuguese");
    
    float a, b, c, variavel;
    
    printf("\nDigite 3 números com um espaço entre eles");
    printf("\n(Exemplo: 14 25 31 ): ");
    scanf("%f %f %f", &a, &b, &c);
    
    if (a > b) {
        variavel = a;
        a = b;
        b = variavel;
    }
    if (a > c) {
        variavel = a;
        a = c;
        c = variavel;
    }
    if (b > c) {
        variavel = b;
        b = c;
		c = variavel;    
	}
    printf("\n\nOrdem crescente: %.2f < %.2f < %.2f\n", a, b, c);

    return 0;
}
