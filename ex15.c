#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
1. Fa�a um programa em C que leia dois valores num�ricos inteiros e efetue a adi��o,
caso o resultado seja maior que 10, apresent�-lo.
*/

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int num1, num2, soma;
	
	printf("Digite o n�mero 1: ");
	scanf("%d",&num1);
	printf("Digite o n�mero 2: ");
	scanf("%d",&num2);
	
	soma=num1+num2;
	
	if(soma>10){
		printf("\n%d + %d = %d", num1,num2,soma);
		printf("\nA soma � maior que 10.");
	}		

	printf("\n\nPressione qualquer tecla para finalizar.");
	getchar();
	return 0;
}
