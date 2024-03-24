#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
Um comerciante comprou um produto e quer vendê-lo com um lucro de 45% se
o valor da compra for menor que R$20,00, caso contrário, o lucro será de 30%.
Faça um programa em C que leia o valor do produto e imprima o valor da venda.\
*/

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	float valorCompra, valorVenda=0;
	
	printf("Informe o valor de compra do produto: ");
	scanf("%f",&valorCompra);
	
	if(valorCompra<20){
		valorVenda=valorCompra*0.45 + valorCompra;
	}
	else
		valorVenda=valorCompra*0.3 + valorCompra;
		
	printf("Valor de venda: %.2f Eur",valorVenda);
	
	printf("\n\nPressione qualquer tecla para finalizar.");
	getchar();
	return 0;
}
