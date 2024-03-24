#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Crie um programa em C que possa ler um conjunto de pedidos de compra e
calcule o valor total da compra. Cada pedido é composto pelos seguintes campos:
	• número de pedido
	• data do pedido (dia, mês, ano)
	• preço unitário
	• quantidade
O programa deverá processar novos pedidos até que o usuário digite 0 (zero) como número do pedido.
*/


int main(){
	setlocale(LC_ALL, "Portuguese");

	int numeroPedido, quantidade, dia, mes, ano;
	float preco, valorCompra;
	
	do{
		valorCompra=0;
		printf("Informe o número do pedido ou digite 0 para sair: ");
		scanf("%d",&numeroPedido);
		if(numeroPedido==0)
			break;
		
		printf("Informe a data do pedido (dia-mês-ano): ");
		scanf("%d %d %d",&dia,&mes,&ano);
		printf("Informe o preço unitário do produto: ");
		scanf("%f",&preco);
		printf("Informe a quantidade: ");
		scanf("%d", &quantidade);

		valorCompra=quantidade*preco;
		printf("\nValor da compra: %.2f",valorCompra);
		printf("\nData do pedido: %d%d%d",dia,mes,ano);
		printf("\n\n\n");
		

	}while(numeroPedido!=0);

	printf("\n\nPressione qualquer tecla para finalizar.");
	getchar();	
	return 0;
}
