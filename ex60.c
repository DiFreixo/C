 #include <stdio.h>
 #include <stdlib.h>
 #include <locale.h>

/*
Fa�a um programa em C que armazene 15 n�meros inteiros num vetor e depois
permita que o usu�rio digite um n�mero inteiro para ser procurado no vetor, se
for encontrado o programa deve imprimir a posi��o desse n�mero no vetor, caso
contr�rio, deve imprimir a mensagem: "Nao encontrado!"
*/

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int valores[15], numero, i, aux=0;
	
	for (i=0;i<15;i++){
		printf("Digite o n�mero %d: ",i+1);
		scanf("%d",&valores[i]);
	}
	
	printf("\nDigite o n�mero a procurar: ");
	scanf("%d",&numero);
	for (i=0;i<15;i++){
		if(valores[i]==numero){	
			printf("\nN�mero %d encontrado no vetor na posi��o %d\n",numero,i+1);
			aux=1;
			//break;
		}
	}
		
		if(aux==0)
			printf("\nN�mero n�o encontrado.");
		
	
	printf("\n\nPressione qualquer tecla para finalizar.");	
	getchar();		
	return 0;
}


