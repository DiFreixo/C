#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
 Faça um programa que leia um número e imprima uma das mensagens: "Maior
do que 20", "Igual a 20"ou "Menor do que 20".
*/

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num1;
	printf("Digite um número: ");
	scanf("%d",&num1);
	
	if(num1>20)
		printf("\n%d é maior que 20.",num1);
	else if(num1==20)
		printf("\n%d é igual a 20.",num1);
	else
		printf("\n%d é menor que 20.",num1);
	


	printf("\n\nPressione qualquer tecla para finalizar.");
	getchar();
	return 0;
}

