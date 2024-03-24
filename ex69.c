#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Faça um programa que leia um vetor vet de 10 elementos e obtenha um vetor w
cujos componentes são os fatoriais dos respectivos componentes de vet.
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int vet[10], i, j, fatorial=0;
	long long int vetorW[10];
	
	printf("\nDigite os 10 valores do vetor vet:\n");
	for (i=0; i<10; i++){
		printf("Digite o número %d: ",i+1);
		scanf("%d",&vet[i]);
	}
	
	for (i=0; i<10; i++){
		fatorial=1;
			if(vet[i]==1)
				vetorW[i]=1;
			else{
				for (j=0; j<vet[i]; j++){
					fatorial=fatorial*(j+1);
				}
				vetorW[i] = fatorial;
		}	
	}	


	printf("\nNúmero \t Fatorial:\n");
	for (i=0; i<10; i++)
		printf("%d \t %lld \n", vet[i], vetorW[i]);
	
	printf("\n\nPressione qualquer tecla para finalizar.");	
	getchar();
	return 0;
}
