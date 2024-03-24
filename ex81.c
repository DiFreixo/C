#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

/*
Construa um programa que armazene dados numa matriz de ordem 4 e imprima: Todos os elementos com números ímpares
*/

int main(){
	setlocale(LC_ALL,"");
	srand(time(NULL)); //gera uma sequência de números diferente
	
	int matriz[4][4], i,j;

	
	//preencher matriz
	for (i=0; i<4; i++){
		for (j=0; j<4; j++){
			matriz[i][j] = (rand() % 100);	
		}
	}
		

	for (i=0; i<4; i++){
		for (j=0; j<4; j++){
			if( matriz[i][j]%2!=0)
			printf("%3d\n", matriz[i][j]);	
		}
	}	
		
	return 0;
}
