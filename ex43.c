#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
 Dado um pa�s A, com 5 milh�es de habitantes e uma taxa de natalidade de 3% ao
ano, e um pa�s B com 7 milh�es de habitantes e uma taxa de natalidade de 2% ao
ano, fazer um programa que calcule e imprima o tempo necess�rio para que a
popula��o do pa�s A ultrapasse a popula��o do pa�s B.
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int paisA, paisB, contador=0;
	paisA=5000000; //cresce 3% por ano
	paisB=7000000;  //cresce 2% por ano
	
	
	while(paisA<paisB){
		paisA = paisA + paisA*0.03;
		paisB = paisB + paisB*0.02;
		contador++;
	}
	printf("Total de anos: %d",contador);
	
	printf("\n\nPressione qualquer tecla para finalizar.");
	getchar();	
	return 0;
}
