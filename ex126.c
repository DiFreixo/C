#include <stdio.h>
#include <stdlib.h>

/*
. Faça um programa que leia um vetor com tamanho 10 de números inteiros.
Após ler, uma função deve verificar se o vetor está ordenado, de forma crescente
ou decrescente, ou se não está ordenado. Imprimir essa resposta no final do
programa.	
*/

int vetor(int *v){
	
int cres=1, decres=1, i;

	for (i=0; i < 9; i++) {
		if (v[i] > v[i+1])
			cres = 0;
		else if (v[i] < v[i+1])
			decres = 0;
}

	if (cres == 1)
		return 1;
	else if (decres == 1)
		return 2;
	else
		return 0;
}

void main(){

	int v[10], i, resultado;
	
	printf("\nDigite os 10 elementos do vetor:\n");
	for (i=0; i<10; i++)
	scanf("%d", &v[i]);
	
	resultado = vetor(v);
	
	if (resultado == 1)
		printf("\nVetor ordenado de forma crescente");
	else if (resultado == 2)
		printf("\nVetor ordenado de forma decrescente");
	else
		printf("\nVetor nao ordenado");
}
