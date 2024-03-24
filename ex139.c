#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
8.10. Imagine que comm(n,k) representa o número de diferentes comitês de k pessoas,
que podem ser formados, dadas n pessoas a partir das quais escolher. Por exemplo,
comm(4,3) = 4, porque dadas quatro pessoas, A, B, C e D existem quatro possíveis
comitês de três pessoas: ABC, ABD, ACD e BCD. Escreva e teste um programa
recursivo em C para calcular comm(n,k) para n,k >= 1. Para tal, considere a
seguinte identidade:
	comm(n r k) = n se k = 1
	comm(n r k) = 1 se k = n
	comm(n r k) = comm(n -1,K)+comm(n -1,k -1) se 1 < k < n
*/   

int comm(int n, int k){
	if(k==1)
		return n;
	else if(k==n)
		return 1;
	else if (k>1 && k<n)
		return comm(n-1, k) + comm(n-1,k-1);
	else
		return 0;	
}


int main(){
	
	setlocale(LC_ALL,"Portuguese");
	int n, k, resultado;

	printf("Informe os valores de N e K: \n");
	scanf("%d%d", &n, &k);
	
	
	resultado=comm(n,k);
	printf("\nResultado: \n");
	printf("%d", resultado);


	return 0;
}


