#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
Fa�a um programa que leia um n�mero e informe se ele � ou n�o divis�vel por 5.
*/

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num1;
	printf("Digite o n�mero 1: ");
	scanf("%d",&num1);
	
	if(num1%5==0)
		printf("\n%d � divis�vel por 5.",num1);
	else
		printf("\n%d n�o � divis�vel por 5.",num1);

	printf("\n\nPressione qualquer tecla para finalizar.");
	getchar();
	return 0;
}

