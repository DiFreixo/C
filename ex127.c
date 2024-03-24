#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que leia um vetor com tamanho 10 de números inteiros. Após
ler, uma função deve criar um novo vetor com base no primeiro, mas, o novo
vetor deve ser ordenado de forma crescente. O programa deve imprimir este novo
vetor após a ordenação.	
*/

void vetor(int *v){
	
	int i, j, aux=0 ,cres[10];

	for (i=0; i < 10; i++)
 		cres[i] = v[i];

	for (i=0; i < 9; i++){
		for (j=i+1; j<10; j++){
			if(cres[i]>cres[j]){
				aux=cres[i];
				cres[i]=cres[j];
				cres[j]=aux;
			}
		}
	}	


	printf("\nElementos do vetor ordenado: ");
	for (i=0; i<10; i++)
		printf("%d - ", cres[i]);

}

void main(){

	int v[10], i;
	
	printf("\nDigite os 10 elementos do vetor:\n");
	for (i=0; i<10; i++)
		scanf("%d", &v[i]);
	printf("\n");
	
	vetor(v);

}

