#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
Crie um programa para fazer a gestão de um sistema de reservas de mesas numa casa
de espetáculo. A casa possui 30 mesas de 5 lugares cada. O programa deverá
permitir que o usuário escolha o código de uma mesa (100 a 129) e forneça a
quantidade de lugares desejados. O programa deverá informar se foi possível
realizar a reserva e atualizar a reserva. Se não for possível, o programa deverá
emitir uma mensagem. O programa deve terminar quando o usuário digitar
o código 0 (zero) para uma mesa ou quando todos os 150 lugares estiverem
ocupados.
*/

int main(){
	setlocale(LC_ALL,"Portuguese");
	int mesa[30], nMesa=0, i=0, qtdReserva, contCadeiras=0, codigoMesa;

	for (i=0; i<30; i++){
		mesa[i] = 0;
	}


	do{
		printf("\nInforme o número da mesa (100 a 129 ou 0 para sair): ");
		scanf("%d",&codigoMesa);		
			
		if (codigoMesa >= 100 && codigoMesa <= 129){
			printf("Informe quantos lugares pretende reservar (máx. 5): ");
			scanf("%d",&qtdReserva);
			
			if (qtdReserva >= 1 && qtdReserva <= 5){
				nMesa = codigoMesa % 100; //converte o código da mesa 100 a 129 em valores de 0 a 29
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

