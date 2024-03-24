#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Faça um programa que verifique quantas vezes um número é divisível por outro.
A função deve receber dois parâmetros, o dividendo e o divisor. Ao ler o divisor, é
importante verificar se ele é menor que o dividendo. Ao final imprima o resultado.	
*/

int divisao(int dividendo, int divisor){
	int cont = 0;
	while(dividendo >= divisor){
		dividendo = dividendo / divisor;
		cont++;
	}
return cont;
}

void main(){
	setlocale(LC_ALL,"");
	
	int dividendo, divisor, div;
	
	printf("\nDigite o dividendo:");
	scanf("%d", &dividendo);
	printf("\nDigite o divisor:");
	scanf("%d", &divisor);
	
	if(divisor > dividendo)
		printf("\nDivisor maior que dividendo");
	else{
		div = divisao(dividendo, divisor);
		printf("\nNumero de divisoes: %d", div);
	}
}
