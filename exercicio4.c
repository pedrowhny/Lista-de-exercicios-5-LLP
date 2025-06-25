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

    float vetor[10], somaPositivos = 0; // Declaração de um vetor de float com 10 posições e uma variável para a soma dos positivos
    int i, negativos = 0;

    printf("Digite 10 números reais:\n"); // Solicita ao usuário que digite 10 números reais
    
    for (i = 0; i < 10; i++) // Loop para ler os 10 números reais
    {
        printf("Posição [%d]: ", i);
        scanf("%f", &vetor[i]);

        if (vetor[i] < 0)
        {
            negativos++; // Conta os números negativos
        }
        else
        {
            somaPositivos += vetor[i]; // Soma os números positivos
        }
    }

    printf("Quantidade de números negativos: %d\n", negativos); // Exibe a quantidade de números negativos
    printf("Soma dos números positivos: %.2f\n", somaPositivos); // Exibe a soma dos números positivos

    system("pause"); 
    
    return 0;
}