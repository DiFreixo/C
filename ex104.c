#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Crie uma estrutura representando uma hora. Essa estrutura deve conter os campos hora, minuto e segundo. 
Agora, escreva um programa que leia um vetor de
cinco posições dessa estrutura e imprima a maior hora.
*/

typedef struct tempo {
	int hora;
	int minuto;
	int segundo;
}Tempo;


void main(){
	setlocale(LC_ALL,"");
	Tempo registo[3], maiorHora;
	int i;
	
	maiorHora.hora=0;
	maiorHora.minuto=0;
	maiorHora.segundo=0;
	
	for (i=0; i<3; i++) {
		printf("Informe o valor da hora: ");
		scanf("%d", &registo[i].hora);
		printf("Informe o valor dos minutos: ");
		scanf("%d", &registo[i].minuto);
		printf("Informe o valor dos segundos: ");
		scanf("%d", &registo[i].segundo);
		printf("\n");		

		if((registo[i].hora>maiorHora.hora) || (registo[i].hora==maiorHora.hora && registo[i].minuto>maiorHora.minuto) ||
		 (registo[i].hora==maiorHora.hora && registo[i].minuto==maiorHora.minuto && registo[i].segundo>maiorHora.segundo)){
			maiorHora.hora=registo[i].hora;
			maiorHora.minuto=registo[i].minuto;
			maiorHora.segundo=registo[i].segundo;
		}
	
	}
	printf("\n");
	printf("\nMaior hora");
	printf("\nHora: %d",maiorHora.hora);
	printf("\nMinuto: %d",maiorHora.minuto);
	printf("\nSegundo: %d",maiorHora.segundo);
}

