#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
Faça um programa em C que leia um número e indique se o número está compreendido entre 20 e 50 ou não.
*/

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num1;
	printf("Digite um número: ");
	scanf("%d",&num1);
	
	if(num1>=20 && num1<=50)
		printf("\n%d está entre 20 e 50.",num1);
	else
		printf("\n%d não está entre 20 e 50.",num1);
	


	printf("\n\nPressione qualquer tecla para finalizar.");
	getchar();
	return 0;
}

