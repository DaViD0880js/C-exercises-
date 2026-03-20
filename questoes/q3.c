#include <stdio.h>

int main(void) {
	
	int numero, sucessor, antecessor;
	
	printf("Digite um numero:\n");
	scanf("%i", &numero);
	
	sucessor = numero + 1;
	
	antecessor = numero - 1;
	
	printf("O sucessor de %i eh %i\nO antecessor eh %i ", numero, sucessor, antecessor);
	
	
	return 0;
}

//questao 3
