#include <stdio.h>

int main () {

    const int tamanho_navio = 3;

    // Declaração de arrays
    int navio_horizontal[tamanho_navio];
    int navio_vertical[tamanho_navio];
    int navio_diagonal[tamanho_navio];

    // Inicializando os valores dos arrays
    for (int i = 0; i < tamanho_navio; i++)
    {
        navio_horizontal[i] = 3;
        navio_vertical[i] = 3;
        navio_diagonal[i] = 3;
    }

    // Cabeçalho do tabuleiro
    char linha[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
    // Matriz que representa o tabuleiro
    int tabuleiro[10][10] = {0};
    
    // Posicionando o navio na horizontal
    int linha_navio_h = 2;
    int coluna_navio_h = 2;

    for (int i = 0; i < tamanho_navio; i++)
    {
        if (coluna_navio_h + i < 10)
        {
            tabuleiro[linha_navio_h][coluna_navio_h + i] = navio_horizontal[i];
        }
    }
    
    // Posicionando o navio na vertical
    int linha_navio_v = 5;
    int coluna_navio_v = 5;

    for (int i = 0; i < tamanho_navio; i++)
    {
        if (linha_navio_v + i < 10)
        {
            tabuleiro[linha_navio_v + i][coluna_navio_v] = navio_vertical[i];
        }
    }
    
    // Posicionando o primeiro navio na diagonal
    int linha_navio_d = 7;
    int coluna_navio_d = 7;

    
    for (int i = 0; i < tamanho_navio; i++)
    {
        if (linha_navio_d + i < 10 && coluna_navio_d + i < 10)
        {
            tabuleiro[linha_navio_d + i][coluna_navio_d + i] = navio_diagonal[i];
        }
    }
    
    // Posicionando o segundo navio na diagonal
    int linha_navio_d2 = 0;
    int coluna_navio_d2 = 9;

    
    for (int i = 0; i < tamanho_navio; i++)
    {
        if (linha_navio_d2 + i < 10 && coluna_navio_d2 - i < 10)
        {
            tabuleiro[linha_navio_d2 + i][coluna_navio_d2 - i] = navio_diagonal[i];
        }
    }

    printf("TABULEIRO - BATALHA NAVAL\n\n");
    printf("    ");

    for (int i = 0; i < 10; i++) 
    {
        printf("%c ", linha[i]); // Imprime o cabeçalho
    }
    printf("\n");

    for (int i = 0; i < 10; i++) 
    {
        printf("%2d ", (i + 1)); // Imprime as linhas

        for (int j = 0; j < 10; j++)
        {
            printf(" %d", tabuleiro[i][j]); // Imprime as colunas
        }
        printf("\n");
    }
    
    return 0;
}