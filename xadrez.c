#include <stdio.h>

int main() {
    // --- Movimento da Torre ---
    printf("--- Movimento da Torre ---\n");
    int casasTorre = 5;
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }
    printf("\n");

    // --- Movimento do Bispo ---
    printf("--- Movimento do Bispo ---\n");
    int casasBispo = 5;
    int j = 0;
    while (j < casasBispo) {
        printf("Cima, Direita\n");
        j++;
    }
    printf("\n");

    // --- Movimento da Rainha ---
    printf("--- Movimento da Rainha ---\n");
    int casasRainha = 8;
    int k = 0;
    do {
        printf("Esquerda\n");
        k++;
    } while (k < casasRainha);
    printf("\n");

    // --- Movimento do Cavalo ---
    printf("--- Movimento do Cavalo ---\n");
    int movimentoBaixo = 2;
    int movimentoEsquerda = 1;

    // Primeiro movimento: duas casas para baixo (usando loop for)
    for (int l = 0; l < movimentoBaixo; l++) {
        printf("Baixo\n");
    }

    // Segundo movimento: uma casa para a esquerda (usando loop do-while)
    int m = 0;
    do {
        printf("Esquerda\n");
        m++;
    } while (m < movimentoEsquerda);
    printf("\n");

    return 0;
}