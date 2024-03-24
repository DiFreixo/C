#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
Faça um programa em C que calcule o valor de uma prestação em atraso. Para
isso, o programa deve ler o valor da prestação vencida, a taxa periódica de juros
e o período de atraso. Ao final, o programa deve imprimir o valor da prestação
atrasada, o período de atraso, os juros que serão cobrados pelo período de atraso,
o valor da prestação acrescido dos juros. Considere juros simples.
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
		
 int periodoAtraso;
 float valorVencido, taxaJuros, juros, novoValor;
 printf("Digite o valor da prestacao vencida: ");
 scanf("%f", &valorVencido);
 printf("Taxa de juros: ");
 scanf("%f", &taxaJuros);
 printf("Periodo de atraso: ");
 scanf("%d", &periodoAtraso);
 juros = ((valorVencido * (taxaJuros / 100)) * periodoAtraso);
 novoValor = valorVencido + juros;
 printf("Valor prestacao: %.2f \n", valorVencido);
 printf("Periodo de atraso: %d \n", periodoAtraso);
 printf("Juros a ser cobrados: %.2f \n", juros);
 printf("Valor da prestacao com juros: %.2f", novoValor);

	
	
	
	
		
	printf("\n\nPressione qualquer tecla para finalizar.");
	getchar();
	return 0;
}
