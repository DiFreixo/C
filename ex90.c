#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
A gerente do cabeleireiro Sempre Bela tem uma tabela na qual registra as quantidades de serviços 
executados nos "pés", nas "mãos" e o serviço de podologia das cinco manicures. 
Sabendo-se que cada uma ganha 50% do que faturou ao mês, criar um programa que possa calcular 
e imprimir quanto cada uma vai receber, uma vez que não têm carteiras assinadas, os valores, 
respectivamente, são: R$10,00, R$15,00 e R$30,00.

*/

int main(){
	setlocale(LC_ALL,"");
	//coluna 0 - pés  coluna 1 - mãos  coluna 2 - podologia
	int servicos[5][3], i, j, manicure=0, servico=0;
	float soma=0;
	
	for (i=0; i<5; i++){
		for (j=0; j<3; j++){
			servicos[i][j]=0;
		}
	}
	
	//fazendo a leitura dos servicos
 do {
 	printf("Informe a manicure <1-5>:\n");
 	scanf("%d", &manicure);
 	printf("Informe o serviço <1-pé 2-mão 3-podologia>:\n");
 	scanf("%d", &servico);
 	if (manicure >= 1 && manicure <=5) {
 		if (servico >= 1 && servico <= 3)
 			servicos[manicure-1][servico-1]++;
 		else
 			printf("Serviço inválido!\n");
 		}
 	else
 		printf("Manicure invalida!\n");
 }while (manicure != 0);
 //calculando e imprimindo o faturamento
 printf("\nFaturamento das manicures:\n");
 for (i=0; i<5; i++) {
 	soma = servicos[i][0] * 10;
 	soma += servicos[i][1] * 15;
 	soma += servicos[i][2] * 30;
 printf("\nManicure %d: %.2f\n", i+1, soma*0.5);
 }

		
	return 0;
}
