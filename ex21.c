#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
Fa�a um programa em C que leia um n�mero e indique se o n�mero est� compreendido entre 20 e 50 ou n�o.
*/

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int num1;
	printf("Digite um n�mero: ");
	scanf("%d",&num1);
	
	if(num1>=20 && num1<=50)
		printf("\n%d est� entre 20 e 50.",num1);
	else
		printf("\n%d n�o est� entre 20 e 50.",num1);
	


	printf("\n\nPressione qualquer tecla para finalizar.");
	getchar();
	return 0;
}

