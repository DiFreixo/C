#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 Construa um programa em C que leia v�rios n�meros e informe quantos n�meros
entre 100 e 200 foram digitados. Quando o valor 0 (zero) for lido, o algoritmo
dever� cessar sua execu��o.
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero, contador=0;
	
	do{
	printf("Digite um n�mero: ");
	scanf("%d",&numero);
	
	if(numero>=100 && numero <=200)	
		contador++;	
	}while(numero!=0);
	
	printf("Quantidade de n�meros entre 100 e 200: %d", contador);
	
	printf("\n\nPressione qualquer tecla para finalizar.");
	getchar();	
	return 0;
}
