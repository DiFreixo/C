 #include <stdio.h>
 #include <stdlib.h>
 #include <locale.h>

/*
Construa uma programa em C que armazene 15 n�meros num vetor e imprima
uma listagem numerada contendo o n�mero e uma das mensagens: par ou �mpar.
*/

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int valores[15], i;
	
	for (i=0;i<15;i++){
		printf("Digite o n�mero %d: ",i+1);
		scanf("%d",&valores[i]);
	}
	printf("\n");
	for (i=0;i<15;i++){
		if(valores[i]%2==0)
			printf("O n�mero %d na posi��o %d � PAR.\n",valores[i],i+1);
		else
			printf("O n�mero %d na posi��o %d � �MPAR.\n",valores[i],i+1);
	}
	
	printf("\n\nPressione qualquer tecla para finalizar.");	
	getchar();		
	return 0;
}


