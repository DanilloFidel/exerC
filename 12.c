/*12. Fazer um programa para ler 5 valores e, em seguida, mostrar todos os valores 
lidos juntamente com o maior, o menor e a média dos valores.*/

#include <stdio.h>

int main(void){
	
	int n[5], big, small, mid=0;
	
	printf("Digite 5 valores:\n");
	scanf("%d", &n[0]);
	
	big = n[0];
	small = n[0];
	
	for(int i=1; i<5; i++){
		scanf("%d", &n[i]);
		
		mid+= n[i];
		
		if(n[i]>big){
			big = n[i];
		}else if(n[i]<small){
			small = n[i];
		}
		
	}
	
	for(int i2=0; i2<5; i2++){
		printf("\n%d\n", n[i2]);
	}
	
	printf(" maior: %d \n menor: %d \n media: %d", big, small, mid/5);
	
	return 0;
}
