#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Sabendo-se que a unidade l�gica e aritm�tica calcula a divis�o por meio de subtra��es sucessivas, 
criar um algoritmo que calcule e imprima o resto da divis�o de n�meros inteiros lidos. 
Para isso, basta subtrair o divisor ao dividendo, sucessivamente, at� que o resultado seja menor do que o divisor. 
O n�mero de subtra��es realizadas corresponde ao quociente inteiro e o valor restante da subtra��o corresponde ao resto.
Suponha que os n�meros lidos sejam positivos e que o dividendo seja maior do que o divisor.
*/
//Ler 2 n�meros inteiro, dividendo e divisor
//subtra��o vair receber o valor do dividendo --> subtrair o divisor ao dividendo at� que o resultado seja menor que o divisor
//quantidade de subtra��es � igual ao quociente da divis�o
//valor final da subtra��o � igual ao resto
	//dividendo > 0
	//dividendo >= divisor
	//formula da divis�o: dividendo = quociente * divisor + resto (para n�meros reais)

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
			printf("Valores inv�lidos!!");
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
