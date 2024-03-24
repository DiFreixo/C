#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

/*
Crie uma estrutura para representar as coordenadas de um ponto no plano (posições X e Y). 
Em seguida, declare e leia do teclado dois pontos e exiba a distância entre eles, 
considere a mesma fórmula do exercício anterior:
	d = raiz quadrada [(XB - XA)^2 + (YB -YA)^2]
	
Em que:
	• d = distância entre os pontos A e B
	• X = coordenada X em um ponto
	• Y = coordenada Y em um ponto
*/

struct ponto {
	int x;
	int y;
};

int main(){
	setlocale(LC_ALL,"");
	float resultado;
	
	struct ponto p1, p2;
	printf("Informe a coordenada X do ponto 1: ");
	scanf("%d",&p1.x);
	printf("Informe a coordenada Y do ponto 1: ");
	scanf("%d",&p1.y);
	printf("\nInforme a coordenada X do ponto 2: ");
	scanf("%d",&p2.x);
	printf("Informe a coordenada Y do ponto 2: ");
	scanf("%d",&p2.y);
	
	resultado= sqrt(pow(p1.x - p2.x, 2) + pow(p1.y - p2.y, 2));

	printf("Distância entre o ponto 1 e o ponto 2: %.2f \n", resultado);

	return 0;
}
