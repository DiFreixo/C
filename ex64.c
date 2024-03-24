 #include <stdio.h>
 #include <stdlib.h>
 #include <locale.h>

/*
Faça um programa que armazene as notas das provas 1 e 2 de 15 alunos. Calcule
e armazene a média arredondada. Armazene também a situação do aluno: 
	1-Aprovado ou 2-Reprovado. 
Ao final o programa deve imprimir uma listagem contendo as notas, a média e a situação de cada aluno em formato tabulado.
Utilize quantos vetores forem necessários para armazenar os dados.
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
//calcular a média de cada aluno i e verificar a situação	
	for (i=0;i<15;i++){
		mediaAluno[i]=(prova1[i]+prova2[i])/2;
		
		if(mediaAluno[i]>=10)
			situacao[i]=1;
		else
			situacao[i]=2;				
	}
	
	system("cls");

 printf("\nLista dos alunos\n");
 printf("Nota 1 \t Nota 2 \tMédia \t\t Situação \n");
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


