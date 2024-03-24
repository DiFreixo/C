/* Programa usado Dev-C++

1.2.5 VETORES Página 55
	Escreva uma função printar(a) que aceite um vetor a m-por-n de
	inteiros e imprima os valores do vetor em várias páginas, como segue:
	cada página deve conter 50 linhas e 20 colunas do vetor. No início de
	cada página, devem ser impressos os títulos "COL 0", "COL 1" e assim
	por diante e, ao longo da margem esquerda de cada página, devem ser
	impressos os títulos "ROW 0", "ROW 1" e assim por diante.
	 
	O vetor deve ser impresso por subvetores. Por exemplo, se a fosse um vetor de
	100-por-100, a primeira página conteria a[0][0] até a[49][19], a segunda página conteria a[0][20] até a[49][39], 
	a terceira página conteria	a[0][40] até a[49][59], e assim por diante, até que a quinta página
	contivesse a[0][80] até a[49][99], a sexta página, a[50][0] até a[99][19],
	e assim por diante. A saída impressa inteira ocuparia dez páginas. 
	
	Se o número de linhas não for um múltiplo de 50 ou o número de colunas
	não for um múltiplo de 20, as últimas páginas da saída impressa
	deverão conter menos de 100 números.	
*/
	//Página 1 a[0][0] até a[49][19]
	//Página 2 a[0][20] até a[49][39]
	//Página 3 a[0][40] até a[49][59]
	//Página 4 a[0][60] até a[49][79]
	//Página 5 a[0][80] até a[49][99]
	//Página 6 a[50][0] até a[99][19]
	//Página 7 a[50][20] até a[99][39]
	//Página 8 a[50][40] até a[99][59]
	//Página 9 a[50][60] até a[99][79]
	//Página 10 a[50][80] até a[99][99]
	
#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

#define M 150  //linhas
#define N 60  //colunas

void dividir(int mat[M][N], int l, int c, int subMat[][l][c]){
    int i, j, d;
	
	
	for(d=0; d<((M/l)+(N/c)); d+=2)
	/* percorrer as linhas */
	    for(i=0; i<M; i++){
	        /* e em cada linha, percorrer as colunas */
	        for(j=0; j<N; j++){
	            subMat[(j/c) + (i/l) + d][i%l][j%c] = mat[i][j];
	        }
	    }
	
}


int main(){
	setlocale(LC_ALL,"Portuguese");
    int linhas= 50;
	int colunas= 20;
	int i, j, k=0;
	int mat[M][N]={0};

    
    // Preencher a matriz de tamanho M*N
	for(i=0; i<M; i++){
		for(j=0; j<N; j++){
			mat[i][j]=k+1;
			k++;
			printf("%4d ", mat[i][j]);
		}
	printf("\n");
	}

    int subMat[N/colunas + M/linhas][linhas][colunas];

    dividir(mat, linhas, colunas, subMat);
    

    for(i=0; i<N/colunas; i++){
        printf("\n\nPÁGINA %d\n", i+1);
        for(j=0; j<M; j++) {
            for(k=0; k<colunas; k++){
                printf("%4d ", subMat[i][j][k]);
            }
            printf("\n");
        }
        printf("\n\n");
    }

    return 0;
}

