/*7 - Escreva um programa que leia 10 números inteiros e os armazene em um vetor. 
Imprima o vetor, o maior elemento e a posição que ele se encontra. */

#include <stdio.h>

int main (void){
	
	int num[9], big, i=1, cont =0;
	
	printf("Digite 10 numeros: \n");
	
	scanf("%d", &num[0]); 
	big = num[0];
	
	while(i<9){
		
		scanf("%d", &num[i]);
		
		if(num[i]>big){  
			big = num[i]; 
			cont = i;
		};
		
		i++; 			
	}
	
	printf("O maior e %d ou num[%d] = %d" , big, cont, big);
	
	
	
	
		
	return 0;
}
