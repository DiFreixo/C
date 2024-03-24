#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
Faça um programa que leia um número inteiro entre 1 e 12 e escreva o mês
correspondente. Caso o usuário digite um número fora desse intervalo, deverá
aparecer uma mensagem informando que não existe mês com este número.
Utilize o switch para este problema.
*/

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int numero;
	printf("Digite um número: ");
	scanf("%d",&numero);
	
	switch(numero){
		case 1:
			printf("\nJaneiro");
			break;
		case 2:
			printf("\nFevereiro");
			break;
		case 3:
			printf("\nMarço");
			break;
		case 4:
			printf("\nAbril");
			break;
		case 5:
			printf("\nMaio");
			break;
		case 6:
			printf("\nJunho");
			break;
		case 7:
			printf("\nJulho");
			break;
		case 8:
			printf("\nAgosto");
			break;
		case 9:
			printf("\nSetembro");
			break;
		case 10:
			printf("\nOutubro");
			break;
		case 11:
			printf("\nNovembro");
			break;
		case 12:
			printf("\nDezembro");
			break;
		default:
			printf("\nNão existe mês com este número.");		
	}
	
	
	printf("\n\nPressione qualquer tecla para finalizar.");
	getchar();
	return 0;
}
