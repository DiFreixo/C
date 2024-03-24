#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
/*
Crie um programa que leia e armazene os elementos de uma matriz inteira com
tamanho 5 X 5 e imprimi-la. Troque, a seguir:
• a segunda linha pela quinta;
• a terceira coluna pela quinta;
• a diagonal principal pela diagonal secundária.
*/

int main(){
	setlocale(LC_ALL,"");
	srand(time(NULL));
	
	int matrizA[5][5], i, j,aux=0, k;
	//preencher a matrizA
	for (i=0;i<5;i++){
		for (j=0;j<5;j++){
			matrizA[i][j] = (rand() % 50);
			printf("%2d  ",matrizA[i][j]);
		}
		printf("\n");
	}
	 	printf("\n\n");	
	//trocar a segunda linha i=1, pela quinta linha i=4
	for (j=0; j<5; j++) {
		aux = matrizA[1][j];
		matrizA[1][j] = matrizA[4][j];
		matrizA[4][j] = aux;
	}
	//imprir a matriz
	for (i=0;i<5;i++){
		for (j=0;j<5;j++){
			printf("%2d  ",matrizA[i][j]);
		}
		printf("\n");
	}
 	printf("\n\n");

 	
	//trocar a terceia coluna j=2, pela quinta coluna j=4
	for (i=0; i<5; i++) {
		aux = matrizA[i][2];
		matrizA[i][2] = matrizA[i][4];
		matrizA[i][4] = aux;
	}
 	//imprir a matriz
	for (i=0;i<5;i++){
		for (j=0;j<5;j++){
			printf("%2d  ",matrizA[i][j]);
		}
		printf("\n");
	}
 	printf("\n\n");

	//trocando a diagonal principal pela diagonal secundaria
	i = 0;
	k = 4;
	for (j=0; j<5; j++) {
		aux = matrizA[i][j];
		matrizA[i][j] = matrizA[k][j];
		matrizA[k][j] = aux;
	k--;
	i++;
}
 	//imprir a matriz
	for (i=0;i<5;i++){
		for (j=0;j<5;j++){
			printf("%2d  ",matrizA[i][j]);
		}
		printf("\n");
	}
			
	return 0;
}
