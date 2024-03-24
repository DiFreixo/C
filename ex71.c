#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Construa um programa que realize as reservas de passagens a�reas de uma companhia. 
O programa deve permitir cadastrar o n�mero de 10 voos e definir a quantidade de lugares dispon�veis para cada um. 
Ap�s o cadastro, leia v�rios pedidos de reserva, constitu�dos do n�mero da carteira de identidade do cliente e
do n�mero do voo desejado. Para cada cliente, verificar se h� possibilidade no voo desejado. 
Em caso afirmativo, imprimir o n�mero da identidade do cliente e o n�mero do voo, atualizando o n�mero de lugares dispon�veis. 
Caso contr�rio, avisar ao cliente a inexist�ncia de lugares. A leitura do n�mero 0 (zero) para o voo
desejado indica o t�rmino da leitura de reservas.
*/

int main(){
	setlocale(LC_ALL,"");
	
	printf("\n**** Reserva de Passagens A�reas ****\n\n");
	
	int voo[10], i, qtLugares[10], nIdentidade, nVoo;
		
		for (i=0; i<10; i++)
			 qtLugares[i]=0;
			 
		for (i=0; i<10; i++){
			printf("Digite a quantidade de lugares dispon�veis para o voo %d: ",i+1);
			scanf("%d",&voo[i]);
		}
	system("cls");
	do{	
		printf("\n\nDigite o n�mero de identidade do cliente: ");
		scanf("%d",&nIdentidade);
		printf("Digite o n�mero do voo desejado (1 a 10, ou 0 para sair): ");
		scanf("%d",&nVoo);
		
		if(nVoo==0){
			printf("\nFim do programa\n");
			break;
		}
		else if(nVoo<1 ||nVoo>10)
			printf("\nN�mero de voo incorreto!\n");
		
		for (i=0; i<10; i++){
		
			if (i==nVoo-1){
				if(qtLugares[i]<voo[i]){
					printf("\n\n--> CLIENTE");
					printf("\nN�mero de identidade: %d",nIdentidade);
					printf("\nN�mero do voo: %d", nVoo);
					qtLugares[i]++;
				}
			else
				printf("\nN�o h� lugares dispon�veis.");
			}
		}
		
	}while(nVoo!=0);
	
	return 0;
}
