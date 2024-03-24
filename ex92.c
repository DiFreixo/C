#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
A matriz dados cont�m na 1� coluna a matr�cula do aluno; na 2�, o sexo (0 para
feminino e 1 para masculino); na 3�, o c�digo do curso, e na 4�, o CR (coeficiente
de rendimento).
Fa�a um programa que armazene esses dados sabendo-se que o c�digo do curso
� uma parte da matr�cula: aascccnnn (aa ano, s semestre, ccc c�digo do curso e
nnn matr�cula no curso).
Al�m disso, um grupo empresarial resolveu premiar a aluna com CR mais alto de
um curso cujo c�digo dever� ser digitado. Suponha 10 alunos e que o CR � um n�
inteiro.
*/

int main(){
	setlocale(LC_ALL,"");
	
	int dados[10][4], i, j, curso, crMaior=0, iMaior;
//coluna 0 - matricula do aluno (aascccnnn)
//coluna 1 - sexo 0 para feminino e 1 para masculino
//coluna 2 - c�digo do curso
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
		printf("Informe o c�digo do curso:");
		scanf("%d", &dados[i][2]);
		printf("Informe o CR:");
		scanf("%d", &dados[i][3]);
	}
	//consultar a premiada
	printf("\nInforme o curso para premia��o:\n");
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
