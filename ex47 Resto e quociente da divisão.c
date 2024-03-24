#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Sabendo-se que a unidade lógica e aritmética calcula a divisão por meio de subtrações sucessivas, 
criar um algoritmo que calcule e imprima o resto da divisão de números inteiros lidos. 
Para isso, basta subtrair o divisor ao dividendo, sucessivamente, até que o resultado seja menor do que o divisor. 
O número de subtrações realizadas corresponde ao quociente inteiro e o valor restante da subtração corresponde ao resto.
Suponha que os números lidos sejam positivos e que o dividendo seja maior do que o divisor.
*/
//Ler 2 números inteiro, dividendo e divisor
//subtração vair receber o valor do dividendo --> subtrair o divisor ao dividendo até que o resultado seja menor que o divisor
//quantidade de subtrações é igual ao quociente da divisão
//valor final da subtração é igual ao resto
	//dividendo > 0
	//dividendo >= divisor
	//formula da divisão: dividendo = quociente * divisor + resto (para números reais)

int main(){
	setlocale(LC_ALL, "Portuguese");

	int dividendo, divisor, quociente=0, resto=0, subtracao=0, cont=0;

	do{
		quociente=0;
		resto=0;
		subtracao=0;
		cont=0;
		
		printf("Digite o dividendo: ");
		scanf("%d",&dividendo);
		printf("Digite o divisor: ");
		scanf("%d",&divisor);
		
		if(dividendo>0 && dividendo>=divisor){
			subtracao=dividendo;
			while(subtracao>=divisor){
				   subtracao= subtracao-divisor;
				   cont++;
			} 
		}else{
			printf("Valores inválidos!!");
			break;
		}
			
		resto=subtracao;
		quociente=cont;

		printf("\nQuociente: %d", cont);
		printf("\nResto: %d", resto);
		
		printf("\n\n");
			
	}while(dividendo>0 && dividendo>=divisor);	
	


	printf("\n\nPressione qualquer tecla para finalizar.");
	getchar();	
	return 0;
}
