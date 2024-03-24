#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
A confederação brasileira de natação irá promover eliminatórias para o próximo
mundial. Faça um programa em C que receba a idade de um nadador e imprima
a sua categoria segundo a tabela a seguir:
	Categoria 		Idade
	Infantil A 		5 - 7 anos
	Infantil B 		8 - 10 anos
	Juvenil A 		11 - 13 anos
	Juvenil B 		14 - 17 anos
	Sênior 			maiores de 18 anos
*/

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int idade;
	
	printf("Informe a idade do nadador: ");
	scanf("%d",&idade);
	
	if(idade>=18)
		printf("%d anos --> Senior.",idade);
	else if(idade>=14)
		printf("%d anos --> Juvenil B.",idade);
	else if(idade>=11)
		printf("%d anos --> Juvenil A.",idade);
	else if(idade>=8)
		printf("%d anos --> Infantil B.",idade);
	else if(idade>=5)
		printf("%d anos --> Infantil A.",idade);
	else
		printf("Idade não permitida.");	
	
	printf("\n\nPressione qualquer tecla para finalizar.");
	getchar();	
	return 0;
}
