#include <stdio.h>
#include <locale.h>

int main (void) {
    
    setlocale(LC_ALL, "Portuguese");
    
    int codigo, quantidade;
    float valor;

    printf("\nVeja o cardápio abaixo que lista o produto, seu código e preço, respectivamente:\n");
    printf("Cachorro quente -- 100 -- R$1,20\n");
    printf("Bauru simples   -- 101 -- R$1,30\n");
    printf("Bauru com ovo   -- 102 -- R$1,50\n");
    printf("Hambúrguer      -- 103 -- R$1,20\n");
    printf("Cheeseburguer   -- 104 -- R$1,30\n");
    printf("Refrigerante    -- 105 -- R$1,00\n");
    
    printf("\nDigite o código de UM produto apenas: ");
    scanf("%i", &codigo);
        
    printf("\nDigite a quantidade que deseja: ");
    scanf("%i", &quantidade);
    
    if(quantidade <= 0) {
    	printf("\nA quantidade precisa ser um número inteiro maior que 0!\n");
    	
	} else {
		
		switch (codigo) {
			case 100:
				valor =  quantidade * 1.2;
				printf("\nO valor do lanche sairá por R$%.2f\n", valor);
			break;
			
			case 101:
				valor =  quantidade * 1.3;
				printf("\nO valor do lanche sairá por R$%.2f\n", valor);
			break;
			
			case 102:
				valor =  quantidade * 1.5;
				printf("\nO valor do lanche sairá por R$%.2f\n", valor);
			break;
			
			case 103:
				valor =  quantidade * 1.2;
				printf("\nO valor do lanche sairá por R$%.2f\n", valor);
			break;
			
			case 104:
				valor =  quantidade * 1.3;
				printf("\nO valor do lanche sairá por R$%.2f\n", valor);
			break;
			
			case 105:
				valor =  quantidade * 1;
				printf("\nO valor do lanche sairá por R$%.2f\n", valor);
			break;
			
			default: 
				printf("\nCódigo de produto inválido!\n");
		}
	}
    
    return 0;
}
