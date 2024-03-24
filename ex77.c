#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <time.h>


/*
Fa�a um programa que leia a matr�cula e a m�dia de 100 alunos. Ordene da maior
para a menor nota e imprima uma rela��o contendo todas as matr�culas e m�dias.
*/

int main(){
	setlocale(LC_ALL,"");
	srand(time(NULL)); //gera uma sequ�ncia de n�meros diferente
	const int MAX=100;
	const int MIN=1;
	
	int matricula[100], nota[100], i=0, j, igual, k, soma=0, aux=0, aux1=0;
	float media=0;

	do{
		matricula[i] = (rand() % (MAX - MIN + 1)) + MIN;
		igual=0;
		for (j=0; j<i; j++){
			if(matricula[j]==matricula[i])  //imprime uma s�rie de n�meros n�o repetidos
				igual=1;
		}
		if(igual==0)
			i++;
	}while(i < 100);
	
	for (i=0; i<100; i++){
		nota[i]=(rand() % 21); //NOTAS DE 0 A 20;
	}
	printf("\nRegisto dos dados:");
	printf("\nPosi��o - Matr�cula - Nota\n");
	for (i=0; i<100; i++){
		printf("%3d\t  %3d\t  %2d", i+1, matricula[i], nota[i]);
		printf("\n");
	}
	
	//ordenar notas da mais alta para a mais baixa
	for (i=0; i<100-1; i++){
		for (k=i+1; k<100; k++){
			if (nota[i]< nota[k]){
				aux=nota[i];
				nota[i]=nota[k];
				nota[k]=aux;
				aux1=matricula[i];
				matricula[i]=matricula[k];
				matricula[k]=aux1;
			}
		}
	}
	
	printf("\n\nDados organizados:");
	printf("\nPosi��o - Matr�cula - Nota\n");	
	for (i=0; i<100; i++){
		soma+=nota[i];
		printf("%3d\t  %3d\t  %2d", i+1, matricula[i], nota[i]);
		printf("\n");
	}
	media=soma/100;
	
	printf("\nM�dia: %.2f", media);
	
	
	
	
	return 0;
}
