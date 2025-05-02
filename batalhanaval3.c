#include <stdio.h> 
//onfiguração da formação padrao das matrizes  
int x, y;                                                    //explicação quanto ao que se define linha e coluna: [x][y], [x]<--linhas [y]<--colunas  
char colunas[10]= {'a','b','c','d','e','f','g','h','i','j'}; //"valor" das colunas
int linhas[10]= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};             //"valor" das linhas
int tabuleiro[10][10] = {0};                                 //metodo de montagem da matriz, para conter 10 colunas e 10 linhas

// dados de habilidades e seus tipos cone, cruz e octaedro

void desenharcone(){
x = 5;  // linha do topo do cone
y = 5;  // coluna do topo do cone
int i, j;
    
    for (i = 0; i < 3; i++){ 
    for (j = 0; j < (2 * i + 1); j++){  // o cone funciona implementando em uma posição o valor de entrada e a continuidade do codigo para fazer com que se tenha a forma do cone
        tabuleiro[x-1+i][y-1-i+j] = 5;  // se aumenta 1 para a quantidade de vezes que se escreve na linha, mas reduz em 1 a posição incial de escrita por coluna 
    
       }
      }
     }

 void desenharcruz() {
x = 4;  // linha central da cruz
y = 4;  // coluna central da cruz
    int i;
        
        // Desenha a linha vertical (eixo y)
        for (i = 0; i < 3; i++) {
            tabuleiro[x-1 + i][y] = 5;  // -1 para começar 1 posições acima
        }
        
        // Desenha a linha horizontal (eixo x)
        for (i = 0; i < 5; i++) {
            tabuleiro[x][y-2 + i] = 5;  // -2 para começar 2 posições à esquerda
        }
    }
    

void desenharoctaedro() {
x = 4;  // linha central do octaedro
y = 4;  // coluna central do octraedro
    int i;
        
        // Desenha a linha vertical (eixo y)
        for (i = 0; i < 3; i++) {
            tabuleiro[x-1 + i][y] = 5;  // -1 para começar 1 posições acima
        }
        
        // Desenha a linha horizontal (eixo x)
        for (i = 0; i < 3; i++) {
            tabuleiro[x][y-1 + i] = 5;  // -1 para começar 1 posições à esquerda
        }
    }    

void navios (){

for (int i = 0; i < 3; i++){ //navio em reta 1
    tabuleiro[2][i] = 3;
}
for (int i = 0; i < 3; i++){ //navio em reta 2
    tabuleiro[i+1][6] = 3;
}
for (int i = 0; i < 3; i++){ //navio em diagonal 1
    tabuleiro[i+4][i+2] = 3;
}
for (int i = 0; i < 3; i++){//navio em diagonal 2
    tabuleiro[i+5][-i+7] = 3;
}}

//ordens de escrita na matrix, seja para as habilidades ou para os navios

int main(){
    desenharcone();
    desenharcruz();
    desenharoctaedro();
    navios();


//input e coleta de informações para exibição 
printf("tabuleiro de batalha naval\n");
printf("  ");
for (int l = 0; l < 10; l++){ //comando de escrita para as colunas, onde se tem 10 colunas com direções de "A" para "J"
    printf("%c ", colunas[l]);
}   
printf("\n");

for (int c = 0; c < 10; c++){ //comandos de escrita para as linhas, onde se tem a leitura da coluna e a escrita das linhas com informações de  1 a 10
    printf("%d ", linhas[c]);
    for (int l = 0; l < 10; l++)
    {
        printf("%d ", tabuleiro[c][l]);
    }
    printf("\n");
}
return 0;
}