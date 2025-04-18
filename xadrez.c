#include <stdio.h>
#include <stdlib.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Definindo constantes para o numero de casas
    const int CASAS_TORRE_BISPO = 5;  // Torre e Bispo movem 5 casas
    const int CASAS_RAINHA = 8;       // Rainha move 8 casas

    // Movimento da Torre (5 casas para a direita) usando for
    printf("Movimento da Torre:\n");
    printf("-----------------\n");
    for (int i = 1; i <= CASAS_TORRE_BISPO; i++) {
        printf("Direita\n");
    }

    // Movimento do Bispo (5 casas na diagonal) usando while
    printf("\nMovimento do Bispo:\n");
    printf("-----------------\n");
    int contadorBispo = 1;
    while (contadorBispo <= CASAS_TORRE_BISPO) {
        printf("Cima, Direita\n");
        contadorBispo++;
    }

    // Movimento da Rainha (8 casas para a esquerda) usando do-while
    printf("\nMovimento da Rainha:\n");
    printf("------------------\n");
    int contadorRainha = 1;
    do {
        printf("Esquerda\n");
        contadorRainha++;
    } while (contadorRainha <= CASAS_RAINHA);

    // Nível Aventureiro - Movimentação do Cavalo
    // Sugestão: Utilize loops aninhados para simular a movimentação do Cavalo em L.
    // Um loop pode representar a movimentação horizontal e outro vertical.

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
