#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

/*
Crie um programa que armazene dados inteiros em uma matriz de ordem 5 e
imprima: Todos os elementos que se encontram em posições cuja linha mais
coluna formam um número par.
*/

int main(){
	setlocale(LC_ALL,"");
	srand(time(NULL)); //gera uma sequência de números diferente
	
	int matriz[5][5], i,j;

	
	//preencher matriz
	for (i=0; i<5; i++){
		for (j=0; j<5; j++){
			matriz[i][j] = (rand() % 100);	
		}
	}
		

	for (i=0; i<5; i++){
		for (j=0; j<5; j++){
			if((i+j)%2==0)
			printf("%3d\n", matriz[i][j]);	
		}
	}	
		
	return 0;
}
