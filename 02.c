/*2 - Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores
lidos*/
#include <stdio.h>

int main(void){
	
	int vet[5], i;
	
	printf("Digite um valor: \n");
	
	while(i<6){
		scanf("%d", &vet[i] );
		i++;
	}
	
	for(i=0; i<6; i++){
		printf("vetor na posicao %d : %d\n", i,vet[i]);
	}
	
}


