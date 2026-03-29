#include <stdio.h>
#include <locale.h>

int main (void) {
    
    setlocale(LC_ALL, "Portuguese");
    
    float a, b, media, exameF, media2;
    
    printf("--Média semestral em Algoritmos e Programação--\n\n");
    printf("Digite sua nota do primeiro bimestre: ");
    scanf("%f", &a);
    
    printf("\nDigite sua nota do segundo bimestre: ");
    scanf("%f", &b);
    
    media = (a+b)/2.0;
    
    if(media >= 6) {
    	printf("\nVocê foi aprovado com uma média %.2f", media);
    	
	} else {
		printf("\nDigite sua nota no exame final: ");
		scanf("%f", &exameF);
		
		media2 = (media + exameF)/2.0;
		
		if(media2 >= 6) {
			printf("\nVocê foi aprovado com uma média %.2f", media2);
			
		} else {
			printf("\nVocê foi reprovado com uma média %.2f", media2);
		}
	}
    
    return 0;
}
 
