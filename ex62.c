 #include <stdio.h>
 #include <stdlib.h>
 #include <locale.h>

/*
Construa uma programa em C que armazene 15 números num vetor e imprima
uma listagem numerada contendo o número e uma das mensagens: par ou ímpar.
*/

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int valores[15], i;
	
	for (i=0;i<15;i++){
		printf("Digite o número %d: ",i+1);
		scanf("%d",&valores[i]);
	}
	printf("\n");
	for (i=0;i<15;i++){
		if(valores[i]%2==0)
			printf("O número %d na posição %d é PAR.\n",valores[i],i+1);
		else
			printf("O número %d na posição %d é ÍMPAR.\n",valores[i],i+1);
	}
	
	printf("\n\nPressione qualquer tecla para finalizar.");	
	getchar();		
	return 0;
}


