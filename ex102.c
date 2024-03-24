#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

/*
Usando a estrutura retângulo do exercício anterior, faça um programa que declare
e leia uma estrutura retângulo e um ponto, e informe se esse ponto está ou não
dentro do retângulo.
*/

struct ponto {
	int x;
	int y;
};

typedef struct ponto Ponto;
void main(){
	setlocale(LC_ALL,"");
	Ponto pA, pB, p;
	
	float compDiagonal, altura, base, area, perimetro;
	
	printf("\nRetangulo: X (ponto superior esquerdo) \n");
	scanf("%d", &pA.x);
	printf("Retangulo: Y (ponto superior esquerdo) \n");
	scanf("%d", &pA.y);
	
	printf("\nRetangulo: X (ponto inferior direito) \n");
	scanf("%d", &pB.x);
	printf("Retangulo: Y (ponto inferior direito) \n");
	scanf("%d", &pB.y);
	
	printf("\nPonto: X \n");
	scanf("%d", &p.x);
	printf("Ponto: Y \n");
	scanf("%d", &p.y);
	
	if (p.x >= pA.x && p.x <= pB.x && p.y >= pB.y && p.y <= pA.y)
		printf("O ponto esta dentro do retangulo\n");
	else
		printf("O ponto nao esta dentro do retangulo\n");
}
