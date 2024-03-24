#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
/*
Supondo que uma matriz apresente em cada linha o total de produtos vendidos ao
mês por uma loja que trabalha com cinco tipos diferentes de produtos, construir
um programa que leia esse total e, ao final, apresente o total de produtos vendidos
em cada mês e o total de vendas por ano por produto.
*/

int main(){
	setlocale(LC_ALL,"");
	srand(time(NULL));
	
	float m[12][5], total=0, mes=0;
	int i, j, opcao;
	
	for (i=0; i<12; i++) {
		for (j=0; j<5; j++) {
			m[i][j]= rand() % 100;
			printf("%.2f  ",m[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	for (i=0; i<12; i++) {
		mes = 0;
		for (j=0; j<5; j++) {
			mes += m[i][j];
			total += m[i][j];
		}
		printf("\nTotal vendido no mes %d: %.2f\n", i+1, mes);
	}
	printf("\nTotal vendido no ano: %.2f\n", total);
	return 0;
}
