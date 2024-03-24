#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

/*
Faça um programa que leia uma matriz 4 X 5 de inteiros, calcule e imprima a
soma de todos os seus elementos.
*/

int main(){
	setlocale(LC_ALL,"");
	srand(time(NULL)); //gera uma sequência de números diferente
	
	int matriz[4][5], i,j, soma=0;

	
	//preencher matriz
	for (i=0; i<4; i++){
		for (j=0; j<5; j++){
			matriz[i][j] = (rand() % 100);
			soma=soma+matriz[i][j];
		}
	}
		
		printf("\nSoma: %d", soma);
	
		
	return 0;
}
