#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
 Faça um programa em C que leia o saldo de uma conta poupança e imprima o
novo saldo, considerando um reajuste de 2%.
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float saldo, saldo2percent;
	
	printf("Digite o saldo da conta poupança: ");
	scanf("%f",&saldo);
	
	saldo2percent = saldo + saldo*0.02;
	printf("\nO saldo atual da conta é %.2f Eur", saldo2percent);
	
	printf("\n\nPressione qualquer tecla para finalizar.");
	getchar();
	return 0;
}
