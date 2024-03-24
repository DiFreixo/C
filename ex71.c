#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Construa um programa que realize as reservas de passagens aéreas de uma companhia. 
O programa deve permitir cadastrar o número de 10 voos e definir a quantidade de lugares disponíveis para cada um. 
Após o cadastro, leia vários pedidos de reserva, constituídos do número da carteira de identidade do cliente e
do número do voo desejado. Para cada cliente, verificar se há possibilidade no voo desejado. 
Em caso afirmativo, imprimir o número da identidade do cliente e o número do voo, atualizando o número de lugares disponíveis. 
Caso contrário, avisar ao cliente a inexistência de lugares. A leitura do número 0 (zero) para o voo
desejado indica o término da leitura de reservas.
*/

int main(){
	setlocale(LC_ALL,"");
	
	printf("\n**** Reserva de Passagens Aéreas ****\n\n");
	
	int voo[10], i, qtLugares[10], nIdentidade, nVoo;
		
		for (i=0; i<10; i++)
			 qtLugares[i]=0;
			 
		for (i=0; i<10; i++){
			printf("Digite a quantidade de lugares disponíveis para o voo %d: ",i+1);
			scanf("%d",&voo[i]);
		}
	system("cls");
	do{	
		printf("\n\nDigite o número de identidade do cliente: ");
		scanf("%d",&nIdentidade);
		printf("Digite o número do voo desejado (1 a 10, ou 0 para sair): ");
		scanf("%d",&nVoo);
		
		if(nVoo==0){
			printf("\nFim do programa\n");
			break;
		}
		else if(nVoo<1 ||nVoo>10)
			printf("\nNúmero de voo incorreto!\n");
		
		for (i=0; i<10; i++){
		
			if (i==nVoo-1){
				if(qtLugares[i]<voo[i]){
					printf("\n\n--> CLIENTE");
					printf("\nNúmero de identidade: %d",nIdentidade);
					printf("\nNúmero do voo: %d", nVoo);
					qtLugares[i]++;
				}
			else
				printf("\nNão há lugares disponíveis.");
			}
		}
		
	}while(nVoo!=0);
	
	return 0;
}
