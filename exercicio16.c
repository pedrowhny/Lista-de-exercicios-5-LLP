#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

int ehQuadradoPerfeito(int n)
{
    if (n < 0) // Verifica se o número é negativo, pois quadrados perfeitos não podem ser negativos
        return 0;
    for (int i = 0; i * i <= n; i++) // Loop para verificar se existe um inteiro cujo quadrado é igual a n
    {
        if (i * i == n) // Se encontrar um inteiro cujo quadrado é igual a n
            return 1; // Retorna 1 (verdadeiro) indicando que n é um quadrado perfeito
    }
    return 0;
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt.br.UTF-8");

    int numero;

    printf("Digite um número inteiro: "); // Solicita ao usuário que digite um número inteiro
    scanf("%d", &numero);

    if (ehQuadradoPerfeito(numero))
    {
        printf("O número é um quadrado perfeito.\n"); // Verifica se o número é um quadrado perfeito
    }
    else
    {
        printf("O número não é um quadrado perfeito.\n"); // Informa que o número não é um quadrado perfeito
    }

    system("pause");

    return 0;
}