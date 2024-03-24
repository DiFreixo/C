#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
A matriz dados contém na 1ª coluna a matrícula do aluno; na 2ª, o sexo (0 para
feminino e 1 para masculino); na 3ª, o código do curso, e na 4ª, o CR (coeficiente
de rendimento).
Faça um programa que armazene esses dados sabendo-se que o código do curso
é uma parte da matrícula: aascccnnn (aa ano, s semestre, ccc código do curso e
nnn matrícula no curso).
Além disso, um grupo empresarial resolveu premiar a aluna com CR mais alto de
um curso cujo código deverá ser digitado. Suponha 10 alunos e que o CR é um nº
inteiro.
*/

int main(){
	setlocale(LC_ALL,"");
	
	int dados[10][4], i, j, curso, crMaior=0, iMaior;
//coluna 0 - matricula do aluno (aascccnnn)
//coluna 1 - sexo 0 para feminino e 1 para masculino
//coluna 2 - código do curso
//coluna 3 - Coeficiente de rendimento
	
	//zerar a matriz
	for (i=0; i<10; i++){
		for (j=0; j<4; j++){
			dados[i][j]=0;
		}
	}
	

	for (i=0; i<10; i++) {
		printf("\nInforme os dados do aluno %d: \n", i+1);
		printf("Informe a matricula <aascccnnn>:");
		scanf("%d", &dados[i][0]);
		printf("Informe o sexo <0-Feminino / 1-Masculino>:");
		scanf("%d", &dados[i][1]);
		printf("Informe o código do curso:");
		scanf("%d", &dados[i][2]);
		printf("Informe o CR:");
		scanf("%d", &dados[i][3]);
	}
	//consultar a premiada
	printf("\nInforme o curso para premiação:\n");
	scanf("%d", &curso);
	
	for (i=0; i<10; i++) {
		if (dados[i][2] == curso) {
			if (dados[i][3] > crMaior && dados[i][1] == 0) {
				crMaior = dados[i][3];
				iMaior = i;
			}
		}
	}
	//imprimindo a aluna premiada
	printf("\nDados da aluna premiada\n");
	printf("Matricula \t Sexo \t Curso \t CR \n");
	printf("%d \t", dados[iMaior][0]);
	printf("Fem. \t");
	printf("%d \t", dados[iMaior][2]);
	printf("%d \n", dados[iMaior][3]);
			
	return 0;
}
