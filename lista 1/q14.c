#include <stdio.h>
#include <math.h>

int main (void) {
	
	float base, ind;
	double raiz;

	printf("\nDigite o valor da base da raiz:\n");
	scanf("%f", &base);
	
	printf("\nDigite o valor do indice da raiz:\n");
	scanf("%f", &ind);
	
	raiz = pow(base, 1/ind);
	
	printf("\nO valor da raiz de base %f e indice %f = %lf\n", base, ind, raiz);

  return 0;
}
