#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
Faça um programa que leia um número e informe se ele é ou não divisível por 5.
*/

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num1;
	printf("Digite o número 1: ");
	scanf("%d",&num1);
	
	if(num1%5==0)
		printf("\n%d é divisível por 5.",num1);
	else
		printf("\n%d não é divisível por 5.",num1);

	printf("\n\nPressione qualquer tecla para finalizar.");
	getchar();
	return 0;
}

