#include <stdio.h>

int main() {
    // Vetor com letras que representam as colunas (de 'a' a 'j')
    char linhas[10] = {'a','b','c','d','e','f','g','h','i','j'};

    // Vetor com números que representam as linhas (de 1 a 10)
    int colunas[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Matriz 10x10 inicializada com zeros, representando o tabuleiro
    int tabuleiro[10][10] = {0};

    // Primeiro navio em linha horizontal (linha 2, colunas 1 a 3)
    for (int i = 1; i < 4; i++) {
        tabuleiro[2][i] = 1;
    }

    // Segundo navio em linha vertical (coluna 6, linhas 1 a 3)
    for (int i = 1; i < 4; i++) {
        tabuleiro[i][6] = 1;
    }

    // Impressão do título do jogo
    printf("tabuleiro de batalha naval\n");

    // Impressão do cabeçalho das colunas (letras a-j)
    printf("  ");
    for (int l = 0; l < 10; l++) {
        printf("%c ", linhas[l]);
    }
    printf("\n");

    // Impressão das linhas do tabuleiro, com números e conteúdo da matriz
    for (int c = 0; c < 10; c++) {
        printf("%d ", colunas[c]); // Número da linha (1 a 10)
        for (int l = 0; l < 10; l++) {
            printf("%d", tabuleiro[c][l]); // Conteúdo da célula
        }
        printf("\n"); // Nova linha
    }

    return 0;
}
