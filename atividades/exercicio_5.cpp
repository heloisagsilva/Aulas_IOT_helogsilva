#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
int num_1, num_2, num_3, num_4, soma;

printf("\n Digite o primeiro valor:");
scanf("%d%*c",&num_1);
printf("\n Digite o segundo valor:");
scanf("%d%*c",&num_2);
printf("\n Digite o terceiro valor:");
scanf("%d%*c",&num_3);
printf("\n Digite o quarto valor:");
scanf("%d%*c",&num_4);

soma = num_1+num_2+num_3+num_4;

printf("\nValor da somas dos numeros: %d", soma);
getchar();
return 0;
}