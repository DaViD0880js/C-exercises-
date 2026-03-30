#include <stdio.h>
#include <locale.h>

int main (void) {
    
    setlocale(LC_ALL, "Portuguese");
    
    int sexo;
    float peso, altura, imc;
    
    printf("--C�lculo de IMC--\n\n");
    printf("\nDigite seu sexo (1 para masculino ou 2 para feminino): ");
    scanf("%i", &sexo);
    
    printf("\nDigite o seu peso em kg: ");
    scanf("%f", &peso);
    
    printf("\nDigite sua altura em metros: ");
    scanf("%f", &altura);
    
    if(peso <=0 || altura <=0) {
    	printf("\nDigite valores v�lidos para peso e/ou altura\n");
    	
	} else {
		imc = peso/(altura * altura);
		
		switch(sexo) {
			case 1:
				if(imc < 16.9) {
					printf("\nSeu IMC � de %.1f kg/m^2 (muito abaixo do peso)\n", imc);
					
				} else if(imc <= 18.4) {
					printf("\nSeu IMC � de %.1f kg/m^2 (abaixo do peso)\n", imc);

				} else if(imc <= 24.9) {
					printf("\nSeu IMC � de %.1f kg/m^2 (peso normal)\n", imc);

				} else if(imc <= 29.9) {
					printf("\nSeu IMC � de %.1f kg/m^2 (acima do peso)\n", imc);
					
				} else if(imc <= 34.9) {
					printf("\nSeu IMC � de %.1f kg/m^2 (obesidade grau I)\n", imc);
					
				} else if(imc <= 40) {
					printf("\nSeu IMC � de %.1f kg/m^2 (obesidade grau II)\n", imc);
					
				} else {
					printf("\nSeu IMC � de %.1f kg/m^2 (obesidade grau III)\n", imc);
				}
			break;
				
			case 2:
				if(imc < 18.5) {
					printf("\nSeu IMC � de %.1f kg/m^2(abaixo do peso)\n", imc);

				} else if(imc <= 24.9) {
					printf("\nSeu IMC � de %.1f kg/m^2 (peso ideal)\n", imc);

				} else if(imc <= 29.9) {
					printf("\nSeu IMC � de %.1f kg/m^2 (levemente acima do peso)\n", imc);
					
				} else if(imc <= 34.9) {
					printf("\nSeu IMC � de %.1f kg/m^2 (obesidade grau I)\n", imc);
					
				} else if(imc <= 40) {
					printf("\nSeu IMC � de %.1f kg/m^2 (obesidade severa, grau II)\n", imc);
					
				} else {
					printf("\nSeu IMC � de %.1f kg/m^2 (obesidade m�rbida, grau III)\n", imc);
				}
				break;
				
			default:
				printf("\nDigite o n�mero correto para seu sexo");
		}
	}
    return 0;
}
