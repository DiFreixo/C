#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*
Fa�a um programa que leia a base e a altura de um ret�ngulo e imprima o per�metro, a �rea e a diagonal. 
Para fazer os c�lculos, implemente tr�s fun��es, cada uma deve realizar um c�lculo especifico conforme solicitado. 
Utilize as f�rmulas a seguir.

	perimetro = 2�(base + altura) 
	
	area = base � altura
	
	diagonal = raiz quadrada(base^2 + altura^2)
*/

float calcPerimetro(float base, float altura);
float calcArea(float base, float altura);
float calcDiagonal(float base, float altura);

int main(){
	setlocale(LC_ALL,"");
	
	float base, altura, perimetro=0, area=0, diagonal=0;
	
	printf("Digite a medida da base do ret�ngulo: ");
	scanf("%f",&base);
	printf("Digite a medida da altura do ret�ngulo: ");
	scanf("%f",&altura);
	
	perimetro=calcPerimetro(base, altura);
	area=calcArea(base, altura);
	diagonal=calcDiagonal(base, altura);
	
	printf("\nMedidas do ret�ngulo:");
	printf("\nPer�metro: %.2f",perimetro);
	printf("\n�rea: %.2f",area);
	printf("\nDiagonal: %.2f",diagonal);

	return 0;
}

float calcPerimetro(float base, float altura){
	float perimetro;
	perimetro = 2*(base + altura);
	
	return perimetro;  
}

float calcArea(float base, float altura){
	float area;
	area = base * altura;
	return area; 
}

float calcDiagonal(float base, float altura){
	float diagonal;
	diagonal = sqrt(pow(base,2) + pow(altura,2));
	return diagonal; 
}
