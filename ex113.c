#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Fa�a um programa em C que leia tr�s n�meros e, para cada um, imprimir o dobro.
O c�lculo dever� ser realizado por uma fun��o e o resultado impresso ao final do
programa.
*/

void dobraNumero(int n1, int n2, int n3);

int main(){
	setlocale(LC_ALL,"");
	
	int n1, n2, n3;
	printf("Digite o 1� n�mero: ");
	scanf("%d",&n1);
	printf("Digite o 2� n�mero: ");
	scanf("%d",&n2);
	printf("Digite o 3� n�mero: ");
	scanf("%d",&n3);
	
	dobraNumero(n1, n2, n3);
	
	return 0;
}

void dobraNumero(int n1, int n2, int n3) {
	printf("\nDobro do 1� n�mero: %d", n1 * 2);
	printf("\nDobro do 2� n�mero: %d", n2 * 2);
	printf("\nDobro do 3� n�mero: %d", n3 * 2);
}

