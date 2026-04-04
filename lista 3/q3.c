#include <stdio.h>
#include <locale.h>

int main (void) {
    
    setlocale(LC_ALL, "Portuguese");
    
    int x, y = 1;

    printf("--Tabuada simples--\n\n");
    printf("Digite um número inteiro entre 1 e 10: ");
    scanf("%i", &x);

    if(x < 1 || x > 10) {
        printf("Número inválido");

    } else {
        
        while(y <= 10) {
            printf("%i multiplicado por %i = %i\n\n", x, y, x*y);
            y++;
        }
    }

    return 0;
}