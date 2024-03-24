#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
Crie um programa para fazer a gest�o de um sistema de reservas de mesas numa casa
de espet�culo. A casa possui 30 mesas de 5 lugares cada. O programa dever�
permitir que o usu�rio escolha o c�digo de uma mesa (100 a 129) e forne�a a
quantidade de lugares desejados. O programa dever� informar se foi poss�vel
realizar a reserva e atualizar a reserva. Se n�o for poss�vel, o programa dever�
emitir uma mensagem. O programa deve terminar quando o usu�rio digitar
o c�digo 0 (zero) para uma mesa ou quando todos os 150 lugares estiverem
ocupados.
*/

int main(){
	setlocale(LC_ALL,"Portuguese");
	int mesa[30], nMesa=0, i=0, qtdReserva, contCadeiras=0, codigoMesa;

	for (i=0; i<30; i++){
		mesa[i] = 0;
	}


	do{
		printf("\nInforme o n�mero da mesa (100 a 129 ou 0 para sair): ");
		scanf("%d",&codigoMesa);		
			
		if (codigoMesa >= 100 && codigoMesa <= 129){
			printf("Informe quantos lugares pretende reservar (m�x. 5): ");
			scanf("%d",&qtdReserva);
			
			if (qtdReserva >= 1 && qtdReserva <= 5){
				nMesa = codigoMesa % 100; //converte o c�digo da mesa 100 a 129 em valores de 0 a 29
				printf("\n\nnMesa: %d",nMesa);
				
				
				if (mesa[nMesa] + qtdReserva <= 5){
					printf("\nFoi possivel reservar/atualizar a reserva!");
					mesa[nMesa] += qtdReserva;
					contCadeiras += qtdReserva;
				}
				else
					printf("\n A mesa %d nao possui a quantidade de cadeiras solicitada\n",codigoMesa);
			}
			else
				printf("\nA mesa %d nao possui a quantidade de cadeiras solicitada\n",codigoMesa);
		}
		else if(codigoMesa==0){
			printf("\nFim do programa");
			break;
		}
		else
			printf("\nNumero invalido\n");
	
		if (contCadeiras==150)
			break;	

	}while(codigoMesa!=0);
	
	return 0;	
}

