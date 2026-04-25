#include <stdio.h>

// Desafio de Xadrez - MateCheck
// Este código inicial serve como base para o desenvolvimento do sistema de movimentação das peças de xadrez.
// O objetivo é utilizar estruturas de repetição e funções para determinar os limites de movimentação dentro do jogo.
// Procedimentos para utilização de recursividade
    void moverTorre(int casas){
        if(casas > 0){
            printf("Direita\n");
            moverTorre(casas - 1);
        }
    }

    void moverBispo(int casas){
        if(casas > 0){
            printf("Cima, Direita\n");
            moverBispo(casas - 1);
        }
    }

    void moverRainha(int casas){
        if(casas > 0){
            printf("Esquerda\n");
            moverRainha(casas - 1);
        }
    }

int main() {
    // Nível Novato - Movimentação das Peças
    // Implementação de Movimentação da Torre
    //Mover a torre 5 casas para a direita
    int casas = 5;
    moverTorre(casas);
    printf("\n");

    // Implementação de Movimentação do Bispo
    //Mover o bispo 5 casas na diagonal para cima e a direita
    casas = 5;
    moverBispo(casas);
    printf("\n");

    // Implementação de Movimentação da Rainha
    //Mover a rainha 8 casas para a esquerda
    casas = 8;
    moverRainha(casas);
    printf("\n");

    // Nível Aventureiro - Movimentação do Cavalo
    // Mover o cavalo 2 casas para cima e 1 casa para a direita
    for(int i = 1; i < 2; i++){

        int j = 1;
        while(j <= 2){
            printf("Cima\n");//imprime a direção do movimento
            j++;
        }
        printf("Direita\n");//imprime a direção do movimento
    }
    printf("\n");


    return 0;
}
