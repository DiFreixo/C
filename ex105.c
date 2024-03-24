#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Crie uma estrutura capaz de armazenar o nome e a data de nascimento de uma
pessoa. Faça uso de estruturas aninhadas e definição de novo tipo de dado. Agora,
escreva um programa que leia os dados de seis pessoas. Calcule e exiba os nomes
da pessoa mais nova e da mais velha.
*/

typedef struct dataNascimento {
	int dia;
	int mes;
	int ano;
} DataNascimento;


typedef struct pessoa {
	char nome[30];
	DataNascimento nascimento;
} Pessoa;

void main(){
	setlocale(LC_ALL,"");
	
	Pessoa pessoas[3];
	int i, iMaior=0, iMenor=0;
	DataNascimento nascimentoMaior, nascimentoMenor; 
	nascimentoMaior.ano=0;
	nascimentoMenor.ano=0;

	for (i=0; i<3; i++) {
		printf("Informe o nome: ");
		scanf("%s", &pessoas[i].nome);
		printf("Informe o nascimento <Dia<enter> Mes<enter> Ano<enter>: \n");
		scanf("%d", &pessoas[i].nascimento.dia);
		scanf("%d", &pessoas[i].nascimento.mes);
		scanf("%d", &pessoas[i].nascimento.ano);
		printf("\n");	
		
		//pessoa mais velha
		if((i==0 || nascimentoMaior.ano>pessoas[i].nascimento.ano) || (nascimentoMaior.ano==pessoas[i].nascimento.ano && nascimentoMaior.mes>pessoas[i].nascimento.mes) ||
		(nascimentoMaior.ano==pessoas[i].nascimento.ano && nascimentoMaior.mes==pessoas[i].nascimento.mes && nascimentoMaior.dia>pessoas[i].nascimento.dia)){
			nascimentoMaior.ano=pessoas[i].nascimento.ano;
			nascimentoMaior.mes=pessoas[i].nascimento.mes;
			nascimentoMaior.dia=pessoas[i].nascimento.dia;
			iMaior=i;
		}

		//pessoa mais nova
		if((nascimentoMenor.ano<pessoas[i].nascimento.ano) || (nascimentoMenor.ano==pessoas[i].nascimento.ano && nascimentoMenor.mes<pessoas[i].nascimento.mes) ||
		(nascimentoMenor.ano==pessoas[i].nascimento.ano && nascimentoMenor.mes==pessoas[i].nascimento.mes && nascimentoMenor.dia<pessoas[i].nascimento.dia)){
			nascimentoMenor.ano=pessoas[i].nascimento.ano;
			nascimentoMenor.mes=pessoas[i].nascimento.mes;
			nascimentoMenor.dia=pessoas[i].nascimento.dia;
			iMenor=i;
		}
				
	}
	printf("\n");

	printf("---------Pessoa mais Nova---------\n");
	printf("Nome........: %s \n", pessoas[iMenor].nome);
	printf("Nascimento..: %d/%d/%d \n", pessoas[iMenor].nascimento.dia,	pessoas[iMenor].nascimento.mes,	pessoas[iMenor].nascimento.ano);
	
	printf("---------Pessoa mais Velha---------\n");
	printf("Nome........: %s \n", pessoas[iMaior].nome);
	printf("Nascimento..: %d/%d/%d \n", pessoas[iMaior].nascimento.dia,	pessoas[iMaior].nascimento.mes,	pessoas[iMaior].nascimento.ano);

}

