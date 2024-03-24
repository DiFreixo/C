#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
ex8.5 - Escreva uma função recursiva em C para calcular o máximo divisor comum de
dois números, mdc(x, y)
*/


int mdc(int m, int n){
 if (n==0)
 	return m;
 return mdc(n, m % n);
}


void main(){
	setlocale(LC_ALL,"");
	int m, n, resultado;
	
	printf("Para calcular o MDC informe:\n");
	printf("M: ");
	scanf("%d", &m);
	printf("N: ");
	scanf("%d", &n);
	resultado = mdc(m, n);
	printf("MDC: %d \n", resultado);
}
