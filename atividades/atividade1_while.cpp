#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");	
float salario= 1000.00;
float percentual= 1.5;
int ano_inicio = 2021;
int ano_atual; 
  printf("Heloisa Gonçalves da Silva\n\n");

  printf("Digite o ano atual: ");
	scanf("%d",&ano_atual);

while(ano_inicio <= ano_atual){
	salario += (salario * percentual/100);
	percentual *= 2;
	ano_inicio++;
}
 printf("Novo salario: %.2f", salario);
}
