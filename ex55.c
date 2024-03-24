#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
Foi feita uma pesquisa de audiência de canal de TV em várias casas de uma certa cidade, num determinado dia. 
Para cada casa visitada foram fornecidos o número do canal (4, 5, 7, 12) e o número de pessoas que estavam a 
assistir o canal naquela casa. 
Se a televisão estivesse desligada, nada seria anotado, ou seja, esta casa não entraria na pesquisa. 
Criar um programa que:
	• Leia um número indeterminado de dados, isto é, o número do canal e o
	número de pessoas que estavam assistindo;
	• Calcule e imprima a porcentagem de audiência em cada canal.
	Obs.: Para encerrar a entrada de dados, digite o número do canal zero.

*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int numPessoas, canal, pessoasCanal4=0, pessoasCanal5=0, pessoasCanal7=0, pessoasCanal12=0, total=0;
	float percCanal4=0,	percCanal5=0, percCanal7=0,	percCanal12=0;
	
	
do{	
	printf("Informe o canal de TV < 4 / 5 / 7 / 12 ou 0 para Sair >:");
	scanf("%d",&canal);
	if(canal==0)
		break;
	printf("Informe o nº de pessoas que assistem o canal: ");
	scanf("%d",&numPessoas);
	
	switch(canal){
		case 4:{
			pessoasCanal4+=numPessoas;
			break;
		}
		case 5:{
			pessoasCanal5+=numPessoas;
			break;
		}
		case 7:{
			pessoasCanal7+=numPessoas;
			break;
		}
		case 12:{
			pessoasCanal12+=numPessoas;
			break;
		}
	}
	printf("\n\n");
	
}while(canal!=0);	
	total=pessoasCanal4+pessoasCanal5+pessoasCanal7+pessoasCanal12;
	
	percCanal4=(pessoasCanal4/total)*100;
	percCanal5=(pessoasCanal5/total)*100;
	percCanal7=(pessoasCanal7/total)*100;
	percCanal12=(pessoasCanal12/total)*100;
	
	
	printf("\n%% Audiência canal 4: %.2f",percCanal4);
	printf("\n%% Audiência canal 5: %.2f",percCanal5);
	printf("\n%% Audiência canal 7: %.2f",percCanal7);
	printf("\n%% Audiência canal 12: %.2f",percCanal12);
	
	
	printf("\n\nPressione qualquer tecla para finalizar.");
	getchar();
	return 0;
}
