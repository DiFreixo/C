 #include <stdio.h>
 #include <stdlib.h>

 void main() {
 int conTempo = 0;
 float massa, tempo;
 char resp;

 printf("Digite S se desejar novo calculo ou qualquer letra para terminar:");
 scanf("%c", &resp);
 
 while (resp == 'S' || resp == 's') {
	 printf("Digite a massa em gramas do material:");
	 scanf("%f", &massa);

	 while (massa >= 0.10) {
		 conTempo++;
		 massa *= 0.75;
	 }
	 tempo = (conTempo * 30) / 60;
	 printf("O tempo foi de: %f minutos. \n", tempo);
	 printf("\n Digite S se desejar novo calculo ou qualquer letra para terminar:");
	 scanf(" %c", &resp);
 }
}
