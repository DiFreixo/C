#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Faça um programa em C que calcule, por meio de uma função recursiva, a ×b
usando a adição, em que a e b são inteiros não-negativos.
*/

int calculaMult(int a, int b) {
	if (b > 0)
		return a + calculaMult(a, b-1);
	else
		return 0;
}



int main(){
	
	setlocale(LC_ALL,"");
	
	int a, b;
	int resultado;
	
	printf("Informe o valor de A: ");
	scanf("%d",&a);
	printf("Informe o valor de B: ");
	scanf("%d",&b);
	
	resultado = calculaMult(a, b);
	
	printf("Resultado da multiplicacao por soma: %d \n", resultado);	
	return 0;
}
