#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

/*
Faça um programa que leia o raio de um circulo e imprima o perímetro e a área.
Para fazer os cálculos, implemente duas funções, cada uma deve realizar um
cálculo especifico conforme solicitado. Utilize as fórmulas a seguir.


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
	printf("\nPerímetro: %.2f",perimetro);
	printf("\nÁrea: %.2f",area);


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

