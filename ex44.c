#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
Uma empresa de fornecimento de energia el�trica faz a leitura mensal dos medidores de consumo. 
Para cada consumidor, s�o digitados os seguintes dados:
	� n�mero do consumidor
	� quantidade de kWh consumidos durante o m�s
	� tipo (c�digo) do consumidor	
		1-residencial, pre�o em reais por kWh = 0,3
		2-comercial, pre�o em reais por kWh = 0,5
		3-industrial, pre�o em reais por kWh = 0,7
		
Os dados devem ser lidos at� que seja encontrado o consumidor com n�mero 0
(zero). O programa deve calcular e imprimir:
	� O custo total para cada consumidor
	� O total de consumo para os tr�s tipos de consumidor
	� A m�dia de consumo dos tipos 1 e 2
*/

int main(){
	
	setlocale(LC_ALL, "Portuguese");

	int numeroConsumidor, codigo, contResidencial=0, contComercial=0;
	float quantidadeKwh, custo=0, mediaResidencial=0, mediaComercial=0;
	float consumoResidencial=0, consumoComercial=0, consumoIndustrial=0;
	
	do{
		printf("Digite o n�mero do consumidor: ");
		scanf("%d",&numeroConsumidor);
		
		if (numeroConsumidor == 0)
		break;

		printf("Digite a quantidade de kWh consumidos: ");
		scanf("%f",&quantidadeKwh);
		printf("Informe o tipo (c�digo) de consumidor:");
		printf("\n1-Residencial");
		printf("\n2-Comercial");
		printf("\n3-Industrial");
		printf("\nTipo: ");
		scanf("%d",&codigo);

		switch(codigo){
			case 1:{
			custo=quantidadeKwh*0.3;
			consumoResidencial+=quantidadeKwh;
			break;
			}
			case 2:{
			custo=quantidadeKwh*0.5;
			consumoComercial+=quantidadeKwh;
			break;
			}
			case 3:{
			custo=quantidadeKwh*0.7;
			consumoIndustrial+=quantidadeKwh;
			break;
			}
			default:
				printf("Tipo de consumidor inv�lido.");
		}	
		
			if(codigo==1)
				contResidencial++;
			else if(codigo==2)
				contComercial++;
			
		printf("\nConsumidor %d",numeroConsumidor);
		printf("\nCusto: %.2f Eur\n\n", custo);	
	}while(numeroConsumidor!=0);
	
	if(contResidencial!=0)
		mediaResidencial=consumoResidencial/contResidencial;
	if(contComercial!=0)	
		mediaComercial=consumoComercial/contComercial;	
		
	printf("\nTotal consumido residencial: %.2f kwh",consumoResidencial);
	printf("\nTotal consumido comercial: %.2f kwh",consumoComercial);
	printf("\nTotal consumido industrial: %.2f kwh",consumoIndustrial);
	
	printf("\nM�dia de consumo residencial: %.2f kwh", mediaResidencial);
	printf("\nM�dia de consumo comercial: %.2f kwh", mediaComercial);
	
	printf("\n\nPressione qualquer tecla para finalizar.");
	getchar();
	return 0;
}
