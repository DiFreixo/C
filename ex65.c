 #include <stdio.h>
 #include <stdlib.h>
 #include <locale.h>

/*
Construa um programa que permita armazenar o salário de 20 pessoas. Calcular
e armazenar o novo salário sabendo-se que o reajuste foi de 8%. Imprimir uma
listagem numerada com o salário e o novo salário. Declare quantos vetores forem
necessários.
*/

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	float salario[20], salarioNovo[20];
	int i;
	
	for (i=0; i<20; i++){
		printf("Digite o salário do colaborador %d: ",i+1);
		scanf("%f",&salario[i]);
		salarioNovo[i]=salario[i]*0.08+salario[i];
	}
	
	printf("\nSalário dos colaboradores:\n");
	printf("Salário    Salário com aumento de 8%%\n");
	for (i=0; i<20; i++){
		printf("%.2f",salario[i]);
		printf("\t   %.2f\n",salarioNovo[i]);
	}
	
	printf("\n\nPressione qualquer tecla para finalizar.");	
	getchar();		
	return 0;
}


