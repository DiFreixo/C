#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Fa�a um programa que verifique quantas vezes um n�mero � divis�vel por outro.
A fun��o deve receber dois par�metros, o dividendo e o divisor. Ao ler o divisor, �
importante verificar se ele � menor que o dividendo. Ao final imprima o resultado.	
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
