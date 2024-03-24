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

/*
--> Entrada de Dados: Ler um conjunto de leituras de temperatura. Para simplificar, vamos considerar que h� um n�mero fixo de leituras 
(por exemplo, 10), mas isso pode ser facilmente modificado para aceitar um n�mero vari�vel de leituras.

--> Processamento:Agrupar os valores por latitude e calcular a m�dia da temperatura para cada latitude. Calcular a temperatura m�dia dos hemisf�rios 
Norte e Sul.

--> Sa�da:Imprimir a tabela com a latitude e a temperatura m�dia.Imprimir as temperaturas m�dias dos hemisf�rios Norte e Sul.Determinar e imprimir 
o hemisf�rio mais quente.
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
				printf("\n\tValor inv�lido para a Latitude... Tente novamente\n\n");
				
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
		
	// 3. Sa�da
	printf("\nLatitude | Temperatura M�dia\n");
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
	
	printf("\nTemperatura m�dia no hemisf�rio Norte: %.2f\n", mediaNorte);
    printf("Temperatura m�dia no hemisf�rio Sul: %.2f\n", mediaSul);
    
    
    // 4. Determinar o hemisf�rio mais quente
	for(i=1, j=MAX_LATITUDE*2-1; i<MAX_LATITUDE, j>=MAX_LATITUDE; i++, j--){  // i -- Sul // j -- Norte
		if(cont[i]>0 && cont[j]>0){
			tempMediaS+=sum[i]/cont[i];
			tempMediaN+=sum[j]/cont[j];
			
		}
	}
	
	//printf("\n\n\nTemperatura m�dia no hemisf�rio Norte: %.2f\n", tempMediaN);
    //printf("Temperatura m�dia no hemisf�rio Sul: %.2f\n", tempMediaS);
    if(tempMediaN > tempMediaS) 
    	printf("\nHemisf�rio Norte � o mais quente.\n");
   	
	else if(tempMediaS > tempMediaN) 
    	printf("\nHemisf�rio Sul � o mais quente.\n");
     
	else 
    	printf("\nAmbos os hemisf�rios t�m a mesma temperatura m�dia.\n");

	

	return 0;
}
