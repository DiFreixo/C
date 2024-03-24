#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
 Faça um programa em C que leia dois números reais e os imprima.	
*/

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float num1,num2;
	
	printf("\nDigite um número real (vírgula como separador): ");
	scanf("%f",&num1);
	printf("\nDigite um número real (vírgula como separador): ");
	scanf("%f",&num2);
	
	printf("\nOs números digitados foram: ");
	printf("\nNúmero 1: %.2f", num1);
	printf("\nNúmero 2: %.2f\n", num2);
	
	printf("\nPressione qualquer tecla para finalizar.");
	getchar();
	return 0;
}
