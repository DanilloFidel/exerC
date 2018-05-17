/*5 - Leia um vetor de 10 posições. Contar e escrever quantos valores pares ele possui.*/

#include <stdio.h>

int main (void){
	
	int vet[9], vetPar[9], i=0, cont=0, i2=0, x=0;
	printf("Digite 10 numeros: \n");

	do{
		scanf("%d", &vet[i]);

		if(vet[i]%2 == 0){
			cont++; //5
			vetPar[x] = vet[i]; //vetpar 2,4,6,8
			x++;
			
		}
	i++;
	
	}while(i<10);
	 
	//escreve na tela
	
	printf("O vetor possui %d valores pares, sao eles:\n", cont );
	while(i2<cont){
		printf("  -> %d\n", vetPar[i2]);
		i2++;
	}

return 0;
		
}

//by Danillo
