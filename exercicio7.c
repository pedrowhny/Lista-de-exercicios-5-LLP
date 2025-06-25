#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <locale.h>
#include <string.h>

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt.br.UTF-8");

    int matriz[3][3], i, j, soma = 0; // Declaração de uma matriz 3x3 e variáveis para controle de loop e soma

    printf("Digite os valores da matriz 3x3:\n");

    for (i = 0; i < 3; i++) // Loop para percorrer as linhas da matriz
    {
        for (j = 0; j < 3; j++) // Loop para percorrer as colunas da matriz
        {
            printf("Posição [%d][%d]: ", i, j); // Solicita ao usuário que digite o valor para a posição específica da matriz
            scanf("%d", &matriz[i][j]);

            if (i + j == 2) // Verifica se a posição é da diagonal secundária
            {
                soma += matriz[i][j]; // Acumula a soma dos elementos da diagonal secundária
            }
        }
    }

    printf("Soma da diagonal secundária: %d\n", soma); // Exibe a soma dos elementos da diagonal secundária

    system("pause");

    return 0;
}