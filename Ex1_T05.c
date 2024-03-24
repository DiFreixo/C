#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

/* Programa usado: DEV-C++
 Tarefa 5 - UFCD0809
*/
void inicializarVetor(float notas[]);
void menu();
void recolhaDeNotas();
void mostrarNotas(float notas[]);
void mostrarMedia(float notas[]);
void alterarNotas(float notas[]);
void notasMaisAltas(float notas[]);
void aprovados(float notas[]);
void reprovados(float notas[]);

int opcao=0, contNumNotas=0, aux1=0, aux2=0, total=0;

int main(){
	setlocale(LC_ALL,"");
	
	float registo[10];

	inicializarVetor(registo);
	do{
		system("cls");
		printf("\t*** Notas de Alunos ***\n\n");
		menu();
		switch(opcao){
			case 1:{
				recolhaDeNotas(registo);
				break;
			}
			case 2:{
				mostrarNotas(registo);
				break;
			}
			case 3:{
				mostrarMedia(registo);
				break;
			}
			case 4:{
				alterarNotas(registo);
				break;
			}
			case 5:{
				notasMaisAltas(registo);
				break;
			}
			case 6:{
				aprovados(registo);
				break;
			}
			case 7:{
				reprovados(registo);
				break;
			}
			case 0:{
				printf("\nFim do programa!!\n");
				break;
			}
			default:{
				printf("\nValor inválido!!!\nPor favor digite novamente.\n");
				Sleep(2000);	
			}
		}	
	}while(opcao!=0);

	return 0;
}

//#####inicializar o vetor notas#######
void inicializarVetor(float notas[]){

	int i;
	for (i=0;i<10;i++){
		notas[i]=0;	
	}
}

//#####função menu######
void menu(){
	printf("Digite uma opção: ");
	printf("\n1 - Recolha de notas;");
	printf("\n2 - Mostrar todas as notas;");
	printf("\n3 - Mostrar a média das notas;");
	printf("\n4 - Alterar uma nota (indicando a posição);");
	printf("\n5 - Mostrar a nota mais alta;");
	printf("\n6 - Mostrar uma contagem dos aprovados (nota >=10);");
	printf("\n7 - Mostrar uma contagem dos reprovados (nota <10);");
	printf("\n0 - Sair.\n");
	scanf("%d",&opcao);
}

//#####função recolha de notas######
void recolhaDeNotas(float notas[]){
		
	system("cls");
	int numNotas, i=0;
		
  do{
  	if(contNumNotas == 10){
		printf("\nLista completa!!");
		Sleep(2000);	
	  	break;
	}
	printf("\nInforme quantas notas pretende registar (até 10 registos no total): ");
	scanf("%d",&numNotas);
	if(numNotas==0) break;
	else if(numNotas>10){
		printf("\nInforme quantas notas pretende registar (até 10 registos no total): ");
	    scanf("%d",&numNotas);
	}
	
	if((contNumNotas + numNotas)>10)
		printf("\nAtenção!!! Apenas resta(m) %d registo(s) vazio(s)", total);
			
 }while(numNotas<1 ||(contNumNotas + numNotas)>10);	
		  
 if((contNumNotas + numNotas)<=10){	
	printf("\n--> Registo de notas (notas entre 0 e 20) <--\n");	
	aux2=aux1+numNotas;
		
	for (i=aux1; i<aux2; i++){
		do{
			printf("Digite a %dª nota: ",i+1);
			scanf("%f",&notas[i]);
			if(notas[i]<0 || notas[i]>20)
				printf("\nValor inválido!!\n");
		}while(notas[i]<0 || notas[i]>20);
		aux1++;
	}
	printf("\nNota(s) registada(s) com sucesso.");
	contNumNotas+=numNotas;
	total= 10 - contNumNotas;
	Sleep(2000);		
 }							  
}

//#####função mostrar notas######
void mostrarNotas(float notas[]){	
	int i;
	system("cls");
	printf("Listagem das Notas:\n\n");
	if(contNumNotas==0){
		printf("Não há valores registados.\n");
		Sleep(2000);
	}else{
		for (i=0; i<contNumNotas; i++){
			printf(" %.2f - ",notas[i]);
		}
		Sleep(5000);
	}
}


//função mostrar média das notas
void mostrarMedia(float notas[]){
	int i;
	float media;
	system("cls");
	printf("\n**** Média das Notas Registadas ****\n");
	for (i=0; i<contNumNotas; i++){
			media=media+notas[i];
		}
	if(contNumNotas==0){
		printf("\nNão há valores registados.");
		Sleep(2000);
	}else{
		media=media/contNumNotas;

		printf("\nMédia: %.2f", media);
		Sleep(3000);
	}
}



//função alterar notas
void alterarNotas(float notas[]){
	
	int i=0, posicao=0;
	float novaNota;
	
	system("cls");
	printf("**** Alterar Notas Registadas ****\n\n");
	if(contNumNotas==0){
		printf("Não há valores registados.");
		Sleep(2000);
	}else{
		do{
			printf("Informe a posição da nota que pretende alterar (do 1 ao %d): ",contNumNotas);
			scanf("%d",&posicao);
			if(posicao==0) break;
		}while(posicao<1 || posicao>contNumNotas);
		
	do{
		printf("Digite a nova nota (ou 100 para eliminar a nota existente): ");
		scanf("%f",&novaNota);
	}while((novaNota!=100 &&novaNota>20) || novaNota<0   );	
		
		if(novaNota==100){
			for(i=(posicao-1);i<10;i++){
            	notas[i]=notas[i+1];	
        	}
			contNumNotas--;
			aux1--;	
			printf("\nNota removida com sucesso!\n");
            Sleep(2000);				
		}else{
			for (i=(posicao-1);;){
				notas[i]=novaNota;
				break;
			}
			printf("\nNota alterada com sucesso!!");
			Sleep(2000);	
		}				
	}	
}

//função mostrar notas mais altas
void notasMaisAltas(float notas[]){
	int i;
	float maisAlta=0;
	system("cls");
	printf("**** Nota mais alta ****\n\n");
	for (i=0; i<contNumNotas; i++){
		if(notas[i]>maisAlta)
			maisAlta=notas[i];				
		}
	if(contNumNotas==0){
		printf("Não há valores registados.");
		Sleep(2000);
	}else{
		printf("Nota: %.2f",maisAlta);
		Sleep(3000);
	}
}

//função mostrar contagem dos aprovados
void aprovados(float notas[]){
	int i, aprovado=0;
	system("cls");
	printf("\n**** Total de Aprovados ****\n");
	for (i=0; i<contNumNotas; i++){			
		if(notas[i]>=10)
			aprovado++;
	}
	if(contNumNotas==0){
			printf("\nNão há valores registados.");
			Sleep(2000);
	}else{
		printf("\nAprovados: %d", aprovado);
		Sleep(3000);	
	}		
}

//função mostrar contagem dos reprovados
void reprovados(float notas[]){
	int i, reprovado=0;
	system("cls");
	printf("\n**** Total de Reprovados ****\n");
	for (i=0; i<contNumNotas; i++){			
		if(notas[i]<10)
			reprovado++;
	}
	if(contNumNotas==0){
			printf("\nNão há valores registados.");
			Sleep(2000);
	}else{
		printf("\nReprovados: %d", reprovado);
		Sleep(3000);	
	}
}
