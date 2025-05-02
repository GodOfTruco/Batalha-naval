#include <stdio.h>

// Configuração da formação padrão das matrizes
int x, y;  // Explicação sobre o que se define como linha e coluna: [x][y] → [x] = linhas, [y] = colunas

char colunas[10] = {'a','b','c','d','e','f','g','h','i','j'};  // "Valores" das colunas
int linhas[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};              // "Valores" das linhas
int tabuleiro[10][10] = {0};                                  // Método de montagem da matriz para conter 10 colunas e 10 linhas

// habilidade tipo cone:
void cone() {
    int i, j;
    for (i = 0; i < 3; i++) { 
        for (j = 0; j < (2 * i + 1); j++) {
            tabuleiro[5 + i][4 - i + j] = 3;
        }
    }
}


// Função que desenha a habilidade especial tipo cruz no tabuleiro
void cruz() {
    x = 4;  // Linha central da cruz
    y = 4;  // Coluna central da cruz
    int i;

    // Desenha a linha vertical (eixo Y)
    for (i = 0; i < 5; i++) {
        tabuleiro[x - 2 + i][y] = 3;  // -2 para começar duas posições acima
    }

    // Desenha a linha horizontal (eixo X)
    for (i = 0; i < 5; i++) {
        tabuleiro[x][y - 2 + i] = 3;  // -2 para começar duas posições à esquerda
    }
}

    // Ordem de escrita dos navios na matriz

void navios(){
    for (int i = 0; i < 3; i++) {  // Navio em linha reta (horizontal)
        tabuleiro[2][i] = 1;
    }

    for (int i = 0; i < 3; i++) {  // Navio em linha reta (vertical)
        tabuleiro[i + 1][6] = 1;
    }

    for (int i = 0; i < 3; i++) {  // Navio em diagonal descendente (\)
        tabuleiro[i + 4][i + 2] = 1;
    }

    for (int i = 0; i < 3; i++) {  // Navio em diagonal ascendente (/)
        tabuleiro[i + 5][-i + 7] = 1;
    }
}

int main() {
    cruz();   // Chamada da habilidade cruz 
    cone();   // Chamada da habilidade cone 
    navios(); // Chamada da locazação dos navios 

    // Artilharia e seus tipos: cone, cruz

    // Entrada e exibição das informações do tabuleiro
    printf("Tabuleiro de Batalha Naval\n");
    printf("  ");
    
    // Impressão do cabeçalho com letras das colunas (A a J)
    for (int l = 0; l < 10; l++) {
        printf("%c ", colunas[l]);
    }   
    printf("\n");

    // Impressão das linhas numeradas (1 a 10) com os dados da matriz
    for (int c = 0; c < 10; c++) {
        printf("%d ", linhas[c]);
        for (int l = 0; l < 10; l++) {
            printf("%d ", tabuleiro[c][l]);
        }
        printf("\n");
    }

    return 0;
}
