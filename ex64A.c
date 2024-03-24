#include <stdio.h>
#include <stdlib.h>

 void main()
 {
 int i, situacoes[15];
 float notasp1[15], notasp2[15], medias[15];

 for (i=0; i<15; i++) {
	 printf("\nDigite a nota 1 do aluno: \n");
	 scanf("%f", &notasp1[i]);
	 printf("\nDigite a nota 2 do aluno: \n");
	 scanf("%f", &notasp2[i]);
	 medias[i] = (notasp1[i] + notasp2[i]) / 2;
	 if (medias[i] >= 7) {
	 	situacoes[i] = 1;
	 }
	 else {
	 	situacoes[i] = 2;
	 }
 }
 printf("\nLista dos alunos\n");
 printf("Nota 1 \t\t Nota 2 \t Media \t\t Situacao \n");
 for (i=0; i<15; i++) {
	 printf("%f\t", notasp1[i]);
	 printf("%f\t",notasp2[i]);
	 printf("%f\t",medias[i]);
	 if (situacoes[i] == 1)
	 	printf("Aprovado \n");
	 else
	 	printf("Reprovado \n");
 }
 }
