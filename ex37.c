#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
Crie um programa em linguagem C que permita entrar com o nome, a nota da
prova 1 e da prova 2 de 15 alunos. Ao final, imprimir uma listagem, contendo:
nome, nota da prova 1, nota da prova 2, e média das notas de cada aluno. Ao final,
imprimir a média geral da turma.
*/

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	char nome[10];
	float nota1, nota2, media=0, mediaGeral=0;
	int i;
	
	for(i=1;i<=3;i++){
		printf("Nome: ");
		scanf("%s",&nome);
		printf("Nota prova 1: ");
		scanf("%f",&nota1);
		printf("Nota prova 2: ");
		scanf("%f",&nota2);
		printf("\n");
		media=(nota1+nota2)/2;
		printf("\n\tNome: %s",nome);
		printf("\n\tNota prova 1: %.2f",nota1);
		printf("\n\tNota prova 2: %.2f",nota2);
		printf("\n\tMédia: %.2f",media);
		mediaGeral=mediaGeral+media;
		printf("\n\n\n");
	}
		mediaGeral=mediaGeral/(i-1);
	printf("Média geral da turma: %.2f",mediaGeral);
 
	 	
	printf("\n\nPressione qualquer tecla para finalizar.");
	getchar();
	return 0;
}
