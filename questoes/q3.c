#include <stdio.h>

int main(void) {
	
	int numero, sucessor, antecessor;
	
	printf("Digite um numero inteiro:\n");
	scanf("%i", &numero);
	
	sucessor = numero + 1;
	
	antecessor = numero - 1;
	
	printf("O sucessor de %i = %i\nO antecessor = %i ", numero, sucessor, antecessor);
	
	
	return 0;
}

//questao 3
