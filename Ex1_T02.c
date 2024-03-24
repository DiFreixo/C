
#include <stdio.h>
#include <locale.h> //Para trabalhar com acentos


 /*Exerc�cio 1
	Uma empresa pretende atribuir um b�nus de Natal aos seus colaboradores, em 
	fun��o da idade, antiguidade (n� de anos de servi�o) 
	 e n� de filhos calculado da seguinte forma:
	 - 5 � por cada ano acima dos 45 anos de idade.
	 - 10 � por ano de servi�o, at� 10 anos, e 20 � por cada ano a mais.
	 - 25 � por filho, num m�ximo at� 3 filhos. Acima de 3 filhos receber� sempre 75 �.
 */
 

int main()
{
    //Biblioteca respons�vel pelos acentos
	setlocale(LC_ALL, "Portuguese");
	
	//---
int bonus, idade, antiguidade, filhos;
char opcao;
    bonus=0;
    
 printf("------- C�lculo do B�nus de Natal ------ \n\n");
 
 do{
 fflush(stdin);
 printf("\n");
 printf("Digite (C) para calcular o b�nus do funcion�rio ou (S) para Sair: ");
 scanf("%c",&opcao);
 
 switch(opcao){
 	
      case 'C':
      case 'c':
 	
	 	printf("\nIdade: ");
	    scanf("%d",&idade);
	    printf("\nAntiguidade: ");
	    scanf("%d",&antiguidade);
	    printf("\nN�mero de filhos: ");
	    scanf("%d",&filhos);
	    printf("\n");
	  
	    if(idade>45){
	    	 bonus=(idade-45)*5;
		}else{
			bonus=0;
		}
	      
		    
	    if(antiguidade <= 10){
	    	bonus = bonus + antiguidade * 10;
		}else{
			bonus = bonus + (antiguidade-10)*20 + 100;
		}  
	       
	    
	    if((filhos>=1) && (filhos<=3)){
	    	 bonus = bonus + filhos*25;
		}else{
			
			if(filhos>3){
				bonus = bonus + 75;	
			}else{
				 bonus = bonus + 0; ///algo mal
			}
		}
	    
	    printf("\nO valor do b�nus � %d  EUR.\n\n",bonus);
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
