#include <stdio.h>
#include <locale.h>

int main (void) {
    
    setlocale(LC_ALL, "Portuguese");
    
    int x = 1;

    printf("Contagem de 1 a 50:\n");

    while(x <= 50) {
        printf(" %i\n", x);
        x++;
    }

    return 0;
}