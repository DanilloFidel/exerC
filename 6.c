/*6 - Faça um programa que receba do usuário um vetor com 10 posições. 
Em seguida deverá ser impresso o maior e o menor elemento do vetor.*/

#include <stdio.h>

int main (void){
	
	int vet[5], big, small, i2 = 0, primeiro, s;
	float media;
	
	printf("Digite 5 valores: \n");
	scanf("%d", &vet[0]);
	
	primeiro = vet[0];
	big = vet[0];                 //define maior e menor
	small = vet[0];
	
	for(int i=0; i<5; i++){  //verifica o maior e menor
		
		scanf("%d", &vet[i]);
		
		if(vet[i]<small){
			small = vet[i];
		}else if(vet[i]>big){
			big = vet[i];
		}	
	};
	s = primeiro;
	printf(" %d ", primeiro);              
	while(i2<5){  //4
		printf(" - %d ", vet[i2]);
		i2++;
		s+= vet[i2]; //36
	}
	
	media = s/5;
	
	printf("\nO maior -> %d, e o menor -> %d ||||| A media dos valores e -> %f", big, small, media);
	
	return 0;
}
