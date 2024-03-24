#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>


/*
Faça um programa que leia os elementos de uma matriz do tipo inteiro com
tamanho 3 X 3 e imprima os elementos multiplicando por 2.
*/

int main(){
	setlocale(LC_ALL,"");
	srand(time(NULL)); //gera uma sequência de números diferente
	
	int matriz[3][3], i,j;

	
	//preencher matriz
	for (i=0; i<3; i++){
		for (j=0; j<3; j++){
			matriz[i][j] = (rand() % 100);
			printf("%3d ", 2*matriz[i][j]);	
		}
		printf("\n");
	}
		
	return 0;
}
