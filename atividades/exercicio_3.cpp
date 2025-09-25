#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
float depost, juros, valor_rend, valor_total;
printf("\n Digite o valor do deposito:");
scanf("%f%*c",&depost);
printf("\n Digite o valor do juros:");
scanf("%f%*c",&juros);
juros = juros /100;
valor_rend = depost * juros;
valor_total = valor_rend + depost;
printf("\nValor do rendimento: %.2f", valor_rend);
printf("\nValor total depois do rendimento: %.2f", valor_total);
getchar();
return 0;
}