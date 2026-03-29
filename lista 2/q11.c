#include <stdio.h>
#include <locale.h>

int main() {
	
    setlocale(LC_ALL, "Portuguese");
    
    int a, b, c, variavel;
    
    printf("\nDigite 3 números inteiros com um espaço entre eles: ");
    scanf("%i %i %i", &a, &b, &c);
    
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

    printf("\n\nOrdem crescente dos números digitados: %i, %i, %i\n", a, b, c);

    return 0;
}
