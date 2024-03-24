#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
Crie um programa que tenha uma estrutura para armazenar o nome, a idade e número da carteira de sócio de 50 associados de um clube. 
Crie também uma estrutura, dentro desta anterior, chamada dados que contenha o endereço, telefone e data de nascimento.
*/

struct dados{
	char endereco[50];
	int telefone;
	char nascimento[12];
};
struct clube{
	char nome[10];
	int idade;
	int nCarteira;
	struct dados data;
}clube[50];

int main(){
	setlocale(LC_ALL,"");
	
	int i;
	
	printf("\n*** Registo dos dados dos associados ***\n");
	for(i=0; i<50; i++){
		fflush(stdin);
		printf("Nome: ");
		gets(clube[i].nome);
		printf("Idade: ");
		scanf("%d", &clube[i].idade);
		printf("Numero da carteira de sócio: ");
		scanf("%d%*c", &clube[i].nCarteira);
		printf("Endereço: ");
		gets(clube[i].data.endereco);
		printf("Telefone: ");
		scanf("%d%*c", &clube[i].data.telefone);
		printf("Data de nascimento: ");
		gets(clube[i].data.nascimento);
		printf("\n");
	}
	printf("\nNome\tIdade\tCarteira\tEnderço\tTelelefone\tNascimento\n");
	//escreve na saida padrao
	for(i=0; i<50; i++){
	printf("%s\t", clube[i].nome);
	printf("%d\t", clube[i].idade);
	printf("%d\t", clube[i].nCarteira);
	printf("%s\t", clube[i].data.endereco);
	printf("%d\t", clube[i].data.telefone);
	printf("%s\n", clube[i].data.nascimento);
	}
	
	return 0;
}

