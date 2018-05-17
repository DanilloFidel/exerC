/*9 - Crie um programa que lê 6 valores inteiros pares e, em seguida, 
mostre na tela os valores lidos na ordem inversa. */
#include <stdio.h>

int main (void){
	
	int n[5], i =0;
	
	printf("Digite 6 numeros pares: \n");
	
	while(i<6){
		
		scanf("%d", &n[i]);
		
		if(n[i]%2 == 0){
			i++; 	
		}else{
			printf("Error! numero impar.\n");	
		}
					
			
	}
	
	i--;
	
	
	printf("\nRevertendo contagem...\n");
	
	for(int i2=0; i2<6; i2++){
		printf("\n%d...\n", n[i]);  
		i--;
		
	}

	
	
	return 0;
}
