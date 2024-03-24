#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
	Faça um programa em C que imprima o produto dos valores 30 e 27.
*/

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2, produto;
	
	num1=30;
	num2=27;
	
	produto= num1*num2;
	
	printf("\nO produto dos valores %d e %d é: %d\n", num1,num2,produto);

	printf("\nPressione qualquer tecla para finalizar.");
	getchar();
	return 0;
}
