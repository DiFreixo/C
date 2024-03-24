#include <stdio.h>
#include <stdlib.h>

/*
Faça um programa que receba a idade e o estado civil (C-casado, S-solteiro, Vviúvo e D-desquitado ou separado) de várias pessoas. 
Calcule e imprima:
	• a quantidade de pessoas casadas;
	• a quantidade de pessoas solteiras;
	• a média das idades das pessoas viúvas;
	• a porcentagem de pessoas desquitadas ou separadas dentre todas as pessoas
	analisadas.
Obs.: Para encerrar a entrada de dados, digite um número menor que zero para a idade.
*/

void main(){
 int idade, solteiro=0, casado=0, total=0, viuvo=0;
 char codigo;
 float idadeViuvo=0, mediaIdadeV, outros=0, percOutros;

	do {
		printf("\nDigite a idade: ");
		scanf("%d", &idade);
		if (idade < 0)
			break;
		total++;
		printf("\nDigite o estado civil: ");
		fflush(stdin);
		printf("\nC - casado");
		printf("\nS - solteiro");
		printf("\nV - viuvo");
		printf("\nD - separado\n");
		scanf("%c", &codigo);
		if (codigo == 'c' || codigo == 'C')
			casado++;
		else if (codigo == 's' || codigo == 'S')
			solteiro++;
		else if (codigo == 'v' || codigo == 'V') {
			idadeViuvo += idade;
			viuvo++;
		}
		else
			outros++;
	} while(idade >= 0);
	
	//if (total == 0)
	// total = 1;
	 mediaIdadeV = idadeViuvo / viuvo;
	 percOutros = outros / total;
	 printf("\nQuantidade de casados: %d", casado);
	 printf("\nQuantidade de solteiros: %d", solteiro);
	 printf("\nMedia de idade dos viuvos: %.2f", mediaIdadeV);
	 printf("\nPorcentagem de pessoas separadas: %.2f", percOutros);
}

