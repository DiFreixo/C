#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

/*
Crie um programa que leia valores inteiros em uma matriz A[2][2] e em uma
matriz B[2][2]. Gerar e imprimir a matriz SOMA[2][2].
*/

int main(){
	setlocale(LC_ALL,"");
	srand(time(NULL)); //gera uma sequência de números diferente
	
	int matrizA[2][2], i,j, matrizB[2][2], soma[2][2];

	
	//preencher matriz
	for (i=0; i<2; i++){
		for (j=0; j<2; j++){
			matrizA[i][j] = (rand() % 100);
			matrizB[i][j] = (rand() % 100);	
			soma[i][j]=	matrizA[i][j] +	matrizB[i][j];
		}
	}
		

	for (i=0; i<2; i++){
		for (j=0; j<2; j++){
			printf("%3d  ", soma[i][j]);	
		}
		printf("\n");
	}	
		
	return 0;
}
