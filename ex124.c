#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*
Construa um programa que leia um valor inteiro e retorne se a raiz desse n�mero
� exata ou n�o. Escreva uma fun��o para fazer a valida��o. Ao final imprima o
resultado.	
*/
int raiz(int n);

int main(){
	setlocale(LC_ALL, "");
	
	int n, i;

	printf("\nDigite o numero para verificar a raiz: ");
	scanf("%d", &n);
	
	i = raiz(n);
	
	if (i == 1)
		printf("\nRaiz inteira");
	else
		printf("\nRaiz nao inteira");

	return 0;
}

int raiz(int n){
	float aux = sqrt(n);
	int a = aux;
	aux = aux - a;
	
	if (aux > 0)
		return 0;
	else
		return 1;
}

