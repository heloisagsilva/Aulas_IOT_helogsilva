#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
int idade;
printf("Heloisa Gonçalves da Silva\n");
  printf("Digite a sua idade: ");
  scanf("%d", &idade);
if(idade <= 11)
  printf("Voce e crianca");
else if (idade <=18)
  printf("Voce e adolecente");
else if (idade <= 24)
  printf("Voce e jovem");
else if (idade <=59)
  printf("Voce e adulto");
else 
printf("voce e idoso");
}