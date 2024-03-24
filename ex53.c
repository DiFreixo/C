#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <string.h>

/*
Crie um programa que leia um conjunto de informações (nome, sexo, idade, peso
e altura) dos atletas que participaram de uma olimpíada, e informar:
	• a atleta do sexo feminino mais alta;
	• o atleta do sexo masculino mais pesado;
	• a média de idade dos atletas.
Obs.: Deverão se lidos dados dos atletas até que seja digitado o nome @ para um
atleta.
*/

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int idade, cont=0;
	float peso, altura, femAlta=0, mPesado=0, mediaIdade=0, somaIdade=0;
	char nome[100], nomeFemAlta[100], nomeMPesado[100], sexo; 
	
	do{
		femAlta=0, mPesado=0;
       
		printf("Nome: ");
		fflush(stdin);
		scanf("%s",&nome);	
		if(strcmp(nome, "@")==0)
			break;
		printf("Sexo < M-Masculino / F-Feminino >: ");
		scanf(" %c",&sexo);  //(sexo,1,stdin);
		//fflush(stdin);
		printf("Idade: ");
		scanf("%d",&idade);
		printf("Altura (em metros separdor vírgula): ");
		scanf("%f",&altura);
		printf("Peso (em Kg): ");
		scanf("%f",&peso);
	
		cont++;
		somaIdade=somaIdade+idade;
		
		if(sexo=='F' && altura>femAlta){
			femAlta=altura;
			strcpy(nomeFemAlta,nome);	
		}
		
		if(sexo=='M' && peso>mPesado){
			mPesado=peso;
			strcpy(nomeMPesado,nome);
		}
		printf("\n\n");
	}while(strcmp(nome, "@")!=0);
	
		mediaIdade=somaIdade/cont;
		
		printf("\nMédia das idades: %.2f",mediaIdade);
		printf("\nAtleta do sexo feminino mais alta: %s\t %.2f",nomeFemAlta,femAlta);
		printf("\nAtleta do sexo masculino mais pesado: %s\t %.2f",nomeMPesado,mPesado);
	
	printf("\n\nPressione qualquer tecla para finalizar.");
	getchar();
	return 0;
}
