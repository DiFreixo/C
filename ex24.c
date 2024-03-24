#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
 Faça um programa que leia 3 números e imprima o maior deles.
*/

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num1, num2, num3;
	printf("Digite o primeiro número: ");
	scanf("%d",&num1);
	printf("Digite o segundo número: ");
	scanf("%d",&num2);
	printf("Digite o terceiro número: ");
	scanf("%d",&num3);
	
	if (num1>num2 && num1>num3)
		printf("O primeiro número é o maior.");
	else if (num2>num1 && num2>num3)
		printf("O segundo número é o maior.");
	else
		printf("O terceiro número é o maior.");	

	printf("\n\nPressione qualquer tecla para finalizar.");
	getchar();
	return 0;
}

