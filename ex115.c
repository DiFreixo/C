#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Faça um programa em C que leia o valor de um ângulo em graus e o converta,
utilizando uma função, para radianos e ao final imprima o resultado. Veja a
fórmula de cálculo a seguir.

	rad =(ang × pi)/180
	
Em que:
• rad = ângulo em radianos
• ang = ângulo em graus
• pi = número do pi

*/

float calculaAngulo(float ang);

int main(){
	setlocale(LC_ALL,"");
	
	float ang, rad=0;
	printf("Digite o valor do ângulo em graus: ");
	scanf("%f",&ang);

	
	rad = calculaAngulo(ang);
	
	printf("\nÂngulo em radianos: %.2f", rad);
	
	return 0;
}

float calculaAngulo(float ang){
	float rad;
	rad =(ang * 3.14)/180;
	
	return rad;
}


