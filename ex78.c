#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>


/*
Faça um programa em C que leia os elementos de uma matriz do tipo inteiro com
tamanho 10 X 10. Ao final, imprima todos os elementos.
*/

int main(){
	setlocale(LC_ALL,"");
	srand(time(NULL)); //gera uma sequência de números diferente
	
	int matriz[10][10], i,j;

	
	//preencher matriz
	for (i=0; i<10; i++){
		for (j=0; j<10; j++){
			matriz[i][j] = (rand() % 100);
			printf("%3d ", matriz[i][j]);	
		}
		printf("\n");
	}
		
	return 0;
}
