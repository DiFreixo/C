#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*Exerc�cio 5 - PROGRAMA USADO: DEV-C++
Crie uma fun��o em C, do tipo void, que receba um caracter. Valida se � F/f ou M/m e escreve 
feminino ou masculino ou inv�lido.
*/   	//NOTA: Crie um menu de escolha para as fun��es anteriores.
	
char opcao=' ';
void menu();

int main(){
	setlocale(LC_ALL, "Portuguese");
	printf("\n ------- Verificar Sexo -------- \n");
	menu();
	
	return 0;
}

void menu(){
	do{
		fflush(stdin);
	    printf("\n\tDigite uma op��o:");
	    printf("\n\tF - Feminino;");
	    printf("\n\tM - Masculino;");
	    printf("\n\tS - Sair.\n");
	    scanf("%c",&opcao);
	    
	    if(opcao=='F'||opcao=='f')
			printf("Feminino\n");
		else if(opcao=='M'||opcao=='m') 
			printf("Masculino\n");
		else if(opcao=='S'||opcao=='s') 
	            break;
	    else{
	            printf("\nOp��o inv�lida!\n");
	            printf("Digite novamente.\n\n");
			}             
    }while(opcao!='S' ||opcao!='s');
}


