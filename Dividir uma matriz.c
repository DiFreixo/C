#include <stdio.h>
#include <math.h>

#define SIZE 40*40
#define M 40
#define N 40
#define NPAG 4

void dividir( int arr[M*N], int slice[(M*N)/NPAG], int arrSize, int sliceSize, int i, int j )
{
    int k = 0;
    int l = 0;
    int spliceColumnSize = sqrt(sliceSize);
    int arrayColumnSize = sqrt(arrSize);
    for( k = 0 ; k < spliceColumnSize ; ++k ) { // calculation part
        for (l = 0; l < spliceColumnSize; ++l) {
            slice[l + (k * (spliceColumnSize))] = arr[(i+k)*arrayColumnSize+j+l];
        }
    }
}
void imprimir(int arr[], int sliceSize)
{
	int i, j;
    int size = sqrt(sliceSize);
    for(i=0;i<size;++i){
        for(j=0;j<size;++j)
        {
            printf("->%4d  ",arr[i*(size)+j]);
        }
        printf("\n");
    }
}

int main() {
    int a[M*N] ;
    int subA[SIZE];
    int linhas=50; 
	int colunas=20;
  	
  	//int nPag=0;
  	//nPag=(M*N)/(50*20);

    int j = 0;
    int i = 0;
    for(j=0; j < M*N; j++) {
        a[j] = 1 + j;
    }

    for (i = 0; i < M; i++) {
        for (j = 0; j < N; j++) {
            printf("a[%d][%d]->%2d ", i, j, a[j + i * N]);
        }
        printf("\n\n\n");
    }
    printf("\n");
    printf("*************\n");

    for(i = 0 ; i < NPAG/2 ; ++i )
    	
	
        for(j = 0 ; j < NPAG/2 ; ++j ){

            dividir( a, subA, SIZE, SIZE / NPAG ,i*(colunas), j*(colunas) );
            printf("\n\n\npart:%d\n",1+j+i*(NPAG/2));
            imprimir(subA, SIZE / NPAG);
            printf("*************\n");
        }


    return 0;
}
