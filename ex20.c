#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
A prefeitura do Rio de Janeiro abriu uma linha de cr�dito para os funcion�rios
estatut�rios. O valor m�ximo da presta��o n�o poder� ultrapassar 30% do sal�rio
bruto. Fa�a um programa em linguagem C que permita entrar com o sal�rio bruto
e o valor da presta��o e informar se o empr�stimo pode ou n�o ser concedido.
*/

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float salarioBruto, valorDaPrestacao;
	
	printf("Digite o sal�rio bruto: ");
	scanf("%f",&salarioBruto);
	
	printf("Digite o valor da presta��o: ");
	scanf("%f",&valorDaPrestacao);
	
	if (valorDaPrestacao>salarioBruto*0.3)
		printf("\nEmpr�stimo n�o concedido.");
	else
		printf("\nEmpr�stimo concedido.");
	


	printf("\n\nPressione qualquer tecla para finalizar.");
	getchar();
	return 0;
}

