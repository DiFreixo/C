#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Fa�a um programa que calcule e imprima o fatorial de um n�mero, usando uma
fun��o que receba um valor e retorne o fatorial desse valor.
*/

int calculaFat(int n);

int main(){
	setlocale(LC_ALL,"");
	
	int numero, fatorial=0;
	printf("Digite um n�mero: ");
	scanf("%d",&numero);

	
	fatorial = calculaFat(numero);
	
	printf("\nFatorial de %d � %d", numero, fatorial);
	
	return 0;
}

int calculaFat(int n){
	int fat=1, i;
	
	for (i=2; i<=n; i++)
	fat*=i;
	
	return fat;
}



