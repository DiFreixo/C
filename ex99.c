#include <stdio.h>
#include <locale.h>
#include <stdlib.h>
#include <math.h>

/*
Crie uma estrutura para representar as coordenadas de um ponto no plano (posi��es X e Y). 
Em seguida, declare e leia do teclado um ponto e exiba a dist�ncia dele at� a origem das coordenadas, 
isto �, posi��o (0, 0). Para realizar o c�lculo, utilize a f�rmula a seguir:

	d = raiz quadrada [(XB - XA)^2 + (YB -YA)^2]
	
Em que:
	� d = dist�ncia entre os pontos A e B
	� X = coordenada X em um ponto
	� Y = coordenada Y em um ponto
*/

struct ponto {
	int x;
	int y;
};

int main(){
	setlocale(LC_ALL,"");
	float resultado;
	
	struct ponto p;
	printf("Informe a coordenada X do ponto: ");
	scanf("%d",&p.x);
	printf("Informe a coordenada Y do ponto: ");
	scanf("%d",&p.y);
	
	resultado= sqrt(pow(p.x - 0, 2) + pow(p.y - 0, 2));

	printf("Distancia do ponto de origem (0, 0): %.2f \n", resultado);

	return 0;
}
