#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
Numa universidade cada aluno possui os seguintes dados:
	• Renda pessoal;
	• Renda familiar;
	• Total gasto com alimentação;
	• Total gasto com outras despesas;
Faça um programa que imprima a percentagem dos alunos que gasta acima de
R$200,00 com outras despesas. O número de alunos com renda pessoal maior
que a renda familiar e a porcentagem gasta com alimentação e outras despesas
em relação às rendas pessoal e familiar.
Obs.: O programa encerra quando se digita 0 para a renda pessoal.
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	float rendaPessoal, rendaFamiliar, totalAlimentacao, totalOutrasDespesas, percDespesasMaior200=0;
	float percAlimentacaoP=0,percAlimentacaoF,percOutrasP,percOutrasF;
	int pessoalMaiorFamiliar=0, contador=0, despesasMaior200=0;
	
	do{
		printf("Informe a sua renda pessoal: ");
		scanf("%f",&rendaPessoal);
		if(rendaPessoal==0)
			break;
		printf("Informe a sua renda familiar: ");
		scanf("%f",&rendaFamiliar);
		printf("Informe o total gasto com a alimentação: ");
		scanf("%f",&totalAlimentacao);
		printf("Informe o total gasto com outras despesas: ");
		scanf("%f",&totalOutrasDespesas);
		contador++;
		
		if(totalOutrasDespesas>200)
			despesasMaior200++;
		if(rendaPessoal>rendaFamiliar)
			pessoalMaiorFamiliar++;
			
		percAlimentacaoP = (totalAlimentacao / rendaPessoal) * 100;
		percAlimentacaoF = (totalAlimentacao / rendaFamiliar) * 100;
		percOutrasP = (totalOutrasDespesas / rendaPessoal) * 100;
		percOutrasF = (totalOutrasDespesas / rendaFamiliar) * 100;
	
		printf("\n Aliment. por renda pessoal: %.2f", percAlimentacaoP);
		printf("\n Aliment. por renda familiar: %.2f", percAlimentacaoF);
		printf("\n Outras despesas por renda pessoal: %.2f", percOutrasP);
		printf("\n Outras despesas por renda familiar: %.2f", percOutrasF);
		printf("\n\n");
	
	}while(rendaPessoal!=0);

	percDespesasMaior200=(despesasMaior200/contador)*100;

	printf("\nPercentagem dos alunos que gasta acima de R$200,00: %.2f",percDespesasMaior200);
	printf("\nNúmero de alunos com renda pessoal maior que a renda familiar: %d",pessoalMaiorFamiliar);

	printf("\n\nPressione qualquer tecla para finalizar.");
	getchar();
	return 0;
}
