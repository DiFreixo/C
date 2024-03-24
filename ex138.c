#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
8.9. Escreva uma função recursiva para calcular a função de Ackermann A(m,n), sendo
m e n valores inteiros não negativos, dada por:
	n+1 se m=0
	A(m,n) = A(m-1, 1) se m>0 e n=0
	A(m-1, A(m,n-1)) se m>0 e n>0
*/   

int funcaoAckermann(int m, int n){
	if(m==0)
		return n+1;
	else if(m>0 && n==0)
		return funcaoAckermann(m-1,1);
	else if (m>0 && n>0)
		return funcaoAckermann(m-1, funcaoAckermann(m,n-1));
	else
		return 0;	
}


int main(){
	
	setlocale(LC_ALL,"Portuguese");
	int m, n, resultado;

	printf("Informe os valores de M e N: \n");
	scanf("%d%d", &m, &n);
	
	
	resultado=funcaoAckermann(m,n);
	printf("\nResultado da função de Ackermann: \n");
	printf("%d", resultado);


	return 0;
}


