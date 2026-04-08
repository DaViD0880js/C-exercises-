#include <stdio.h>
#include <locale.h>

int main(void) {
	setlocale(LC_ALL, "Portuguese");
	
    int senha = 1234, senhaDigitada = 0, check;

	printf("Digite a senha composta por 4 dígitos: ");
    scanf("%i", &senhaDigitada);
	
	if(senha == senhaDigitada) {
		check = 0;
		
     } else {
		check = 1;
		
		while (check > 0) {
			
        	printf("\nSenha incorreta, tente novamente: ");
        	scanf("%i", &senhaDigitada);
        	
        	if(senhaDigitada == senha) {
        		check = 0;
			}
		}
	}
	
	if(check == 0) {
		printf("\nSenha correta");
	}
    return 0;
}
