#include <stdio.h>
#include <math.h>

int main (void) {

    double raio, potencia, volume;

    printf("\nDigite o valor do raio da esfera:\n");
    scanf("%lf", &raio);

    potencia = pow(raio, 3);

    volume = (4 * 3.14159 * potencia)/3;

    printf("\nO valor do volume da esfera = %lfcm3\n", volume);

  return 0;
  
}
