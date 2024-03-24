#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Uma pousada estipulou o pre�o para a di�ria em R$30,00 e mais uma taxa de
servi�os di�rios de:
	� R$15,00, se o n�mero de dias for menor que 10;
	� R$8,00, se o n�mero de dias for maior ou igual a 10;
Fa�a um programa que imprima o nome, a conta e o n�mero da conta de cada
cliente e ao final o total faturado pela pousada.
O programa dever� ler novos clientes at� que o usu�rio digite 0 (zero) como
n�mero da conta.
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numeroConta, dias, total;
	char nome[50];

	do{
		printf("Digite o n�mero da conta ou 0 para sair: ");
		scanf("%d",&numeroConta);
		if(numeroConta==0)
			break;
		fflush(stdin);
		printf("Digite o nome: ");
		fgets(nome,50,stdin);
		printf("Informe o n�mero de dias da estadia: ");
		scanf("%d",&dias);
		
		if(dias>=1){
			if(dias<10)
				total=30*dias+15;
			else
				total=30*dias+8;
			
		}else
			printf("O n�mero de dias n�o pode ser valor negativo ou zero.");
		
		printf("\n");
		printf("Nome: %s",nome);
		printf("\nN� conta: %d", numeroConta);
		printf("\nTotal a pagar: %d Eur",total);	
		
		printf("\n\n\n");
		
	}while(numeroConta!=0);

	
	

	printf("\n\nPressione qualquer tecla para finalizar.");
	getchar();	
	return 0;
}
