#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Construa um programa em C que leia um caractere (letra) e, por meio de uma
função, retorne se este caractere é uma consoante ou uma vogal. Ao final imprima
o resultado.	
*/


int letra(char c){
	switch (c) {
		case 'a':
		case 'A':
			return 1;
			break;
		case 'e':
		case 'E':
			return 1;
			break;
		case 'i':
		case 'I':
			return 1;
			break;
		case 'o':
		case 'O':
			return 1;
			break;
		case 'u':
		case 'U':
			return 1;
			break;
		default:
			return 0;
	}
}

void main(){
	char c;
	int i;

	printf("\nDigite o caracter para verificar:");
	scanf("%c", &c);

	i = letra(c);
	if (i == 1)
		printf("\nVogal");
	else
		printf("\nConsoante");
}

