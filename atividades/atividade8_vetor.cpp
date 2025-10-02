#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
int primos[9];
int i, n, primo;
printf("Heloisa Goncalves da Silva\n\n");

for (i = 0; i < 9; i++) {
    printf("Digite o %d numero: ", i + 1);
    	scanf("%d", &primos[i]);
    }

printf("As posicoes dos numeros primos:\n\n");
  for (i = 0; i < 9; i++) {
    if (primos[i] < 2) continue;
    	primo = 1;

  for (n = 2; n <= primos[i] / 2; n++) {
    if (primos[i] % n == 0) {
        primo = 0;
        break;
  }
}
  if (primo) {
    printf("Posicao %d do numero primo: %d\n", i, primos[i]);
    }
  }
}

