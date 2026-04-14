#include <stdio.h>
#include <locale.h>

int main(void) {
	
	setlocale(LC_ALL, "Portuguese");
	
    int senha = 1234, senhaDigitada = 0, check;

	printf("Digite a senha composta por 4 dígitos: ");
    scanf("%i", &senhaDigitada);
	
	while (senhaDigitada != senha) {
        printf("\nSenha incorreta, tente novamente: ");
        scanf("%i", &senhaDigitada);
	}
	
	printf("\nSenha correta");
	
    return 0;
}
