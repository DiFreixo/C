#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
O banco XXX conceder� um cr�dito especial com juros de 2% aos seus clientes
de acordo com o saldo m�dio no �ltimo ano. Fa�a um programa que leia o saldo
m�dio de um cliente e calcule o valor do cr�dito de acordo com a tabela a seguir.
O programa deve imprimir uma mensagem informando o saldo m�dio e o valor
de cr�dito.
		Saldo M�dio 		Percentual
		de 0 a 500 			nenhum cr�dito
		de 501 a 1000 		30% do valor do saldo m�dio
		de 1001 a 3000 		40% do valor do saldo m�dio
		acima de 3001 		50% do valor do saldo m�dio
*/

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float saldoCliente, valorCredito=0;
	printf("Informe o saldo m�dio da conta: ");
	scanf("%f",&saldoCliente);
	
	if(saldoCliente<=500)
		valorCredito=0;
	else if(saldoCliente<=1000)
		valorCredito=0.3*saldoCliente;
	else if(saldoCliente<=3000)
		valorCredito=0.4*saldoCliente;	
	else
		valorCredito=0.5*saldoCliente;
	
	
	printf("\n\tInforma��o da conta do cliente\n\n");
	printf("Saldo m�dio: %.2f Eur\n",saldoCliente);
	printf("Valor do cr�dito: %.2f Eur\n",valorCredito);
	
	printf("\n\nPressione qualquer tecla para finalizar.");
	getchar();	
	return 0;
}
