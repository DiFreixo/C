#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Astolfolov Oliveirescu é técnico de um time da série C do poderoso campeonato
de futebol profissional da Albânia. Ele deseja manter os dados dos seus jogadores
guardados de forma minuciosa. Ajude-o fazendo um programa para armazenar
os seguintes dados de cada jogador: nº da camisa, peso (kg), altura (m) e a posição
em que joga (atacante, defensor ou meio campista). Lembre-se que o time tem 22
jogadores, entre reservas e titulares. Leia os dados e depois gere um relatório no
vídeo, devidamente tabulado/formatado.
*/

struct jogador{
	int numero;
	float peso; 
	float altura;
	char posicao[20];
}equipa[22];

void main(){
	setlocale(LC_ALL,"");
	
	int i;

	printf("--> Registo dos dados dos jogadores\n");
	for (i=0; i<22; i++) {
		printf("Número da camisola: ");
		scanf("%d", &equipa[i].numero);
		printf("Peso (kg): ");
		scanf("%f", &equipa[i].peso);
		printf("Altura (m): ");
		scanf("%f%*c", &equipa[i].altura);
		printf("Posição <atacante / defensor / meio_campista>: ");
		fgets(equipa[i].posicao, 20, stdin);

		printf("\n");			
	}
	
	printf("Relatório:\n");
		for(i=0; i<22; i++)
			printf("Camisola nº: %d | Peso: %.2f | Altura: %.2f | Posição: %s", equipa[i].numero, equipa[i].peso, equipa[i].altura, equipa[i].posicao);

}

