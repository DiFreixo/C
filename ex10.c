#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
 Fa�a um programa em C que leia o saldo de uma conta poupan�a e imprima o
novo saldo, considerando um reajuste de 2%.
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float saldo, saldo2percent;
	
	printf("Digite o saldo da conta poupan�a: ");
	scanf("%f",&saldo);
	
	saldo2percent = saldo + saldo*0.02;
	printf("\nO saldo atual da conta � %.2f Eur", saldo2percent);
	
	printf("\n\nPressione qualquer tecla para finalizar.");
	getchar();
	return 0;
}
