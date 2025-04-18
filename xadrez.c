#include <stdio.h>

// --- Funções Recursivas para Movimento ---

void moverTorreRecursivo(int casas) {
    if (casas > 0) {
        printf("Direita\n");
        moverTorreRecursivo(casas - 1);
    }
}

void moverBispoRecursivo(int casas) {
    if (casas > 0) {
        printf("Cima, Direita\n");
        moverBispoRecursivo(casas - 1);
    }
}

void moverRainhaRecursivo(int casas) {
    if (casas > 0) {
        printf("Esquerda\n");
        moverRainhaRecursivo(casas - 1);
    }
}

// --- Função Recursiva com Loops Aninhados para o Bispo (Definida fora do main) ---
void moverBispoAninhado(int vertical, int horizontal) {
    if (vertical > 0) {
        for (int h = 0; h < horizontal; h++) {
            printf("Cima, Direita\n");
        }
        moverBispoAninhado(vertical - 1, horizontal);
    }
}

int main() {
    // --- Movimento da Torre (Recursivo) ---
    printf("--- Movimento da Torre (Recursivo) ---\n");
    int casasTorre = 5;
    moverTorreRecursivo(casasTorre);
    printf("\n");

    // --- Movimento do Bispo (Recursivo com Loops Aninhados) ---
    printf("--- Movimento do Bispo (Recursivo com Loops Aninhados) ---\n");
    int casasBispoVertical = 5;
    int casasBispoHorizontal = 5;

    moverBispoAninhado(casasBispoVertical, 1); // Simula 5 movimentos diagonais
    printf("\n");

    // --- Movimento da Rainha (Recursivo) ---
    printf("--- Movimento da Rainha (Recursivo) ---\n");
    int casasRainha = 8;
    moverRainhaRecursivo(casasRainha);
    printf("\n");

    // --- Movimento do Cavalo (Loops Aninhados Complexos) ---
    printf("--- Movimento do Cavalo (Loops Aninhados Complexos) ---\n");
    int movimentoCima = 2;
    int movimentoDireita = 1;

    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= 2; j++) {
            if (i <= movimentoCima && j == 1) {
                printf("Cima\n");
                if (i == movimentoCima && j == 1) {
                    for (int k = 0; k < movimentoDireita; k++) {
                        printf("Direita\n");
                    }
                    break; // Após o "L", sai do loop interno
                }
            }
        }
        if (i > movimentoCima) {
            break; // Sai do loop externo após completar o movimento
        }
    }
    printf("\n");

    return 0;
}