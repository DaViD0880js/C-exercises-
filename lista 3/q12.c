#include <stdio.h>
#include <locale.h>

int main (void) {
	
	int aluno = 1;
	float n1, n2, n3, media, maior = 0, menor = 99999;
	
    setlocale(LC_ALL, "Portuguese");
    
    printf("--Média de 10 alunos--\n\n");
	
	while(aluno <= 10) {
		printf("Digite sua primeira nota: ");
		scanf("%f", &n1);
		
		printf("Digite sua segunda nota: ");
		scanf("%f", &n2);
		
		printf("Digite sua terceira nota: ");
		scanf("%f", &n3);
		
		media = (n1+n2+n3)/3;
		
		if(media > maior) {
			maior = media;
		}
		
		if(media < menor) {
			menor = media;
		}
		
		printf("-- Média do aluno %i = %.2f --\n\n", aluno, media);
		
		aluno++;
	}
	
	printf("\nMaior média: %.2f\nMenor média: %.2f\n", maior, menor);

    return 0;
}
