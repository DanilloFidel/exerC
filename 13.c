/*13. Fazer um programa para ler 5 valores e, em seguida, mostrar a posição 
onde se encontram o maior e o menor valor*/

#include <stdio.h>

int main(void){
	
	int n[5], big, small, aux1, aux2;
	
	printf("Digite 5 valores:\n");
	scanf("%d", &n[0]);
	
	big = n[0];
	small = n[0];
	
	for(int i=1; i<5; i++){
		scanf("%d", &n[i]);
		

		
		if(n[i]>big){
			big = n[i];
			aux1 = i;
		}else if(n[i]<small){
			small = n[i];
			aux2 = i;
		}
		
	}
		
	printf("O maior numero = %d esta na posicao [%d] e o menor numero = %d esta na posicao [%d]", big, aux1, small, aux2);
	
	return 0;
}
