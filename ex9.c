#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
	Faça um programa em C que leia um número real e imprima ¼ deste número.
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float num;
	
	printf("Digite um número: ");
	scanf("%f",&num);

	printf("\n1/4 de %.2f é %.2f", num,num/4);
	
	printf("\n\nPressione qualquer tecla para finalizar.");
	getchar();
	return 0;
}
