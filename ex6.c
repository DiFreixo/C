#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
	Faça um programa em C que leia dois números inteiros e imprima a subtração
	deles.
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2;
	
	printf("Digite o número 1: ");
	scanf("%d",&num1);
	printf("Digite o número 2: ");
	scanf("%d",&num2);
	
	printf("\n%d - %d = %d", num1,num2,num1-num2);
	
	
	printf("\n\nPressione qualquer tecla para finalizar.");
	getchar();
	return 0;
}
