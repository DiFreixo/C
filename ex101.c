#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

/*
Cria uma estrutura chamada retângulo. Essa estrutura deverá conter o ponto
superior esquerdo e o ponto inferior direito do retângulo. Cada ponto é definido
por uma estrutura Ponto, a qual contém as posições X e Y. Faça um programa
que declare e leia uma estrutura retângulo e exiba a área e o comprimento da
diagonal e o perímetro desse retângulo.
*/

struct ponto {
	int x;
	int y;
};

typedef struct ponto Ponto;
void main(){
	setlocale(LC_ALL,"");
	Ponto pA, pB;
	
	float compDiagonal, altura, base, area, perimetro;
	
	printf("Retangulo: X (ponto superior esquerdo) \n");
	scanf("%d", &pA.x);
	printf("Retangulo: Y (ponto superior esquerdo) \n");
	scanf("%d", &pA.y);
	
	printf("Retangulo: X (ponto inferior direito) \n");
	scanf("%d", &pB.x);
	printf("Retangulo: Y (ponto inferior direito) \n");
	scanf("%d", &pB.y);
	
	altura = sqrt(pow(pA.x - pA.x, 2) + pow(pA.y - pB.y, 2));
	base = sqrt(pow(pB.x - pA.x, 2) + pow(pB.y - pB.y, 2));
	
	area = altura * base;
	compDiagonal = sqrt(pow(pB.x - pA.x, 2) + pow(pB.y - pA.y, 2));
	perimetro = (altura + base) * 2;
	
	printf("Comprimento da diagonal: %.2f \n", compDiagonal);
	printf("Area: %.2f \n", area);
	printf("Perimetro: %.2f \n", perimetro);
}

