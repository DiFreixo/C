#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Fa�a um programa em C que leia o valor de um �ngulo em graus e o converta,
utilizando uma fun��o, para radianos e ao final imprima o resultado. Veja a
f�rmula de c�lculo a seguir.

	rad =(ang � pi)/180
	
Em que:
� rad = �ngulo em radianos
� ang = �ngulo em graus
� pi = n�mero do pi

*/

float calculaAngulo(float ang);

int main(){
	setlocale(LC_ALL,"");
	
	float ang, rad=0;
	printf("Digite o valor do �ngulo em graus: ");
	scanf("%f",&ang);

	
	rad = calculaAngulo(ang);
	
	printf("\n�ngulo em radianos: %.2f", rad);
	
	return 0;
}

float calculaAngulo(float ang){
	float rad;
	rad =(ang * 3.14)/180;
	
	return rad;
}


