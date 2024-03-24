#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
Crie um programa que ajude o DETRAN a saber o total de recursos que foram
arrecadados com a aplica��o de multas de tr�nsito.
O algoritmo deve ler as seguintes informa��es para cada motorista:
	� n�mero da carteira de motorista (de 1 a 4327);
	� n�mero de multas;
	� valor de cada uma das multas.
Deve ser impresso o valor da d�vida para cada motorista e ao final da leitura o
total de recursos arrecadados (somat�rio de todas as multas). O programa dever�
imprimir tamb�m o n�mero da carteira do motorista que obteve o maior n�mero
de multas.
Obs.: O programa encerra ao ler a carteira de motorista de valor 0.
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int nCarteira, nMultas, i, nMultasMaior=0, nAux=0;
	float vMulta, divida=0, totalMultas=0;
	
	do{
		divida=0;
		printf("Informe o n�mero da carteira de motorista ou digite 0 para sair: ");
		scanf("%d", &nCarteira);
		
		if(nCarteira==0)
			break;
		else if(nCarteira>4327||nCarteira<0){
			printf("Valor inv�lido!!");
			printf("\nInforme o n�mero da carteira de motorista ou digite 0 para sair: ");
		scanf("%d", &nCarteira);
		}
			
		
			
		printf("Informe o n�mero de multas: ");
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
		printf("\nValor da d�vida do motorista %d: %.2f Eur",nCarteira,divida);
		printf("\n\n\n");
		
	}while(nCarteira!=0);
		
		printf("\nTotal de recursos arrecadados: %.2f Eur",totalMultas);
		printf("\nN�mero da carteira do motorista que obteve o maior n�mero de multas: %d",nAux);

	printf("\n\nPressione qualquer tecla para finalizar.");
	getchar();
	return 0;
}
