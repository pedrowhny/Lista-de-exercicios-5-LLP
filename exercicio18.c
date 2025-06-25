#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

void somarDiagonais(int a[6][6], int *somaPrincipal, int *somaSecundaria)
{
    int i; // Variável de controle para o loop
    *somaPrincipal = 0;
    *somaSecundaria = 0;

    for (i = 0; i < 6; i++) // Percorre as linhas da matriz
    {
        *somaPrincipal += a[i][i]; // Soma os elementos da diagonal principal
        *somaSecundaria += a[i][5 - i]; // Soma os elementos da diagonal secundária
    }
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt.br.UTF-8");

    int matriz[6][6]; // Declaração de uma matriz 6x6
    int i, j, somaP, somaS; // Variáveis para armazenar as somas das diagonais 

    printf("Digite os elementos da matriz 6x6:\n");

    for (i = 0; i < 6; i++) // Loop para percorrer as linhas da matriz
    {
        for (j = 0; j < 6; j++) // Loop para percorrer as colunas da matriz
        {
            printf("Posição [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    somarDiagonais(matriz, &somaP, &somaS);

    printf("Soma da diagonal principal: %d\n", somaP); // Exibe a soma dos elementos da diagonal principal
    printf("Soma da diagonal secundária: %d\n", somaS); // Exibe a soma dos elementos da diagonal secundária

    system("pause");

    return 0;
}
