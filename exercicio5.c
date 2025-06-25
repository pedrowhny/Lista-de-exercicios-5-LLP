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

    int a[10], b[10], c[10]; // Declaração de três vetores de inteiros com 10 posições cada
    int i;

    printf("Digite 10 valores para o vetor A:\n"); // Solicita ao usuário que digite 10 valores para o vetor A

    for (i = 0; i < 10; i++) // Loop para ler os 10 valores do vetor A
    {
        printf("A[%d]: ", i);
        scanf("%d", &a[i]);
    }

    printf("Digite 10 valores para o vetor B:\n"); // Solicita ao usuário que digite 10 valores para o vetor B

    for (i = 0; i < 10; i++) // Loop para ler os 10 valores do vetor B
    {
        printf("B[%d]: ", i);
        scanf("%d", &b[i]);
    }

    for (i = 0; i < 10; i++) // Loop para realizar a subtração dos elementos correspondentes dos vetores A e B
    {
        c[i] = a[i] - b[i];
    }

    printf("Vetor C (A - B):\n"); // Exibe o vetor C resultante da subtração dos vetores A e B

    for (i = 0; i < 10; i++)
    {
        printf("C[%d] = %d\n", i, c[i]);
    }

    system("pause");

    return 0;
}