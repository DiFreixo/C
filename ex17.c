#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
Fa�a um programa que leia um n�mero e imprima uma das duas mensagens: "�
m�ltiplo de 3"ou "N�o � m�ltiplo de 3".
*/

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num1;
	printf("Digite o n�mero 1: ");
	scanf("%d",&num1);
	
	if(num1%3==0)
		printf("\n%d � m�ltiplo de 3.",num1);
	else
		printf("\n%d n�o � m�ltiplo de 3.",num1);

	printf("\n\nPressione qualquer tecla para finalizar.");
	getchar();
	return 0;
}

