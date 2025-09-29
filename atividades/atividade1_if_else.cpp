#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
int num1,num2,num3;
printf("Heloisa Gonçalves da Silva\n\n");

printf("Digite o primeiro numero: ");
  scanf("%d", &num1);
printf("Digite o segundo numero: ");
  scanf("%d", &num2);
printf("Digite o terceiro numero: ");
  scanf("%d", &num3);
  
if(num1>num2 && num1>num3)
   printf("O primero numero e o maior: %d",num1);
 else if (num2>num1 && num2>num3)
 printf("O segundo numero e o maior: %d",num2);
 else
  printf("O terceiro numero e o maior: %d",num3);
}