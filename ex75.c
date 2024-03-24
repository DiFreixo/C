#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/*
 Fa�a um programa que leia um conjunto de 30 valores inteiros, 
 armazene-os num vetor e imprima os n�meros ao contr�rio da ordem de leitura
*/

int main(){
	setlocale(LC_ALL,"");

	srand(time(NULL));
	
	int numeros[30], i;
	
	for (i=0; i<30; i++){
		numeros[i]=(rand() % 100);
		printf("\nN�mero %d: %d", i+1, numeros[i]);
	}
	
	printf("\n\n*** N�meros por ordem inversa *** \n");
	for (i=29; i>=0; i--){
		printf("\nN�mero %d: %d", i+1, numeros[i]);		
	}

	return 0;
}
