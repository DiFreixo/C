#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
Faça um programa que calcule quantos litros de gasolina são usados numa viagem, sabendo que um carro faz 10 km/litro. 
O usuário fornecerá a velocidade do carro e o período de tempo que viaja nesta velocidade para cada trecho do percurso. 
Então, usando as fórmulas distância = tempo x velocidade e litros consumidos = distância / 10, o programa computará, 
para todos os valores nãonegativos de velocidade, os litros de combustível consumidos. 
O programa deverá imprimir a distância e o número de litros de combustível gastos naquele trecho.
Deverá imprimir também o total de litros gastos na viagem. 
O programa encerra quando o usuário informar um valor negativo de velocidade.
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	//distância = tempo x velocidade 
	//litros consumidos = distância / 10
	float velocidade, tempo;
	float distancia=0, consumo=0, totalLitros=0;
	int contador=0;
	

	do{
		
		printf("Informe a velocidade do carro: ");
		scanf("%f",&velocidade);
		if(velocidade<=0)
			break;
		printf("Informe a duração da viagem: ");
		scanf("%f",&tempo);
		contador++;
		
		distancia = tempo * velocidade; 
		consumo = distancia / 10;
		totalLitros+=consumo;
		
		printf("\nDistância percorrida no trecho %d: %.2f Km", contador, distancia);
		printf("\nConsumo de combustível no trecho %d: %.2f L",contador, consumo);
		printf("\n\n");
	}while(velocidade>0);
	
		printf("\nTotal litros de combustível gasto na viagem: %.2f",totalLitros);
	
	printf("\n\nPressione qualquer tecla para finalizar.");
	getchar();
	return 0;
}
