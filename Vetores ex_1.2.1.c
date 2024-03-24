/* Programa usado Dev-C++

1.2.1 VETORES Página 53
	a. A mediana de um vetor de números é o elemento m do vetor, tal
	que metade dos números restantes no vetor é maior ou igual a m e
	metade é menor ou igual a m, se o número de elementos no vetor
	for ímpar. Se o número de elementos for par, a mediana será a média
	dos dois elementos, m1 e m2, tal que metade dos elementos restantes
	é maior ou igual a ml e m2, e metade dos elementos é menor ou
	igual a m1 e m2. Escreva uma função em C que aceite um vetor de
	números e retorne a mediana dos números no vetor.
	
	b. A MODA de um vetor de números é o número m no vetor que é
	repetido com maior freqüência. Se mais de um número for repetido
	com freqüência máxima igual, não existirá uma moda. Escreva uma
	função em C que aceite um vetor de números e retorne a moda ou
	uma indicação de que a moda não existe.
*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int tam;
	printf("Informe o tamanho do vetor: ");
	scanf("%d",&tam);
	
	int vet[tam], freq[tam];
	int m, m1, m2;
	int i, j;
	int aux=0, aux1=0;
	float media;
//----------------- Calcular a Mediana do vetor --------------------------------
	printf("\n\nDigite os %d elementos do vetor: \n", tam);
	for(i=0; i<tam; i++){
		scanf("%d",&vet[i]);
	}
	
	printf("\nVetor\n");
	for(i=0; i<tam; i++){
		printf("%d ",vet[i]);
	}
	
	printf("\n\n");
	for(i=0; i<tam; i++){
		for(j=i+1; j<tam; j++){
			if(vet[i]>vet[j]){
				aux=vet[i];
				vet[i]=vet[j];
				vet[j]=aux;	
			}
		}
	}
	
	printf("Vetor ordenado\n");
	for(i=0; i<tam; i++){
		printf("%d ",vet[i]);
	}	
	printf("\n\n");
	
	
	if(tam%2!=0){
		m=vet[((tam-1)/2)];
		printf("Para um vetor de tamanho ímpar\n");
		printf("A mediana do vetor é %d", m);
	}
	else{
		m1=vet[(tam/2)-1];
		m2=vet[((tam/2))];
		media=((float)m1+m2)/2;
		//printf("%d  %d\n", m1, m2);
		printf("Para um vetor de tamanho par\n");
		printf("A mediana do vetor é %.2f", media);
	}

//------------------- Calcular a Moda do vetor ----------------------------
	printf("\n\n");
	//o vetor vet já está ordenado
	for(i=0; i<tam;i++){
		freq[i]=1;
		for(j=i+1; j<tam; j++){	
			if(vet[i]==vet[j])
				freq[i]++;
		    if(freq[i]>1){
	 			for(aux=i+1; aux<(i+freq[i]); aux++){
	 				freq[aux] = freq[i];
	 			}
		 	}
		 	else
	 			break;	
		}
		i=i+freq[i]-1;
	}	

	
	printf("\nNúmero\tFrequência\n");
	for (i=0; i<tam; i++) 
		printf("%d\t%d\n", vet[i], freq[i]);
	
	printf("\n\n");	
	// Ao ordenar o vetor frequência de forma decrescente os elementos nas primeiras posições serão os mais repetidos 
	for(i=0; i<tam; i++){
		aux=0;
		for(j=i+1; j<tam; j++){
			if(freq[i]<freq[j]){
				aux=freq[i];
				freq[i]=freq[j];
				freq[j]=aux;
				
				aux1=vet[i];
				vet[i]=vet[j];
				vet[j]=aux1;	
			}
		}
	}
	
	
	printf("Vetor freq ordenado de forma decrescente");
	printf("\nNúmero\tFrequência\n");
	for (i=0; i<tam; i++) 
		printf("%d\t%d\n", vet[i], freq[i]);
	
	printf("\n\n");
	//Agora basta comparar as frequências dos primeiros 2 números diferentes do vetor vet para saber se são diferentes
	j=1;
	while(vet[0]==vet[j]){
		j++;
	}
	if(freq[0]>freq[j])
		printf("A Moda do vetor é: %d\n",freq[0]);		
	else
	 	printf("Não existe Moda.\n");
		
	return 0;
}
