 #include <stdio.h>
 #include <stdlib.h>
 #include <locale.h>

/*
Faça um programa que armazene 10 letras num vetor e imprima uma listagem
numerada.
*/

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	char letras[10], i;
	
	for (i=0;i<10;i++){
		printf("Digite a letra %d: ",i+1);
		fflush(stdin);
		scanf("%c",&letras[i]);
	}
	for (i=0;i<10;i++){
		printf("Letra %d: %c\n",i+1,letras[i]);
	}
	
	printf("\n\nPressione qualquer tecla para finalizar.");	
	getchar();		
	return 0;
}


