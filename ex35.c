#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
Construa um programa que leia o percurso em quilómetros, o tipo do carro e
informe o consumo estimado de combustível, sabendo-se que um carro tipo A
faz 12 km com um litro de gasolina, um tipo B faz 9 km e o tipo C, 8 km por litro.
*/

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	char tipo;
	float quilometros, combustivel=0;
	
	printf("Digite o número de quilómetros percorridos: ");
	scanf("%f",&quilometros);
	
	printf("Informe o tipo de carro < A / B / C >: ");
	scanf(" %c",&tipo);

	if(tipo=='A'){
		combustivel=quilometros/12;
		printf("\nO Consumo de combustível pelo carro tipo %c é %.2f litros.", tipo, combustivel);
		}  
	else if(tipo=='B'){
		combustivel=quilometros/9;
		printf("\nO Consumo de combustível pelo carro tipo %c é %.2f litros.", tipo, combustivel);
		}
	else if(tipo=='C'){
	  	combustivel=quilometros/8;
	  	printf("\nO Consumo de combustível pelo carro tipo %c é %.2f litros.", tipo, combustivel);
		}
	else
		printf("Tipo de carro invalido!");
		
		
	printf("\n\nPressione qualquer tecla para finalizar.");
	getchar();	
	return 0;
}
