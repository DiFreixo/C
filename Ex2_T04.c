#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*Exercício 2 - PROGRAMA USADO: DEV-C++
Crie uma função em C, do tipo void, que receba um valor float e uma percentagem de desconto e 
apresente o valor do desconto.
*/   	//NOTA: Crie um menu de escolha para as funções anteriores.

int opcao=0;	
float valor=0, desconto=0, totalDesconto=0;

void menu();
void dados();
void resultado();


int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n ------- Calcular desconto de um produto -------- \n");
	menu();
	
	return 0;
}

void menu(){
	do{
	    printf("\nEscolha uma opção:");
	    printf("\n1 - Introduzir valores;");
	    printf("\n2 - Ver desconto aplicado;");
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
	printf("Digite o valor do produto: ");
	scanf("%f", &valor);
	printf("Digite a %% de desconto aplicado ao produto: ");
	scanf("%f", &desconto);
	totalDesconto = (desconto*valor)/100;
}

void resultado(){
	printf("\nTotal desconto: %.2f EUR\n", totalDesconto);
}
