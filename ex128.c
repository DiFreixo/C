#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Fa�a um programa que leia 20 de n�meros inteiros e armazene em um vetor.
Ap�s essa leitura, o programa deve ler um novo n�mero inteiro para ser procurado
no vetor. Uma fun��o deve verificar se o n�mero lido por �ltimo est� no vetor e
retornar a posi��o do n�mero no vetor, caso esteja, ou -1, caso n�o esteja.
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
	printf("Digite o n�mero a procurar: ");
	scanf("%d",&numero);
	
	i=vetor(v,numero);
	
	if (i!=-1)	
		printf("\n%d presente no vetor na posi��o %d", numero, i+1);
	else
		printf("\nN�mero n�o encontrado no vetor.");

}

