#include <stdio.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
float sal, novosal;
//Mostra a mensagem antes da leitura do salário
printf("\nDigite o salário do funcionário:");
//recebe o salário
scanf("%f%*c",&sal);
//calcula o novo salário
novosal = sal + sal * 25/100;
//mostra o novo salário
printf("\nNovo salário = %0.2f", novosal);
//para o programa a espera de um ENTER 
getchar();
return 0;
}