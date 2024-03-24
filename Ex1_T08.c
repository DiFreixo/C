
// Programa usado Dev-C++
/*
  Desenvolver um QUIZ, com base no exemplo apresentado na aula, com uma estrutura matricial de 5 questões e 3 alternativas de resposta.

  O programa deve sortear 3 perguntas, apresentando o resultado.

  No final deve dar a oportunidade ao utilizador de repetir.
*/

#include <stdio.h>
#include <locale.h>

char *quiz[5][4];  //5 perguntas, 3 respostas possíveis para cada pergunta.
char *respostasUtilizador[5];
int respostasCertas[5]={2,3,2,1,2};
int ru[5]={0};

int main(){
   int escolha,respostas=0, i, j;
   char continuar;
   // carregar a matriz com as perguntas e respostas 
   setlocale(LC_ALL,"Portuguese"); 
   // 1ª pergunta
   quiz[0][0]="Qual é a figura de linguagem presente na expressão \"calcanhar de Aquiles\"?";
   quiz[0][1]="Metáfora";
   quiz[0][2]="Alusão";  //certa
   quiz[0][3]="Catacrese";
   // 2ª pergunta
   quiz[1][0]="Qual é a figura de linguagem presente na expressão \"passou desta para melhor\"?";
   quiz[1][1]="Ironia";
   quiz[1][2]="Metáfora";
   quiz[1][3]="Eufemismo";  //certa
   // 3ª pergunta
   quiz[2][0]="Qual é a figura de linguagem presente na expressão \"Ao vê-la bateu mais forte o meu coração\"";
   quiz[2][1]="Hipérbole";
   quiz[2][2]="Inversão"; //certa
   quiz[2][3]="Comparação";
   // 4ª pergunta
   quiz[3][0]="Qual é a figura de linguagem presente na expressão \"Que cheiro doce\"?";
   quiz[3][1]="Sinestesia"; //certa
   quiz[3][2]="Metonímia";
   quiz[3][3]="Eufemismo"; 
   // 5ª pergunta
   quiz[4][0]="Qual é a figura de linguagem presente no trecho \"e engatinhou e caminhou e trotou e correu e quase levantou vôo\"?";
   quiz[4][1]="Hipérbole";
   quiz[4][2]="Gradação";  //certa
   quiz[4][3]="Prosopopeia";   

   do{
        system("cls");
        respostas=0;
        printf("\n************************** Língua Portuguesa - Figuras de Linguagem **************************\n\n");

        for(i=0; i<5; i++){
                printf("\t%dª Pergunta:",(i+1));
                printf(" %s",quiz[i][0]);
                // apresentar as alternativas de resposta
                for(j=1; j<4; j++){
                    printf("\n\t\t[%d]- %s",j,quiz[i][j]);
                }
                
                
                do{ 
                    printf("\n\n\tDigite a sua esolha: ");
                    scanf("%d",&escolha);
                    printf("\n");
                    if(escolha<1 || escolha>3) printf("\nEscolha 1, 2 ou 3.");
                }while(escolha<1 || escolha>3);  
                
                // verificar a resposta do utilizador
                if(escolha==respostasCertas[i]){
                    respostas++;
                }  
                // atualizar vetor das respostas do utilizador
                respostasUtilizador[i]=quiz[i][escolha];
                ru[i]=escolha;
        } 

        // apresentar os resultados
        printf("\nAs suas respostas foram:\n");
        for(i=0;i<5;i++){
            printf("\n%s",respostasUtilizador[i]);
            if(ru[i]==respostasCertas[i]){
               printf("- Ok."); 
            }  
            else{
               printf("- X.");                 
            }
        }
        fflush(stdin);
        printf("\n\nAcertou em %d resposta(s).",respostas);
        printf("\nDigite S para continuar, ou outra tecla para Sair:");
        scanf("%c",&continuar);
   }while(continuar=='S' || continuar=='s'); 
   return 0;

}
