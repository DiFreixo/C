#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
	Fa�a um programa em C que leia dois n�meros inteiros e imprima a subtra��o
	deles.
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2;
	
	printf("Digite o n�mero 1: ");
	scanf("%d",&num1);
	printf("Digite o n�mero 2: ");
	scanf("%d",&num2);
	
	printf("\n%d - %d = %d", num1,num2,num1-num2);
	
	
	printf("\n\nPressione qualquer tecla para finalizar.");
	getchar();
	return 0;
}
