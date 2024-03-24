#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

/*
Crie um programa que informe a quantidade total de calorias numa refeição a
partir da escolha do usuário que deverá informar o prato, a sobremesa, e bebida
conforme a tabela a seguir.
	Prato 					Sobremesa 						Bebida
	Vegetariano 180cal 		Abacaxi 75cal 					Chá 20cal
	Peixe 230cal 			Sorvete diet 110cal 			Suco de laranja 70cal
	Frango 250cal 			Mousse diet 170cal 				Suco de melão 100cal
	Carne 350cal 			Mousse chocolate 200cal 		Refrigerante diet 65cal
*/

int main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int prato, sobremesa, bebida, calorias=0;
	
	printf("Informe o prato principal < 1-Vegetariano / 2-Peixe / 3-Frango / 4-Carne >: ");
	scanf("%d",&prato);
	printf("Informe a sobremesa < 1-Abacaxi / 2-Sorvete / 3-Mousse diet / 4-Mousse chocolate >: ");
	scanf("%d",&sobremesa);
	printf("Informe a bebida < 1-Chá / 2-Sumo de laranja / 3-Sumo de melão / 4-Refrigerante diet >: ");
	scanf("%d",&bebida);
	
	switch(prato){
		case 1:
			calorias+=180;
		break;
		
		case 2:
			calorias+=230;
		break;
		
		case 3:
			calorias+=250;
		break;
		
		case 4:
			calorias+=350;
		break;	
	}
	
	switch(sobremesa){
		case 1:
			calorias+=75;
		break;
		
		case 2:
			calorias+=110;
		break;
		
		case 3:
			calorias+=170;
		break;
		
		case 4:
			calorias+=200;
		break;	
	}
	
	switch(bebida){
		case 1:
			calorias+=20;
		break;
		
		case 2:
			calorias+=70;
		break;
		
		case 3:
			calorias+=100;
		break;
		
		case 4:
			calorias+=65;
		break;	
	}
	
	printf("Total de calorias: %d",calorias);
	
	printf("\n\nPressione qualquer tecla para finalizar.");
	getchar();	
	return 0;
}
