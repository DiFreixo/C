#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Crie uma estrutura representando um aluno de uma disciplina. Essa estrutura
deve conter o n�mero de matr�cula do aluno, seu nome e as notas de tr�s provas.
Defina tamb�m um tipo para esta estrutura. Agora, escreva um programa que
leia os dados de cinco alunos e os armazena nessa estrutura. Em seguida, exiba o
nome e as notas do aluno que possui a maior m�dia geral dentre os cinco.
*/

typedef struct aluno {
	int matricula;
	char nome[30];
	float nota1, nota2, nota3;
}Aluno;


void main(){
	setlocale(LC_ALL,"");
	Aluno alunos[3];
	int i, cont=0;
	float media=0, maiorMedia=0;
	
	for (i=0; i<3; i++) {
		printf("Informe o n�mero da matr�cula: ");
		scanf("%d", &alunos[i].matricula);
		printf("Informe o nome: ");
		scanf("%s", &alunos[i].nome);
		printf("Informe a nota da prova 1: ");
		scanf("%f", &alunos[i].nota1);
		printf("Informe a nota da prova 2: ");
		scanf("%f", &alunos[i].nota2);
		printf("Informe a nota da prova 3: ");
		scanf("%f", &alunos[i].nota3);
		printf("\n");
		
		media=(alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3)/3;
		
		if(media>maiorMedia){
			maiorMedia=media;
			cont=i;
		}
	
	}
	printf("\n");
	printf("\nDados do aluno com a maior m�dia");
	printf("\nNome: %s", alunos[cont].nome);
	printf("\nN� Matr�cula: %d", alunos[cont].matricula);
	printf("\nNota prova 1: %.2f", alunos[cont].nota1);
	printf("\nNota prova 2: %.2f", alunos[cont].nota2);
	printf("\nNota prova 3: %.2f", alunos[cont].nota3);
	printf("\nM�dia: %.2f", maiorMedia);
	
	
}

