#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
float nota_1, nota_2, nota_3,media;

printf("\n Digite a primeira nota:");
scanf("%f%*c",&nota_1);
printf("\n Digite a segunda nota:");
scanf("%f%*c",&nota_2);
printf("\n Digite a terceira nota:");
scanf("%f%*c",&nota_3);

media = nota_1+nota_2+nota_3;
media = media / 3;

printf("\nA sua media e: %.2f", media);
getchar();
return 0;
}