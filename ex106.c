#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Crie uma estrutura representando um atleta. Essa estrutura deve conter o nome
do atleta, seu esporte, idade e altura. Agora, escreva um programa que leia os
dados de cinco atletas. Calcule e exiba os nomes do atleta mais alto e do mais
velho.
*/

typedef struct atleta {
	char nome[30];
	char desporto[30];
	int idade;
	float altura;
} Atleta;

void main(){
	setlocale(LC_ALL,"");
	
	Atleta atletas[3];
	int i, iAlto=0, iVelho=0, maisVelho=0;
	float maisAlto=0;

	printf("--> Registo dos dados dos atletas\n");
	for (i=0; i<3; i++) {
		printf("Nome: ");
		scanf("%s", &atletas[i].nome);
		printf("Desporto: ");
		scanf("%s", &atletas[i].desporto);
		printf("Idade: ");
		scanf("%d", &atletas[i].idade);
		printf("Altura: ");
		scanf("%f", &atletas[i].altura);
		printf("\n");	
		
		//atleta mais alto
		if(maisAlto<atletas[i].altura){
			maisAlto=atletas[i].altura;
			iAlto=i;
		}
		
		//atleta mais velho
		if(maisVelho<atletas[i].idade){
			maisVelho=atletas[i].idade;
			iVelho=i;
		}
				
	}
	printf("\n");
	
	printf("---------Atleta mais velho---------\n");
	printf("Nome...: %s \n", atletas[iVelho].nome);
	printf("Idade..: %d \n", atletas[iVelho].idade);
	
	printf("---------Atleta mais alto----------\n");
	printf("Nome...: %s \n", atletas[iAlto].nome);
	printf("Altura.: %.2f \n", atletas[iAlto].altura);
}

