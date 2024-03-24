#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Fa�a um programa que verifique se um n�mero � primo por meio de um fun��o.
Ao final imprima o resultado.
*/

int numeroPrimo(int n);

int main(){
	setlocale(LC_ALL,"");
	
	int n, primo;
	printf("\nDigite um n�mero: ");
	scanf("%d", &n);
	
	primo = numeroPrimo(n);
	if(primo == 2)
		printf("\nN�mero primo");
	else
		printf("\nN�mero n�o primo");
	return 0;
}

int numeroPrimo(int n) {
	int i, aux=0;
	for(i=1; i<=n; i++)
		if(n%i == 0)
			aux++;
	return aux;
}

