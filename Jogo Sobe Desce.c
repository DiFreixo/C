#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>

/* Programa usado - DEV-C++
******** JOGO DO SOBE E DESCE **************
*/
void menu();
void computador();
void jogador2();
void jogo();
void jogador1();
void verificarResultados();
void verificarVenceu();

int opcao=0, tentativas=0, resultado=0, maxNumero=0;
int numero=0, contTentativas=0, numTentativas=0, qtdTentativas=0, numMisterio=0, nivelJogo=0;
const int minNIVEL=1, maxNIVEL=3;
const int minTENTATIVAS=1, maxTENTATIVAS=3;
const int minNUMERO=1; 

int main(){
	char repetir;
	setlocale(LC_ALL, "Portuguese");
	srand (time(NULL));

 	do{ 	
		system("cls");
	 	menu();	
		if(opcao==1)
			computador();		
		else
			jogador2();
		
		jogo();
		while(resultado==0 && contTentativas<qtdTentativas){
		 	jogador1();
		 	verificarResultados();
		}
		verificarVenceu();
		
		fflush(stdin);
		printf("\nPretende jogar novamente < S - Sim / N - N�o > : ");
        scanf("%c",&repetir);
		
	}while(repetir=='S' || repetir=='s');
	
	return 0;		
}


void menu(){
	printf("\n*********** JOGO DO MAIS OU MENOS ************* \n\n");	
	do{	
		printf("\nJOGADOR 1, selecione uma op��o: ");
		printf("\n\n\t1 - Jogar contra o computador");
		printf("\n\t2 - Jogar contra outro jogador");
		printf("\n\t-> ");
		scanf("%d",&opcao);
		if(opcao!=1 && opcao!=2){
			printf("\nErro na introdu��o de dados!!!\n");
			fflush(stdin);
	        Sleep(2000); 
		}
	}while(opcao!=1 && opcao!=2);
}


void computador(){
				
	nivelJogo = (rand() % (maxNIVEL - minNIVEL + 1)) + minNIVEL; //determinar aleatoriamente o n�vel do jogo do 1 ao 3
	numTentativas = (rand() % (maxNIVEL - minNIVEL + 1)) + minNIVEL; //determinar aleatoriamente o n� de tentativas do 1 ao 3

	if(nivelJogo==1){
		maxNumero=100;
		if(numTentativas==1)
				qtdTentativas=10;	
		else if(numTentativas==2)
				qtdTentativas=15;
		else
			qtdTentativas=20;
	}
	else if(nivelJogo==2){
		maxNumero=1000;
		if(numTentativas==1)
				qtdTentativas=10;	
		else if(numTentativas==2)
				qtdTentativas=15;
		else
			qtdTentativas=20;	
	}
	else{	
		maxNumero=10000;
		if(numTentativas==1)
				qtdTentativas=10;	
		else if(numTentativas==2)
				qtdTentativas=15;
		else
			qtdTentativas=20;
	}		
	numMisterio = (rand() % (maxNumero - minNUMERO + 1)) + minNUMERO;  // determinar aleatoriamente o n�mero mist�rio 
}


