#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
float salario= 1000;
float percentual= 1.5;
int i; 
printf("Heloisa Gonçalves da Silva\n\n");

for(i=2019; i<=2025; i++){
  salario = salario + salario * percentual/100;
	percentual = percentual * 2;	
}
 printf("O salario atual do funcionario eh: %.2f", salario);
}