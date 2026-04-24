#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.

int main() {
    // Nível Novato - Movimentação das Peças
    // Implementação de Movimentação da Torre
    //Mover a torre 5 casas para a direita
    int i = 1;
    while(i <= 5){
        printf("Direita\n");//imprime a direção do movimento
        i++;
    }
    printf("\n");

    // Implementação de Movimentação do Bispo
    //Mover o bispo 5 casas na diagonal para cima e a direita
    i = 1;
    do{
        printf("Cima, Direita\n");//imprime a direção do movimento
        i++;
    } while(i <= 5);
    printf("\n");

    // Implementação de Movimentação da Rainha
    //Mover a rainha 8 casas para a esquerda
    for(i = 1; i <= 8; i++){
        printf("Esquerda\n");//imprime a direção do movimento
    }
    printf("\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Mover o cavalo 2 casas para baixo e 1 casa para a esquerda
    for(int i = 1; i < 2; i++){

        int j = 1;
        while(j <= 2){
            printf("Baixo\n");//imprime a direção do movimento
            j++;
        }
        printf("Esquerda\n");//imprime a direção do movimento
    }
    printf("\n");

    // Nível Mestre - Funções Recursivas e Loops Aninhados
    // Sugestão: Substitua as movimentações das peças por funções recursivas.
    // Exemplo: Crie uma função recursiva para o movimento do Bispo.

    // Sugestão: Implemente a movimentação do Cavalo utilizando loops com variáveis múltiplas e condições avançadas.
    // Inclua o uso de continue e break dentro dos loops.

    return 0;
}
