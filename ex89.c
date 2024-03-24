#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
Uma floricultura conhecedora de sua clientela gostaria de fazer um programa que
pudesse controlar sempre um stock mínimo de determinadas plantas, pois
todo dia, pela manhã, o dono faz novas aquisições. Criar um algoritmo que deixe
cadastrar 50 plantas, nome, estoque mínimo, estoque atual. Imprimir no final do
programa uma lista das plantas que devem ser adquiridas.
*/

int main(){
	setlocale(LC_ALL,"");
	
	
	char nomes[5][20];
	//coluna 0 - stock atual / coluna 1 - stock minimo
	int stock[5][2], i;
	
	
	printf("\nDigite os dados das 5 plantas:\n");
	for (i=0; i<5; i++) {
		printf("\nDigite o nome da planta:\n");
		fflush(stdin);
		fgets(nomes[i], 20, stdin);
		printf("\nDigite o stock atual:\n");
		scanf("%d", &stock[i][0]);
		printf("\nDigite o stock mínimo:\n");
		scanf("%d", &stock[i][1]);
	}
	
		
	printf("\nPlantas que devem ser adquiridas: \n");
	printf("\nNome \tStock atual \tStock mínimo");	
	for (i=0; i<5; i++) {
		if(stock[i][1]>=stock[i][0])
			printf("\n%s \t%d  \t%d", nomes[i], stock[i][0],stock[i][1]);
	}
		
	return 0;
}
