#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
A gerente do cabeleireiro Sempre Bela tem uma tabela na qual registra as quantidades de servi�os 
executados nos "p�s", nas "m�os" e o servi�o de podologia das cinco manicures. 
Sabendo-se que cada uma ganha 50% do que faturou ao m�s, criar um programa que possa calcular 
e imprimir quanto cada uma vai receber, uma vez que n�o t�m carteiras assinadas, os valores, 
respectivamente, s�o: R$10,00, R$15,00 e R$30,00.

*/

int main(){
	setlocale(LC_ALL,"");
	//coluna 0 - p�s  coluna 1 - m�os  coluna 2 - podologia
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
 	printf("Informe o servi�o <1-p� 2-m�o 3-podologia>:\n");
 	scanf("%d", &servico);
 	if (manicure >= 1 && manicure <=5) {
 		if (servico >= 1 && servico <= 3)
 			servicos[manicure-1][servico-1]++;
 		else
 			printf("Servi�o inv�lido!\n");
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
