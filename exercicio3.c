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

    int x[10]; // Declaração de um vetor de inteiros com 10 posições
    int i, maior, menor;

    printf("Digite 10 números inteiros:\n"); // Solicita ao usuário que digite 10 números inteiros
    
    for (i = 0; i < 10; i++) // Loop para ler os 10 números inteiros
    {
        printf("Posição [%d]: ", i);
        scanf("%d", &x[i]);
    }

    maior = x[0]; // Inicializa o maior número com o primeiro elemento do vetor
    menor = x[0]; // Inicializa o menor número com o primeiro elemento do vetor

    for (i = 1; i < 10; i++) // Loop para encontrar o maior e o menor número
    {
        if (x[i] > maior)
        {
            maior = x[i];
        }
        if (x[i] < menor)
        {
            menor = x[i];
        }
    }

    printf("Maior elemento: %d\n", maior); // Exibe o maior número encontrado
    printf("Menor elemento: %d\n", menor); // Exibe o menor número encontrado

    system("pause");

    return 0;
}
