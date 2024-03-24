#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
Construa um programa que receba o valor e o código de várias mercadorias
vendidas em um determinado dia. Os códigos obedecem a lista a seguir:
	L-limpeza
	A-Alimentação
	H-Higiene
Calcule e imprima:
	• o total vendido naquele dia, com todos os códigos juntos;
	• o total vendido naquele dia em cada um dos códigos.
Obs.: Para encerrar a entrada de dados, digite o valor da mercadoria zero.
*/

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float valor, limpeza=0, alimentacao=0, higiene=0, total=0;
	char codigo;

	do {
		printf("\nDigite o valor da mercadoria ou zero para sair: ");
		scanf("%f", &valor);
		if (valor == 0)
			break;
		printf("Escolha o codigo da mercadoria:");
		printf("\nL-limpeza;");
		printf("\nA-Alimentação;");
		printf("\nH-Higiene.\n");
		fflush(stdin);
		scanf("%c", &codigo);
		if (codigo == 'l' || codigo == 'L')
			limpeza += valor;
		else if (codigo == 'a' || codigo == 'A')
			alimentacao += valor;
		else
			higiene += valor;
			
		total += valor;
	
	 } while(valor > 0);

	printf("\nTotal: %.2f",total);
	printf("\nTotal de itens de limpeza: %.2f ",limpeza);
 	printf("\nTotal de itens de alimentacao: %.2f ",alimentacao);
 	printf("\nTotal de itens de higiene: %.2f ",higiene);
	
	
	printf("\n\nPressione qualquer tecla para finalizar.");	
	getchar();	
	return 0;
}
