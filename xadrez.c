#include <stdio.h>
#include <stdlib.h>

// Função recursiva para movimentação da Torre (horizontal - direita)
void moverTorre(int casasRestantes) {
    if (casasRestantes == 0) return;
    printf("Direita\n");
    moverTorre(casasRestantes - 1);
}

// Função recursiva para movimentação da Rainha (horizontal - esquerda)
void moverRainha(int casasRestantes) {
    if (casasRestantes == 0) return;
    printf("Esquerda\n");
    moverRainha(casasRestantes - 1);
}

// Função recursiva para movimentação vertical + loop aninhado para horizontal (diagonal)
void moverBispo(int verticais, int horizontais) {
    if (verticais == 0) return;

    for (int j = 0; j < horizontais; j++) {
        printf("Direita ");
    }
    printf("e Cima\n");

    moverBispo(verticais - 1, horizontais);
}

// Movimento do Cavalo em "L" com loops aninhados, múltiplas variáveis e uso de break/continue
void moverCavalo() {
    const int movimentos = 3;

    printf("Movimento do Cavalo:\n");
    printf("------------------\n");

    for (int i = 1; i <= movimentos; i++) {
        for (int j = 1; j <= movimentos; j++) {
            // Se i == j, pule a iteração (exemplo de uso de continue)
            if (i == j) {
                continue;
            }

            // Só realiza movimento se for o padrão do cavalo: 2 para cima, 1 para direita
            if ((i == 2 && j == 1) || (i == 1 && j == 2)) {
                printf("Cima x%d, Direita x%d\n", i, j);
                break; // Sai do loop interno após um movimento válido
            }
        }
    }
}

int main() {
    // Número de casas que cada peça pode se mover
    const int CASAS_TORRE_BISPO = 5;
    const int CASAS_RAINHA = 8;

    // Movimento da Torre
    printf("Movimento da Torre:\n");
    printf("-----------------\n");
    moverTorre(CASAS_TORRE_BISPO);

    // Movimento do Bispo
    printf("\nMovimento do Bispo:\n");
    printf("------------------\n");
    moverBispo(CASAS_TORRE_BISPO, 1); // 5 casas na diagonal (1 horizontal por 1 vertical)

    // Movimento da Rainha
    printf("\nMovimento da Rainha:\n");
    printf("-------------------\n");
    moverRainha(CASAS_RAINHA);

    // Movimento do Cavalo
    printf("\n");
    moverCavalo();

    return 0;
}
