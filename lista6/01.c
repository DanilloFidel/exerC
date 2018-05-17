/*1 - Faça um programa que possua um vetor denominado A que armazene 6 números inteiros.
O programa deve executar os seguintes passos:
*/
#include <stdio.h>

int main(void){
	
	int vetorA[]= {1, 0, 5, -2, -5, 7}; //a) atribui valores ao vetor
	int varSimple, i ;
	
	for(i=0; i<6;i++){ 
		varSimple = varSimple + vetorA[i];  //c)estrutura soma os valores do vetor
	}
	
	printf("A soma dos valores do vetor e: %d\n", varSimple);
	printf("A soma das posicoes 0, 1 e 5: %d\n", vetorA[0]+vetorA[1]+vetorA[5]); //c) soma 3 posiçoes
	
	vetorA[4] = 100; //d) atribui novo valor a posição
	
	for(i=0; i<6; i++){
		printf("vetorA[%d]\n", vetorA[i]); //e) exibindo valores do vetor
	}
	
	
}
