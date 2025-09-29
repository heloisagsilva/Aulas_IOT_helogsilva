#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	int x = 0; //inicializão da variavel com o valor x
	
	do{
		printf("Valor de x eh = %d \n", x);
		x = x + 1; // contador incrementado em 1 unidade 
	}
	while(x != 5);
		printf("\n\n Valor de X depois que sair da estrutura = %d",x);
}