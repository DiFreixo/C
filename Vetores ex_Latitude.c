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

/*
--> Entrada de Dados: Ler um conjunto de leituras de temperatura. Para simplificar, vamos considerar que há um número fixo de leituras 
(por exemplo, 10), mas isso pode ser facilmente modificado para aceitar um número variável de leituras.

--> Processamento:Agrupar os valores por latitude e calcular a média da temperatura para cada latitude. Calcular a temperatura média dos hemisférios 
Norte e Sul.

--> Saída:Imprimir a tabela com a latitude e a temperatura média.Imprimir as temperaturas médias dos hemisférios Norte e Sul.Determinar e imprimir 
o hemisfério mais quente.
*/


#include <stdio.h>
#include <locale.h>

#define MAX_LATITUDE 91  // Considerando latitudes de -90 a 90
#define NUM_LEITURAS 5

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int latitude, cont[MAX_LATITUDE*2]={0}; 
	int temp;
	float sum[MAX_LATITUDE*2]={0.0};
	float mediaNorte=0, mediaSul=0;
	int contNorte=0, contSul=0;
	int i, j;
	float tempMediaS=0, tempMediaN=0;
	
	// 1. Entrada de Dados
	for(i=0; i<NUM_LEITURAS; i++){
		do{
			printf("Insira a latitude (entre -90 e 90) e a temperatura: ");
			scanf("%d %d", &latitude, &temp);
			if(latitude< -90 || latitude> 90)
				printf("\n\tValor inválido para a Latitude... Tente novamente\n\n");
				
			sum[latitude + MAX_LATITUDE]+=temp;
			cont[latitude + MAX_LATITUDE]++;
			
		}while(latitude< -90 || latitude> 90);
	}
	
	
	
	 // 2. Processamento
	for(i=1; i< MAX_LATITUDE; i++){
		if(cont[i]>0){
			mediaSul += sum[i]/cont[i];
			contSul++;
		}
		if(cont[MAX_LATITUDE + i]>0){
			mediaNorte += sum[MAX_LATITUDE + i]/ cont[MAX_LATITUDE + i];
			contNorte++;
		}
	}
	
	mediaNorte/=contNorte;
	mediaSul=mediaSul/contSul;
		
	// 3. Saída
	printf("\nLatitude | Temperatura Média\n");
	printf("---------|-------------------\n");
	for(i=0; i<MAX_LATITUDE*2; i++){
		if(cont[i]>0){
			printf("%8d | %17.2f\n", i-MAX_LATITUDE, sum[i]/cont[i]);
		}
		else if(i==0 || i==MAX_LATITUDE){
			continue;  // Ignorar a latitude 0
		}
		else{
			printf("%8d |         Sem dados\n", i-MAX_LATITUDE);
		}
	}
	
	printf("\nTemperatura média no hemisfério Norte: %.2f\n", mediaNorte);
    printf("Temperatura média no hemisfério Sul: %.2f\n", mediaSul);
    
    
    // 4. Determinar o hemisfério mais quente
	for(i=1, j=MAX_LATITUDE*2-1; i<MAX_LATITUDE, j>=MAX_LATITUDE; i++, j--){  // i -- Sul // j -- Norte
		if(cont[i]>0 && cont[j]>0){
			tempMediaS+=sum[i]/cont[i];
			tempMediaN+=sum[j]/cont[j];
			
		}
	}
	
	//printf("\n\n\nTemperatura média no hemisfério Norte: %.2f\n", tempMediaN);
    //printf("Temperatura média no hemisfério Sul: %.2f\n", tempMediaS);
    if(tempMediaN > tempMediaS) 
    	printf("\nHemisfério Norte é o mais quente.\n");
   	
	else if(tempMediaS > tempMediaN) 
    	printf("\nHemisfério Sul é o mais quente.\n");
     
	else 
    	printf("\nAmbos os hemisférios têm a mesma temperatura média.\n");

	

	return 0;
}
