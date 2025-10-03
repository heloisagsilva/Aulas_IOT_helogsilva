#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
int i, j, x[0][4];

printf("Heloisa Goncalves da Silva\n");

for(i=0; i<3; i++)
{
  printf("\nElementos da linha %d\n", i);
	for(j=0; j<4; j++)
	{
		printf("%d\n", x[i,j]);
	}
  }
}