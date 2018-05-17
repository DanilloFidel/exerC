<<<<<<< HEAD

#include <stdio.h>
#include <stdlib.h>

//função recursiva para o numero fibonacci
				//10	  1		0
int fibonacci(int numero,int x, int y)
{
  if(numero == 0)
    return 0;
  if(numero > 1)
    return fibonacci(numero - 1, y, x + y);
  else
    return 1;
}

//função principal
int main()
{
  int numero= 0;
  printf("Posicao: ");
  scanf("%d",&numero);
  printf("O numero da posicao %d dos numeros fibonacci eh %d\n",numero,fibonacci(numero,1,0));
  return 0;
}
=======

#include <stdio.h>
#include <stdlib.h>

//função recursiva para o numero fibonacci
				//10	  1		0
int fibonacci(int numero,int x, int y)
{
  if(numero == 0)
    return 0;
  if(numero > 1)
    return fibonacci(numero - 1, y, x + y);
  else
    return 1;
}

//função principal
int main()
{
  int numero= 0;
  printf("Posicao: ");
  scanf("%d",&numero);
  printf("O numero da posicao %d dos numeros fibonacci eh %d\n",numero,fibonacci(numero,1,0));
  return 0;
}
>>>>>>> 309d3c9dfa756454eded235e0e2ccc1a9c4f8810
