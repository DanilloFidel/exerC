/*11. Faça um programa que preencha um vetor com 10 números reais, 
calcule e mostre a quantidade de 
números negativos e a soma dos números positivos desse vetor. */

#include <stdio.h>

int main (void){
	
	int num[10], pos, neg= 0;
	
	printf("Digite 10 numeros reais: \n");
	
	for(int i=0; i<10; i++){
		
		scanf("%d", &num[i]); //5
		
		if(num[i] > -1){   
			pos += num[i];	 
		}else{
			neg++;
		}	
	}
	
	if(pos == 0){
		printf("Nao foram digitados numeros positivos\n");		
	}else if (pos == 1){
		printf("Foi digitado apenas 1 numero positivo\n");
	}else{
		printf("A soma dos positivos: %d\n", pos);
	}
	
	
	
	if(neg == 0){
		printf("Nao foram digitados numeros negativos", neg);		
	}else if (neg == 1){
		printf("Foi digitado apenas 1 numero negativo");
	}else{
		printf("Foram digitados %d numeros negativos", neg);
	}

	
	
	return 0;
}
