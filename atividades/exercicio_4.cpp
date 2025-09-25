#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
float polgds, jarda, milha, pes;
printf("\n Digite o valor em pes:");
scanf("%f%*c",&pes);
polgds = pes * 12;
jarda = pes / 3;
milha = pes / 1760;
printf("\nValor em polegadas: %.2f", polgds);
printf("\nValor jardas: %.2f", jarda);
printf("\nValor milhas: %.2f", milha);
getchar();
return 0;
}