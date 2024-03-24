#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
8.7. Escreva uma função recursiva em linguagem C para calcular o valor de x^n
*/   

float calculo(float x, float n){
	if(n==0)
		return 1;
	if(n>0)
		return x * calculo(x,n-1);
	if(n<0)
         return (1/calculo(x,-n));	
}

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	float x, n;
	float resultado; 
	char opcao;
	
  do{
  	
    printf("\nInforme o valor de X e do expoente N: \n");
	scanf("%f%f", &x,&n);
	
	resultado=calculo(x,n);

	printf("\nResultado: %f", resultado);
	
	printf("\n\nPretende fazer um novo cálculo <S- Sim / N - Não>:");
	fflush(stdin);
	scanf("%c",&opcao);

  }while(opcao=='S'|| opcao=='s');


	return 0;
}


