#include <stdio.h>

int main() {
    // Quantidade de casas a serem percorridas
    int casas_torre = 5;
    int casas_bispo = 5;
    int casas_rainha = 8;

    // ---------- Movimento da TORRE ----------
    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casas_torre; i++) {
        printf("Direita\n");
    }

    // ---------- Movimento do BISPO ----------
    printf("\nMovimento do Bispo:\n");
    int i = 1;
    while (i <= casas_bispo) {
        printf("Cima,Direita\n");
        i++;
    }

    // ---------- Movimento da RAINHA ----------
    printf("\nMovimento da Rainha:\n");
    int j = 1;
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= casas_rainha);

    return 0;
}
