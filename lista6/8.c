/*Crie um programa 
que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos na ordem inversa. */

#include <stdio.h>

int main (void){
	
	int n[5], i =0;
	
	printf("Digite 6 numeros: \n");
	
	while(i<6){
		
		scanf("%d", &n[i]);      //0 1 2 3 4 5 
		i++; //5				// 1 2 3 4 5 6
			
	}
	
	i--;
	
	
	printf("\nRevertendo contagem...\n");
	
	for(int i2=0; i2<6; i2++){
		printf("\n%d...\n", n[i]);  
		i--;
		
	}

	
	
	return 0;
}
