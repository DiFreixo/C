#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
	Fa�a um programa em C que imprima o seu nome.
*/

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	char nome[10];
	
	printf("Digite o seu nome: ");
	scanf("%s", &nome);
	
	printf("\nO seu nome � %s\n",nome);
	
	
	//system("pause");
	printf("\nPressione qualquer tecla para finalizar.");
	getchar();
	return 0;

}
