#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
Faça um programa em C que calcule a quantidade de litros de combustível consumidos numa viagem, 
sabendo-se que o carro tem autonomia de 12 km por litro de combustível. 
O programa deverá ler o tempo decorrido na viagem e a velocidade média 
e aplicar as fórmulas:
	D = T ×V 
	L = D/12

	Em que:
	• D = Distância percorrida em horas
	• T = Tempo decorrido
	• V = Velocidade média
	• L = Litros de combustível consumidos
Ao final, o programa deverá imprimir a distância percorrida e a quantidade de
litros consumidos na viagem.
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float distancia=0, velocidade, litrosDeCombustivel=0;
	int tempo;
	
	printf("Digite o tempo de duração da viagem (em horas): ");
	scanf("%d",&tempo);
	printf("\nDigite a velocidade média: ");
	scanf("%f",&velocidade);

	distancia = tempo * velocidade;
	litrosDeCombustivel = distancia/12;
	
	printf("\nA distância percorrida foi %0.2f Km.",distancia);
	printf("\nA quantidade de litros consumida na viagem foi %0.2f litros.",litrosDeCombustivel);
	
	printf("\n\nPressione qualquer tecla para finalizar.");
	getchar();
	return 0;
}
