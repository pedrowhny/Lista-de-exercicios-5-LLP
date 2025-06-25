#include <stdio.h>
#include <stdlib.h>
#include <windows.h>
#include <math.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>

void encontrarMaiorMenor(int v[], int n, int *maior, int *menor) // Função para encontrar o maior e o menor elemento de um vetor
{
    *maior = v[0];
    *menor = v[0];

    for (int i = 1; i < n; i++) // Inicia o loop a partir do segundo elemento, pois já inicializamos maior e menor com o primeiro elemento
    {
        if (v[i] > *maior)
        {
            *maior = v[i];
        }
        if (v[i] < *menor)
        {
            *menor = v[i];
        }
    }
}

int main()
{
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "pt.br.UTF-8");

    int vetor[100], n, maior, menor;

    printf("Digite a quantidade de elementos: ");
    scanf("%d", &n);

    printf("Digite os %d elementos do vetor:\n", n);

    for (int i = 0; i < n; i++) // Loop para ler os elementos do vetor
    {
        printf("Posição [%d]: ", i);
        scanf("%d", &vetor[i]);
    }

    encontrarMaiorMenor(vetor, n, &maior, &menor);

    printf("Maior elemento: %d\n", maior);
    printf("Menor elemento: %d\n", menor);

    system("pause");

    return 0;
}
