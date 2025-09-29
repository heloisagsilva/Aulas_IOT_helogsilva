#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int x = 1; //inicializão da variavel com o valor x
	int y = 10;
	  while(x<y){
		printf("o valor de x eh = %d\n", x);
		x = x + 1; // contador incrementado em 1 unidade 
	  }
		printf("\n\n Valor de X depois que sair da estrutura = %d",x);
	}