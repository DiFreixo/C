#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
ex8.4 - A sequência de Fibonacci é a sequência de inteiros: 0,1,1,2,3,5,8,13,21,34,....
Implemente uma função recursiva que calcule e imprima todos os elementos
da série Fibonacci de 0 até n. Em que, n deve ser informado pelo usuário do
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
	
	printf("Digite a quantidade de termos da sequência de Fibonacci: ");
	scanf("%d", &n);
	
	printf("\nA sequência de Fibonacci é: 0 ");
	for(i=0; i<n; i++)
		printf("%d ", fibonacci(i+1));
}
