#include <stdio.h> 

int main(){
char linhas[10]= {'a','b','c','d','e','f','g','h','i','j'};
int colunas[10]= {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
int tabuleiro[10][10] = {0};

for (int i = 1; i < 4; i++){
    tabuleiro[2][i] = 1;
}

for (int i = 1; i < 4; i++){
    tabuleiro[i][6] = 1;
}

printf("tabuleiro de batalha naval\n");
printf("  ");
for (int l = 0; l < 10; l++){
    printf("%c ", linhas[l]);
}   
printf("\n");

for (int c = 0; c < 10; c++){
    printf("%d ", colunas[c]);
    for (int l = 0; l < 10; l++)
    {
        printf("%d", tabuleiro[c][l]);
    }
    printf("\n");
}
return 0;
}