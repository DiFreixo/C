#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
Crie um programa com uma estrutura para simular uma agenda de telefone
celular, com até 100 registros. Nessa agenda deve constar o nome, sobrenome,
número de telefone móvel, número de telefone fixo e e-mail. O programa deverá
fazer a leitura e, após isso, mostrar os dados na tela.
*/
struct telefone{
 char nome[30];
 char sobrenome[30];
 char movel[30];
 char fixo[30];
 char email[30];
};

int main(){
	setlocale(LC_ALL,"");
	
	struct telefone p[100];
	int i;
	
	for(i=0; i<3; i++){
		printf("Digite o nome: ");
		gets(p[i].nome);
		printf("Digite o sobrenome: ");
		gets(p[i].sobrenome);
		printf("Digite o numero celular: ");
		gets(p[i].movel);
		printf("Digite o numero do tel fixo: ");
		gets(p[i].fixo);
		printf("Digite o e-mail: ");
		gets(p[i].email);
		printf("\n");
	}
	printf("\n");
	for(i=0; i<3; i++){
		printf("Nome: %s\n", p[i].nome);
		printf("Sobrenome: %s\n", p[i].sobrenome);
		printf("Celular: %s\n", p[i].movel);
		printf("Fixo: %s\n", p[i].fixo);
		printf("E-mail: %s\n", p[i].email);
		printf("\n");
	}

	return 0;
}

