#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>

/*
 Crie um programa em C para ler um conjunto de 100 números reais e informe:
• quantos números lidos são iguais a 30
• quantos são maior que a média
• quantos são iguais a média
*/

int main(){
	setlocale(LC_ALL,"");

	srand(time(NULL));
	
	int qtd30=0, qtdMaiorMedia=0, qtdIgualMedia=0, i;
	float media=0, numeros[100], soma=0;
	
	for (i=0; i<100; i++){
		numeros[i]=(rand() % 31);
		soma+=numeros[i];
	}
	media= soma/100;
	
	for (i=0; i<100; i++){
		if(numeros[i]==30) qtd30++;
		if(numeros[i]>media) qtdMaiorMedia++;
		if(numeros[i]==media) qtdIgualMedia++;
	}
	
	printf("\nQuantidade de números igual a 30: %d", qtd30);
	printf("\nQuantidade de números maiores que a média: %d", qtdMaiorMedia);
	printf("\nQuantidade de números iguais à média: %d", qtdIgualMedia);
	return 0;
}
