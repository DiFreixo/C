#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
 Fa�a um programa que leia v�rios n�meros inteiros e apresente o fatorial de cada
n�mero. O algoritmo encerra quando se digita um n�mero menor do que 1.
*/

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	int numero, i, fat;
	do{
	fat=1;
	printf("Digite um n�mero (programa encerra se n�mero menor ou igual a 1): ");
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
