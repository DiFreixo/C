#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
Fa�a um programa que leia um n�mero inteiro entre 1 e 12 e escreva o m�s
correspondente. Caso o usu�rio digite um n�mero fora desse intervalo, dever�
aparecer uma mensagem informando que n�o existe m�s com este n�mero.
Utilize o switch para este problema.
*/

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int numero;
	printf("Digite um n�mero: ");
	scanf("%d",&numero);
	
	switch(numero){
		case 1:
			printf("\nJaneiro");
			break;
		case 2:
			printf("\nFevereiro");
			break;
		case 3:
			printf("\nMar�o");
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
			printf("\nN�o existe m�s com este n�mero.");		
	}
	
	
	printf("\n\nPressione qualquer tecla para finalizar.");
	getchar();
	return 0;
}
