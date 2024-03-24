#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/*
8.3. Considere um vetor vet de tamanho 20. Construa um programa com algoritmos
recursivos para calcular:
• o elemento máximo do vetor;
• o elemento mínimo do vetor;
• a soma dos elementos do vetor;
• o produto dos elementos do vetor;
• a média dos elementos do vetor.
*/   

int maxNum(int v[], int tam, int indice){
	if (tam==1) //caso base       //tam==0
		return v[indice]; //maior elemento do vetor
	else{
		if (v[tam-1] > v[indice]) // compara dois elementos para descobrir qual é o maior
			return maxNum(v, tam-1, tam-1);
		else
			return maxNum(v, tam-1, indice);
	}		
}


int minNum(int v[], int tam, int indice){
	if (tam==1) //já foi percorrido todo o vetor
		return v[indice]; //menor elemento do vetor
	else{
		if (v[tam-1] < v[indice]) // compara dois elementos para descobrir qual é o menor
			return minNum(v, tam-1, tam-1);
		else
			return minNum(v, tam-1, indice);
	}			
}


int soma(int v[], int tam){
	if(tam==0) //caso base, vetor vazio    
		return 0;
	else
		return v[tam - 1] + soma(v, tam - 1); // chamada recursiva
}


unsigned long long int produto(int v[], int tam){	
	if (tam==1)
		return v[0];      
	else
		return (v[tam-1] * produto(v,tam-1));	
			
}		


float mediaVet(int v[], int tam, int indice){	
	if (indice==tam-1)
		return (v[indice] + mediaVet(v,tam, indice-1))/tam;      
	if (indice>0 && (indice!=tam-1))
		return (v[indice] + mediaVet(v,tam, indice-1));
	else 
		return v[indice];			
}



int main(){
	
	setlocale(LC_ALL,"Portuguese");
	srand(time(NULL));
	int vet[20], i;

    for (i=0;i<20;i++)
    	vet[i]= 1 + rand() % 50;  
    	
    printf("Os vinte valores do vetor: \n");
    for (i=0;i<20;i++)
    	printf("%d\n", vet[i]); 
	
	printf("\n"); 	 
    printf("Máximo...: %d\n", maxNum(vet, 20, 0));
    printf("Mínimo...: %d\n", minNum(vet, 20, 0));
    printf("Soma.....: %d\n", soma(vet, 20));
    printf("Produto..: %llu\n", produto(vet, 20));
    printf("Média....: %.2f\n", mediaVet(vet, 20, 19));
    	
	return 0;
}









