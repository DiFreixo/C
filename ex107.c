#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
/*
Usando a estrutura "atleta"do exercício anterior, escreva um programa que leia
os dados de cinco atletas e os exiba por ordem de idade, do mais velho para o
mais novo
*/

typedef struct atleta {
	char nome[30];
	char desporto[30];
	int idade;
	float altura;
} Atleta;

void main(){
	setlocale(LC_ALL,"");
	
	Atleta atletas[5], aux;
	int i, j;

	printf("--> Registo dos dados dos atletas\n");
	for (i=0; i<5; i++) {
		printf("Nome: ");
		scanf("%s", &atletas[i].nome);
		printf("Desporto: ");
		scanf("%s", &atletas[i].desporto);
		printf("Idade: ");
		scanf("%d", &atletas[i].idade);
		printf("Altura: ");
		scanf("%f", &atletas[i].altura);
		printf("\n");			
	}
	
	//ordenar idades dos atletas	
	for (i=0; i<5; i++) {
		for (j=i+1; j<5; j++) {
			if (atletas[i].idade < atletas[j].idade) {
				//guardar na variavel auxiliar
				strcpy(aux.nome, atletas[i].nome);
				strcpy(aux.desporto, atletas[i].desporto);
				aux.idade = atletas[i].idade;
				aux.altura = atletas[i].altura;
				
				//trocar as posicoes
				strcpy(atletas[i].nome, atletas[j].nome);
				strcpy(atletas[i].desporto, atletas[j].desporto);
				atletas[i].idade = atletas[j].idade;
				atletas[i].altura = atletas[j].altura;
				
				strcpy(atletas[j].nome, aux.nome);
				strcpy(atletas[j].desporto, aux.desporto);
				atletas[j].idade = aux.idade;
				atletas[j].altura = aux.altura;
			}
		}
	}
	
	for (i=0; i<5; i++) {
		printf("---------Atletas---------\n");
		printf("Nome.....: %s \n", atletas[i].nome);
		printf("Desporto..: %s \n", atletas[i].desporto);
		printf("Idade....: %d \n", atletas[i].idade);
		printf("Altura...: %.2f \n", atletas[i].altura);	
	}
}

