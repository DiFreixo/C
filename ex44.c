#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
Uma empresa de fornecimento de energia elétrica faz a leitura mensal dos medidores de consumo. 
Para cada consumidor, são digitados os seguintes dados:
	• número do consumidor
	• quantidade de kWh consumidos durante o mês
	• tipo (código) do consumidor	
		1-residencial, preço em reais por kWh = 0,3
		2-comercial, preço em reais por kWh = 0,5
		3-industrial, preço em reais por kWh = 0,7
		
Os dados devem ser lidos até que seja encontrado o consumidor com número 0
(zero). O programa deve calcular e imprimir:
	• O custo total para cada consumidor
	• O total de consumo para os três tipos de consumidor
	• A média de consumo dos tipos 1 e 2
*/

int main(){
	
	setlocale(LC_ALL, "Portuguese");

	int numeroConsumidor, codigo, contResidencial=0, contComercial=0;
	float quantidadeKwh, custo=0, mediaResidencial=0, mediaComercial=0;
	float consumoResidencial=0, consumoComercial=0, consumoIndustrial=0;
	
	do{
		printf("Digite o número do consumidor: ");
		scanf("%d",&numeroConsumidor);
		
		if (numeroConsumidor == 0)
		break;

		printf("Digite a quantidade de kWh consumidos: ");
		scanf("%f",&quantidadeKwh);
		printf("Informe o tipo (código) de consumidor:");
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
				printf("Tipo de consumidor inválido.");
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
	
	printf("\nMédia de consumo residencial: %.2f kwh", mediaResidencial);
	printf("\nMédia de consumo comercial: %.2f kwh", mediaComercial);
	
	printf("\n\nPressione qualquer tecla para finalizar.");
	getchar();
	return 0;
}
