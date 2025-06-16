#include <stdio.h>

// Função recursiva para mover a Torre para a direita
void moverTorre(int casas) {
    if (casas <= 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para mover o Bispo na diagonal "Cima Direita"
void moverBispo(int casas) {
    if (casas <= 0) return;
    printf("Cima Direita\n");
    moverBispo(casas - 1);
}

// Função recursiva para mover a Rainha para a esquerda
void moverRainha(int casas) {
    if (casas <= 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

int main() {
    // ---------- MOVIMENTO DA TORRE ----------
    const int casas_torre = 5;
    printf("Movimento da Torre:\n");
    moverTorre(casas_torre);

    // ---------- MOVIMENTO DO BISPO ----------
    const int casas_bispo_vertical = 5;
    const int casas_bispo_horizontal = 1;
    printf("\nMovimento do Bispo:\n");
    for (int i = 0; i < casas_bispo_vertical; i++) {
        for (int j = 0; j < casas_bispo_horizontal; j++) {
            printf("Cima ");
        }
        printf("Direita\n");
    }

    // ---------- MOVIMENTO DA RAINHA ----------
    const int casas_rainha = 8;
    printf("\nMovimento da Rainha:\n");
    moverRainha(casas_rainha);

    // ---------- MOVIMENTO DO CAVALO ----------
    const int casas_cima = 2;
    const int casas_direita = 1;
    printf("\nMovimento do Cavalo:\n");

    for (int i = 0; i < casas_cima + casas_direita; i++) {
        if (i < casas_cima)
            printf("Cima\n");
        else
            for (int j = 0; j < casas_direita; j++)
                printf("Direita\n");
    }

    return 0;
}
