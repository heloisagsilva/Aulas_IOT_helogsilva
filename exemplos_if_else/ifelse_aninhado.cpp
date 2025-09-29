#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
int numero;
  printf("Digite um numero qualque: ");
  scanf("%d", &numero);
if(numero <0)
  printf("Numero menor que zero");
else if (numero<10)
  printf("numero >=0 e <10");
else if (numero<100)
  printf("numero >=10 e <100");
else
  printf("numero >=100");
}