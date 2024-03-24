#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*Exercício 4 - PROGRAMA USADO: DEV-C++
Crie uma função em C, do tipo void, que receba 3 números e apresente o maior.
*/   	//NOTA: Crie um menu de escolha para as funções anteriores.

int opcao=0, numero=0, maiorNumero=0;	

void menu();
void dados();
void resultado();


int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n ------- Calcular o Maior Número -------- \n");
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
	int i;
	for (i=1; i<=3; i++){
		printf("Digite o número %d: ",i);
		scanf("%d", &numero);
	
		if(numero>maiorNumero)
			maiorNumero=numero;
	}
}	

void resultado(){
	printf("\n\nO maior número digitado foi: %d\n\n",maiorNumero);
}