void jogador2(){
	printf("\n--> JOGADOR 2");
	//Registar valores
	do{
		printf("\n\tInforme o n�vel do jogo < 1 / 2 / 3 >:");
		printf("\n\t-> "); 
		scanf("%d",&nivelJogo);	
	}while(nivelJogo<1 || nivelJogo>3);
	
	do{
		printf("\n\tInforme o n�mero de tentativas:");  
		printf("\n\t 1 - 10 tentativas");
		printf("\n\t 2 - 15 tentativas");
		printf("\n\t 3 - 20 tentativas");
		printf("\n\t-> ");
		scanf("%d",&numTentativas);	
	}while(numTentativas<1 || numTentativas>3);
	
	if(nivelJogo==1){
		do{
			printf("\n\tInforme o n�mero mist�rio para o n�vel %d (1 a 100): ", nivelJogo);
			scanf("%d",&numMisterio);
		}while(numMisterio<1 || numMisterio>100);
	}
	else if(nivelJogo==2){
		do{
			printf("\tInforme o n�mero mist�rio para o n�vel %d (1 a 1000): ", nivelJogo); 
			scanf("%d",&numMisterio);
		}while(numMisterio<1 || numMisterio>1000);
	}
	else{
		do{
			printf("\n\tInforme o n�mero mist�rio para o n�vel %d (1 a 10000): ", nivelJogo); 
			scanf("%d",&numMisterio);
		}while(numMisterio<1 || numMisterio>10000);
	}		
}
	
	
void jogo(){
	
	if(opcao==1){
		printf("\n ***** JOGADOR 1 contra COMPUTADOR ****** \n");
		printf("\nN�vel do jogo: %d",nivelJogo);
		printf("\nIntervalo de valores poss�veis: %d a %d",minNUMERO,maxNumero);
		printf("\nN�mero m�ximo de tentativas: %d\n",qtdTentativas);		
	}
	
	else if(opcao==2){
		system("cls");
		printf("\n ***** JOGADOR 1 contra JOGADOR 2 ****** \n");
		printf("\nN�vel do jogo: %d", nivelJogo);
		if(nivelJogo==1){
			printf("\nIntervalo de valores poss�veis: 1 a 100");
			if(numTentativas==1)
				qtdTentativas=10;
			
			else if(numTentativas==2)
				qtdTentativas=15;	
			
			else
				qtdTentativas=20;
		}
		else if(nivelJogo==2){
			printf("\nIntervalo de valores poss�veis: 1 a 1000");
			if(numTentativas==1)
				qtdTentativas=10;
			
			else if(numTentativas==2)
				qtdTentativas=15;	
			
			else
				qtdTentativas=20;
		}
		else{
			printf("\nIntervalo de valores poss�veis: 1 a 10000");
			if(numTentativas==1)
				qtdTentativas=10;
			
			else if(numTentativas==2)
				qtdTentativas=15;	
			
			else
				qtdTentativas=20;
		}
		
		printf("\nN�mero m�ximo de tentativas: %d\n", qtdTentativas);
	}
}


void jogador1(){
	if (contTentativas==0){
		printf("\n--> JOGADOR 1");
		printf ("\n** Tente acertar no n�mero mist�rio **");
		if(nivelJogo==1){
			do{
				printf("\nDigite um n�mero: ");
				scanf("%d",&numero);
			}while(numero<1 || numero>100);	
		}
		else if(nivelJogo==2){
			do{
				printf("\nDigite um n�mero: ");
				scanf("%d",&numero);
			}while(numero<1 || numero>1000);	
		}
		else{
			do{
				printf("\nDigite um n�mero: ");
				scanf("%d",&numero);
			}while(numero<1 || numero>10000);
		}	
	}
	else{
		if(nivelJogo==1){
			do{
				printf("\nDigite outro n�mero: ");
				scanf("%d",&numero);
			}while(numero<1 || numero>100);	
		}
		else if(nivelJogo==2){
			do{
				printf("\nDigite outro n�mero: ");
				scanf("%d",&numero);
			}while(numero<1 || numero>1000);	
		}
		else{
			do{
				printf("\nDigite outro n�mero: ");
				scanf("%d",&numero);
			}while(numero<1 || numero>10000);
		}	
	}

	contTentativas++;
}


void verificarResultados(){	
	tentativas=qtdTentativas-contTentativas;
	
	if(numero==numMisterio)
		resultado++;	
	else if(numero<numMisterio){	
		printf("\nO n�mero mist�rio esta acima.");
		printf("\nResta(m) %d tentativa(s).\n", tentativas);
	}
		
	else if(numero>numMisterio){
		printf("\nO n�mero mist�rio esta abaixo.");
		printf("\nResta(m) %d tentativa(s).\n",tentativas );
	}	
}

void verificarVenceu(){
	if(numero==numMisterio)
		printf("\nPARAB�NS!! Acertou no n�mero mist�rio com %d tentativa(s).\n",contTentativas);		
	
	else 
		printf("\nEsgotou o n�mero de tentativas poss�veis!!!\n");
		
	printf("\n\t\t*** FIM DO JOGO ***\n\n");
	
	tentativas=0;
	contTentativas=0;
	resultado=0;
}












	
