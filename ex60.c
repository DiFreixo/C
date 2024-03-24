 #include <stdio.h>
 #include <stdlib.h>
 #include <locale.h>

/*
Faça um programa em C que armazene 15 números inteiros num vetor e depois
permita que o usuário digite um número inteiro para ser procurado no vetor, se
for encontrado o programa deve imprimir a posição desse número no vetor, caso
contrário, deve imprimir a mensagem: "Nao encontrado!"
*/

int main(){
	setlocale(LC_ALL,"Portuguese");
	
	int valores[15], numero, i, aux=0;
	
	for (i=0;i<15;i++){
		printf("Digite o número %d: ",i+1);
		scanf("%d",&valores[i]);
	}
	
	printf("\nDigite o número a procurar: ");
	scanf("%d",&numero);
	for (i=0;i<15;i++){
		if(valores[i]==numero){	
			printf("\nNúmero %d encontrado no vetor na posição %d\n",numero,i+1);
			aux=1;
			//break;
		}
	}
		
		if(aux==0)
			printf("\nNúmero não encontrado.");
		
	
	printf("\n\nPressione qualquer tecla para finalizar.");	
	getchar();		
	return 0;
}


