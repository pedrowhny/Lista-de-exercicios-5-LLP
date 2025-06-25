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

    int vetor[8]; // Declaração de um vetor de inteiros com 8 posições
    int i, x, y, soma;

    printf("Digite 8 valores inteiros:\n"); // Solicita ao usuário que digite 8 valores inteiros

    for (i = 0; i < 8; i++) // Loop para ler os 8 valores
    {
        printf("Posição [%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    printf("\nDigite a posição X (0 a 7): "); // Solicita ao usuário que digite a posição X
    scanf("%d", &x);

    printf("Digite a posição Y (0 a 7): "); // Solicita ao usuário que digite a posição Y
    scanf("%d", &y);

    if (x < 0 || x > 7 || y < 0 || y > 7) // Verifica se as posições estão fora do intervalo permitido
    {
        printf("Erro: as posições devem estar entre 0 e 7.\n");
    }

    else
    {
        soma = vetor[x] + vetor[y]; // Calcula a soma dos valores nas posições X e Y
        printf("Soma dos valores nas posições %d e %d: %d\n", x, y, soma);
    }

    system("pause");

    return 0;
}