#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Faça um programa que verifique se um número é primo por meio de um função.
Ao final imprima o resultado.
*/

int numeroPrimo(int n);

int main(){
	setlocale(LC_ALL,"");
	
	int n, primo;
	printf("\nDigite um número: ");
	scanf("%d", &n);
	
	primo = numeroPrimo(n);
	if(primo == 2)
		printf("\nNúmero primo");
	else
		printf("\nNúmero não primo");
	return 0;
}

int numeroPrimo(int n) {
	int i, aux=0;
	for(i=1; i<=n; i++)
		if(n%i == 0)
			aux++;
	return aux;
}

