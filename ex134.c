#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
ex8.6 - Escreva um programa recursivo em linguagem C para converter um número da
sua forma decimal para a forma binária. Dica: dividir o número sucessivamente
por 2, sendo que o resto da i-ésima divisão vai ser o dígito i do número binário
(da direita para a esquerda).
*/


int bin(int k) {
	if (k < 2)
		return k;

 	return (10 * bin(k / 2)) + k % 2;
}


void main(){
	setlocale(LC_ALL,"");

	int numero, resultado;
	printf("Digite um numero:");
	scanf("%d", &numero);

	resultado = bin(numero);

	printf("Número binário: %d", resultado);
}
