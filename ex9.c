#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
	Fa�a um programa em C que leia um n�mero real e imprima � deste n�mero.
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float num;
	
	printf("Digite um n�mero: ");
	scanf("%f",&num);

	printf("\n1/4 de %.2f � %.2f", num,num/4);
	
	printf("\n\nPressione qualquer tecla para finalizar.");
	getchar();
	return 0;
}
