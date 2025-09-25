#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
float imposto, grat, sal, salfinal;
printf("\n Digite o salário base:");
scanf("%f%*c",&sal);
grat = sal * 5/100;
salfinal = sal + grat;
imposto = salfinal * 7/100;
printf("\nSalário base: %f", sal);
printf("\nSalário que irá receber: %f", salfinal);
printf("\nSalário com o imposto: %f", imposto);
getchar();
return 0;
}