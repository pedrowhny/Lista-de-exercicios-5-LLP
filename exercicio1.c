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

    float valores[5]; // Declaração de um vetor de float com 5 posições
    float soma = 0.0, media;
    int i;

    printf("Digite 5 valores:\n"); // Solicita ao usuário que digite 5 valores

    for (i = 0; i < 5; i++) // Loop para ler os 5 valores
    {
        printf("Valor %d: ", i + 1);
        scanf("%f", &valores[i]);
        soma += valores[i]; // Soma dos valores
    }

    media = soma / 5; // Cálculo da média dos valores

    printf("\nValores digitados:\n"); // Exibição dos valores digitados
    
    for (i = 0; i < 5; i++) // Loop para exibir os valores
    {
        printf("Valor %d: %.2f\n", i + 1, valores[i]);
    }
    
    printf("Média dos valores: %.2f\n", media); // Exibição da média dos valores

    system("pause");

    return 0;
}
