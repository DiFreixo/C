 #include <stdio.h>
 #include <stdlib.h>
 #include <locale.h>

/*
Crie um programa que leia o preço de compra e o preço de venda de 100 mercadorias (utilize vetores). 
Ao final, o programa deverá imprimir quantas mercadorias
proporcionam:
	• lucro < 10%
	• 10% <= lucro <= 20%
	• lucro > 20%
*/

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float precoCompra[100], precoVenda[100], lucro[100];
	int i, lucroBaixo=0, lucroMedio=0, lucroAlto=0;
	
	for (i=0; i<100; i++){
		printf("Digite o preço de compra da mercadoria %d: ",i+1);
		scanf("%f",&precoCompra[i]);
		printf("Digite o preço de venda da mercadoria %d: ",i+1);
		scanf("%f",&precoVenda[i]);
		printf("\n");
		lucro[i]=(precoVenda[i]/precoCompra[i])/100;
		if(lucro[i]<10)
			lucroBaixo++;
		else if(lucro[i]<=20)
			lucroMedio++;
		else
			lucroAlto++;
	}
	
	printf("\nQtd mercadorias com lucro menor que 10%%: %d",lucroBaixo);
	printf("\nQtd mercadorias com lucro maior ou igual a 10%% e menor ou igual a 20%%: %d",lucroMedio);
	printf("\nQtd mercadorias com lucro maior que 20%%: %d",lucroAlto);
	
	printf("\n\nPressione qualquer tecla para finalizar.");	
	getchar();		
	return 0;
}


