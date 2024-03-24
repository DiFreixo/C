#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

/*
 Faça um programa em C que permita entrar com dados para um vetor VET do tipo
inteiro com 20 posições, em que podem existir vários elementos repetidos. Gere
um vetor VET2 ordenado a partir do vetor VET e que terá apenas os elementos
não repetidos.
*/

int main(){
	setlocale(LC_ALL, "");
	srand(time(NULL));
	
	int VET[20], VET2[20], i=0, y=0, aux=0, cont=0;
	
	printf("\nRegisto dos dados:");
	for (i=0; i<20; i++){
		VET[i]= (rand() % 20);
		printf("\n %2d", VET[i]);
	}


//comparar a posição 0 com a posição 1, caso o valor da posição 0 maior do que o
//valor da posição 1, há troca de valores. Valor da posição 1 passa à posição 0.
//Depois comparo o valor na posição  0 com a posição 2.	assim sucessivamente
	printf("\n\nOrdenação dos dados:"); 
	for (i=0; i<20-1; i++){
		for(y=i+1; y<20; y++){
				if(VET[i]>VET[y]){
					aux= VET[i];
					VET[i]=VET[y];
					VET[y]=aux;	
				}
					
		}
	printf("\n %2d",VET[i]);
	}
	
	printf("\n\nOrdenação dos dados:"); 
	for (i=0; i<20-1; i++){
		for(y=i+1; y<20; y++){
				if(VET[i]>VET[y]){
					aux= VET[i];
					VET[i]=VET[y];
					VET[y]=aux;	
				}
					
		}
	printf("\n %2d",VET[i]);
	}
	
	printf("\n\nNúmeros não repetidos do vetor:"); 
	for (i=0; i<20; i++){
		if (i==0 || VET[i-1] != VET[i]) {
			VET2[cont] = VET[i];
			cont++;
					
		}
	printf("\n %2d",VET2[i]);
	}

	return 0;
}
