/*4 - Fa�a um programa que leia um vetor de 8 posi��es e, em seguida, leia tamb�m dois valores
X e Y quaisquer correspondentes a duas posi��es no vetor. Ao final seu programa
dever� escrever a soma dos valores encontrados nas respectivas posi��es X e Y .*/

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
