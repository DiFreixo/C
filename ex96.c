#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
/*
Construa um programa que carregue uma matriz 12 X 4 com os valores das vendas
de uma loja, em cada linha represente um mês do ano, e cada coluna, uma semana
do mês. Calcule e imprima:
	• total vendido em cada mês do ano;
	• total vendido em cada semana durante todo o ano;
	• total vendido no ano.
*/

int main(){
	setlocale(LC_ALL,"");
	srand(time(NULL));
	float m[12][4], total=0, mes=0;
	int i, j, opcao;
	
	/*for (i=0; i<12; i++) {
		printf("\nInforme as vendas do mes %d:\n", i+1);
		for (j=0; j<4; j++) {
			printf("\nSemana %d:\n", j+1);
			scanf("%f", &m[i][j]);
		}
	}*/
	
	for (i=0; i<12; i++) {
		for (j=0; j<4; j++){
			m[i][j] = (rand() % 200);
			printf("%.2f  ",m[i][j]);
		}
		printf("\n");
	}
	printf("\n");
	
	for (i=0; i<12; i++) {
		mes = 0;
		printf("\n\nMes %d:\n", i+1);
		for (j=0; j<4; j++) {
			printf("Total vendido na semana %d: %.2f\n", j+1, m[i][j]);
			mes += m[i][j];
			total += m[i][j];
		}
		printf("\nTotal vendido no mes %d: %.2f\n", i+1, mes);
	}
	
	printf("\nTotal vendido no ano: %.2f\n", total);

	return 0;
}

