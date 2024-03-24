#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Faça um programa em C que permita entrar com a idade de várias pessoas e
imprima:
	• total de pessoas com menos de 21 anos
	• total de pessoas com mais de 50 anos
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int idade, idadeMaior50=0, idadeMenor21=0;
	
	
	do{
		printf("Digite a idade: ");
		scanf("%d",&idade);
	
	if(idade>=1){
	
		if(idade<21)
			idadeMenor21++;
		else if(idade>50)
			idadeMaior50++;
	}
		
	}while(idade!=0);
	
	printf("\nTotal pessoas com idade menor do que 21 anos: %d",idadeMenor21);
	printf("\nTotal pessoas com idade maior do que 50 anos: %d",idadeMaior50);
	
	
	printf("\n\nPressione qualquer tecla para finalizar.");
	getchar();	
	return 0;
}
