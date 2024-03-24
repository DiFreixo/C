#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*Exerc�cio 3 - PROGRAMA USADO: DEV-C++
Crie uma fun��o em C, do tipo void, que receba um n�mero entre 0 e 50 e devolva a informa��o se o 
n�mero � par ou �mpar.
*/   	//NOTA: Crie um menu de escolha para as fun��es anteriores.

int opcao=0, numero=0;	

void menu();
void dados();
void resultado();


int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n ------- Par ou �mpar -------- \n");
	menu();
	
	return 0;
}

void menu(){
	do{
	    printf("\nEscolha uma op��o:");
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
	            printf("\nOp��o inv�lida!\n");
	            printf("Digite novamente.\n\n");
			}             
	    }
    }while(opcao!=3);
}

void dados(){
	do{
		printf("Digite um n�mero entre 0 e 50: ");
		scanf("%d", &numero);
	}while(numero<0 || numero>50);
}

void resultado(){
	if(numero%2==0)
		printf("\nO n�mero %d � PAR.\n", numero);
	else
		printf("\nO n�mero %d � �MPAR.\n", numero);
}
