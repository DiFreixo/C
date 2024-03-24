 #include <stdio.h>
 #include <stdlib.h>
 #include <locale.h>

/*
Faça um programa que armazene 8 números em um vetor e imprima todos os
números. Ao final, imprima o total de números múltiplos de seis.
*/

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int valores[8], i, total;
	
	for (i=0;i<8;i++){
		printf("Digite o número %d: ",i+1);
		scanf("%d",&valores[i]);
	}
	printf("\n");
	for (i=0;i<8;i++){
		printf("Número %d: %d\n",i+1,valores[i]);
	}
	
	for (i=0;i<8;i++){
		if(valores[i]%6==0)
			//printf("O número %d na posição %d é multiplo de 6.\n",valores[i],i+1);
			total++;
			//printf("O número %d na posição %d não é multiplo de 6.\n",valores[i],i+1);
	}
	printf("\nQuantidade de números múltiplos de 6: %d\n",total);
	
	printf("\n\nPressione qualquer tecla para finalizar.");	
	getchar();		
	return 0;
}


