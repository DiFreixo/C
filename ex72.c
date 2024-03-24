#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <math.h>

/*
Faça um programa que armazene 50 números inteiros num vetor. O programa
deve gerar e imprimir um segundo vetor em que cada elemento é o quadrado do
elemento do primeiro vetor.
*/


int main(){
	setlocale(LC_ALL, "");
	srand (time(NULL));
	const int MIN=1;
   	const int MAX=500;
	int vetor[50], quadrado[50], i;
	
	for (i=0; i<50; i++){
		vetor[i]= (rand() % (MAX - MIN + 1)) + MIN;
		quadrado[i]= pow(vetor[i],2);
	}
	
	for (i=0; i<50; i++){
		
		printf("\nNúmero %2d - %3d \t%6d",i+1, vetor[i],quadrado[i]);
	}
	
	
	return 0;
}
