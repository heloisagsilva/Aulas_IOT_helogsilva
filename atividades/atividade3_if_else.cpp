#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
int num1, num2;
printf("Heloisa Gonçalves da Silva\n");
printf("Digite o numero: ");
scanf("%d", &num1);
printf("Digite o segundo numero: ");
  scanf("%d", &num2);

if(num1<num2)
 printf("%d %d \n", num1, num2);
 else 
 printf("%d %d", num2, num1);
}