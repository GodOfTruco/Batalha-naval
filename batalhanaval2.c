#include <stdio.h> 
//onfiguração da formação padrao das matrizes  
int x, y;                                                    //explicação quanto ao que se define linha e coluna: [x][y], [x]<--linhas [y]<--colunas  
char colunas[10]= {'a','b','c','d','e','f','g','h','i','j'}; //"valor" das colunas
int linhas[10]= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};             //"valor" das linhas
int tabuleiro[10][10] = {0};                                 //metodo de montagem da matriz, para conter 10 colunas e 10 linhas

/*void cone(){
int i, j;
    for (i = 0; i < 3; i++){ 
    for (j = 0; j < (2 * i + 1); j++){
        tabuleiro[5+i][4-i+j] = 3;
    
       }
      }
     }*/

 void cruz() {
x = 4;  // linha central da cruz
y = 4;  // coluna central da cruz
    int i;
        
        // Desenha a linha vertical (eixo y)
        for (i = 0; i < 5; i++) {
            tabuleiro[x-2 + i][y] = 3;  // -2 para começar 2 posições acima
        }
        
        // Desenha a linha horizontal (eixo x)
        for (i = 0; i < 5; i++) {
            tabuleiro[x][y-2 + i] = 3;  // -2 para começar 2 posições à esquerda
        }
    }

     
int main(){
    cruz();
/*ordens de escrita na matrix
for (int i = 0; i < 3; i++){ //navio em reta 1
    tabuleiro[2][i] = 1;
}
for (int i = 0; i < 3; i++){ //navio em reta 2
    tabuleiro[i+1][6] = 1;
}
for (int i = 0; i < 3; i++){ //navio em diagonal 1
    tabuleiro[i+4][i+2] = 1;
}
for (int i = 0; i < 3; i++){//navio em diagonal 2
    tabuleiro[i+5][-i+7] = 1;
}
*/

//artilharia e seus tipos cone, cruz e octaedro


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