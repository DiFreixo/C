#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*Exercício 3 - PROGRAMA USADO: DEV-C++
Crie uma função em C, do tipo void, que receba um número entre 0 e 50 e devolva a informação se o 
número é par ou ímpar.
*/   	//NOTA: Crie um menu de escolha para as funções anteriores.

int opcao=0, numero=0;	

void menu();
void dados();
void resultado();


int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n ------- Par ou Ímpar -------- \n");
	menu();
	
	return 0;
}

void menu(){
	do{
	    printf("\nEscolha uma opção:");
	    printf("\n1 - Introduzir valores;");
	    printf("\n2 - Ver resultado;");
	    printf("\n3 - Sair.\n");
	    scanf("%d",&opcao);
	    switch(opcao){
	        case 1:{
			 	dados();
	            break;
			}  
	        case 2:{
	            resultado();
	            break;
	        } 
	        case 3:{
	            break;
	        } 
	        default:{
	            printf("\nOpção inválida!\n");
	            printf("Digite novamente.\n\n");
			}             
	    }
    }while(opcao!=3);
}

void dados(){
	do{
		printf("Digite um número entre 0 e 50: ");
		scanf("%d", &numero);
	}while(numero<0 || numero>50);
}

void resultado(){
	if(numero%2==0)
		printf("\nO número %d é PAR.\n", numero);
	else
		printf("\nO número %d é ÍMPAR.\n", numero);
}
