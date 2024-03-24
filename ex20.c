#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
A prefeitura do Rio de Janeiro abriu uma linha de crédito para os funcionários
estatutários. O valor máximo da prestação não poderá ultrapassar 30% do salário
bruto. Faça um programa em linguagem C que permita entrar com o salário bruto
e o valor da prestação e informar se o empréstimo pode ou não ser concedido.
*/

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float salarioBruto, valorDaPrestacao;
	
	printf("Digite o salário bruto: ");
	scanf("%f",&salarioBruto);
	
	printf("Digite o valor da prestação: ");
	scanf("%f",&valorDaPrestacao);
	
	if (valorDaPrestacao>salarioBruto*0.3)
		printf("\nEmpréstimo não concedido.");
	else
		printf("\nEmpréstimo concedido.");
	


	printf("\n\nPressione qualquer tecla para finalizar.");
	getchar();
	return 0;
}

