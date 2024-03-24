#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
Faça um programa em C que leia um número e informe se ele é divisível por 3 e
por 7.
*/

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num1;
	printf("Digite o número 1: ");
	scanf("%d",&num1);
	
	if(num1%3==0 && num1%7==0)
		printf("\n%d é divisível por 3 e por 7.",num1);
	else
		printf("\n%d não é divisível por 3 e por 7.",num1);

	printf("\n\nPressione qualquer tecla para finalizar.");
	getchar();
	return 0;
}

