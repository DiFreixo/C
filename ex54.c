#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
Fa�a um programa que calcule quantos litros de gasolina s�o usados numa viagem, sabendo que um carro faz 10 km/litro. 
O usu�rio fornecer� a velocidade do carro e o per�odo de tempo que viaja nesta velocidade para cada trecho do percurso. 
Ent�o, usando as f�rmulas dist�ncia = tempo x velocidade e litros consumidos = dist�ncia / 10, o programa computar�, 
para todos os valores n�onegativos de velocidade, os litros de combust�vel consumidos. 
O programa dever� imprimir a dist�ncia e o n�mero de litros de combust�vel gastos naquele trecho.
Dever� imprimir tamb�m o total de litros gastos na viagem. 
O programa encerra quando o usu�rio informar um valor negativo de velocidade.
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	//dist�ncia = tempo x velocidade 
	//litros consumidos = dist�ncia / 10
	float velocidade, tempo;
	float distancia=0, consumo=0, totalLitros=0;
	int contador=0;
	

	do{
		
		printf("Informe a velocidade do carro: ");
		scanf("%f",&velocidade);
		if(velocidade<=0)
			break;
		printf("Informe a dura��o da viagem: ");
		scanf("%f",&tempo);
		contador++;
		
		distancia = tempo * velocidade; 
		consumo = distancia / 10;
		totalLitros+=consumo;
		
		printf("\nDist�ncia percorrida no trecho %d: %.2f Km", contador, distancia);
		printf("\nConsumo de combust�vel no trecho %d: %.2f L",contador, consumo);
		printf("\n\n");
	}while(velocidade>0);
	
		printf("\nTotal litros de combust�vel gasto na viagem: %.2f",totalLitros);
	
	printf("\n\nPressione qualquer tecla para finalizar.");
	getchar();
	return 0;
}
