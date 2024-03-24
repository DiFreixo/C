#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Construa um programa que leia dados para um vetor de 100 elementos inteiros.
Imprimir o maior e o menor, sem ordenar, o percentual de n�meros pares e a
m�dia dos elementos do vetor.
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int vetor[10], i, maiorN=0, menorN=0, soma=0;
	float percNPares=0, par=0, media=0;
	
	printf("\nDigite os 100 valores do vetor:\n");
	for (i=0; i<10; i++){
		scanf("%d",&vetor[i]);
		//verificar a quantidade de n�meros pares do vetor
		if((vetor[i]%2)==0){
			par++;	
		}
		
		//Verificar o maior e o menor n�mero do vetor
		if(i==0){
			maiorN=vetor[0];
			menorN=vetor[0];
		}else if(vetor[i]>maiorN)
			maiorN=vetor[i];
		else if(vetor[i]<menorN) 
			menorN=vetor[i];
			
			
		//calcular a soma dos n�meros do vetor
		soma=soma+vetor[i];			
	}

	media=soma/i;
	percNPares = ((par/i)*100) ;

	printf("\n\nResultado:");
	printf("\nMaior n�mero: %d",maiorN);
	printf("\nMenor n�mero: %d",menorN);
	printf("\n%% de n�meros pares: %.2f", percNPares);
	printf("\nM�dia dos valores do vetor: %.2f",media);
	
	
	
	printf("\n\nPressione qualquer tecla para finalizar.");		
	getchar();
	return 0;
}
