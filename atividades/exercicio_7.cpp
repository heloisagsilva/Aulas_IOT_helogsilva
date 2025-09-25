#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
float nota_1, nota_2, nota_3, peso1, peso2, peso3, media;

printf("\n Digite a primeira nota:");
scanf("%f%*c",&nota_1);
printf("\n Digite o peso:");
scanf("%f%*c",&peso1);
printf("\n Digite a segunda nota:");
scanf("%f%*c",&peso2);
printf("\n Digite o peso:");
scanf("%f%*c",&nota_3);
printf("\n Digite a terceira nota:");
scanf("%f%*c",&nota_3);
printf("\n Digite o peso:");
scanf("%f%*c",&peso3);

media = (nota_1 * peso1 + nota_2 * peso2 + nota_3 * peso3 ) / (peso1 + peso2 + peso3);

printf("\nA sua media e: %.2f", media);
getchar();
return 0;
}