#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
Fa�a um programa que leia a idade de uma pessoa e informe:
	� Se � maior de idade
	� Se � menor de idade
	� Se � maior de 65 anos
*/

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int idade;
	printf("Digite a sua idade: ");
	scanf("%d",&idade);

	if(idade>=18 && idade<=65)
		printf("Maior de idade.");
	else if(idade<=18)
		printf("Menor de idade.");
	else
		printf("Mais de 65 anos.");	

	printf("\n\nPressione qualquer tecla para finalizar.");
	getchar();
	return 0;
}

