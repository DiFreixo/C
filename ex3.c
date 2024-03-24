#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
 Faça um programa em C que imprima a média aritmética entre os números 5, 8,
 12.
*/

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int num1, num2, num3;
	float media;
	num1=5;
	num2=8;
	num3=12;
	
	media=(num1+num2+num3)/3;
	
	printf("\nMédia: %.2f\n",media);
	
	printf("\nPressione qualquer tecla para finalizar.");
	getchar();
	
	return 0;
}
