#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
 Fa�a um programa que leia 3 n�meros e imprima o maior deles.
*/

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num1, num2, num3;
	printf("Digite o primeiro n�mero: ");
	scanf("%d",&num1);
	printf("Digite o segundo n�mero: ");
	scanf("%d",&num2);
	printf("Digite o terceiro n�mero: ");
	scanf("%d",&num3);
	
	if (num1>num2 && num1>num3)
		printf("O primeiro n�mero � o maior.");
	else if (num2>num1 && num2>num3)
		printf("O segundo n�mero � o maior.");
	else
		printf("O terceiro n�mero � o maior.");	

	printf("\n\nPressione qualquer tecla para finalizar.");
	getchar();
	return 0;
}

