#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
Numa Universidade, os alunos das turmas de informática fizeram uma prova
de algoritmos. Cada turma possui um número de alunos. Criar um programa que
imprima:
• quantidade de alunos aprovados;
• média de cada turma;
• percentual de reprovados.
Obs.: Considere aprovado com nota >= 7.0
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int qtdAprovados=0, qtdReprovados=0, numeroTurmas, numeroAlunos, turma, n;
	float mediaTurma=0, percentReprovados=0, nota;
	
	printf("Informe a quantidade de turmas: ");
	scanf("%d",&numeroTurmas);
	
	for (turma=1;turma<=numeroTurmas;turma++){
		mediaTurma=0;

		printf("\nDigite a quantidade de alunos da turma %d: ", turma);
		scanf("%d",&numeroAlunos);
		
		for (n=1;n<=numeroAlunos;n++){
			printf("Digite a nota do aluno %d: ",n);
			scanf("%f",&nota);
		
			if(nota>=7)
				qtdAprovados++;
			else
				qtdReprovados++;
			
			mediaTurma+=nota;	
		}
		mediaTurma=mediaTurma/numeroAlunos;
	
	printf("\nMédia turma %d: %.2f Valores\n\n", turma, mediaTurma);
	}	
	percentReprovados=qtdReprovados/(qtdReprovados+qtdAprovados);
	
	printf("\n\n\nQuantidade geral de alunos aprovados: %d", qtdAprovados);

	printf("\nPercentual geral de reprovados: %.2f %%", percentReprovados*100);

		
	printf("\n\nPressione qualquer tecla para finalizar.");
	getchar();
	return 0;
}
