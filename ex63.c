 #include <stdio.h>
 #include <stdlib.h>
 #include <locale.h>

/*
Fa�a um programa que armazene 8 n�meros em um vetor e imprima todos os
n�meros. Ao final, imprima o total de n�meros m�ltiplos de seis.
*/

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int valores[8], i, total;
	
	for (i=0;i<8;i++){
		printf("Digite o n�mero %d: ",i+1);
		scanf("%d",&valores[i]);
	}
	printf("\n");
	for (i=0;i<8;i++){
		printf("N�mero %d: %d\n",i+1,valores[i]);
	}
	
	for (i=0;i<8;i++){
		if(valores[i]%6==0)
			//printf("O n�mero %d na posi��o %d � multiplo de 6.\n",valores[i],i+1);
			total++;
			//printf("O n�mero %d na posi��o %d n�o � multiplo de 6.\n",valores[i],i+1);
	}
	printf("\nQuantidade de n�meros m�ltiplos de 6: %d\n",total);
	
	printf("\n\nPressione qualquer tecla para finalizar.");	
	getchar();		
	return 0;
}


