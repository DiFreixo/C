#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/*
Fa�a um programa que leia e armazene v�rios n�meros, at� digitar o n�mero
0. Imprimir quantos n�meros iguais ao �ltimo n�mero foram lidos. O limite de
n�meros � 100.
*/

int main(){
	setlocale(LC_ALL, "");
	srand (time(NULL));
	
	int numeros[100], i, cont=0, ultimo, aux=0;
	
	for (i=0; i<100; i++){
		numeros[i]=(rand() % 30); //n�meros aleat�rios de 0 a 30
	
		
		if (numeros[i]==0){
			printf("\n\nFim do programa\n");
			break;
		}
		else{
		    printf("\nN�mero %3d - %3d",i+1,numeros[i]);
			cont++;
			ultimo=numeros[i];
		}
	}
	

	for (i=0; i<cont; i++){
		
		if (numeros[i]==ultimo){
			aux++;
		}
	}

	
	printf("\nQuantidade n�meros iguais ao �ltimo n�mero %d: %d",ultimo, aux);
	
	for (i=0; i<cont; i++){
		
		if (numeros[i]==ultimo)
			printf("\nPosi��o: %d", i+1);
		
	}
	
	return 0;
}



