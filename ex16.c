#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
 Fa�a um programa em C que leia dois valores inteiros e efetue a adi��o. Caso o
valor somado seja maior que 20, este dever� ser apresentado somando-se a ele
mais 8, caso o valor somado seja menor ou igual a 20, este dever� ser apresentado
subtraindo-se 5.
*/

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num1, num2, soma=0;
	printf("Digite o n�mero 1: ");
	scanf("%d",&num1);
	printf("Digite o n�mero 2: ");
	scanf("%d",&num2);
	
	soma=num1+num2;
	
	if(soma>20)
		soma=soma+8;
	else
		soma=soma-5;
	
	printf("A soma �: %d",soma);
	
	
	printf("\n\nPressione qualquer tecla para finalizar.");
	getchar();
	return 0;
}
