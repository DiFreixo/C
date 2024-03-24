#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

/*
Construa um programa para ler valores para duas matrizes do tipo inteiro de
ordem 3. Gerar e imprimir a matriz diferença.
*/

int main(){
	setlocale(LC_ALL,"");
	srand(time(NULL)); //gera uma sequência de números diferente
	
	int matrizA[3][3], i,j, matrizB[3][3], subtracao[3][3];

	
	//preencher matriz
	for (i=0; i<3; i++){
		for (j=0; j<3; j++){
			matrizA[i][j] = (rand() % 100);
			matrizB[i][j] = (rand() % 100);	
			subtracao[i][j]=	matrizA[i][j] -	matrizB[i][j];
		}
	}
		

	for (i=0; i<3; i++){
		for (j=0; j<3; j++){
			printf("%3d  ", subtracao[i][j]);	
		}
		printf("\n");
	}	
		
	return 0;
}
