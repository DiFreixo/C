#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Fa�a um programa que leia o saldo e o % de reajuste de uma aplica��o financeira
e imprimir o novo saldo ap�s o reajuste. O c�lculo deve ser feito por uma fun��o.
*/

float calculoSaldo(float saldo, float reajuste);

int main(){
	setlocale(LC_ALL,"");
	
	float saldo, reajuste, saldoFinal=0;
	
	printf("Informe o saldo da conta: ");
	scanf("%f",&saldo);
	printf("Informe a %% de reajuste: ");
	scanf("%f",&reajuste);
	
	saldoFinal=calculoSaldo(saldo, reajuste);
	
	printf("\nSaldo final: %.2f", saldoFinal);
	
	return 0;
}

float calculoSaldo(float saldo, float reajuste){
	
	float saldoFinal = saldo + (saldo*reajuste/100);

	return saldoFinal;
}

