#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
int numero[10];
int i, maiores= 0;

printf("Heloisa Goncalves da Silva\n\n");
    
for(i=0; i< 10; i++){
  printf("Digite o %d numero: ",i+1);
	scanf("%d", &numero[i]);
}
printf("Numeros maiores que 50: \n");

for(i=0; i< 10; i++){
	if(numero[i]> 50){
	  printf("Posicao %d eh o %d\n", i, numero[i]);
		maiores= 1;
  }
}

if(maiores==0){
	printf("Nenhum numeros maior que 50 foi encontrado\n");
  }
}