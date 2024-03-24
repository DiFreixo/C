/* Programa usado Dev-C++

1.2.2 VETORES P�gina 56
	Escreva um programa em C que fa�a o seguinte: Leia um grupo de leituras de temperatura. 
	Uma leitura consiste em dois n�meros: um inteiro entre -90 e 90, representando a latitude na qual a leitura foi efetuada, 
	e a temperatura observada nessa latitude. Imprima uma tabela consistindo em cada latitude e na temperatura m�dia da	latitude. 
	Se n�o existirem leituras em determinada latitude, imprima "sem dados" em vez de uma m�dia. Em seguida, imprima a temperatura m�dia nos hemisf�rios
	Norte e Sul (o Norte consiste em latitudes	de 1 a 90 e o Sul em latitudes de -1 a -90). 
	(Essa temperatura m�dia	deve ser calculada como a m�dia das m�dias, n�o como a m�dia das leituras iniciais.) 
	Determine tamb�m o hemisf�rio mais quente. Ao fazer a determina��o, use as temperaturas m�dias em todas as latitudes de cada hemisf�rio para os quais
	existem dados tanto para essa latitude como para a latitude correspondente no outro hemisf�rio. (Por exemplo, se existirem dados para latitude 57, 
	mas n�o para latitude -57, ent�o a temperatura m�dia para a latitude 57 deve ser ignorada, ao determinar o hemisf�rio mais quente.)
*/

#include <stdio.h>
//#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int tam;
	printf("Informe quantos registos pretende fazer: ");
	scanf("%d",&tam);
	
	float temp[tam][2];
	int i, j, aux=0;
	float troca[2]={0};
	float tempMedia[tam][2];
	float soma=0;
	
	printf("\nRegisto dos valores\n");
	for(i=0; i<tam; i++){
		printf("--> Registo %d\n", i+1);
		for(j=0; j<2; j++){
			if(j==0){
				do{
					printf("\tLatitude: ");
					scanf("%f",&temp[i][j]);
					
					if(temp[i][j]< -90 || temp[i][j]> 90)
						printf("\n\tValor inv�lido para a Latitude... Tente novamente\n\n");
							
				}while(temp[i][j]< -90 || temp[i][j]> 90);	
			}
			else{
				printf("\tTemperatura: ");
				scanf("%f",&temp[i][j]);
			}
		}
		printf("\n");
	}

////////////////////////////////////////////////////////////////////////////////////////////////////////////////	
	// Calculo da m�dia das temperaturas registadas a determinada altitude
	// 1� Ordenar os valores da matriz por altitude, coluna 0
	for(i=0; i<tam; i++){
	aux = i;
		for(j=i+1; j<tam; j++){
			 if(temp[aux][0]>temp[j][0]){  //compara os elementos das linhas da coluna 0
			    aux = j;
			 }
		}
		if(i!=aux){
			troca[0] = temp[i][0];
			troca[1] = temp[i][1];
			
			temp[i][0] = temp[aux][0];
			temp[i][1] = temp[aux][1];
			
			temp[aux][0] = troca[0];
			temp[aux][1] = troca[1];
		}
	}
  
	printf("\n--> Impress�o dos valores registados de forma ordenada\n\n\tRegisto	     Latitude      Temperatura\n");
	printf("\t----------------------------------------\n");
	for(i=0; i<tam; i++){
		printf("\t  %d", i);
		for(j=0; j<2; j++){
			
			if(temp[i][j]!=0){
				printf("\t\t%5.2f", temp[i][j]);	
			}
				
			else	
				printf("\t      Sem dados");
		}
		printf("\n");
	}
	printf("\t----------------------------------------\n");
		

// 2� Calcular a m�dia das temperaturas a determinada altitude

// 3� Eliminar os valores nulos e compactar a matriz tempMedia[tam][2]

/*	for(i=0; i<aux+1; i++){
		for(j=0; j<2; j++){
			printf("%.2f  ",temp[i][j]);			
		}
		printf("\n");
	}	
	

		
	//'''''''
	for(i=0; i<tam; i++){
	aux = 0;
		for(j=0; j<2; j++){
			if(tempMedia[i][0]!=0){  
				tempMedia[aux][0] = tempMedia[i][0];
				tempMedia[aux][1] = tempMedia[i][1];
				aux++;	
			}			
		}
	}	
  
	for(i=0; i<aux+1; i++){
		for(j=0; j<2; j++){
			printf("%.2f  ",tempMedia[i][j]);			
		}
		printf("\n");
	}	
	
*/
	
	
	
	
	
	printf("\n\n--> Impress�o das temperaturas m�dias registadas a determinada altitude\n\n\tLatitude      Temperatura m�dia\n");
	printf("\t-------------------------------\n");
	for(i=0; i<tam +1; i++){;
		for(j=0; j<2; j++){
				printf("\t%5.2f", tempMedia[i][j]);
				printf("\t   ");
			}
		printf("\n");
	}
	printf("\t------------------------------\n");
	
	return 0;
}
