#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
int i, j, x[10][6];

printf("Heloisa Gonçalves da Silva\n");

for(i=0; i<10; i++)
{
for(j=0; j<6;j++)
	printf("%d", x[i][j]);

}
}
