#include <stdio.h> 

// Configuração da formação padrão das matrizes
int x, y;  // Explicação sobre o que se define como linha e coluna: [x][y] → [x] = linhas, [y] = colunas

char colunas[10] = {'a','b','c','d','e','f','g','h','i','j'};  // "Valores" das colunas
int linhas[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};              // "Valores" das linhas

int tabuleiro[10][10] = {0};  // Método de montagem da matriz para conter 10 colunas e 10 linhas

// Dados das habilidades e seus tipos: cone, cruz e octaedro

void desenharcone() {
    x = 7;  // Linha do topo do cone
    y = 5;  // Coluna do topo do cone
    int i, j;
    
    for (i = 0; i < 3; i++) { 
        for (j = 0; j < (2 * i + 1); j++) {
            // O cone é formado a partir de uma posição inicial, expandindo lateralmente a cada linha
            tabuleiro[x - 1 + i][y - 1 - i + j] = 5;  
            // A linha aumenta, e a coluna inicial se desloca para a esquerda a cada linha, aumentando a largura
        }
    }
}

void desenharcruz() {
    x = 1;  // Linha central da cruz
    y = 4;  // Coluna central da cruz
    int i;

    // Desenha a linha vertical (eixo Y)
    for (i = 0; i < 3; i++) {
        tabuleiro[x - 1 + i][y] = 5;  // -1 para começar uma posição acima
    }

    // Desenha a linha horizontal (eixo X)
    for (i = 0; i < 5; i++) {
        tabuleiro[x][y - 2 + i] = 5;  // -2 para começar duas posições à esquerda
    }
}

void desenharoctaedro() {
    x = 7;  // Linha do topo do octaedro
    y = 8;  // Coluna central do octaedro
    int i;

    // Desenha a linha vertical (eixo Y)
    for (i = 0; i < 3; i++) {
        tabuleiro[x - 1 + i][y] = 5;
    }

    // Desenha a linha horizontal (eixo X)
    for (i = 0; i < 3; i++) {
        tabuleiro[x][y - 1 + i] = 5;
    }
}

// Representação dos navios no tabuleiro

void navios() {
    for (int i = 0; i < 3; i++) {  // Navio em linha horizontal
        tabuleiro[2][i] = 3;
    }

    for (int i = 0; i < 3; i++) {  // Navio em linha vertical
        tabuleiro[i + 1][6] = 3;
    }

    for (int i = 0; i < 3; i++) {  // Navio em diagonal (\)
        tabuleiro[i + 6][i + 1] = 3;
    }

    for (int i = 0; i < 3; i++) {  // Navio em diagonal (/)
        tabuleiro[i + 5][-i + 8] = 3;
    }
} 

// Impressão do tabuleiro com as habilidades e navios

int main() {
    desenharcruz();
    desenharoctaedro();
    desenharcone();
    navios();

    // Impressão do cabeçalho do tabuleiro
    printf("Tabuleiro de Batalha Naval\n");
    printf("  ");

    // Impressão das letras das colunas (A a J)
    for (int l = 0; l < 10; l++) {
        printf("%c ", colunas[l]);
    }   
    printf("\n");

    // Impressão das linhas com seus respectivos números e valores do tabuleiro
    for (int c = 0; c < 10; c++) {
        printf("%d ", linhas[c]);  // Número da linha
        for (int l = 0; l < 10; l++) {
            printf("%d ", tabuleiro[c][l]);  // Conteúdo da célula
        }
        printf("\n");
    }
    return 0;
}
