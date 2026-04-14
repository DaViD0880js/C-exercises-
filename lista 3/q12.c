#include <stdio.h>
#include <locale.h>

int main (void) {
	
	setlocale(LC_ALL, "Portuguese");
	
	int aluno = 1;
	float n1, n2, n3, media, maior = 0, menor = 10000;
	
    printf("--Média das Notas de 10 Alunos--\n\n");
	
	while(aluno <= 10) {
		printf("Digite a primeira nota: ");
		scanf("%f", &n1);
		
		printf("Digite a segunda nota: ");
		scanf("%f", &n2);
		
		printf("Digite a terceira nota: ");
		scanf("%f", &n3);
		
		media = (n1+n2+n3)/3;
		
		if(media > maior) {
			maior = media;
		}
		
		if(media < menor) {
			menor = media;
		}
		
		printf("\nMédia do %i° aluno = %.2f\n\n", aluno, media);
		aluno++;
	}
	
	printf("\nMaior média: %.2f\nMenor média: %.2f\n", maior, menor);

    return 0;
}
