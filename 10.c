/*10 - Faça um programa para ler a nota da prova de 15 alunos e armazene num vetor, 
calcule e imprima a média geral. */

#include <stdio.h>

int main (void){
	
	float notas[15], media;
	
	printf("Professor, digite as notas de seus alunos: \n");
	
	for(int i=0; i<15; i++){
		
		scanf("%f", &notas[i]);
		media += notas[i];
	}
		
	printf("A media geral e %.2f", media/15);

	
	return 0;	
};
