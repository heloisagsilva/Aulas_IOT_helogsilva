#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
char op;
float num1, num2;

printf("Digite o primeiro numero: ");
  scanf("%d", &num1);
printf("Digite o segundo numero: ");
  scanf("%d", &num2);
printf("Digite o terceiro numero: ");
  scanf("%d", &num3);

switch(op){
	case'+':
		printf("a soma dos dois numeros e igual a= %.2f", num1+num2);
	break;
	case '-':
		printf("a subtracao do dois numeros e igual a= %.2f", num1-num2);
	break;
	case'*':
		printf("a multiplicacao do dois numeros e igual a= %.2f", num1*num2);
	break;
	case'/':
		printf("a divisao do dois numeros e igual a= %.2f", num1/num2);
	break;
	}
}