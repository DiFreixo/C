#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Faça um programa em C que leia três números e, para cada um, imprimir o dobro.
O cálculo deverá ser realizado por uma função e o resultado impresso ao final do
programa.
*/

void dobraNumero(int n1, int n2, int n3);

int main(){
	setlocale(LC_ALL,"");
	
	int n1, n2, n3;
	printf("Digite o 1º número: ");
	scanf("%d",&n1);
	printf("Digite o 2º número: ");
	scanf("%d",&n2);
	printf("Digite o 3º número: ");
	scanf("%d",&n3);
	
	dobraNumero(n1, n2, n3);
	
	return 0;
}

void dobraNumero(int n1, int n2, int n3) {
	printf("\nDobro do 1º número: %d", n1 * 2);
	printf("\nDobro do 2º número: %d", n2 * 2);
	printf("\nDobro do 3º número: %d", n3 * 2);
}

