#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*
Fa�a um programa que leia o raio de um circulo e imprima o per�metro e a �rea.
Para fazer os c�lculos, implemente duas fun��es, cada uma deve realizar um
c�lculo especifico conforme solicitado. Utilize as f�rmulas a seguir.


	perimetro = 2 * pi * raio
	
	area = pi * raio^2
	
*/

float calcPerimetro(float raio);
float calcArea(float raio);


int main(){
	setlocale(LC_ALL,"");
	
	float raio, perimetro=0, area=0;
	
	printf("Digite a medida do raio do circulo: ");
	scanf("%f",&raio);

	
	perimetro=calcPerimetro(raio);
	area=calcArea(raio);

	printf("\nMedidas do circulo:");
	printf("\nPer�metro: %.2f",perimetro);
	printf("\n�rea: %.2f",area);


	return 0;
}

float calcPerimetro(float raio){
	float perimetro;
	perimetro = 2 * 3.14 * raio;
	return perimetro;  
}

float calcArea(float raio){
	float area;
	area = 3.14 * pow(raio,2);
	return area; 
}

