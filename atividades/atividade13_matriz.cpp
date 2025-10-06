#include <stdio.h>
#include <string.h>

int main() {
    int vetor[18];
    int matriz[3][6];
    int i, j, k = 0;
    printf("Heloisa Goncalves da Silva\n\n");
    
    for (i = 0; i < 18; i++) {
        printf("Digite elemento %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 6; j++) {
            matriz[i][j] = vetor[k];
            k++;
        }
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 6; j++) {
            printf("\nElemento %d-%d: %d", i, j, matriz[i][j]);
        }
    }

    return 0;
}