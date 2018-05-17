/*3 - Ler um conjunto de números reais, armazenando-o em vetor e calcular o quadrado das
componentes deste vetor, armazenando o resultado em outro vetor. Os conjuntos têm
10 elementos cada. Imprimir todos os conjuntos.
*/

#include <stdio.h>

int main(void){
	
	int vet[9], vet2[9], i=0;
	printf("Digite um numero real: \n");
	while(i<10){
		scanf("%d", &vet[i]);
		vet2[i]= vet[i]*vet[i];
		i++;
	}
	
	for(i= 0; i<10; i++){
		printf("----------------------------------\n");
		printf("Numero do vetor na posicao [%d] = %d\n", i,vet[i]);
		printf("Numero %d ao quadrado = %d\n", vet[i], vet2[i]);
	}

}
