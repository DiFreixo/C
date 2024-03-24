#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*
Implemente um programa que leia uma mensagem e um caractere. Após a leitura,
o programa deve, por meio de função, retirar todas as ocorrências do caractere
informado na mensagem colocando * em seu lugar. A função deve também
retornar o total de caracteres retirados. Ao final, o programa deve imprimir a frase
ajustada e a quantidade de caracteres substituídos.	
*/


int contaLetra(char c[100], char caracter){
	int i, cont=0;
	for (i=0; i < strlen(c); i++) {
		if (c[i] == caracter) {
			c[i] = '*';
			cont++;
		}
	}

	for (i=0; i < strlen(c); i++)
	printf("%c", c[i]);
	
	return cont;
}

void main(){
	char c[100], caracter;
	
	printf("\nDigite a frase:");
	gets(c);
	printf("\nDigite o caracter:");
	scanf("%c", &caracter);
	
	int cont = contaLetra(c, caracter);

	printf("\nQuantidade de caracters encontrados: %d", cont);
}

