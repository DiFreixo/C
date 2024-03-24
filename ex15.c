#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
1. Faça um programa em C que leia dois valores numéricos inteiros e efetue a adição,
caso o resultado seja maior que 10, apresentá-lo.
*/

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int num1, num2, soma;
	
	printf("Digite o número 1: ");
	scanf("%d",&num1);
	printf("Digite o número 2: ");
	scanf("%d",&num2);
	
	soma=num1+num2;
	
	if(soma>10){
		printf("\n%d + %d = %d", num1,num2,soma);
		printf("\nA soma é maior que 10.");
	}		

	printf("\n\nPressione qualquer tecla para finalizar.");
	getchar();
	return 0;
}
