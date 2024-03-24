#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
Faça um programa que leia um número e imprima uma das duas mensagens: "É
múltiplo de 3"ou "Não é múltiplo de 3".
*/

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num1;
	printf("Digite o número 1: ");
	scanf("%d",&num1);
	
	if(num1%3==0)
		printf("\n%d é múltiplo de 3.",num1);
	else
		printf("\n%d não é múltiplo de 3.",num1);

	printf("\n\nPressione qualquer tecla para finalizar.");
	getchar();
	return 0;
}

