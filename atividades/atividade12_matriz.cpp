#include <stdio.h>
#include <string.h>

int main()
{

    char lojas[8][30], produtos[4][30];
    float preco[8][4];
    int i, j;
    printf("Heloisa Goncalves da Silva\n\n");


    printf("Digite os nomes das 8 lojas:\n\n");
    for (i = 0; i < 8; i++) {
        printf("Loja %d: ", i+1);
        scanf(" %[^\n]", lojas[i]);
    }

    printf("\nDigite os nomes dos 4 produtos:\n\n");
    for (j = 0; j < 4; j++) {
        printf("Produto %d: \n", j+1);
        scanf(" %[^\n]", produtos[j]);
    }

    printf("\nDigite os preços dos produtos em cada loja:\n\n");
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 4; j++) {
            printf("Preco do %s na loja %s: R$ \n", produtos[j], lojas[i]);
            scanf("%f", &preco[i][j]);
        }
    }

    printf("\nProdutos com preço <= R$60:\n");
    for (i = 0; i < 8; i++) {
        for (j = 0; j < 4; j++) {
            if (preco[i][j] <= 60) {
                printf("%s - %s: R$%.2f\n", produtos[j], lojas[i], preco[i][j]);
            }
        }
    }

    return 0;
}
