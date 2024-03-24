#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
Crie um programa que tenha uma estrutura para armazenar o nome, a idade e n�mero da carteira de s�cio de 50 associados de um clube. 
Crie tamb�m uma estrutura, dentro desta anterior, chamada dados que contenha o endere�o, telefone e data de nascimento.
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
		printf("Numero da carteira de s�cio: ");
		scanf("%d%*c", &clube[i].nCarteira);
		printf("Endere�o: ");
		gets(clube[i].data.endereco);
		printf("Telefone: ");
		scanf("%d%*c", &clube[i].data.telefone);
		printf("Data de nascimento: ");
		gets(clube[i].data.nascimento);
		printf("\n");
	}
	printf("\nNome\tIdade\tCarteira\tEnder�o\tTelelefone\tNascimento\n");
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

