#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Fa�a um programa que receba as notas de tr�s provas e calcule a m�dia. Para o
c�lculo, escreva uma fun��o. O programa deve imprimir a m�dia ao final.
*/

float calculaMedia(float p1, float p2, float p3);

int main(){
	setlocale(LC_ALL,"");
	
	float n1, n2, n3, mediaFinal=0;
	printf("Digite a nota da prova 1: ");
	scanf("%f",&n1);
	printf("Digite a nota da prova 2: ");
	scanf("%f",&n2);
	printf("Digite a nota da prova 3: ");
	scanf("%f",&n3);
	
	mediaFinal = calculaMedia(n1, n2, n3);
	
	printf("\nM�dia: %.2f", mediaFinal);
	
	return 0;
}

float calculaMedia(float p1, float p2, float p3){
	float media;
	media=(p1+p2+p3)/3;
	
	return media;
}


