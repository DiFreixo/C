#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

/*
Um clube social com 37 associados deseja que voc� fa�a um programa para
armazenar os dados cadastrais desses associados. Os dados s�o: nome, dia, m�s
e ano de nascimento, valor da mensalidade e quantidade de dependentes. O
programa dever� ler os dados e imprimir depois na tela. Dever� tamb�m informar
o associado (ou os associados) com o maior n�mero de dependentes.
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
	
		printf("--> Registo dos dados dos s�cios do clube\n");
	for (i=0; i<37; i++){
		fflush(stdin);
		printf("Nome: ");
		gets(associados[i].nome);
		printf("Data de nascimento <Dia<enter> M�s<enter> Ano<enter>: \n");
		scanf("%d", &associados[i].nascimento.dia);
		scanf("%d", &associados[i].nascimento.mes);
		scanf("%d", &associados[i].nascimento.ano);
		printf("Mensalidade: ");
		scanf("%f", &associados[i].mensalidade);
		printf("N�mero de dependentes: ");
		scanf("%d", &associados[i].nDependentes);
		printf("\n");		
	}
	
	printf("Relat�rio:\n");
	for (i=0; i<37; i++)
		printf("Nome: %s | Data de nascimento: %d/%d/%d | Mensalidade: %.2f | N� de dependentes: %d\n", associados[i].nome, associados[i].nascimento.dia, 
		associados[i].nascimento.mes, associados[i].nascimento.ano, associados[i].mensalidade, associados[i].nDependentes);


	//verificar os associados com maior n� de dependentes
	//ordenar os valores do maior n�mero de dependentes para o menor
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

		//Imprimir os associados com maior n�mero de dependentes  
		printf("Associado(s) com maior n�mero de dependentes:\n");  
		for (i=0; i<37; i++){ 
			if(i==0)
				printf("%s, com %d dependentes\n", associados[i].nome, associados[i].nDependentes);                      
			else if(associados[0].nDependentes==associados[i].nDependentes)
				printf("%s, com %d dependentes\n",associados[i].nome, associados[i].nDependentes);
		}
			
	return 0;
}
