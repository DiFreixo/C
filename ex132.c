#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
ex8.4 - A sequ�ncia de Fibonacci � a sequ�ncia de inteiros: 0,1,1,2,3,5,8,13,21,34,....
Implemente uma fun��o recursiva que calcule e imprima todos os elementos
da s�rie Fibonacci de 0 at� n. Em que, n deve ser informado pelo usu�rio do
programa.
*/



int fibonacci(int num){
	if(num==1 || num==2)
		return 1;
	else
		return fibonacci(num-1) + fibonacci(num-2);
}

void main(){
	setlocale(LC_ALL,"");
	int n,i;
	
	printf("Digite a quantidade de termos da sequ�ncia de Fibonacci: ");
	scanf("%d", &n);
	
	printf("\nA sequ�ncia de Fibonacci �: 0 ");
	for(i=0; i<n; i++)
		printf("%d ", fibonacci(i+1));
}
