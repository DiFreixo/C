#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 Construa um programa em C que leia vários números e informe quantos números
entre 100 e 200 foram digitados. Quando o valor 0 (zero) for lido, o algoritmo
deverá cessar sua execução.
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numero, contador=0;
	
	do{
	printf("Digite um número: ");
	scanf("%d",&numero);
	
	if(numero>=100 && numero <=200)	
		contador++;	
	}while(numero!=0);
	
	printf("Quantidade de números entre 100 e 200: %d", contador);
	
	printf("\n\nPressione qualquer tecla para finalizar.");
	getchar();	
	return 0;
}
