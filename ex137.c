#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
8.8. Escreva um programa em C recursivo que inverta a ordem dos elementos, números inteiros, de uma lista armazenada num vetor. 
No fim da execução, o conteúdo do primeiro elemento deverá estar no último, o do segundo no penúltimo, e assim por diante. 
Dica: troque os conteúdos das duas extremidades do vetor e chame uma função recursivamente para fazer o mesmo no subvetor interno.
*/   

void inverter(int v[], int posInicio, int posFim){ 
	int aux;
	if (posInicio<posFim){
		aux=v[posInicio];
		v[posInicio] = v[posFim];
		v[posFim] = aux;
		inverter(v, posInicio+1, posFim-1);
	}
		
}


void imprimir(int v[], int tam){
	
	 if(tam==1)
		printf("%2d ", v[tam-1]);
	else{
		imprimir(v, tam-1);	
		printf("%2d ", v[tam-1]);	
	}
}


int main(){
	
	setlocale(LC_ALL,"Portuguese");
	int tam=19;
	int vet[tam], i;

	printf("Elementos do vetor original: \n");
	for (i=0; i<tam; i++){
		vet[i]= 1 + rand() % 70;
		printf("%2d ", vet[i]);
	}


	inverter(vet, 0, tam-1);
	printf("\nElementos do vetor trocados: \n");
	imprimir(vet,tam);


	return 0;
}


