#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
 Faça um programa que permita entrar com o nome, a nota da prova 1 e a nota da
prova 2 de um aluno. O programa deve imprimir o nome, a nota da prova 1, a nota
da prova 2, a média das notas e uma das mensagens: "Aprovado", "Reprovado"ou
"em Prova Final"(a média é 7 para aprovação, menor que 3 para reprovação e as
demais em prova final).
*/

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	char nome[10];
	float notaProva1, notaProva2, media;

	printf("Digite o nome do aluno: ");
	scanf("%s",&nome);
	printf("Nota da prova 1: ");
	scanf("%f",&notaProva1);
	printf("Nota da prova 2: ");
	scanf("%f",&notaProva2);
	
	media=(notaProva1+notaProva2)/2;
	
	printf("\n......Dados......\n");
	printf("Aluno: %s",nome);
	printf("\nNota prova 1: %.2f",notaProva1);
	printf("\nNota prova 2: %.2f",notaProva2);
	printf("\nMédia: %.2f",media);
	
	if(media>=7)
		printf("\nAprovado");
	else if(media<3)
		printf("\nReprovado");
	else
		printf("\nEm prova final");
	
	printf("\n\nPressione qualquer tecla para finalizar.");
	getchar();
	return 0;
}

