#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
. Considere um vetor vet de tamanho 20. Construa um programa com algoritmos
recursivos para calcular:
• o elemento máximo do vetor;
• o elemento mínimo do vetor;
• a soma dos elementos do vetor;
• o produto dos elementos do vetor;
• a média dos elementos do vetor.
*/

//retorna o maior elemento do vetor
int maxVet(int *vet, int tam){
	if (tam == 1)
		return vet[0];
	else {
		int aux;
		aux = maxVet(vet, tam-1);
		if (aux > vet[tam-1])
			return aux;
		else
			return (vet[tam-1]);
	}
}

//retorna o menor elemento do vetor
int minVet(int *vet, int tam){
	if(tam==1)
		return vet[0];
	else{
		int aux;
		aux=minVet(vet, tam-1);
		if(aux<vet[tam-1])
			return aux;
		else
			return (vet[tam-1]);
	}
}

 //retorna a soma dos elementos do vetor
int somaVet(int *vet, int ultPos){
	if(ultPos > 0)
		return vet[ultPos] + somaVet(vet, ultPos-1);
	 else
 		return vet[ultPos];
}

int multVet(int *vet, int ultPos){
	if(ultPos > 0)
		return vet[ultPos]  * multVet(vet, ultPos-1);
	 else
 		return vet[ultPos];
}


float mediaVet(int *vet, int ultPos, int tam){
	if (ultPos == tam-1)
		return (vet[ultPos] + mediaVet(vet, ultPos-1, tam)) / tam;
	if (ultPos > 0 && ultPos != tam-1)
		return vet[ultPos] + mediaVet(vet, ultPos-1, tam);
	else
 		return vet[ultPos];
}

int main(){
	setlocale(LC_ALL,"");
	int vet[20], i, max, min, soma;
	int long long prod;
	float media;
	
	for (i=0; i<20; i++) {
		printf("Informe o %dº número: ", i+1);
		scanf("%d", &vet[i]);
	}
	
	max = maxVet(vet, 20);
	min = minVet(vet, 20);
	soma = somaVet(vet, 19);
	prod = multVet(vet, 19);
	media = mediaVet(vet, 19, 20);
	
	printf("\nMaior: %d \n", max);
	printf("Menor: %d \n", min);
	printf("Soma: %d \n", soma);
	printf("Produto: %lld \n", prod);
	printf("Media: %f \n", media);	
	return 0;
}



