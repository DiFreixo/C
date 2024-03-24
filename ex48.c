#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Uma pousada estipulou o preço para a diária em R$30,00 e mais uma taxa de
serviços diários de:
	• R$15,00, se o número de dias for menor que 10;
	• R$8,00, se o número de dias for maior ou igual a 10;
Faça um programa que imprima o nome, a conta e o número da conta de cada
cliente e ao final o total faturado pela pousada.
O programa deverá ler novos clientes até que o usuário digite 0 (zero) como
número da conta.
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numeroConta, dias, total;
	char nome[50];

	do{
		printf("Digite o número da conta ou 0 para sair: ");
		scanf("%d",&numeroConta);
		if(numeroConta==0)
			break;
		fflush(stdin);
		printf("Digite o nome: ");
		fgets(nome,50,stdin);
		printf("Informe o número de dias da estadia: ");
		scanf("%d",&dias);
		
		if(dias>=1){
			if(dias<10)
				total=30*dias+15;
			else
				total=30*dias+8;
			
		}else
			printf("O número de dias não pode ser valor negativo ou zero.");
		
		printf("\n");
		printf("Nome: %s",nome);
		printf("\nNº conta: %d", numeroConta);
		printf("\nTotal a pagar: %d Eur",total);	
		
		printf("\n\n\n");
		
	}while(numeroConta!=0);

	
	

	printf("\n\nPressione qualquer tecla para finalizar.");
	getchar();	
	return 0;
}
