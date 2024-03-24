#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

/*
Num campeonato Europeu de Volleyball, inscreveram-se 30 países. Sabendo-se
que na lista oficial de cada país consta, além de outros dados, peso e idade de 12
jogadores, crie um programa que apresente as seguintes informações:
	• O peso médio e a idade média de cada um dos times;
	• O atleta mais pesado de cada time;
	• O atleta mais jovem de cada time;
	• O peso médio e a idade média de todos os participantes.
*/

int main(){
	setlocale(LC_ALL, "Portuguese");
	
	int idade,pais,i, attletaMaisJovemTime=0;
	float peso, pesoMedioTime=0, idadeMediaTime=0, atletaMaisPesadoTime=0, pesoMedioTotal=0, idadeMediaTotal=0;
	
	for (pais=1;pais<=30;pais++){
		//inicializar as variáveis
		attletaMaisJovemTime=0;
		idadeMediaTime=0;
		atletaMaisPesadoTime=0;
		
		printf("\n\t#### País %d #### \n",pais);
		for (i=1;i<=12;i++){
			printf("Informe a idade do jogador %d: ",i);
			scanf("%d",&idade);
			printf("Informe o peso do jogador %d: ",i);
			scanf("%f",&peso);
			printf("\n");
			pesoMedioTime=pesoMedioTime+peso;
			idadeMediaTime+=idade;
			
			if(i==1){
				atletaMaisPesadoTime=peso;
				attletaMaisJovemTime=idade;
			}
			if(peso>atletaMaisPesadoTime)
				atletaMaisPesadoTime=peso;
			if(idade<attletaMaisJovemTime)
				attletaMaisJovemTime=idade;
		}
	
		printf("\n..... Resultado País %d .....\n",pais);
		pesoMedioTime=pesoMedioTime/12;
		idadeMediaTime=idadeMediaTime/12;
		pesoMedioTotal+=pesoMedioTime;
		idadeMediaTotal+=idadeMediaTime;
		printf("Peso médio: %.2f kg",pesoMedioTime);
		printf("\nIdade média: %.2f anos",idadeMediaTime);
		printf("\nAtleta mais pesado: %.2f kg",atletaMaisPesadoTime);
		printf("\nAtleta mais jovem: %d anos\n",attletaMaisJovemTime);
	}
			
		printf("\n..... Resultado Final .....\n",pais);
		pesoMedioTotal=pesoMedioTotal/30;
		idadeMediaTotal=idadeMediaTotal/30;
		printf("Peso médio total: %.2f kg",pesoMedioTotal);
		printf("\nIdade média total: %.2f anos",idadeMediaTotal);
	
	printf("\n\nPressione qualquer tecla para finalizar.");
	getchar();	
	return 0;
}
