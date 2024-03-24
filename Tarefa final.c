#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

/*Tarefa final UFCD 0805
  Pretende-se criar um algoritmo que faça a gestão de uma fila de espera. Para o efeito 
  vamos ter um array com 10 elementos do tipo inteiro.
  Notas:
  Para realizar a marcação é solicitado ao utilizador o nº do utente (entre 1 e 999) e 
  colocado na 1ª posição livre (igual a zero).
  A marcação de urgência coloca o utente na posição que o utilizador indicar.
  A eliminação retira da lista o número do utente.
  Utilize funções.
*/

void menu();
void realizarMarcacao(int lista[]);
void eliminarMarcacao(int lista[]);
void marcacaoDeUrgencia(int lista[]);

int main(){
	
	setlocale(LC_ALL,"");
	int registo[10]={0,0,0,0,0,0,0,0,0,0};
	int opcao=0;
  do{
      system("cls");
      menu();
      printf("\n\nEscolha uma opção: ");
      scanf("%d",&opcao);
        switch(opcao){
          case 1:{
          	realizarMarcacao(registo);
			break;
		  }
          case 2:{
          	marcacaoDeUrgencia(registo);
			break;
		  }     
          case 3:{
          	eliminarMarcacao(registo);
			break;
		  }
      	  case 9:{
            printf("\nFim do programa!!!\n");      
            break; 
			}
          default:
            printf("\nOpção inválida !!!");  
        }
    }while(opcao!=9);
	
	return(0);
}

//Função Menu -----------------------------------------------------------------
void menu(){
	printf("---- Clínica Quebra-Ossos ---- \n");
	printf("\n1 - Realizar Marcação."); 
	printf("\n2 - Marcação de Urgência.");  
	printf("\n3 - Eliminar Marcação."); 
	printf("\n9 - Terminar o programa."); 
}

//############## Função  Realizar Marcação ################################
//###########################################################################
void realizarMarcacao(int lista[]){
	int numUtente=0;
	int existe=0; 
	int i;
	system("cls");
	printf("\n---- Realizar Marcações ----\n\n");
	printf("Lista de Marcações: ");   //Apresenta a lista de marcações
	for (i=0; i<10; i++){
		printf("%d - ", lista[i]);
	}
	
	do{  //Adiciona valores à lista de marcações
		printf("\n\nDigite o número de utente do cliente: ");
		scanf("%d",&numUtente);
	}while(numUtente<1 || numUtente>999);
	
	for (i=0; i<10; i++){ //Verifica se o utente já exite na lista
		if(lista[i]==numUtente){
			printf("\nEste número de utente já tem marcação.");
			Sleep(4000);
			existe=1;
		}
	}
	
	if(existe==0){
		for (i=0; i<10; i++){
	  		if(lista[i]==0){
	    		lista[i]=numUtente;
	    		printf("\nMarcação efetuada com sucesso!!\n");
	  			break;
	  		}
	  		if(i==9)
	    		printf("\nLista completa!! Não é possível fazer mais marcações.\n\n");
	  	}
	
		printf("Lista de Marcações Atualizada: "); //Apresenta a lista de marcações atualizada
		for (i=0; i<10; i++){
			printf("%d - ", lista[i]);
		}
	Sleep(4000);
	}  
}
//############## Função  Eliminar Marcação ################################
//###########################################################################
void eliminarMarcacao(int lista[]){
	int i;
	system("cls");
	printf("\n---- Eliminar Marcações ----\n\n");
	printf("Lista de Marcações: ");//Apresenta a lista de marcações
	for (i=0; i<10; i++){
		printf("%d - ", lista[i]);
	}

//---Remocão da marcacao X do vetor Lista[]
  int numEliminar, k;
  numEliminar=0;
  
  printf("\n\nIndique o nº de utente que pretende cancelar a marcação: ");
  scanf("%d",&numEliminar);
  system("cls");
  for (k=0; k<10; k++){         
      if(lista[k]==numEliminar){
          lista[k]=0;
          printf("\n\nUtente nº %d eliminado com sucesso!!\n",numEliminar);
      } 
  }

//Eliminar os valores nulos e compactar o vetor Lista[]
	int contador=0;
	printf("\n");
  	for (k=0; k<10; k++){  
    	if(lista[k]!=0){
        	lista[contador] = lista[k]; //os valores diferentes de zero passam para o vetor lista[contador]
        	contador++;
      	}   
  	}
//Apresenta a lista de marcações atualizada
 	printf("Lista de Marcações Atualizada: "); 
  	for (i=contador; i<10; i++){ //colocar o valor zero nas restantes posições vazias
    	lista[i]=0;
  	}
  	for(i=0; i<10; i++){
		printf("%d - ", lista[i]);
  	}
  Sleep(5000);
}

//############## Função  Marcação de Urgência ################################
//###########################################################################
void marcacaoDeUrgencia(int lista[]){

  int numUtenteUrgencia=0, posicao=0, tamanho, i, k;
  tamanho=8;
  system("cls");
  printf("\n----Marcação de Urgência----\n\n");
  printf("Lista de Marcações: "); //Apresenta a lista de marcações
  for (i=0; i<10; i++){
	printf("%d - ", lista[i]);
  }

  do{  
    printf("\n\nIndique a posição da marcação de urgência do 0 ao 9: "); //escolher uma posição na lista para adicionar uma marcação
    scanf("%d",&posicao);
  }while(posicao<0 || posicao>9);

  do{  
      printf("\nDigite o número de utente do cliente: "); //adicionar uma marcação urgente à lista
      scanf("%d",&numUtenteUrgencia);
  }while(numUtenteUrgencia<1 || numUtenteUrgencia>999);
  
    // Deslocar os números à direita da posição escolhida
    for (k=tamanho; k>=posicao; k--){
      lista[k+1]= lista[k];
    }

    lista[posicao]=numUtenteUrgencia; //Inserir o novo número na posição escolhida
    tamanho=tamanho + 1; //Atualizar o tamanho do vetor

    printf("Lista de Marcações Atualizada: "); 
    for(k=0; k<=tamanho; k++){ //guarda os valores no veotr
        lista[k];
    }
    for (i=0; i<10; i++){ //Apresenta a lista de marcações atualizada
		printf("%d - ", lista[i]);
    }
    printf("\n");
	Sleep(5000);
}



