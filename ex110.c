#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*
Um clube social com 37 associados deseja que você faça um programa para
armazenar os dados cadastrais desses associados. Os dados são: nome, dia, mês
e ano de nascimento, valor da mensalidade e quantidade de dependentes. O
programa deverá ler os dados e imprimir depois na tela. Deverá também informar
o associado (ou os associados) com o maior número de dependentes.
*/

struct dataNascimento{
	int dia;
	int mes;
	int ano;	
};

struct cadastro{
	char nome[10];
	float mensalidade;
	int nDependentes;
	struct dataNascimento nascimento;
}associados[37];


int main(){
	
	setlocale(LC_ALL,"");
	int i, j;
	
	struct cadastro aux;
	
		printf("--> Registo dos dados dos sócios do clube\n");
	for (i=0; i<37; i++){
		fflush(stdin);
		printf("Nome: ");
		gets(associados[i].nome);
		printf("Data de nascimento <Dia<enter> Mês<enter> Ano<enter>: \n");
		scanf("%d", &associados[i].nascimento.dia);
		scanf("%d", &associados[i].nascimento.mes);
		scanf("%d", &associados[i].nascimento.ano);
		printf("Mensalidade: ");
		scanf("%f", &associados[i].mensalidade);
		printf("Número de dependentes: ");
		scanf("%d", &associados[i].nDependentes);
		printf("\n");		
	}
	
	printf("Relatório:\n");
	for (i=0; i<37; i++)
		printf("Nome: %s | Data de nascimento: %d/%d/%d | Mensalidade: %.2f | Nº de dependentes: %d\n", associados[i].nome, associados[i].nascimento.dia, 
		associados[i].nascimento.mes, associados[i].nascimento.ano, associados[i].mensalidade, associados[i].nDependentes);


	//verificar os associados com maior nº de dependentes
	//ordenar os valores do maior número de dependentes para o menor
	for (i=0; i<37-1; i++) {
		for (j=i+1; j<37; j++) {
			if (associados[i].nDependentes < associados[j].nDependentes){
				aux.nDependentes=associados[i].nDependentes;
				associados[i].nDependentes = associados[j].nDependentes;
				associados[j].nDependentes=aux.nDependentes;

				strcpy(aux.nome,associados[i].nome);
				strcpy(associados[i].nome,associados[j].nome);
				strcpy(associados[j].nome, aux.nome);
				
				aux.nascimento.dia=associados[i].nascimento.dia;
				associados[i].nascimento.dia=associados[j].nascimento.dia;
				associados[j].nascimento.dia=aux.nascimento.dia;
				  
				aux.nascimento.mes=associados[i].nascimento.mes;
				associados[i].nascimento.mes=associados[j].nascimento.mes;
				associados[j].nascimento.mes=associados[i].nascimento.mes;
				 
				aux.nascimento.ano=associados[i].nascimento.ano;
				associados[i].nascimento.ano=associados[j].nascimento.ano;
				associados[j].nascimento.ano=aux.nascimento.ano;
				
				aux.mensalidade= associados[i].mensalidade;
				associados[i].mensalidade=associados[j].mensalidade;
				associados[j].mensalidade=aux.mensalidade;

			}
		}	
	}

		//Imprimir os associados com maior número de dependentes  
		printf("Associado(s) com maior número de dependentes:\n");  
		for (i=0; i<37; i++){ 
			if(i==0)
				printf("%s, com %d dependentes\n", associados[i].nome, associados[i].nDependentes);                      
			else if(associados[0].nDependentes==associados[i].nDependentes)
				printf("%s, com %d dependentes\n",associados[i].nome, associados[i].nDependentes);
		}
			
	return 0;
}
