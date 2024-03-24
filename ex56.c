#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/* CR- Coeficiente de Rendimento
. Crie um programa que calcule e imprima o CR do período para os alunos de
computação. Para cada aluno, o algoritmo deverá ler:
	• número da matrícula;
	• quantidade de disciplinas cursadas;
	• notas em cada disciplina;
	Além do CR de cada aluno, o programa deve imprimir o melhor CR dos
	alunos que cursaram 5 ou mais disciplinas.
	• fim da entrada de dados é marcada por uma matrícula inválida (matrículas
	válidas de 1 a 5000);
	• CR do aluno é igual à média aritmética de suas notas.
*/

int main(){
	setlocale(LC_ALL, "Portuguese");

	int numMatricula, qtdDisciplinas, n;
	float notaDisciplina, cr=0, somaNotas=0, crAluno=0, melhorCR=0;
	
	do{
		somaNotas=0, cr=0;
		printf("Digite o nº da matrícula: ");
		scanf("%d",&numMatricula);
		
		if(numMatricula<1||numMatricula>5000){
			printf("Valor inválido!!");
			break;
		}
		
		printf("Informe a quantidade de disciplinas frequentadas: ");
		scanf("%d",&qtdDisciplinas);
		for (n=1;n<=qtdDisciplinas;n++){
			printf("Nota disciplina %d: ",n);
			scanf("%f",&notaDisciplina);
			somaNotas+=notaDisciplina;
		}
		
		cr=somaNotas/qtdDisciplinas;
		printf("\nCR do aluno nº %d: %.2f valores", numMatricula, cr);
		
		if(qtdDisciplinas>=5){
			crAluno=cr;
			if(crAluno>melhorCR)
				melhorCR=crAluno;
		} 
	printf("\n\n");
	}while(numMatricula>0 && numMatricula=<5000);
	
	printf("\n\nMelhor CR dos alunos que frequentaram 5 ou mais disciplinas: %.2f valores",melhorCR);
	
	
	printf("\n\nPressione qualquer tecla para finalizar.");
	getchar();
	return 0;
}
