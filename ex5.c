#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
Faça um programa em C que leia um número inteiro e imprima o seu antecessor
e o seu sucessor.
*/

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int numero;
	
	printf("Digite um número: ");
	scanf("%d",&numero);
	
	printf("\nO antecessor do número %d é %d",numero,numero-1);
	printf("\nO sucessor do número %d é %d\n",numero,numero+1);
	
	printf("\nPressione qualquer tecla para finalizar.");
	getchar();	
	return 0;
}
