 #include <stdio.h>
 #include <stdlib.h>
 #include <locale.h>

/*
Fa�a um programa que armazene as notas das provas 1 e 2 de 15 alunos. Calcule
e armazene a m�dia arredondada. Armazene tamb�m a situa��o do aluno: 
	1-Aprovado ou 2-Reprovado. 
Ao final o programa deve imprimir uma listagem contendo as notas, a m�dia e a situa��o de cada aluno em formato tabulado.
Utilize quantos vetores forem necess�rios para armazenar os dados.
*/

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float prova1[15], prova2[15], mediaAluno[15];
	int i, situacao[15];
	
	printf(" ----- Registo das notas da Prova 1 e da Prova 2 ----- \n");
//notas prova 1	
	for (i=0;i<15;i++){
		printf("Nota aluno %d Prova 1: ",i+1);
		scanf("%f",&prova1[i]);
	}
	printf("\n");
//notas prova 2	
	for (i=0;i<15;i++){
		printf("Nota aluno %d Prova 2: ",i+1);
		scanf("%f",&prova2[i]);
	}
//calcular a m�dia de cada aluno i e verificar a situa��o	
	for (i=0;i<15;i++){
		mediaAluno[i]=(prova1[i]+prova2[i])/2;
		
		if(mediaAluno[i]>=10)
			situacao[i]=1;
		else
			situacao[i]=2;				
	}
	
	system("cls");

 printf("\nLista dos alunos\n");
 printf("Nota 1 \t Nota 2 \tM�dia \t\t Situa��o \n");
 for (i=0;i<15; i++) {
	 printf(" %.2f\t",prova1[i]);
	 printf("  %.2f\t",prova2[i]);
	 printf("   \t%.2f",mediaAluno[i]);
	 if (situacao[i] == 1)
	 	printf("\t\t Aprovado \n");
	 else
	 	printf("\t\t Reprovado \n");
 }
	printf("\n\nPressione qualquer tecla para finalizar.");	
	getchar();		
	return 0;
}


