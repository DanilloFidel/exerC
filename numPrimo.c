#include <stdio.h>
int ehPrimo(int n){
		int numDiv=1;
		for(int i=2; i<=n; i++){ 
			if(n%i != 0){ //verificar se o resto da div. do num pelo contador é diferente de zero
							  //ex: 5/2 = é diferente de zero, logo ele nao dividiu por inteiro
			}else{
				numDiv++; 
			}	
		}
		if(numDiv>2){			
			return 0;
				
		}else{
			if(n == 1){
				return 1;
			}else if(n == 2){
				return 0;
			}
			return 1;
		}
}
int main (void){
	
	int num, cont, s=0;
	float m;
	printf("Calculadora de media || Numeros primos serao ignorados \n");
	printf("Digite [-1] para encerrar a aplicação. \n");	
	while(num != -1){
		scanf("%d", &num);
		if(ehPrimo(num) == 0){
			s+=num;
			cont++;
		}
	}
	
	m = s/cont;
	printf("A media dos numeros e: %.2f", m);
	


	return 0;
	
}
