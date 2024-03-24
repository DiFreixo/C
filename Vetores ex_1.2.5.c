/* Programa usado Dev-C++

1.2.5 VETORES P�gina 55
	Escreva uma fun��o printar(a) que aceite um vetor a m-por-n de
	inteiros e imprima os valores do vetor em v�rias p�ginas, como segue:
	cada p�gina deve conter 50 linhas e 20 colunas do vetor. No in�cio de
	cada p�gina, devem ser impressos os t�tulos "COL 0", "COL 1" e assim
	por diante e, ao longo da margem esquerda de cada p�gina, devem ser
	impressos os t�tulos "ROW 0", "ROW 1" e assim por diante.
	 
	O vetor deve ser impresso por subvetores. Por exemplo, se a fosse um vetor de
	100-por-100, a primeira p�gina conteria a[0][0] at� a[49][19], a segunda p�gina conteria a[0][20] at� a[49][39], 
	a terceira p�gina conteria	a[0][40] at� a[49][59], e assim por diante, at� que a quinta p�gina
	contivesse a[0][80] at� a[49][99], a sexta p�gina, a[50][0] at� a[99][19],
	e assim por diante. A sa�da impressa inteira ocuparia dez p�ginas. 
	
	Se o n�mero de linhas n�o for um m�ltiplo de 50 ou o n�mero de colunas
	n�o for um m�ltiplo de 20, as �ltimas p�ginas da sa�da impressa
	dever�o conter menos de 100 n�meros.	
*/
	//P�gina 1 a[0][0] at� a[49][19]
	//P�gina 2 a[0][20] at� a[49][39]
	//P�gina 3 a[0][40] at� a[49][59]
	//P�gina 4 a[0][60] at� a[49][79]
	//P�gina 5 a[0][80] at� a[49][99]
	//P�gina 6 a[50][0] at� a[99][19]
	//P�gina 7 a[50][20] at� a[99][39]
	//P�gina 8 a[50][40] at� a[99][59]
	//P�gina 9 a[50][60] at� a[99][79]
	//P�gina 10 a[50][80] at� a[99][99]
	
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
        printf("\n\nP�GINA %d\n", i+1);
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

