#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
Faça um programa que permita entrar com o nome e o salário bruto de 10 pessoas.
Após ler os dados, imprimir o nome e o valor da alíquota do imposto de renda
calculado conforme a tabela a seguir:
	Salário 															IRRF
	Salário menor que R$1300,00 										Isento
	Salário maior ou igual a R$1300,00 e menor que R$2300,00 			10% do salário bruto
	Salário maior ou igual a R$2300,00 									15% do salário bruto
*/

int main(){
	
	setlocale(LC_ALL, "Portuguese");
	
	char nome[10];
	float salarioBruto, impostoDeRenda;
	int i;
	for(i=1; i<=10;i++){
		printf("Nome: ");
		scanf("%s",&nome);
		printf("Salário Bruto: ");
		scanf("%f",&salarioBruto);
		printf("\n");
		if(salarioBruto<1300){
			printf("Nome: %s",nome);
			printf("\nIsento do imposto de renda.");
		}else if(salarioBruto<2300){
			printf("Nome: %s",nome);
			printf("\n10%% de imposto de renda = %.2f",salarioBruto*0.10);
		}else{
			printf("Nome: %s",nome);
			printf("\n15%% de imposto de renda = %.2f",salarioBruto*0.15);
		}
		printf("\n\n");
	}
	 	
	printf("\n\nPressione qualquer tecla para finalizar.");
	getchar();
	return 0;
}
