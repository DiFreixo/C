#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 Escreva um programa que contenha uma estrutura representando uma data
válida. Essa estrutura deve conter os campos dia, mês e ano. Em seguida, leia
duas datas e armazene nessa estrutura. Calcule e exiba o número de dias que
decorrem entre as duas datas.

*/

struct data{
	int dia;
	int mes;
	int ano;
};

void main(){
	setlocale(LC_ALL,"");
	
	struct data datas[2];
	
	int i, dias=0;
	
	for (i=0; i<2; i++){
		printf("Informe a data %d <Dia<enter> Mes<enter> Ano<enter>: \n", i+1);
		scanf("%d", &datas[i].dia);
		scanf("%d", &datas[i].mes);
		scanf("%d", &datas[i].ano);
		printf("\n");
	}
	
	dias = (datas[1].ano - datas[0].ano - 1) * 365;
	dias += ((12 - datas[0].mes) * 30) + (datas[1].mes * 30);
	dias += datas[1].dia - datas[0].dia;
	
	printf("Total de dias: %d \n", dias);

}

