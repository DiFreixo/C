#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
Construa um programa que receba a idade, a altura e o peso de várias pessoas,
Calcule e imprima:
	• a quantidade de pessoas com idade superior a 50 anos;
	• a média das alturas das pessoas com idade entre 10 e 20 anos;
	• a porcentagem de pessoas com peso inferior a 40 quilos entre todas as
	pessoas analisadas.
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int idade, cont50=0, cont=0, contador=0;
	float altura, peso, somaAltura=0, pessoas=0, percPesoMenor=0;
	
	do{
		printf("Informe a idade: ");
		scanf("%d",&idade);
		if(idade<=0)
			break;
		printf("Informe a altura: ");
		scanf("%f",&altura);
		printf("Informe o peso: ");
		scanf("%f",&peso);
		contador++;
			
		if(idade>50)
			cont50++;
		if(idade>=10 && idade<=20){
			somaAltura+=altura;
			cont++;
		}
		if(peso<40)
		pessoas++;
		printf("\n\n");
	}while(idade>0);
	
	percPesoMenor=(pessoas/contador)*100;
	printf("\nQuantidade de pessoas com idade maior que 50: %d",cont50);
	printf("\nMédia de alturas das pessoas com idade entre 10 e 20 anos: %.2f",somaAltura/cont);	
	printf("\n%% de pessoas com peso inferior a 40 quilos entre todas as pessoas analisadas: %.2f",percPesoMenor);
	
	printf("\n\nPressione qualquer tecla para finalizar.");	
	getchar();
	return 0;
}
