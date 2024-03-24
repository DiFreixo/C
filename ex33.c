#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
O banco XXX concederá um crédito especial com juros de 2% aos seus clientes
de acordo com o saldo médio no último ano. Faça um programa que leia o saldo
médio de um cliente e calcule o valor do crédito de acordo com a tabela a seguir.
O programa deve imprimir uma mensagem informando o saldo médio e o valor
de crédito.
		Saldo Médio 		Percentual
		de 0 a 500 			nenhum crédito
		de 501 a 1000 		30% do valor do saldo médio
		de 1001 a 3000 		40% do valor do saldo médio
		acima de 3001 		50% do valor do saldo médio
*/

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float saldoCliente, valorCredito=0;
	printf("Informe o saldo médio da conta: ");
	scanf("%f",&saldoCliente);
	
	if(saldoCliente<=500)
		valorCredito=0;
	else if(saldoCliente<=1000)
		valorCredito=0.3*saldoCliente;
	else if(saldoCliente<=3000)
		valorCredito=0.4*saldoCliente;	
	else
		valorCredito=0.5*saldoCliente;
	
	
	printf("\n\tInformação da conta do cliente\n\n");
	printf("Saldo médio: %.2f Eur\n",saldoCliente);
	printf("Valor do crédito: %.2f Eur\n",valorCredito);
	
	printf("\n\nPressione qualquer tecla para finalizar.");
	getchar();	
	return 0;
}
