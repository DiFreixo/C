#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*Exerc�cio 1 - PROGRAMA USADO: DEV-C++
Crie uma fun��o em C, do tipo void, que receba a nota final de um aluno (entre 0 e 20) e escreva 
�Aprovado� (Se maior do que 12), �Exame� (Entre 10 e 12), �Reprovado� (Se menor do que 10).
*/   	//NOTA: Crie um menu de escolha para as fun��es anteriores

int opcao=0;
float notaFinal=0;
int numero=0;

void menu();
void nota();
void situacao();

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\t.....Escola.... \n\n");
	menu();
	
	return 0;
}

void menu(){
	do{
	    printf("Escolha uma op��o:");
	    printf("\n1 - Introduzir nota final do aluno;");
	    printf("\n2 - Verificar a situa��o do aluno;");
	    printf("\n3 - Sair.\n");
	    scanf("%d",&opcao);
	    switch(opcao){
	        case 1:{
			 	nota();
	            break;
			}  
	        case 2:{
	            situacao();
	            break;
	        } 
	        case 3:{
	            break;
	        } 
	        default:{
	            printf("\nOp��o inv�lida!\n");
	            printf("Digite novamente.\n\n");
			}             
	    }
    }while(opcao!=3);
}


void nota(){
	printf("Informe n�mero do aluno: ");
	scanf("%d",&numero);
	do{
		printf("Informe a nota final do aluno: ");
		scanf("%f",&notaFinal);
	}while(notaFinal<0 || notaFinal>20);
	printf("\n\n");
}

void situacao(){
	if(numero!=0){
		if(notaFinal>12)
			printf("\nO aluno n� %d est� APROVADO.\n\n",numero);
		else if(notaFinal>=10) 
			printf("\nO aluno n� %d vai a EXAME.\n\n",numero);
		else
			printf("\nO aluno n� %d est� REPROVADO.\n\n",numero);
	}else
		printf("\nN�o existem alunos registados.\n\n");	
}


