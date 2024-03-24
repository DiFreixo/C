 #include <stdio.h>
 #include <stdlib.h>
 #include <locale.h>

/*
Faça um programa em C que leia dois conjuntos de números inteiros, tendo cada um 10 elementos. 
Ao final o programa deve listar os elementos comuns aos conjuntos.
*/

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int numerosA[10],numerosB[10], i, j, k=0, numerosIguais[10];
	
	printf("Preencha o elemento A:\n");
	for (i=0; i<10; i++){
		printf("Digite o número %d: ",i+1);
		scanf("%d",&numerosA[i]);
	}
	printf("Preencha o elemento B:\n");
	for (j=0; j<10; j++){
		printf("Digite o número %d: ",j+1);
		scanf("%d",&numerosB[j]);
	}

	for (i=0; i<10; i++){
		for (j=0; j<10;j++){
			if(numerosA[i]==numerosB[j]){
				numerosIguais[k]=numerosA[i];
				k++;
				break;
			}
		}	
	}
	
	
	printf("\nElementos comuns aos conjuntos:\n");
	for (i=0; i<k; i++) {
		printf("%d \n", numerosIguais[i]);
	}
	
	printf("\n\nPressione qualquer tecla para finalizar.");	
	getchar();		
	return 0;
}


