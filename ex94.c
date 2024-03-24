#include <stdio.h>
#include <locale.h>
#include <stdlib.h>

/*
A Via��o Jos� Maria Rodrigues tem na Rodovi�ria de Rio Novo uma tabela contendo os hor�rios 
de partidas dos �nibus para Juiz de Fora nos sete dias da semana. 
Fa�a um programa que possa armazenar esses hor�rios e os hor�rios do dia quando forem solicitados pelo funcion�rio, 
sabendo-se que, no m�ximo, s�o dez hor�rios. Ao final, o programa deve imprimir a lista de 
hor�rios para todos os dias.
*/

int main(){
	setlocale(LC_ALL,"");

	
	float m[7][10], horario;
	int dia, i, j, opcao;
	int j1=0, j2=0, j3=0, j4=0, j5=0, j6=0, j7=0;
	//zerar os hor�rios
	for (i=0; i<7; i++) {
		for (j=0; j<10; j++)
			m[i][j]=0;
	}
	//registar os horarios
	do {
		printf("Informe o dia <entre 1 e 7>:\n");
		scanf("%d", &dia);
		printf("Informe o hor�rio de saida:\n");
		scanf("%f", &horario);
		switch (dia) {
			case 1:
				m[dia-1][j1] = horario;
				j1++;
				break;
			case 2:
				m[dia-1][j2] = horario;
				j2++;
				break;
			case 3:
				m[dia-1][j3] = horario;
				j3++;
				break;
			case 4:
				m[dia-1][j4] = horario;
				j4++;
				break;
			case 5:
				m[dia-1][j5] = horario;
				j5++;
				break;
			case 6:
				m[dia-1][j6] = horario;
				j6++;
				break;
			case 7:
				m[dia-1][j7] = horario;
				j7++;
				break;
			default:
				printf("Opcao inv�lida!\n");
		}
		
		if (j1 == 10 && j2 == 10 & j3 == 10 & j4 == 10 & j5 == 10 & j6 == 10 & j7 == 10) {
			printf("Horarios cheios!\n");
			break;
		}
		
		printf("Continuar a registar <0-Parar / 1-Continuar>?\n");
		scanf("%d", &opcao);
	} while (opcao != 0);
	printf("\n");
	//imprimindo os horarios
	for (i=0; i<7; i++) {
		printf("\nDia %d \n", i+1);
		for (j=0; j<10; j++)
			printf("%.2f \t", m[i][j]);
	}
		
	return 0;
}
