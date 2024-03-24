#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
Em um campeonato nacional de arco-e-flecha, tem-se equipes de três jogadores
para cada estado. Sabendo-se que os arqueiros de uma equipe não obtiveram o
mesmo número de pontos, criar um programa em C que informe se uma equipe
foi classificada, de acordo com a seguinte especificação:
	• Ler os pontos obtidos por cada jogador da equipe;
	• Mostrar esses valores em ordem decrescente;
	• Se a soma dos pontos for maior do que 100, imprimir a média aritmética
	entre eles, caso contrário, imprimir a mensagem "Equipe desclassificada".
*/

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int jogador1, jogador2, jogador3, soma=0;
	float media=0;
	
	printf("\t....Equipa 1.... \n\n");
	printf("Informe os pontos\n");
	printf("Jogador 1: "); 
	scanf("%d",&jogador1); 
	printf("Jogador 2: ");  
	scanf("%d",&jogador2);
	printf("Jogador 3: ");
	scanf("%d",&jogador3);    //123   132     213  231    312  321

	if(jogador1>jogador2 && jogador1>jogador3)
		if(jogador2>jogador3)
			printf("\nJogador 1: %d pontos > Jogador 2: %d pontos > Jogador 3: %d pontos",jogador1, jogador2, jogador3);
		else
			printf("\nJogador 1: %d pontos > Jogador 3: %d pontos > Jogador 2: %d pontos",jogador1, jogador3, jogador2);
	
	else if(jogador2>jogador1 && jogador2>jogador3)
		if(jogador1>jogador3)
			printf("\nJogador 2: %d pontos > Jogador 1: %d pontos > Jogador 3: %d pontos",jogador2, jogador1, jogador3);
		else
			printf("\nJogador 2: %d pontos > Jogador 3: %d pontos > Jogador 1: %d pontos",jogador2, jogador3, jogador1);
	
	else
		if(jogador1>jogador2)
			printf("\nJogador 3: %d pontos > Jogador 1: %d pontos > Jogador 2: %d pontos",jogador3, jogador1, jogador2);
		else
			printf("\nJogador 3: %d pontos > Jogador 2: %d pontos > Jogador 1: %d pontos",jogador3, jogador2, jogador1);
			
//...................................................................
	soma=jogador1+jogador2+jogador3;
	media=soma/3;
	
	if(soma>100)
		printf("\nMédia da equipe: %.2f pontos.",media);
	else
		printf("\nEquipa desclassificada.");		
			
	printf("\n\nPressione qualquer tecla para finalizar.");
	getchar();
	return 0;
}
