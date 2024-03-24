#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
Fa�a um programa que permita entrar com o sal�rio de uma pessoa e imprima o
desconto do INSS segundo a tabela seguir:
	
	Sal�rio 													Faixa de Desconto
	Menor ou igual � R$600,00 									Isento
	Maior que R$600,00 e menor ou igual a R$1200,00 			20%
	Maior que R$1200,00 e menor ou igual a R$2000,00 			25%
	Maior que R$2000,00 										30%
*/

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float salario;

	printf("Informe o sal�rio: ");
	scanf("%f",&salario);

	if(salario<=600)
		printf("%0.2f Eur de sal�rio --> Isento de INSS",salario);
	else if(salario<=1200)
		printf("%0.2f Eur de sal�rio --> %0.2f Eur de INSS",salario,salario*0.2);
	else if(salario<=2000)
		printf("%0.2f Eur de sal�rio --> %0.2f Eur de INSS",salario,salario*0.25);
	else
		printf("%0.2f Eur de sal�rio --> %0.2f Eur de INSS",salario,salario*0.30);
	printf("\n\nPressione qualquer tecla para finalizar.");
	getchar();
	return 0;
}

