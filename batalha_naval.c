#include <stdio.h>

int main(void) {        
    int tabuleiro[5][5] = {0};

    // Navio vertical
    tabuleiro[1][2] = 1;
    tabuleiro[2][2] = 1;
    tabuleiro[3][2] = 1;

    // Navio horizontal     
    tabuleiro[4][0] = 1;
    tabuleiro[4][1] = 1;
    tabuleiro[4][2] = 1;
    tabuleiro[4][3] = 1;


    printf("Tabuleiro da Batalha Naval:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    printf("\n");

    printf("Coordenadas do Navio Vertical:\n");
    printf("  (Linha 2, Coluna 3)\n");
    printf("  (Linha 3, Coluna 3)\n");
    printf("  (Linha 4, Coluna 3)\n");

    printf("Coordenadas do Navio Horizontal:\n");
    printf("  (Linha 5, Coluna 1)\n");
    printf("  (Linha 5, Coluna 2)\n");
    printf("  (Linha 5, Coluna 3)\n");
    printf("  (Linha 5, Coluna 4)\n");

    return 0;
}