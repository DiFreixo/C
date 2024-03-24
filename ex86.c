#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

/*
Construa um programa em C que leia valores inteiros para a matriz A 3 x 5. Gerar e
imprimir a matriz SOMACOLUNA, em que cada elemento é a soma dos elementos
de uma coluna da matriz A. Faça o trecho que gera a matriz separado da entrada
e da saída.
*/

int main(){
	setlocale(LC_ALL,"");
	srand(time(NULL)); //gera uma sequência de números diferente
	
	int matrizA[3][5], i,j, somaLinha[3];

	
	//preencher matriz
	for (i=0; i<3; i++){
		for (j=0; j<5; j++){
			matrizA[i][j] = (rand() % 100);
		}
	}
	for (i=0; i<3; i++){
		for (j=0; j<5; j++){
			somaLinha[i]+=matrizA[i][j];		
		}
		printf("\nSoma linha %d: %d",i+1, somaLinha[i]);
	}	
		
	return 0;
}
