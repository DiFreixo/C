#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
 Fa�a um programa em C que leia dois n�meros reais e os imprima.	
*/

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float num1,num2;
	
	printf("\nDigite um n�mero real (v�rgula como separador): ");
	scanf("%f",&num1);
	printf("\nDigite um n�mero real (v�rgula como separador): ");
	scanf("%f",&num2);
	
	printf("\nOs n�meros digitados foram: ");
	printf("\nN�mero 1: %.2f", num1);
	printf("\nN�mero 2: %.2f\n", num2);
	
	printf("\nPressione qualquer tecla para finalizar.");
	getchar();
	return 0;
}
