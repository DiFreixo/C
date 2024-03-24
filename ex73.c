#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/*
Faça um programa que leia e armazene vários números, até digitar o número
0. Imprimir quantos números iguais ao último número foram lidos. O limite de
números é 100.
*/

int main(){
	setlocale(LC_ALL, "");
	srand (time(NULL));
	
	int numeros[100], i, cont=0, ultimo, aux=0;
	
	for (i=0; i<100; i++){
		numeros[i]=(rand() % 30); //números aleatórios de 0 a 30
	
		
		if (numeros[i]==0){
			printf("\n\nFim do programa\n");
			break;
		}
		else{
		    printf("\nNúmero %3d - %3d",i+1,numeros[i]);
			cont++;
			ultimo=numeros[i];
		}
	}
	

	for (i=0; i<cont; i++){
		
		if (numeros[i]==ultimo){
			aux++;
		}
	}

	
	printf("\nQuantidade números iguais ao último número %d: %d",ultimo, aux);
	
	for (i=0; i<cont; i++){
		
		if (numeros[i]==ultimo)
			printf("\nPosição: %d", i+1);
		
	}
	
	return 0;
}



