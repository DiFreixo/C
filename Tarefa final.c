#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <windows.h>

/*Tarefa final UFCD 0805
  Pretende-se criar um algoritmo que fa�a a gest�o de uma fila de espera. Para o efeito 
  vamos ter um array com 10 elementos do tipo inteiro.
  Notas:
  Para realizar a marca��o � solicitado ao utilizador o n� do utente (entre 1 e 999) e 
  colocado na 1� posi��o livre (igual a zero).
  A marca��o de urg�ncia coloca o utente na posi��o que o utilizador indicar.
  A elimina��o retira da lista o n�mero do utente.
  Utilize fun��es.
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
      printf("\n\nEscolha uma op��o: ");
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
            printf("\nOp��o inv�lida !!!");  
        }
    }while(opcao!=9);
	
	return(0);
}

//Fun��o Menu -----------------------------------------------------------------
void menu(){
	printf("---- Cl�nica Quebra-Ossos ---- \n");
	printf("\n1 - Realizar Marca��o."); 
	printf("\n2 - Marca��o de Urg�ncia.");  
	printf("\n3 - Eliminar Marca��o."); 
	printf("\n9 - Terminar o programa."); 
}

//############## Fun��o  Realizar Marca��o ################################
//###########################################################################
void realizarMarcacao(int lista[]){
	int numUtente=0;
	int existe=0; 
	int i;
	system("cls");
	printf("\n---- Realizar Marca��es ----\n\n");
	printf("Lista de Marca��es: ");   //Apresenta a lista de marca��es
	for (i=0; i<10; i++){
		printf("%d - ", lista[i]);
	}
	
	do{  //Adiciona valores � lista de marca��es
		printf("\n\nDigite o n�mero de utente do cliente: ");
		scanf("%d",&numUtente);
	}while(numUtente<1 || numUtente>999);
	
	for (i=0; i<10; i++){ //Verifica se o utente j� exite na lista
		if(lista[i]==numUtente){
			printf("\nEste n�mero de utente j� tem marca��o.");
			Sleep(4000);
			existe=1;
		}
	}
	
	if(existe==0){
		for (i=0; i<10; i++){
	  		if(lista[i]==0){
	    		lista[i]=numUtente;
	    		printf("\nMarca��o efetuada com sucesso!!\n");
	  			break;
	  		}
	  		if(i==9)
	    		printf("\nLista completa!! N�o � poss�vel fazer mais marca��es.\n\n");
	  	}
	
		printf("Lista de Marca��es Atualizada: "); //Apresenta a lista de marca��es atualizada
		for (i=0; i<10; i++){
			printf("%d - ", lista[i]);
		}
	Sleep(4000);
	}  
}
//############## Fun��o  Eliminar Marca��o ################################
//###########################################################################
void eliminarMarcacao(int lista[]){
	int i;
	system("cls");
	printf("\n---- Eliminar Marca��es ----\n\n");
	printf("Lista de Marca��es: ");//Apresenta a lista de marca��es
	for (i=0; i<10; i++){
		printf("%d - ", lista[i]);
	}

//---Remoc�o da marcacao X do vetor Lista[]
  int numEliminar, k;
  numEliminar=0;
  
  printf("\n\nIndique o n� de utente que pretende cancelar a marca��o: ");
  scanf("%d",&numEliminar);
  system("cls");
  for (k=0; k<10; k++){         
      if(lista[k]==numEliminar){
          lista[k]=0;
          printf("\n\nUtente n� %d eliminado com sucesso!!\n",numEliminar);
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
//Apresenta a lista de marca��es atualizada
 	printf("Lista de Marca��es Atualizada: "); 
  	for (i=contador; i<10; i++){ //colocar o valor zero nas restantes posi��es vazias
    	lista[i]=0;
  	}
  	for(i=0; i<10; i++){
		printf("%d - ", lista[i]);
  	}
  Sleep(5000);
}

//############## Fun��o  Marca��o de Urg�ncia ################################
//###########################################################################
void marcacaoDeUrgencia(int lista[]){

  int numUtenteUrgencia=0, posicao=0, tamanho, i, k;
  tamanho=8;
  system("cls");
  printf("\n----Marca��o de Urg�ncia----\n\n");
  printf("Lista de Marca��es: "); //Apresenta a lista de marca��es
  for (i=0; i<10; i++){
	printf("%d - ", lista[i]);
  }

  do{  
    printf("\n\nIndique a posi��o da marca��o de urg�ncia do 0 ao 9: "); //escolher uma posi��o na lista para adicionar uma marca��o
    scanf("%d",&posicao);
  }while(posicao<0 || posicao>9);

  do{  
      printf("\nDigite o n�mero de utente do cliente: "); //adicionar uma marca��o urgente � lista
      scanf("%d",&numUtenteUrgencia);
  }while(numUtenteUrgencia<1 || numUtenteUrgencia>999);
  
    // Deslocar os n�meros � direita da posi��o escolhida
    for (k=tamanho; k>=posicao; k--){
      lista[k+1]= lista[k];
    }

    lista[posicao]=numUtenteUrgencia; //Inserir o novo n�mero na posi��o escolhida
    tamanho=tamanho + 1; //Atualizar o tamanho do vetor

    printf("Lista de Marca��es Atualizada: "); 
    for(k=0; k<=tamanho; k++){ //guarda os valores no veotr
        lista[k];
    }
    for (i=0; i<10; i++){ //Apresenta a lista de marca��es atualizada
		printf("%d - ", lista[i]);
    }
    printf("\n");
	Sleep(5000);
}



