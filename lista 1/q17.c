#include <stdio.h>

int main (void) {
	
	//12km/L
	//usuario fornece TEMPO e VELOCIDADE MEDIA ======> DISTANCIA = TEMPO * VELOCIDADE
	// LITROS USADOS = DISTANCIA/12
	//mostrar TEMPO DECORRIDO, VELOCIDADE MEDIA, DISTANCIA PERCORRIDA, LITROS USADOS
	
	float tempo, velocidade, distancia, litros;
	
	printf("\nDigite o tempo em horas percorrido pelo carro na viagem:\n");
	scanf("%f", &tempo);
	
	printf("\nDigite a velocidade media do carro na viagem em km/h:\n");
	scanf("%f", &velocidade);
	
	distancia = tempo * velocidade;
	
	litros = distancia/12;
	
	printf("\nO tempo percorrido pelo carro foi de %f horas\n\nA velocidade media foi de %f km/h\n\nA distancia percorrida foi de %f km\n\n%f litros foram usados\n", tempo, velocidade, distancia, litros);
	
  return 0;
}
