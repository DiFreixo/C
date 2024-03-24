#include <stdio.h>
#include <locale.h> //Para trabalhar com acentos


 /*Exerc�cio 2
	 Escreva um programa em C para uma empresa de aluguer de autom�veis, que 
	imprima o montante devido por cada cliente. O montante devido depende dos 
	quil�metros efetuados, do n�mero de dias que durou o aluguer e do tipo de carro 
	alugado. Os Volkswagen custam 30� por dia e 1,20� por quil�metro. Os Toyota 
	custam 35� por dia e 1,50� por quil�metro. Os Mercedes custam 60� por dia e 2,50�
	por quil�metro. Os primeiros 75 quil�metros s�o gratuitos, independentemente do 
	tipo de carro alugado.
 */
 

int main()
{
    //Biblioteca respons�vel pelos acentos
	setlocale(LC_ALL, "Portuguese");
	
	//---	
	float montante, kilometros;
	int carro, dias;
	char opcao;
	montante=0, kilometros=0, dias=0;
	
	printf("----- Empresa de Aluguer de Autom�veis ---- \n\n");
	
do{
	fflush(stdin);    //usado para limpar o buffer de sa�da
	system("cls");  //limpa o ecr�
	printf("\n");
 	printf("Digite (C) para calcular ou (S) para Sair: ");
 	scanf("%c",&opcao);
	
	switch(opcao){

		case 'C':
		case 'c':
			
			printf("\nDigite a dura��o do aluguer (em dias): ");
			scanf("%d",&dias);
			

			printf("\nDigite os quil�metros efetuados (use a v�rgula como separador): ");
			scanf("%f",&kilometros);
			
				if(kilometros<=75){
					kilometros=0;
				}else if(kilometros>75){
					kilometros= kilometros - 75;
				}

			
			printf("\nSelecione a marca do carro:\n");
			printf("1 - Volkswagen\n");
			printf("2 - Toyota\n");
			printf("3 - Mercedes\n");
			scanf("%d",&carro);	
			
			switch(carro){
			
				case 1:
					
					montante = 30*dias + 1.20*kilometros;
					
				break;
		
				case 2:
					
					montante = 35*dias + 1.50*kilometros;
					
				break;
				
				case 3:
					
					montante = 60*dias + 2.50*kilometros;
					
				break;
				
				default:
					printf("\nMarca do carro incorreta!!!");
			}		
		
			printf("\nTOTAL A PAGAR: %0.2f EUR\n",montante);
					
		break;
		
			
		case 'S':
		case 's':	
			printf("\nFim da opera��o...");
 		return 0;

    	default:
        	printf("\nA op��o n�o � v�lida... \n");
	}		

}while(opcao!='S' || opcao!='s');	 
	
	
	//--- 	
    return 0;
}
