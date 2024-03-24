/* Programa usado Dev-C++

1.2.3 VETORES P�gina 54
	Escreva um programa para uma cadeia de 20 lojas de departamentos,
	cada uma das quais vendendo dez itens diferentes. Todo m�s, o gerente
	de cada loja apresenta uma ficha de dados de cada item consistindo no
	n�mero de uma filial (de 1 a 20), no n�mero de um item (de 1 a 10) e
	nos valores de venda (abaixo de $100,000) representando a quantidade
	de vendas de determinado item em determinada filial. Entretanto, �
	poss�vel que alguns gerentes n�o apresentem fichas para alguns itens
	(ou seja, nem todos os itens s�o vendidos em todas as filiais). Voc� deve
	escrever um programa em C que leia essas fichas de dados e imprima
	uma tabela de 12 colunas. A primeira coluna deve conter os n�meros
	das filiais, de 1 a 20, e a palavra "TOTAL" na �ltima linha. As dez
	colunas seguintes devem conter os valores de vendas de cada um dos
	dez itens em cada filial, com o total de vendas de cada item na �ltima
	linha. A �ltima coluna deve conter o total de vendas de todos os itens em
	cada uma das 20 filiais, com o valor do total final de vendas da cadeia de
	lojas posicionado no canto inferior direito. Cada coluna deve ter um t�tulo
	adequado. Se nenhuma venda for informada para determinada filial e
	item, pressuponha um valor de vendas igual a zero. N�o presuma que
	a sua entrada esteja em nenhuma ordem predeterminada.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	//Coluna 0 = n�meros da filias, de 1 a 20, e a palavra "TOTAL na �ltima linha"
	//Coluna 1 a Coluna 10 = quantidade de vendas de cada um dos dez artigos (pre�o dos artigos abaixo de $100,000)
	//Coluna 11 = n�meros da filias, total de vendas de todos os itens em cada uma das 20 filiais
	// nem todos os itens s�o vendidos em todas as filiais.
	int registo[21][12]={0};
	int i, j;
	int vet[10]={50, 10, 5, 23, 12, 78, 100, 88, 67, 18};

//	Registo dos valores;
	for(i=0; i<21; i++){
		for(j=0; j<12; j++){
			if(j==0 && i<20)
				registo[i][j]=i+1;	
		
			else if(j>=1 && j<=10 && i<20)
			    registo[i][j]=rand()%20; 
		}
	}
	
	// Total -> Linha 20
	for(i=0; i<21; i++){
		for(j=1; j<11; j++){
		    if(i!=20)
			    registo[20][j]+= registo[i][j];	
		}
	}


	// Valor total de vendas -> Coluna 11
	for(i=0; i<21; i++){
		for(j=1; j<11; j++){
			registo[i][11]=registo[i][11]+vet[j-1]*registo[i][j];	
		}
	}
	
	printf("\n--> Impress�o dos valores registados\n\n");
	printf("	                                Qtd_Artigo (Pre�o)                                  Total_Vendas\n");
	printf(" LOJA    1(50$)  2(10$)  3(5$)  4(23$)  5(12$)  6(78$)  7(100$)  8(88$)  9(67$)  10(18$)         ($)\n");
	printf(" ------------------------------------------------------------------------------------------------------------------\n");
	for(i=0; i<21; i++){
		for(j=0; j<12; j++){
			if(i==20 && j==0)
		    	registo[i][j]=printf("TOTAL");
	    	else if(i==20 && j>=1 && j<=10){
			    printf("\t  ");
			    printf("%2d", registo[i][j]);
			}
			else if(i==20 && j==11){
				printf("\t\t");
				printf("%2d", registo[i][j]);
			}
			else if(j==11){
				printf("\t");
				printf(" %2d", registo[i][j]);
			}
			
			else
			    printf(" %2d\t  ", registo[i][j]);
		}
		printf("\n");
	}
	
	printf(" ------------------------------------------------------------------------------------------------------------------\n");
	
	return 0;
}
