#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

/*
Faça um programa que permita entrar com valores em uma matriz A de tamanho
3 X 4. Gerar e imprimir uma matriz B que é o triplo da matriz A.
*/

int main(){
	setlocale(LC_ALL,"");
	srand(time(NULL)); //gera uma sequência de números diferente
	
	int matrizA[3][4], i,j, matrizB[3][4];

	
	//preencher matriz
	for (i=0; i<3; i++){
		for (j=0; j<4; j++){
			matrizA[i][j] = (rand() % 100);	
		}
	}
		

	for (i=0; i<3; i++){
		for (j=0; j<4; j++){
			matrizB[i][j]=3*matrizA[i][j];
			printf("%3d  ", matrizB[i][j]);	
		}
		printf("\n");
	}	
		
	return 0;
}
