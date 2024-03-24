#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Faça um programa que leia 20 de números inteiros e armazene em um vetor.
Após essa leitura, o programa deve ler um novo número inteiro para ser procurado
no vetor. Uma função deve verificar se o número lido por último está no vetor e
retornar a posição do número no vetor, caso esteja, ou -1, caso não esteja.
*/

int vetor(int *v, int n){
	
	int i;

	for (i=0; i<20; i++){
 		if(n==v[i])
 			return i;
 	}
 		return -1;
 
}

void main(){
	setlocale(LC_ALL,"");
	int v[20], i, numero;
	
	printf("\nDigite os 20 elementos do vetor:\n");
	for (i=0; i<20; i++)
		scanf("%d", &v[i]);
		
	printf("\n");
	printf("Digite o número a procurar: ");
	scanf("%d",&numero);
	
	i=vetor(v,numero);
	
	if (i!=-1)	
		printf("\n%d presente no vetor na posição %d", numero, i+1);
	else
		printf("\nNúmero não encontrado no vetor.");

}

