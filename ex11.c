#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
Fa�a um programa em C que calcule a quantidade de litros de combust�vel consumidos numa viagem, 
sabendo-se que o carro tem autonomia de 12 km por litro de combust�vel. 
O programa dever� ler o tempo decorrido na viagem e a velocidade m�dia 
e aplicar as f�rmulas:
	D = T �V 
	L = D/12

	Em que:
	� D = Dist�ncia percorrida em horas
	� T = Tempo decorrido
	� V = Velocidade m�dia
	� L = Litros de combust�vel consumidos
Ao final, o programa dever� imprimir a dist�ncia percorrida e a quantidade de
litros consumidos na viagem.
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float distancia=0, velocidade, litrosDeCombustivel=0;
	int tempo;
	
	printf("Digite o tempo de dura��o da viagem (em horas): ");
	scanf("%d",&tempo);
	printf("\nDigite a velocidade m�dia: ");
	scanf("%f",&velocidade);

	distancia = tempo * velocidade;
	litrosDeCombustivel = distancia/12;
	
	printf("\nA dist�ncia percorrida foi %0.2f Km.",distancia);
	printf("\nA quantidade de litros consumida na viagem foi %0.2f litros.",litrosDeCombustivel);
	
	printf("\n\nPressione qualquer tecla para finalizar.");
	getchar();
	return 0;
}
