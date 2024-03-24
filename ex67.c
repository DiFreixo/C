 #include <stdio.h>
 #include <stdlib.h>
 #include <locale.h>

/*
. Construa um programa que armazene o código, a quantidade, o valor de compra
e o valor de venda de 30 produtos. A listagem pode ser de todos os produtos ou
somente de um ao se digitar o código.
*/

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int codigo[30],qtd[30],i, opcao=0, resposta=0;
	float valorCompra[30],valorVenda[30];
	
	for (i=0; i<30; i++){
		printf("Registe as informações do Produto %d:",i+1);
		printf("\nCódigo: ");
		scanf("%d",&codigo[i]);
		printf("Quantidade: ");
		scanf("%d",&qtd[i]);
		printf("Valor compra: ");
		scanf("%f",&valorCompra[i]);
		printf("Valor venda: ");
		scanf("%f",&valorVenda[i]);
		printf("\n");	
	}
	
	system("cls");
	printf("\nEscolha uma opção:");
	printf("\n1 - Listar todos os produtos\n");
 	printf("2 - Listar produto por codigo\n");
 	scanf("%d", &opcao);
 	
	if (opcao == 1) {
		printf("\nCodigo \t Quantidade \t Valor Compra \t Valor Venda \n");
		for (i=0; i<30; i++) {
			printf("%d \t",codigo[i]);
			printf("%d \t\t",qtd[i]);
			printf("%.2f \t",valorCompra[i]);
			printf("%.2f \n",valorVenda[i]);
	}
	}else if (opcao == 2) {
		printf("\nDigite o codigo do produto:\n");
		scanf("%d", &resposta);
		printf("\nCodigo \t Quantidade \t Valor Compra \t Valor Venda \n");
		for (i=0; i<30; i++) {
			if (codigo[i] == resposta) {
				printf("%d \t",codigo[i]);
				printf("%d \t\t",qtd[i]);
				printf("%f \t",valorCompra[i]);
				printf("%f \n",valorVenda[i]);
				break;
			}
		}
	}else
	printf("Opcao invalida! \n");

	printf("\n\nPressione qualquer tecla para finalizar.");	
	getchar();		
	return 0;
}


