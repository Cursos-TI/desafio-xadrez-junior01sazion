#include <stdio.h>

int main() {
    // --- Movimento da Torre ---
    printf("--- Movimento da Torre ---\n");
    int casasTorre = 5;
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n"); // Torre se move cinco casas para a direita
    }
    printf("\n");

    // --- Movimento do Bispo ---
    printf("--- Movimento do Bispo ---\n");
    int casasBispo = 5;
    int j = 0;
    while (j < casasBispo) {
        printf("Cima, Direita\n"); // Bispo se move cinco casas na diagonal para cima e à direita
        j++;
    }
    printf("\n");

    // --- Movimento da Rainha ---
    printf("--- Movimento da Rainha ---\n");
    int casasRainha = 8;
    int k = 0;
    do {
        printf("Esquerda\n"); // Rainha se move oito casas para a esquerda
        k++;
    } while (k < casasRainha);
    printf("\n");

    return 0;
}