/*4 - Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois valores
X e Y quaisquer correspondentes a duas posições no vetor. Ao final seu programa
deverá escrever a soma dos valores encontrados nas respectivas posições X e Y .*/

#include <stdio.h>

int main (void){
	
	int vet[8], x, y, i=0, soma;
	
	printf("Digite 8 numeros: \n");
	
	while(i<9){
		scanf("%d", &vet[i]);
		i++;
	}
	
	x = vet[3];
	y = vet[5];
	soma = x+y;
	printf("%d + %d = %d, correspondentes as posicoes 3 e 5 do vetor.", x,y,soma);

	
	
}
