#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>

/*
Entrar com valores para uma matriz C 2 x 3. Gerar e imprimir a C t.
A matriz transposta é gerada trocando linha por coluna. Veja o exemplo a seguir:

*/

int main(){
	setlocale(LC_ALL,"");
	srand(time(NULL)); //gera uma sequência de números diferente
	
	int matrizC[2][3], i,j, matrizCT[3][2];

	
	//preencher matriz
	for (i=0; i<2; i++){
		for (j=0; j<3; j++){
			matrizC[i][j] = (rand() % 30);
			printf("%2d  ",matrizC[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\n");
	for (j=0; j<3; j++){
		for (i=0; i<2; i++){
			matrizCT[j][i]=matrizC[i][j];	
			printf("%2d  ",matrizCT[j][i]);	
		}
		
		printf("\n");
	}	
		
	return 0;
}
