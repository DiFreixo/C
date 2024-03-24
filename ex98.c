#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
Implemente um programa em C que leia o nome, a idade e o endereço de uma
pessoa e armazene esses dados em uma estrutura. Em seguida, imprima na tela
os dados da estrutura lida.
*/

struct pessoa {
	char nome[30];
	int idade;
	char endereco[100];
};

int main(){
	setlocale(LC_ALL,"");
	
	struct pessoa pessoa1;
	printf("Informe o nome: ");
	scanf("%s",&pessoa1.nome);
	printf("Informe a idade: ");
	scanf("%d",&pessoa1.idade);
	printf("Informe o endereço: ");
	scanf("%s",&pessoa1.endereco);
	
	printf("\nNome: %s",pessoa1.nome);
	printf("\nIdade: %d",pessoa1.idade);
	printf("\nEndereço: %s",pessoa1.endereco);

	return 0;
}
