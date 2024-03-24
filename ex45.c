#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
 Faça um programa que leia vários números inteiros e apresente o fatorial de cada
número. O algoritmo encerra quando se digita um número menor do que 1.
*/

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int numero, i, fat;
	do{
	fat=1;
	printf("Digite um número (programa encerra se número menor ou igual a 1): ");
	scanf("%d",&numero);
	
	if(numero > 1){
		for (i=numero; i>0; i--)
			fat=fat*i;
			printf("Fatorial: %d \n\n",fat);
	}else
	break;
	
	}while(numero>1);	
	
	
	printf("\n\nPressione qualquer tecla para finalizar.");
	getchar();
	return 0;
}
