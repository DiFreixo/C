#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
Crie um programa que ajude o DETRAN a saber o total de recursos que foram
arrecadados com a aplicação de multas de trânsito.
O algoritmo deve ler as seguintes informações para cada motorista:
	• número da carteira de motorista (de 1 a 4327);
	• número de multas;
	• valor de cada uma das multas.
Deve ser impresso o valor da dívida para cada motorista e ao final da leitura o
total de recursos arrecadados (somatório de todas as multas). O programa deverá
imprimir também o número da carteira do motorista que obteve o maior número
de multas.
Obs.: O programa encerra ao ler a carteira de motorista de valor 0.
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int nCarteira, nMultas, i, nMultasMaior=0, nAux=0;
	float vMulta, divida=0, totalMultas=0;
	
	do{
		divida=0;
		printf("Informe o número da carteira de motorista ou digite 0 para sair: ");
		scanf("%d", &nCarteira);
		
		if(nCarteira==0)
			break;
		else if(nCarteira>4327||nCarteira<0){
			printf("Valor inválido!!");
			printf("\nInforme o número da carteira de motorista ou digite 0 para sair: ");
		scanf("%d", &nCarteira);
		}
			
		
			
		printf("Informe o número de multas: ");
		scanf("%d", &nMultas);
		
		if(nMultas>nMultasMaior){
			nMultasMaior=nMultas;
			nAux=nCarteira;
		}
		
		for (i=1;i<=nMultas;i++){
			printf("Informe o valor da multa %d: ",i);
			scanf("%f",&vMulta);
			divida+=vMulta;
		}
		totalMultas+=divida;
		printf("\nValor da dívida do motorista %d: %.2f Eur",nCarteira,divida);
		printf("\n\n\n");
		
	}while(nCarteira!=0);
		
		printf("\nTotal de recursos arrecadados: %.2f Eur",totalMultas);
		printf("\nNúmero da carteira do motorista que obteve o maior número de multas: %d",nAux);

	printf("\n\nPressione qualquer tecla para finalizar.");
	getchar();
	return 0;
}
