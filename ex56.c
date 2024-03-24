#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/* CR- Coeficiente de Rendimento
. Crie um programa que calcule e imprima o CR do per�odo para os alunos de
computa��o. Para cada aluno, o algoritmo dever� ler:
	� n�mero da matr�cula;
	� quantidade de disciplinas cursadas;
	� notas em cada disciplina;
	Al�m do CR de cada aluno, o programa deve imprimir o melhor CR dos
	alunos que cursaram 5 ou mais disciplinas.
	� fim da entrada de dados � marcada por uma matr�cula inv�lida (matr�culas
	v�lidas de 1 a 5000);
	� CR do aluno � igual � m�dia aritm�tica de suas notas.
*/

int main(){
	setlocale(LC_ALL, "Portuguese");

	int numMatricula, qtdDisciplinas, n;
	float notaDisciplina, cr=0, somaNotas=0, crAluno=0, melhorCR=0;
	
	do{
		somaNotas=0, cr=0;
		printf("Digite o n� da matr�cula: ");
		scanf("%d",&numMatricula);
		
		if(numMatricula<1||numMatricula>5000){
			printf("Valor inv�lido!!");
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
		printf("\nCR do aluno n� %d: %.2f valores", numMatricula, cr);
		
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
