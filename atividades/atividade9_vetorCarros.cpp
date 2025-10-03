#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
    char carros[5][30];
    float consumo[5];
    float litros[5];
    int i, carroEconomico = 0;

    printf("Heloisa Goncalves da Silva\n\n");

    
    for(i = 0; i < 5; i++) {
        printf("\nDigite o modelo do carro %d: ", i + 1);
        scanf("%s", carros[i]);  
    }

    
    for(i = 0; i < 5; i++) {
        printf("Digite o consumo em km/l do %s: ", carros[i]);
        scanf("%f", &consumo[i]);
    }

    
    for(i = 0; i < 5; i++) {
        litros[i] = 1000.0 / consumo[i];
        printf("\nO carro %s consome %.2f litros para percorrer 1000 km.\n", carros[i], litros[i]);

        if (consumo[i] > consumo[carroEconomico]) {
            carroEconomico = i;
        }
    }

    printf("\n\nO veiculo mais economico eh o %s.\n", carros[carroEconomico]);

    return 0;
}
