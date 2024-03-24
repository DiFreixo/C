#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
No dia da estreia do filme "Procurando Dory", uma grande emissora de TV realizou uma 
pesquisa logo ap�s o encerramento do filme. Cada espectador respondeu
a um question�rio no qual constava a sua idade e a sua opini�o em rela��o ao filme:
	Excelente - 3; Bom - 2; Regular - 1. 
Criar um programa que receba a idade e a opini�o de 20 espectadores, calcule e imprima:
	� A m�dia das idades das pessoas que responderam excelente;
	� A quantidade de pessoas que responderam regular;
	� A percentagem de pessoas que responderam bom entre todos os expectadores analisados.
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int i, idade, opcao, somaIdade=0, excelente=0, regular=0, bom=0;
	float media=0;
	
	for (i=1; i<=20; i++){
		printf("Idade: ");
		scanf("%d",&idade);
		printf("Opini�o em rela��o ao filme:");
		printf("\n3 - Excelente");
		printf("\n2 - Bom");
		printf("\n1 - Regular");
		printf("\nDigite uma op��o: ");
		scanf("%d",&opcao);
		printf("\n\n");
		switch(opcao){
			case 3:
			excelente++;
			somaIdade = somaIdade + idade;
			media=somaIdade/excelente;
			break;
			
			case 2:
			bom++;	
			break;
			
			case 1:
			regular++;
			break;
		}
	}
			printf("\nA m�dia das idades das %d pessoas que responderam excelente � %.2f.",excelente,media);
			printf("\nPercentagem de pessoas que responderam bom: %.2f",(bom/20)*100);
			printf("\nQuantidade de pessoas que responderam regular: %d",regular);	
	
	printf("\n\nPressione qualquer tecla para finalizar.");
	getchar();	
	return 0;
}
