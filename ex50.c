#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
Uma pesquisa de opinião realizada no Rio de Janeiro, teve as seguintes perguntas:
	• Qual o seu time de coração?
		1-Fluminense;
		2-Botafogo;
		3-Vasco;
		4-Flamengo;
		5-Outros
		
	• Onde você mora?
		1-RJ;
		2-Niterói;
		3-Outros
		
	• Qual o seu salário?
	
Faça um programa que imprima:
	• o número de torcedores por clube;
	• a média salarial dos torcedores do Botafogo;
	• o número de pessoas moradoras do Rio de Janeiro, torcedores de outros
	clubes;
	• o número de pessoas de Niterói torcedoras do Fluminense
Obs.: O programa encerra quando se digita 0 para o time
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int time, cidade, fluminense=0, vasco=0, botafogo=0, flamengo=0, outros=0, rj=0, niteroi=0;
	int niteroiFluminense=0, outraCidade=0, rjOutro=0;
	float salario, mediaSalarioBotafogo=0;

	do{
		printf("1. Qual é o seu salário?\n");
		scanf("%f",&salario);
		
		printf("\n2. Qual é o seu time de coração? Digite:");
		printf("\n\t1-Fluminense;  \t2-Botafogo;");
		printf("\n\t3-Vasco;       \t4-Flamengo;");
		printf("\n\t5-Outros;      \t0-Para encerrar o programa.\n");
		scanf("%d",&time);
		
		if(time==0)
			break;
		
		printf("\n3. Onde você mora? Digite:");
		printf("\n\t1-RJ;");
		printf("\n\t2-Niterói;");
		printf("\n\t3-Outros\n");
		scanf("%d",&cidade);
		printf("\n\n.... Novo .... \n");
		
		switch(time){
			case 1:{
				fluminense++;
				break;
			}
			case 2:{
				botafogo++;
				mediaSalarioBotafogo=mediaSalarioBotafogo+salario;
				break;
			}
			case 3:{
				vasco++;
				break;
			}
			case 4:{
				flamengo++;
				break;
			}
			case 5:{
				outros++;
				break;
			}
		}
		
		switch(cidade){
			case 1:{
				rj++;
				break;
			}
			case 2:{
				niteroi++;
				break;
			}
			case 3:{
				outraCidade++;
				break;
			}
		}
			
		if(time==5 && cidade==1)
			rjOutro++;
		
		if(time==1 && cidade==2) 
			niteroiFluminense++;

	}while(time!=0);	
	
	mediaSalarioBotafogo=mediaSalarioBotafogo/botafogo;
	

		printf("\n\nNúmero de torcedores por clube:");
		printf("\n\tFluminense: %d",fluminense);
		printf("\n\tBotafogo: %d",botafogo);
		printf("\n\tVasco: %d",vasco);
		printf("\n\tFlamengo: %d",flamengo);
		printf("\n\tOutros: %d",outros);
		
		if(botafogo!=0)
			printf("\nMédia salarial dos torcedores do Botafogo: %.2f Eur",mediaSalarioBotafogo);
			
		printf("\nNúmero de pessoas moradoras do Rio de Janeiro, torcedores de outros clubes: %d",rjOutro);
		printf("\nNúmero de pessoas de Niterói torcedoras do Fluminense: %d",niteroiFluminense);

	
	printf("\n\nPressione qualquer tecla para finalizar.");
	getchar();
	return 0;
}
