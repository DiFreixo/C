#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
Fa�a um programa em C que leia um n�mero inteiro e imprima o seu antecessor
e o seu sucessor.
*/

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int numero;
	
	printf("Digite um n�mero: ");
	scanf("%d",&numero);
	
	printf("\nO antecessor do n�mero %d � %d",numero,numero-1);
	printf("\nO sucessor do n�mero %d � %d\n",numero,numero+1);
	
	printf("\nPressione qualquer tecla para finalizar.");
	getchar();	
	return 0;
}
