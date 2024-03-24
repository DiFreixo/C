#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
2. Crie uma fun��o recursiva que receba um n�mero inteiro positivo N e calcule o
somat�rio dos n�meros de 1 a N.
*/

int calculaSoma(int n){
	if (n >= 1)
		return n + calculaSoma(n-1);
	else
		return 0;
}



int main(){
	
	setlocale(LC_ALL,"");
	
	int num;
	int resultado;
	
	printf("Informe um n�mero: ");
	scanf("%d",&num);
	
	resultado = calculaSoma(num);
	
	printf("Soma de 1 a %d: %d \n", num, resultado);	
	return 0;
}
