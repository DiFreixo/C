#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>
/*
Faça um programa que leia uma matriz 5 X 5 inteira e apresente uma determinada
linha da matriz, solicitada via teclado.
*/

int main(){
	setlocale(LC_ALL,"");
	srand(time(NULL));
	
	int m[5][5], i, j, linha;

	for (i=0; i<5; i++){
		for  (j=0; j<5; j++){
			m[i][j]= rand() % 50;
			printf("%2d  ",m[i][j]);
		} 
		printf("\n");
	}

	printf("\n\nInforme a o número da linha da matriz a ser apresentada: ");
	scanf("%d",&linha);	
	
	for (i=0; i<5; i++){	
		for  (j=0; j<5; j++){
			if(linha-1 ==i)
				printf("%d - " ,m[i][j]);
		}
	}
	
	return 0;
}
