#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
 Fa�a um programa que leia um n�mero e imprima uma das mensagens: "Maior
do que 20", "Igual a 20"ou "Menor do que 20".
*/

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num1;
	printf("Digite um n�mero: ");
	scanf("%d",&num1);
	
	if(num1>20)
		printf("\n%d � maior que 20.",num1);
	else if(num1==20)
		printf("\n%d � igual a 20.",num1);
	else
		printf("\n%d � menor que 20.",num1);
	


	printf("\n\nPressione qualquer tecla para finalizar.");
	getchar();
	return 0;
}

