
#include <stdio.h>
#include <locale.h> //Para trabalhar com acentos


 /*Exercício 1
	Uma empresa pretende atribuir um bónus de Natal aos seus colaboradores, em 
	função da idade, antiguidade (nº de anos de serviço) 
	 e nº de filhos calculado da seguinte forma:
	 - 5 € por cada ano acima dos 45 anos de idade.
	 - 10 € por ano de serviço, até 10 anos, e 20 € por cada ano a mais.
	 - 25 € por filho, num máximo até 3 filhos. Acima de 3 filhos receberá sempre 75 €.
 */
 

int main()
{
    //Biblioteca responsável pelos acentos
	setlocale(LC_ALL, "Portuguese");
	
	//---
int bonus, idade, antiguidade, filhos;
char opcao;
    bonus=0;
    
 printf("------- Cálculo do Bónus de Natal ------ \n\n");
 
 do{
 fflush(stdin);
 printf("\n");
 printf("Digite (C) para calcular o bónus do funcionário ou (S) para Sair: ");
 scanf("%c",&opcao);
 
 switch(opcao){
 	
      case 'C':
      case 'c':
 	
	 	printf("\nIdade: ");
	    scanf("%d",&idade);
	    printf("\nAntiguidade: ");
	    scanf("%d",&antiguidade);
	    printf("\nNúmero de filhos: ");
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
	    
	    printf("\nO valor do bónus é %d  EUR.\n\n",bonus);
    break;
    	
    case 'S':
    case 's':
        printf("\nFim da operação...");
 	return 0;
 		
    default:
        printf("\nA opção não é válida... \n");
  	
 }	
    	   
}while(opcao!='S' || opcao!='s');   

	//--- 	
    return 0;
}
