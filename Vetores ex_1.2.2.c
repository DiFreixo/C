/* Programa usado Dev-C++

1.2.2 VETORES Página 56
	Escreva um programa em C que faça o seguinte: Leia um grupo de leituras de temperatura. 
	Uma leitura consiste em dois números: um inteiro entre -90 e 90, representando a latitude na qual a leitura foi efetuada, 
	e a temperatura observada nessa latitude. Imprima uma tabela consistindo em cada latitude e na temperatura média da	latitude. 
	Se não existirem leituras em determinada latitude, imprima "sem dados" em vez de uma média. Em seguida, imprima a temperatura média nos hemisférios
	Norte e Sul (o Norte consiste em latitudes	de 1 a 90 e o Sul em latitudes de -1 a -90). 
	(Essa temperatura média	deve ser calculada como a média das médias, não como a média das leituras iniciais.) 
	Determine também o hemisfério mais quente. Ao fazer a determinação, use as temperaturas médias em todas as latitudes de cada hemisfério para os quais
	existem dados tanto para essa latitude como para a latitude correspondente no outro hemisfério. (Por exemplo, se existirem dados para latitude 57, 
	mas não para latitude -57, então a temperatura média para a latitude 57 deve ser ignorada, ao determinar o hemisfério mais quente.)
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
						printf("\n\tValor inválido para a Latitude... Tente novamente\n\n");
							
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
	// Calculo da média das temperaturas registadas a determinada altitude
	// 1º Ordenar os valores da matriz por altitude, coluna 0
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
  
	printf("\n--> Impressão dos valores registados de forma ordenada\n\n\tRegisto	     Latitude      Temperatura\n");
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
		

// 2º Calcular a média das temperaturas a determinada altitude

// 3º Eliminar os valores nulos e compactar a matriz tempMedia[tam][2]

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
	
	
	
	
	
	printf("\n\n--> Impressão das temperaturas médias registadas a determinada altitude\n\n\tLatitude      Temperatura média\n");
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
